
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_2.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_7.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_8.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::State()
    :
    router_id{YType::str, "router-id"}
{

    yang_name = "state"; yang_parent_name = "ipv4-te-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : router_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::has_operation() const
{
    for (auto const & leaf : router_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto router_id_name_datas = router_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), router_id_name_datas.begin(), router_id_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::Nlpid()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State>())
{
    state->parent = this;

    yang_name = "nlpid"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::~Nlpid()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlpid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::State()
    :
    nlpid{YType::enumeration, "nlpid"}
{

    yang_name = "state"; yang_parent_name = "nlpid"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : nlpid.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::has_operation() const
{
    for (auto const & leaf : nlpid.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nlpid.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto nlpid_name_datas = nlpid.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nlpid_name_datas.begin(), nlpid_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nlpid")
    {
        nlpid.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlpid")
    {
        nlpid.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlpid")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4Reachability()
    :
    extended_ipv4_reachability_prefixes(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes>())
{
    extended_ipv4_reachability_prefixes->parent = this;

    yang_name = "extended-ipv4-reachability"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::~ExtendedIpv4Reachability()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::has_data() const
{
    if (is_presence_container) return true;
    return (extended_ipv4_reachability_prefixes !=  nullptr && extended_ipv4_reachability_prefixes->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::has_operation() const
{
    return is_set(yfilter)
	|| (extended_ipv4_reachability_prefixes !=  nullptr && extended_ipv4_reachability_prefixes->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-ipv4-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-ipv4-reachability-prefixes")
    {
        if(extended_ipv4_reachability_prefixes == nullptr)
        {
            extended_ipv4_reachability_prefixes = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes>();
        }
        return extended_ipv4_reachability_prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(extended_ipv4_reachability_prefixes != nullptr)
    {
        _children["extended-ipv4-reachability-prefixes"] = extended_ipv4_reachability_prefixes;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-ipv4-reachability-prefixes")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixes()
    :
    extended_ipv4_reachability_prefixe(this, {"prefix"})
{

    yang_name = "extended-ipv4-reachability-prefixes"; yang_parent_name = "extended-ipv4-reachability"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::~ExtendedIpv4ReachabilityPrefixes()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_ipv4_reachability_prefixe.len(); index++)
    {
        if(extended_ipv4_reachability_prefixe[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::has_operation() const
{
    for (std::size_t index=0; index<extended_ipv4_reachability_prefixe.len(); index++)
    {
        if(extended_ipv4_reachability_prefixe[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-ipv4-reachability-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-ipv4-reachability-prefixe")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe>();
        ent_->parent = this;
        extended_ipv4_reachability_prefixe.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extended_ipv4_reachability_prefixe.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-ipv4-reachability-prefixe")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::ExtendedIpv4ReachabilityPrefixe()
    :
    prefix{YType::str, "prefix"}
        ,
    prefixes_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState>())
    , prefixes_subtlvs(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs>())
    , prefixes_undefined_subtlvs(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs>())
{
    prefixes_state->parent = this;
    prefixes_subtlvs->parent = this;
    prefixes_undefined_subtlvs->parent = this;

    yang_name = "extended-ipv4-reachability-prefixe"; yang_parent_name = "extended-ipv4-reachability-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::~ExtendedIpv4ReachabilityPrefixe()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (prefixes_state !=  nullptr && prefixes_state->has_data())
	|| (prefixes_subtlvs !=  nullptr && prefixes_subtlvs->has_data())
	|| (prefixes_undefined_subtlvs !=  nullptr && prefixes_undefined_subtlvs->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (prefixes_state !=  nullptr && prefixes_state->has_operation())
	|| (prefixes_subtlvs !=  nullptr && prefixes_subtlvs->has_operation())
	|| (prefixes_undefined_subtlvs !=  nullptr && prefixes_undefined_subtlvs->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-ipv4-reachability-prefixe";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes-state")
    {
        if(prefixes_state == nullptr)
        {
            prefixes_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState>();
        }
        return prefixes_state;
    }

    if(child_yang_name == "prefixes-subtlvs")
    {
        if(prefixes_subtlvs == nullptr)
        {
            prefixes_subtlvs = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs>();
        }
        return prefixes_subtlvs;
    }

    if(child_yang_name == "prefixes-undefined-subtlvs")
    {
        if(prefixes_undefined_subtlvs == nullptr)
        {
            prefixes_undefined_subtlvs = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs>();
        }
        return prefixes_undefined_subtlvs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefixes_state != nullptr)
    {
        _children["prefixes-state"] = prefixes_state;
    }

    if(prefixes_subtlvs != nullptr)
    {
        _children["prefixes-subtlvs"] = prefixes_subtlvs;
    }

    if(prefixes_undefined_subtlvs != nullptr)
    {
        _children["prefixes-undefined-subtlvs"] = prefixes_undefined_subtlvs;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes-state" || name == "prefixes-subtlvs" || name == "prefixes-undefined-subtlvs" || name == "prefix")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::PrefixesState()
    :
    up_down{YType::boolean, "up-down"},
    sbit{YType::boolean, "sbit"},
    prefix{YType::str, "prefix"},
    metric{YType::uint32, "metric"}
{

    yang_name = "prefixes-state"; yang_parent_name = "extended-ipv4-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::~PrefixesState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::has_data() const
{
    if (is_presence_container) return true;
    return up_down.is_set
	|| sbit.is_set
	|| prefix.is_set
	|| metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up_down.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
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

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
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

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-down" || name == "sbit" || name == "prefix" || name == "metric")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlvs()
    :
    prefixes_subtlv(this, {"type"})
{

    yang_name = "prefixes-subtlvs"; yang_parent_name = "extended-ipv4-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::~PrefixesSubtlvs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes_subtlv.len(); index++)
    {
        if(prefixes_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<prefixes_subtlv.len(); index++)
    {
        if(prefixes_subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes-subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes-subtlv")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv>();
        ent_->parent = this;
        prefixes_subtlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes_subtlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes-subtlv")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlv()
    :
    type{YType::str, "type"}
        ,
    tag(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag>())
    , ipv4_source_router_id(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId>())
    , ipv6_source_router_id(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId>())
    , prefixes_subtlvs_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState>())
    , flags(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags>())
    , tag64(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64>())
    , prefix_sids(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids>())
{
    tag->parent = this;
    ipv4_source_router_id->parent = this;
    ipv6_source_router_id->parent = this;
    prefixes_subtlvs_state->parent = this;
    flags->parent = this;
    tag64->parent = this;
    prefix_sids->parent = this;

    yang_name = "prefixes-subtlv"; yang_parent_name = "prefixes-subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::~PrefixesSubtlv()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (tag !=  nullptr && tag->has_data())
	|| (ipv4_source_router_id !=  nullptr && ipv4_source_router_id->has_data())
	|| (ipv6_source_router_id !=  nullptr && ipv6_source_router_id->has_data())
	|| (prefixes_subtlvs_state !=  nullptr && prefixes_subtlvs_state->has_data())
	|| (flags !=  nullptr && flags->has_data())
	|| (tag64 !=  nullptr && tag64->has_data())
	|| (prefix_sids !=  nullptr && prefix_sids->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (tag !=  nullptr && tag->has_operation())
	|| (ipv4_source_router_id !=  nullptr && ipv4_source_router_id->has_operation())
	|| (ipv6_source_router_id !=  nullptr && ipv6_source_router_id->has_operation())
	|| (prefixes_subtlvs_state !=  nullptr && prefixes_subtlvs_state->has_operation())
	|| (flags !=  nullptr && flags->has_operation())
	|| (tag64 !=  nullptr && tag64->has_operation())
	|| (prefix_sids !=  nullptr && prefix_sids->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes-subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag>();
        }
        return tag;
    }

    if(child_yang_name == "ipv4-source-router-id")
    {
        if(ipv4_source_router_id == nullptr)
        {
            ipv4_source_router_id = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId>();
        }
        return ipv4_source_router_id;
    }

    if(child_yang_name == "ipv6-source-router-id")
    {
        if(ipv6_source_router_id == nullptr)
        {
            ipv6_source_router_id = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId>();
        }
        return ipv6_source_router_id;
    }

    if(child_yang_name == "prefixes-subtlvs-state")
    {
        if(prefixes_subtlvs_state == nullptr)
        {
            prefixes_subtlvs_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState>();
        }
        return prefixes_subtlvs_state;
    }

    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "tag64")
    {
        if(tag64 == nullptr)
        {
            tag64 = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64>();
        }
        return tag64;
    }

    if(child_yang_name == "prefix-sids")
    {
        if(prefix_sids == nullptr)
        {
            prefix_sids = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids>();
        }
        return prefix_sids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tag != nullptr)
    {
        _children["tag"] = tag;
    }

    if(ipv4_source_router_id != nullptr)
    {
        _children["ipv4-source-router-id"] = ipv4_source_router_id;
    }

    if(ipv6_source_router_id != nullptr)
    {
        _children["ipv6-source-router-id"] = ipv6_source_router_id;
    }

    if(prefixes_subtlvs_state != nullptr)
    {
        _children["prefixes-subtlvs-state"] = prefixes_subtlvs_state;
    }

    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    if(tag64 != nullptr)
    {
        _children["tag64"] = tag64;
    }

    if(prefix_sids != nullptr)
    {
        _children["prefix-sids"] = prefix_sids;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag" || name == "ipv4-source-router-id" || name == "ipv6-source-router-id" || name == "prefixes-subtlvs-state" || name == "flags" || name == "tag64" || name == "prefix-sids" || name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::Tag()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State>())
{
    state->parent = this;

    yang_name = "tag"; yang_parent_name = "prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::~Tag()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::State()
    :
    tag32{YType::uint32, "tag32"}
{

    yang_name = "state"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tag32.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::has_operation() const
{
    for (auto const & leaf : tag32.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag32.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag32_name_datas = tag32.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag32_name_datas.begin(), tag32_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag32")
    {
        tag32.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag32")
    {
        tag32.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag32")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::Ipv4SourceRouterId()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State>())
{
    state->parent = this;

    yang_name = "ipv4-source-router-id"; yang_parent_name = "prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::~Ipv4SourceRouterId()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-source-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::State()
    :
    type{YType::str, "type"},
    ipv4_source_router_id{YType::str, "ipv4-source-router-id"}
{

    yang_name = "state"; yang_parent_name = "ipv4-source-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4_source_router_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_source_router_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_source_router_id.is_set || is_set(ipv4_source_router_id.yfilter)) leaf_name_data.push_back(ipv4_source_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ipv4-source-router-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::Ipv6SourceRouterId()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State>())
{
    state->parent = this;

    yang_name = "ipv6-source-router-id"; yang_parent_name = "prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::~Ipv6SourceRouterId()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-source-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::State()
    :
    type{YType::str, "type"},
    ipv6_source_router_id{YType::str, "ipv6-source-router-id"}
{

    yang_name = "state"; yang_parent_name = "ipv6-source-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv6_source_router_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv6_source_router_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv6_source_router_id.is_set || is_set(ipv6_source_router_id.yfilter)) leaf_name_data.push_back(ipv6_source_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ipv6-source-router-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::PrefixesSubtlvsState()
    :
    type{YType::str, "type"}
{

    yang_name = "prefixes-subtlvs-state"; yang_parent_name = "prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::~PrefixesSubtlvsState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes-subtlvs-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::Flags()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State>())
{
    state->parent = this;

    yang_name = "flags"; yang_parent_name = "prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::~Flags()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::State()
    :
    type{YType::str, "type"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "flags"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return type.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::has_operation() const
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

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::Tag64()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State>())
{
    state->parent = this;

    yang_name = "tag64"; yang_parent_name = "prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::~Tag64()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag64";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::State()
    :
    tag64{YType::uint64, "tag64"}
{

    yang_name = "state"; yang_parent_name = "tag64"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tag64.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::has_operation() const
{
    for (auto const & leaf : tag64.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag64.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag64_name_datas = tag64.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag64_name_datas.begin(), tag64_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag64")
    {
        tag64.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag64")
    {
        tag64.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag64")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSids()
    :
    prefix_sid(this, {"value_"})
{

    yang_name = "prefix-sids"; yang_parent_name = "prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::~PrefixSids()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_sid.len(); index++)
    {
        if(prefix_sid[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::has_operation() const
{
    for (std::size_t index=0; index<prefix_sid.len(); index++)
    {
        if(prefix_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid>();
        ent_->parent = this;
        prefix_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::get_children() const
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

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::PrefixSid()
    :
    value_{YType::uint32, "value"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State>())
{
    state->parent = this;

    yang_name = "prefix-sid"; yang_parent_name = "prefix-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::~PrefixSid()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "value")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::State()
    :
    value_{YType::uint32, "value"},
    algorithm{YType::uint8, "algorithm"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "prefix-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::has_data() const
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

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "algorithm" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlvs()
    :
    prefixes_undefined_subtlv(this, {"type"})
{

    yang_name = "prefixes-undefined-subtlvs"; yang_parent_name = "extended-ipv4-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::~PrefixesUndefinedSubtlvs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes_undefined_subtlv.len(); index++)
    {
        if(prefixes_undefined_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<prefixes_undefined_subtlv.len(); index++)
    {
        if(prefixes_undefined_subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes-undefined-subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes-undefined-subtlv")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv>();
        ent_->parent = this;
        prefixes_undefined_subtlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes_undefined_subtlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes-undefined-subtlv")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::PrefixesUndefinedSubtlv()
    :
    type{YType::uint32, "type"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::State>())
{
    state->parent = this;

    yang_name = "prefixes-undefined-subtlv"; yang_parent_name = "prefixes-undefined-subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::~PrefixesUndefinedSubtlv()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes-undefined-subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::State::State()
    :
    type{YType::uint8, "type"},
    length{YType::uint8, "length"},
    value_{YType::str, "value"}
{

    yang_name = "state"; yang_parent_name = "prefixes-undefined-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| length.is_set
	|| value_.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::MultiTopology()
    :
    topologies(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies>())
{
    topologies->parent = this;

    yang_name = "multi-topology"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::~MultiTopology()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::has_data() const
{
    if (is_presence_container) return true;
    return (topologies !=  nullptr && topologies->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::has_operation() const
{
    return is_set(yfilter)
	|| (topologies !=  nullptr && topologies->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topologies")
    {
        if(topologies == nullptr)
        {
            topologies = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies>();
        }
        return topologies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(topologies != nullptr)
    {
        _children["topologies"] = topologies;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topologies")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topologies()
    :
    topology(this, {"mt_id"})
{

    yang_name = "topologies"; yang_parent_name = "multi-topology"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::~Topologies()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology.len(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::has_operation() const
{
    for (std::size_t index=0; index<topology.len(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology>();
        ent_->parent = this;
        topology.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::get_children() const
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

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::Topology()
    :
    mt_id{YType::uint32, "mt-id"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::State>())
{
    state->parent = this;

    yang_name = "topology"; yang_parent_name = "topologies"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::~Topology()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    ADD_KEY_TOKEN(mt_id, "mt-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "mt-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::State::State()
    :
    mt_id{YType::uint16, "mt-id"},
    attributes{YType::enumeration, "attributes"}
{

    yang_name = "state"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::State::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| attributes.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(attributes.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "attributes")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachability()
    :
    ipv4_external_reachability_prefixes(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes>())
{
    ipv4_external_reachability_prefixes->parent = this;

    yang_name = "ipv4-external-reachability"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::~Ipv4ExternalReachability()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4_external_reachability_prefixes !=  nullptr && ipv4_external_reachability_prefixes->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_external_reachability_prefixes !=  nullptr && ipv4_external_reachability_prefixes->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-external-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-external-reachability-prefixes")
    {
        if(ipv4_external_reachability_prefixes == nullptr)
        {
            ipv4_external_reachability_prefixes = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes>();
        }
        return ipv4_external_reachability_prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_external_reachability_prefixes != nullptr)
    {
        _children["ipv4-external-reachability-prefixes"] = ipv4_external_reachability_prefixes;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-external-reachability-prefixes")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixes()
    :
    ipv4_external_reachability_prefixe(this, {"prefix"})
{

    yang_name = "ipv4-external-reachability-prefixes"; yang_parent_name = "ipv4-external-reachability"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::~Ipv4ExternalReachabilityPrefixes()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_external_reachability_prefixe.len(); index++)
    {
        if(ipv4_external_reachability_prefixe[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::has_operation() const
{
    for (std::size_t index=0; index<ipv4_external_reachability_prefixe.len(); index++)
    {
        if(ipv4_external_reachability_prefixe[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-external-reachability-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-external-reachability-prefixe")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe>();
        ent_->parent = this;
        ipv4_external_reachability_prefixe.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_external_reachability_prefixe.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-external-reachability-prefixe")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::Ipv4ExternalReachabilityPrefixe()
    :
    prefix{YType::str, "prefix"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::State>())
    , default_metric(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric>())
    , delay_metric(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric>())
    , expense_metric(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric>())
    , error_metric(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric>())
{
    state->parent = this;
    default_metric->parent = this;
    delay_metric->parent = this;
    expense_metric->parent = this;
    error_metric->parent = this;

    yang_name = "ipv4-external-reachability-prefixe"; yang_parent_name = "ipv4-external-reachability-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::~Ipv4ExternalReachabilityPrefixe()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (state !=  nullptr && state->has_data())
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (delay_metric !=  nullptr && delay_metric->has_data())
	|| (expense_metric !=  nullptr && expense_metric->has_data())
	|| (error_metric !=  nullptr && error_metric->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (delay_metric !=  nullptr && delay_metric->has_operation())
	|| (expense_metric !=  nullptr && expense_metric->has_operation())
	|| (error_metric !=  nullptr && error_metric->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-external-reachability-prefixe";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::State>();
        }
        return state;
    }

    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "delay-metric")
    {
        if(delay_metric == nullptr)
        {
            delay_metric = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric>();
        }
        return delay_metric;
    }

    if(child_yang_name == "expense-metric")
    {
        if(expense_metric == nullptr)
        {
            expense_metric = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric>();
        }
        return expense_metric;
    }

    if(child_yang_name == "error-metric")
    {
        if(error_metric == nullptr)
        {
            error_metric = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric>();
        }
        return error_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::get_children() const
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

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "default-metric" || name == "delay-metric" || name == "expense-metric" || name == "error-metric" || name == "prefix")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::State::State()
    :
    up_down{YType::boolean, "up-down"},
    prefix{YType::str, "prefix"}
{

    yang_name = "state"; yang_parent_name = "ipv4-external-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::State::has_data() const
{
    if (is_presence_container) return true;
    return up_down.is_set
	|| prefix.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up_down.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-down" || name == "prefix")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::DefaultMetric()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::State>())
{
    state->parent = this;

    yang_name = "default-metric"; yang_parent_name = "ipv4-external-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::~DefaultMetric()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::State::State()
    :
    flags{YType::enumeration, "flags"},
    default_metric{YType::uint8, "default-metric"}
{

    yang_name = "state"; yang_parent_name = "default-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::State::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| default_metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(default_metric.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "default-metric")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::DelayMetric()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::State>())
{
    state->parent = this;

    yang_name = "delay-metric"; yang_parent_name = "ipv4-external-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::~DelayMetric()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "delay-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::State::has_operation() const
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

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::ExpenseMetric()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::State>())
{
    state->parent = this;

    yang_name = "expense-metric"; yang_parent_name = "ipv4-external-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::~ExpenseMetric()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expense-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "expense-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::State::has_operation() const
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

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::ErrorMetric()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::State>())
{
    state->parent = this;

    yang_name = "error-metric"; yang_parent_name = "ipv4-external-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::~ErrorMetric()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "error-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::State::has_operation() const
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

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6Reachability()
    :
    mt_ipv6_reachability_prefixes(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes>())
{
    mt_ipv6_reachability_prefixes->parent = this;

    yang_name = "mt-ipv6-reachability"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::~MtIpv6Reachability()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::has_data() const
{
    if (is_presence_container) return true;
    return (mt_ipv6_reachability_prefixes !=  nullptr && mt_ipv6_reachability_prefixes->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::has_operation() const
{
    return is_set(yfilter)
	|| (mt_ipv6_reachability_prefixes !=  nullptr && mt_ipv6_reachability_prefixes->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv6-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mt-ipv6-reachability-prefixes")
    {
        if(mt_ipv6_reachability_prefixes == nullptr)
        {
            mt_ipv6_reachability_prefixes = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes>();
        }
        return mt_ipv6_reachability_prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mt_ipv6_reachability_prefixes != nullptr)
    {
        _children["mt-ipv6-reachability-prefixes"] = mt_ipv6_reachability_prefixes;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-ipv6-reachability-prefixes")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixes()
    :
    mt_ipv6_reachability_prefixe(this, {})
{

    yang_name = "mt-ipv6-reachability-prefixes"; yang_parent_name = "mt-ipv6-reachability"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::~MtIpv6ReachabilityPrefixes()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mt_ipv6_reachability_prefixe.len(); index++)
    {
        if(mt_ipv6_reachability_prefixe[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::has_operation() const
{
    for (std::size_t index=0; index<mt_ipv6_reachability_prefixe.len(); index++)
    {
        if(mt_ipv6_reachability_prefixe[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv6-reachability-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mt-ipv6-reachability-prefixe")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe>();
        ent_->parent = this;
        mt_ipv6_reachability_prefixe.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mt_ipv6_reachability_prefixe.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-ipv6-reachability-prefixe")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixe()
    :
    prefix{YType::str, "prefix"},
    mt_id{YType::uint32, "mt-id"}
        ,
    mt_ipv6_reachability_prefixes_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesState>())
    , mt_ipv6_reachability_prefixes_subtlvs(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs>())
    , mt_ipv6_reachability_prefixes_undefined_subtlvs(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs>())
{
    mt_ipv6_reachability_prefixes_state->parent = this;
    mt_ipv6_reachability_prefixes_subtlvs->parent = this;
    mt_ipv6_reachability_prefixes_undefined_subtlvs->parent = this;

    yang_name = "mt-ipv6-reachability-prefixe"; yang_parent_name = "mt-ipv6-reachability-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::~MtIpv6ReachabilityPrefixe()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| mt_id.is_set
	|| (mt_ipv6_reachability_prefixes_state !=  nullptr && mt_ipv6_reachability_prefixes_state->has_data())
	|| (mt_ipv6_reachability_prefixes_subtlvs !=  nullptr && mt_ipv6_reachability_prefixes_subtlvs->has_data())
	|| (mt_ipv6_reachability_prefixes_undefined_subtlvs !=  nullptr && mt_ipv6_reachability_prefixes_undefined_subtlvs->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| (mt_ipv6_reachability_prefixes_state !=  nullptr && mt_ipv6_reachability_prefixes_state->has_operation())
	|| (mt_ipv6_reachability_prefixes_subtlvs !=  nullptr && mt_ipv6_reachability_prefixes_subtlvs->has_operation())
	|| (mt_ipv6_reachability_prefixes_undefined_subtlvs !=  nullptr && mt_ipv6_reachability_prefixes_undefined_subtlvs->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv6-reachability-prefixe";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mt-ipv6-reachability-prefixes-state")
    {
        if(mt_ipv6_reachability_prefixes_state == nullptr)
        {
            mt_ipv6_reachability_prefixes_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesState>();
        }
        return mt_ipv6_reachability_prefixes_state;
    }

    if(child_yang_name == "mt-ipv6-reachability-prefixes-subtlvs")
    {
        if(mt_ipv6_reachability_prefixes_subtlvs == nullptr)
        {
            mt_ipv6_reachability_prefixes_subtlvs = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs>();
        }
        return mt_ipv6_reachability_prefixes_subtlvs;
    }

    if(child_yang_name == "mt-ipv6-reachability-prefixes-undefined-subtlvs")
    {
        if(mt_ipv6_reachability_prefixes_undefined_subtlvs == nullptr)
        {
            mt_ipv6_reachability_prefixes_undefined_subtlvs = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs>();
        }
        return mt_ipv6_reachability_prefixes_undefined_subtlvs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mt_ipv6_reachability_prefixes_state != nullptr)
    {
        _children["mt-ipv6-reachability-prefixes-state"] = mt_ipv6_reachability_prefixes_state;
    }

    if(mt_ipv6_reachability_prefixes_subtlvs != nullptr)
    {
        _children["mt-ipv6-reachability-prefixes-subtlvs"] = mt_ipv6_reachability_prefixes_subtlvs;
    }

    if(mt_ipv6_reachability_prefixes_undefined_subtlvs != nullptr)
    {
        _children["mt-ipv6-reachability-prefixes-undefined-subtlvs"] = mt_ipv6_reachability_prefixes_undefined_subtlvs;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-ipv6-reachability-prefixes-state" || name == "mt-ipv6-reachability-prefixes-subtlvs" || name == "mt-ipv6-reachability-prefixes-undefined-subtlvs" || name == "prefix" || name == "mt-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesState::MtIpv6ReachabilityPrefixesState()
    :
    up_down{YType::boolean, "up-down"},
    xbit{YType::boolean, "xbit"},
    sbit{YType::boolean, "sbit"},
    prefix{YType::str, "prefix"},
    metric{YType::uint32, "metric"},
    mt_id{YType::uint16, "mt-id"}
{

    yang_name = "mt-ipv6-reachability-prefixes-state"; yang_parent_name = "mt-ipv6-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesState::~MtIpv6ReachabilityPrefixesState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesState::has_data() const
{
    if (is_presence_container) return true;
    return up_down.is_set
	|| xbit.is_set
	|| sbit.is_set
	|| prefix.is_set
	|| metric.is_set
	|| mt_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up_down.yfilter)
	|| ydk::is_set(xbit.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(mt_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv6-reachability-prefixes-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());
    if (xbit.is_set || is_set(xbit.yfilter)) leaf_name_data.push_back(xbit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xbit")
    {
        xbit = value;
        xbit.value_namespace = name_space;
        xbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
    if(value_path == "xbit")
    {
        xbit.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-down" || name == "xbit" || name == "sbit" || name == "prefix" || name == "metric" || name == "mt-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlvs()
    :
    mt_ipv6_reachability_prefixes_subtlv(this, {"type"})
{

    yang_name = "mt-ipv6-reachability-prefixes-subtlvs"; yang_parent_name = "mt-ipv6-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::~MtIpv6ReachabilityPrefixesSubtlvs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mt_ipv6_reachability_prefixes_subtlv.len(); index++)
    {
        if(mt_ipv6_reachability_prefixes_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<mt_ipv6_reachability_prefixes_subtlv.len(); index++)
    {
        if(mt_ipv6_reachability_prefixes_subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv6-reachability-prefixes-subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mt-ipv6-reachability-prefixes-subtlv")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv>();
        ent_->parent = this;
        mt_ipv6_reachability_prefixes_subtlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mt_ipv6_reachability_prefixes_subtlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-ipv6-reachability-prefixes-subtlv")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlv()
    :
    type{YType::str, "type"}
        ,
    mt_ipv6_reachability_prefixes_subtlvs_prefix_sids(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids>())
    , mt_ipv6_reachability_prefixes_subtlvs_flags(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags>())
    , mt_ipv6_reachability_prefixes_subtlvs_ipv4_source_router_id(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId>())
    , mt_ipv6_reachability_prefixes_subtlvs_tag64(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64>())
    , mt_ipv6_reachability_prefixes_subtlvs_ipv6_source_router_id(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId>())
    , mt_ipv6_reachability_prefixes_subtlvs_tag(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag>())
    , mt_ipv6_reachability_prefixes_subtlvs_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsState>())
{
    mt_ipv6_reachability_prefixes_subtlvs_prefix_sids->parent = this;
    mt_ipv6_reachability_prefixes_subtlvs_flags->parent = this;
    mt_ipv6_reachability_prefixes_subtlvs_ipv4_source_router_id->parent = this;
    mt_ipv6_reachability_prefixes_subtlvs_tag64->parent = this;
    mt_ipv6_reachability_prefixes_subtlvs_ipv6_source_router_id->parent = this;
    mt_ipv6_reachability_prefixes_subtlvs_tag->parent = this;
    mt_ipv6_reachability_prefixes_subtlvs_state->parent = this;

    yang_name = "mt-ipv6-reachability-prefixes-subtlv"; yang_parent_name = "mt-ipv6-reachability-prefixes-subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::~MtIpv6ReachabilityPrefixesSubtlv()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (mt_ipv6_reachability_prefixes_subtlvs_prefix_sids !=  nullptr && mt_ipv6_reachability_prefixes_subtlvs_prefix_sids->has_data())
	|| (mt_ipv6_reachability_prefixes_subtlvs_flags !=  nullptr && mt_ipv6_reachability_prefixes_subtlvs_flags->has_data())
	|| (mt_ipv6_reachability_prefixes_subtlvs_ipv4_source_router_id !=  nullptr && mt_ipv6_reachability_prefixes_subtlvs_ipv4_source_router_id->has_data())
	|| (mt_ipv6_reachability_prefixes_subtlvs_tag64 !=  nullptr && mt_ipv6_reachability_prefixes_subtlvs_tag64->has_data())
	|| (mt_ipv6_reachability_prefixes_subtlvs_ipv6_source_router_id !=  nullptr && mt_ipv6_reachability_prefixes_subtlvs_ipv6_source_router_id->has_data())
	|| (mt_ipv6_reachability_prefixes_subtlvs_tag !=  nullptr && mt_ipv6_reachability_prefixes_subtlvs_tag->has_data())
	|| (mt_ipv6_reachability_prefixes_subtlvs_state !=  nullptr && mt_ipv6_reachability_prefixes_subtlvs_state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (mt_ipv6_reachability_prefixes_subtlvs_prefix_sids !=  nullptr && mt_ipv6_reachability_prefixes_subtlvs_prefix_sids->has_operation())
	|| (mt_ipv6_reachability_prefixes_subtlvs_flags !=  nullptr && mt_ipv6_reachability_prefixes_subtlvs_flags->has_operation())
	|| (mt_ipv6_reachability_prefixes_subtlvs_ipv4_source_router_id !=  nullptr && mt_ipv6_reachability_prefixes_subtlvs_ipv4_source_router_id->has_operation())
	|| (mt_ipv6_reachability_prefixes_subtlvs_tag64 !=  nullptr && mt_ipv6_reachability_prefixes_subtlvs_tag64->has_operation())
	|| (mt_ipv6_reachability_prefixes_subtlvs_ipv6_source_router_id !=  nullptr && mt_ipv6_reachability_prefixes_subtlvs_ipv6_source_router_id->has_operation())
	|| (mt_ipv6_reachability_prefixes_subtlvs_tag !=  nullptr && mt_ipv6_reachability_prefixes_subtlvs_tag->has_operation())
	|| (mt_ipv6_reachability_prefixes_subtlvs_state !=  nullptr && mt_ipv6_reachability_prefixes_subtlvs_state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv6-reachability-prefixes-subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mt-ipv6-reachability-prefixes-subtlvs-prefix-sids")
    {
        if(mt_ipv6_reachability_prefixes_subtlvs_prefix_sids == nullptr)
        {
            mt_ipv6_reachability_prefixes_subtlvs_prefix_sids = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids>();
        }
        return mt_ipv6_reachability_prefixes_subtlvs_prefix_sids;
    }

    if(child_yang_name == "mt-ipv6-reachability-prefixes-subtlvs-flags")
    {
        if(mt_ipv6_reachability_prefixes_subtlvs_flags == nullptr)
        {
            mt_ipv6_reachability_prefixes_subtlvs_flags = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags>();
        }
        return mt_ipv6_reachability_prefixes_subtlvs_flags;
    }

    if(child_yang_name == "mt-ipv6-reachability-prefixes-subtlvs-ipv4-source-router-id")
    {
        if(mt_ipv6_reachability_prefixes_subtlvs_ipv4_source_router_id == nullptr)
        {
            mt_ipv6_reachability_prefixes_subtlvs_ipv4_source_router_id = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId>();
        }
        return mt_ipv6_reachability_prefixes_subtlvs_ipv4_source_router_id;
    }

    if(child_yang_name == "mt-ipv6-reachability-prefixes-subtlvs-tag64")
    {
        if(mt_ipv6_reachability_prefixes_subtlvs_tag64 == nullptr)
        {
            mt_ipv6_reachability_prefixes_subtlvs_tag64 = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64>();
        }
        return mt_ipv6_reachability_prefixes_subtlvs_tag64;
    }

    if(child_yang_name == "mt-ipv6-reachability-prefixes-subtlvs-ipv6-source-router-id")
    {
        if(mt_ipv6_reachability_prefixes_subtlvs_ipv6_source_router_id == nullptr)
        {
            mt_ipv6_reachability_prefixes_subtlvs_ipv6_source_router_id = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId>();
        }
        return mt_ipv6_reachability_prefixes_subtlvs_ipv6_source_router_id;
    }

    if(child_yang_name == "mt-ipv6-reachability-prefixes-subtlvs-tag")
    {
        if(mt_ipv6_reachability_prefixes_subtlvs_tag == nullptr)
        {
            mt_ipv6_reachability_prefixes_subtlvs_tag = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag>();
        }
        return mt_ipv6_reachability_prefixes_subtlvs_tag;
    }

    if(child_yang_name == "mt-ipv6-reachability-prefixes-subtlvs-state")
    {
        if(mt_ipv6_reachability_prefixes_subtlvs_state == nullptr)
        {
            mt_ipv6_reachability_prefixes_subtlvs_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsState>();
        }
        return mt_ipv6_reachability_prefixes_subtlvs_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mt_ipv6_reachability_prefixes_subtlvs_prefix_sids != nullptr)
    {
        _children["mt-ipv6-reachability-prefixes-subtlvs-prefix-sids"] = mt_ipv6_reachability_prefixes_subtlvs_prefix_sids;
    }

    if(mt_ipv6_reachability_prefixes_subtlvs_flags != nullptr)
    {
        _children["mt-ipv6-reachability-prefixes-subtlvs-flags"] = mt_ipv6_reachability_prefixes_subtlvs_flags;
    }

    if(mt_ipv6_reachability_prefixes_subtlvs_ipv4_source_router_id != nullptr)
    {
        _children["mt-ipv6-reachability-prefixes-subtlvs-ipv4-source-router-id"] = mt_ipv6_reachability_prefixes_subtlvs_ipv4_source_router_id;
    }

    if(mt_ipv6_reachability_prefixes_subtlvs_tag64 != nullptr)
    {
        _children["mt-ipv6-reachability-prefixes-subtlvs-tag64"] = mt_ipv6_reachability_prefixes_subtlvs_tag64;
    }

    if(mt_ipv6_reachability_prefixes_subtlvs_ipv6_source_router_id != nullptr)
    {
        _children["mt-ipv6-reachability-prefixes-subtlvs-ipv6-source-router-id"] = mt_ipv6_reachability_prefixes_subtlvs_ipv6_source_router_id;
    }

    if(mt_ipv6_reachability_prefixes_subtlvs_tag != nullptr)
    {
        _children["mt-ipv6-reachability-prefixes-subtlvs-tag"] = mt_ipv6_reachability_prefixes_subtlvs_tag;
    }

    if(mt_ipv6_reachability_prefixes_subtlvs_state != nullptr)
    {
        _children["mt-ipv6-reachability-prefixes-subtlvs-state"] = mt_ipv6_reachability_prefixes_subtlvs_state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-ipv6-reachability-prefixes-subtlvs-prefix-sids" || name == "mt-ipv6-reachability-prefixes-subtlvs-flags" || name == "mt-ipv6-reachability-prefixes-subtlvs-ipv4-source-router-id" || name == "mt-ipv6-reachability-prefixes-subtlvs-tag64" || name == "mt-ipv6-reachability-prefixes-subtlvs-ipv6-source-router-id" || name == "mt-ipv6-reachability-prefixes-subtlvs-tag" || name == "mt-ipv6-reachability-prefixes-subtlvs-state" || name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids()
    :
    mt_ipv6_reachability_prefixes_subtlvs_prefix_sid(this, {"value_"})
{

    yang_name = "mt-ipv6-reachability-prefixes-subtlvs-prefix-sids"; yang_parent_name = "mt-ipv6-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::~MtIpv6ReachabilityPrefixesSubtlvsPrefixSids()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mt_ipv6_reachability_prefixes_subtlvs_prefix_sid.len(); index++)
    {
        if(mt_ipv6_reachability_prefixes_subtlvs_prefix_sid[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::has_operation() const
{
    for (std::size_t index=0; index<mt_ipv6_reachability_prefixes_subtlvs_prefix_sid.len(); index++)
    {
        if(mt_ipv6_reachability_prefixes_subtlvs_prefix_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv6-reachability-prefixes-subtlvs-prefix-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mt-ipv6-reachability-prefixes-subtlvs-prefix-sid")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid>();
        ent_->parent = this;
        mt_ipv6_reachability_prefixes_subtlvs_prefix_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mt_ipv6_reachability_prefixes_subtlvs_prefix_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-ipv6-reachability-prefixes-subtlvs-prefix-sid")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid()
    :
    value_{YType::uint32, "value"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::State>())
{
    state->parent = this;

    yang_name = "mt-ipv6-reachability-prefixes-subtlvs-prefix-sid"; yang_parent_name = "mt-ipv6-reachability-prefixes-subtlvs-prefix-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::~MtIpv6ReachabilityPrefixesSubtlvsPrefixSid()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv6-reachability-prefixes-subtlvs-prefix-sid";
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "value")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::State::State()
    :
    value_{YType::uint32, "value"},
    algorithm{YType::uint8, "algorithm"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "mt-ipv6-reachability-prefixes-subtlvs-prefix-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::State::has_data() const
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

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "algorithm" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::MtIpv6ReachabilityPrefixesSubtlvsFlags()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::State>())
{
    state->parent = this;

    yang_name = "mt-ipv6-reachability-prefixes-subtlvs-flags"; yang_parent_name = "mt-ipv6-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::~MtIpv6ReachabilityPrefixesSubtlvsFlags()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv6-reachability-prefixes-subtlvs-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::State::State()
    :
    type{YType::str, "type"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "mt-ipv6-reachability-prefixes-subtlvs-flags"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return type.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::State::has_operation() const
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

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::State>())
{
    state->parent = this;

    yang_name = "mt-ipv6-reachability-prefixes-subtlvs-ipv4-source-router-id"; yang_parent_name = "mt-ipv6-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::~MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv6-reachability-prefixes-subtlvs-ipv4-source-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::State::State()
    :
    type{YType::str, "type"},
    ipv4_source_router_id{YType::str, "ipv4-source-router-id"}
{

    yang_name = "state"; yang_parent_name = "mt-ipv6-reachability-prefixes-subtlvs-ipv4-source-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4_source_router_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_source_router_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_source_router_id.is_set || is_set(ipv4_source_router_id.yfilter)) leaf_name_data.push_back(ipv4_source_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ipv4-source-router-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::MtIpv6ReachabilityPrefixesSubtlvsTag64()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::State>())
{
    state->parent = this;

    yang_name = "mt-ipv6-reachability-prefixes-subtlvs-tag64"; yang_parent_name = "mt-ipv6-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::~MtIpv6ReachabilityPrefixesSubtlvsTag64()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv6-reachability-prefixes-subtlvs-tag64";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::State::State()
    :
    tag64{YType::uint64, "tag64"}
{

    yang_name = "state"; yang_parent_name = "mt-ipv6-reachability-prefixes-subtlvs-tag64"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tag64.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::State::has_operation() const
{
    for (auto const & leaf : tag64.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag64.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag64_name_datas = tag64.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag64_name_datas.begin(), tag64_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag64")
    {
        tag64.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag64")
    {
        tag64.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag64")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::State>())
{
    state->parent = this;

    yang_name = "mt-ipv6-reachability-prefixes-subtlvs-ipv6-source-router-id"; yang_parent_name = "mt-ipv6-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::~MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv6-reachability-prefixes-subtlvs-ipv6-source-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::State::State()
    :
    type{YType::str, "type"},
    ipv6_source_router_id{YType::str, "ipv6-source-router-id"}
{

    yang_name = "state"; yang_parent_name = "mt-ipv6-reachability-prefixes-subtlvs-ipv6-source-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv6_source_router_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv6_source_router_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv6_source_router_id.is_set || is_set(ipv6_source_router_id.yfilter)) leaf_name_data.push_back(ipv6_source_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ipv6-source-router-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::MtIpv6ReachabilityPrefixesSubtlvsTag()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::State>())
{
    state->parent = this;

    yang_name = "mt-ipv6-reachability-prefixes-subtlvs-tag"; yang_parent_name = "mt-ipv6-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::~MtIpv6ReachabilityPrefixesSubtlvsTag()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv6-reachability-prefixes-subtlvs-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::State::State()
    :
    tag32{YType::uint32, "tag32"}
{

    yang_name = "state"; yang_parent_name = "mt-ipv6-reachability-prefixes-subtlvs-tag"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tag32.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::State::has_operation() const
{
    for (auto const & leaf : tag32.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag32.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag32_name_datas = tag32.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag32_name_datas.begin(), tag32_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag32")
    {
        tag32.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag32")
    {
        tag32.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag32")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsState::MtIpv6ReachabilityPrefixesSubtlvsState()
    :
    type{YType::str, "type"}
{

    yang_name = "mt-ipv6-reachability-prefixes-subtlvs-state"; yang_parent_name = "mt-ipv6-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsState::~MtIpv6ReachabilityPrefixesSubtlvsState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsState::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv6-reachability-prefixes-subtlvs-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlvs()
    :
    mt_ipv6_reachability_prefixes_undefined_subtlv(this, {"type"})
{

    yang_name = "mt-ipv6-reachability-prefixes-undefined-subtlvs"; yang_parent_name = "mt-ipv6-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::~MtIpv6ReachabilityPrefixesUndefinedSubtlvs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mt_ipv6_reachability_prefixes_undefined_subtlv.len(); index++)
    {
        if(mt_ipv6_reachability_prefixes_undefined_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<mt_ipv6_reachability_prefixes_undefined_subtlv.len(); index++)
    {
        if(mt_ipv6_reachability_prefixes_undefined_subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv6-reachability-prefixes-undefined-subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mt-ipv6-reachability-prefixes-undefined-subtlv")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv>();
        ent_->parent = this;
        mt_ipv6_reachability_prefixes_undefined_subtlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mt_ipv6_reachability_prefixes_undefined_subtlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-ipv6-reachability-prefixes-undefined-subtlv")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::MtIpv6ReachabilityPrefixesUndefinedSubtlv()
    :
    type{YType::uint32, "type"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::State>())
{
    state->parent = this;

    yang_name = "mt-ipv6-reachability-prefixes-undefined-subtlv"; yang_parent_name = "mt-ipv6-reachability-prefixes-undefined-subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::~MtIpv6ReachabilityPrefixesUndefinedSubtlv()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv6-reachability-prefixes-undefined-subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::State::State()
    :
    type{YType::uint8, "type"},
    length{YType::uint8, "length"},
    value_{YType::str, "value"}
{

    yang_name = "state"; yang_parent_name = "mt-ipv6-reachability-prefixes-undefined-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| length.is_set
	|| value_.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::State::State()
    :
    name{YType::str, "name"},
    type{YType::str, "type"},
    enabled{YType::boolean, "enabled"},
    description{YType::str, "description"}
{

    yang_name = "state"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::State::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| enabled.is_set
	|| description.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "type" || name == "enabled" || name == "description")
        return true;
    return false;
}

Isis::Isis()
    :
    instances(std::make_shared<Isis::Instances>())
{
    instances->parent = this;

    yang_name = "isis"; yang_parent_name = "Cisco-IOS-XR-clns-isis-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Isis::~Isis()
{
}

bool Isis::has_data() const
{
    if (is_presence_container) return true;
    return (instances !=  nullptr && instances->has_data());
}

bool Isis::has_operation() const
{
    return is_set(yfilter)
	|| (instances !=  nullptr && instances->has_operation());
}

std::string Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clns-isis-oper:isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instances")
    {
        if(instances == nullptr)
        {
            instances = std::make_shared<Isis::Instances>();
        }
        return instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(instances != nullptr)
    {
        _children["instances"] = instances;
    }

    return _children;
}

void Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Isis::clone_ptr() const
{
    return std::make_shared<Isis>();
}

std::string Isis::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Isis::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Isis::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Isis::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instances")
        return true;
    return false;
}

Isis::Instances::Instances()
    :
    instance(this, {"instance_name"})
{

    yang_name = "instances"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false; 
}

Isis::Instances::~Instances()
{
}

bool Isis::Instances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clns-isis-oper:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Isis::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Isis::Instances::Instance::Instance()
    :
    instance_name{YType::str, "instance-name"}
        ,
    neighbors(std::make_shared<Isis::Instances::Instance::Neighbors>())
    , host_names(std::make_shared<Isis::Instances::Instance::HostNames>())
    , statistics_global(std::make_shared<Isis::Instances::Instance::StatisticsGlobal>())
    , levels(std::make_shared<Isis::Instances::Instance::Levels>())
    , topologies(std::make_shared<Isis::Instances::Instance::Topologies>())
    , nsr_status(std::make_shared<Isis::Instances::Instance::NsrStatus>())
    , interfaces(std::make_shared<Isis::Instances::Instance::Interfaces>())
    , checkpoint_adjacencies(std::make_shared<Isis::Instances::Instance::CheckpointAdjacencies>())
    , flex_algos(std::make_shared<Isis::Instances::Instance::FlexAlgos>())
    , srms(std::make_shared<Isis::Instances::Instance::Srms>())
    , error_log(std::make_shared<Isis::Instances::Instance::ErrorLog>())
    , checkpoint_interfaces(std::make_shared<Isis::Instances::Instance::CheckpointInterfaces>())
    , interface_statistics(std::make_shared<Isis::Instances::Instance::InterfaceStatistics>())
    , protocol(std::make_shared<Isis::Instances::Instance::Protocol>())
    , neighbor_summaries(std::make_shared<Isis::Instances::Instance::NeighborSummaries>())
    , checkpoint_lsps(std::make_shared<Isis::Instances::Instance::CheckpointLsps>())
    , mesh_groups(std::make_shared<Isis::Instances::Instance::MeshGroups>())
    , nsr_statistics(std::make_shared<Isis::Instances::Instance::NsrStatistics>())
    , checkpoint_te_tunnels(std::make_shared<Isis::Instances::Instance::CheckpointTeTunnels>())
{
    neighbors->parent = this;
    host_names->parent = this;
    statistics_global->parent = this;
    levels->parent = this;
    topologies->parent = this;
    nsr_status->parent = this;
    interfaces->parent = this;
    checkpoint_adjacencies->parent = this;
    flex_algos->parent = this;
    srms->parent = this;
    error_log->parent = this;
    checkpoint_interfaces->parent = this;
    interface_statistics->parent = this;
    protocol->parent = this;
    neighbor_summaries->parent = this;
    checkpoint_lsps->parent = this;
    mesh_groups->parent = this;
    nsr_statistics->parent = this;
    checkpoint_te_tunnels->parent = this;

    yang_name = "instance"; yang_parent_name = "instances"; is_top_level_class = false; has_list_ancestor = false; 
}

Isis::Instances::Instance::~Instance()
{
}

bool Isis::Instances::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_name.is_set
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (host_names !=  nullptr && host_names->has_data())
	|| (statistics_global !=  nullptr && statistics_global->has_data())
	|| (levels !=  nullptr && levels->has_data())
	|| (topologies !=  nullptr && topologies->has_data())
	|| (nsr_status !=  nullptr && nsr_status->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (checkpoint_adjacencies !=  nullptr && checkpoint_adjacencies->has_data())
	|| (flex_algos !=  nullptr && flex_algos->has_data())
	|| (srms !=  nullptr && srms->has_data())
	|| (error_log !=  nullptr && error_log->has_data())
	|| (checkpoint_interfaces !=  nullptr && checkpoint_interfaces->has_data())
	|| (interface_statistics !=  nullptr && interface_statistics->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (neighbor_summaries !=  nullptr && neighbor_summaries->has_data())
	|| (checkpoint_lsps !=  nullptr && checkpoint_lsps->has_data())
	|| (mesh_groups !=  nullptr && mesh_groups->has_data())
	|| (nsr_statistics !=  nullptr && nsr_statistics->has_data())
	|| (checkpoint_te_tunnels !=  nullptr && checkpoint_te_tunnels->has_data());
}

bool Isis::Instances::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (host_names !=  nullptr && host_names->has_operation())
	|| (statistics_global !=  nullptr && statistics_global->has_operation())
	|| (levels !=  nullptr && levels->has_operation())
	|| (topologies !=  nullptr && topologies->has_operation())
	|| (nsr_status !=  nullptr && nsr_status->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (checkpoint_adjacencies !=  nullptr && checkpoint_adjacencies->has_operation())
	|| (flex_algos !=  nullptr && flex_algos->has_operation())
	|| (srms !=  nullptr && srms->has_operation())
	|| (error_log !=  nullptr && error_log->has_operation())
	|| (checkpoint_interfaces !=  nullptr && checkpoint_interfaces->has_operation())
	|| (interface_statistics !=  nullptr && interface_statistics->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (neighbor_summaries !=  nullptr && neighbor_summaries->has_operation())
	|| (checkpoint_lsps !=  nullptr && checkpoint_lsps->has_operation())
	|| (mesh_groups !=  nullptr && mesh_groups->has_operation())
	|| (nsr_statistics !=  nullptr && nsr_statistics->has_operation())
	|| (checkpoint_te_tunnels !=  nullptr && checkpoint_te_tunnels->has_operation());
}

std::string Isis::Instances::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clns-isis-oper:isis/instances/" << get_segment_path();
    return path_buffer.str();
}

std::string Isis::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Isis::Instances::Instance::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "host-names")
    {
        if(host_names == nullptr)
        {
            host_names = std::make_shared<Isis::Instances::Instance::HostNames>();
        }
        return host_names;
    }

    if(child_yang_name == "statistics-global")
    {
        if(statistics_global == nullptr)
        {
            statistics_global = std::make_shared<Isis::Instances::Instance::StatisticsGlobal>();
        }
        return statistics_global;
    }

    if(child_yang_name == "levels")
    {
        if(levels == nullptr)
        {
            levels = std::make_shared<Isis::Instances::Instance::Levels>();
        }
        return levels;
    }

    if(child_yang_name == "topologies")
    {
        if(topologies == nullptr)
        {
            topologies = std::make_shared<Isis::Instances::Instance::Topologies>();
        }
        return topologies;
    }

    if(child_yang_name == "nsr-status")
    {
        if(nsr_status == nullptr)
        {
            nsr_status = std::make_shared<Isis::Instances::Instance::NsrStatus>();
        }
        return nsr_status;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Isis::Instances::Instance::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "checkpoint-adjacencies")
    {
        if(checkpoint_adjacencies == nullptr)
        {
            checkpoint_adjacencies = std::make_shared<Isis::Instances::Instance::CheckpointAdjacencies>();
        }
        return checkpoint_adjacencies;
    }

    if(child_yang_name == "flex-algos")
    {
        if(flex_algos == nullptr)
        {
            flex_algos = std::make_shared<Isis::Instances::Instance::FlexAlgos>();
        }
        return flex_algos;
    }

    if(child_yang_name == "srms")
    {
        if(srms == nullptr)
        {
            srms = std::make_shared<Isis::Instances::Instance::Srms>();
        }
        return srms;
    }

    if(child_yang_name == "error-log")
    {
        if(error_log == nullptr)
        {
            error_log = std::make_shared<Isis::Instances::Instance::ErrorLog>();
        }
        return error_log;
    }

    if(child_yang_name == "checkpoint-interfaces")
    {
        if(checkpoint_interfaces == nullptr)
        {
            checkpoint_interfaces = std::make_shared<Isis::Instances::Instance::CheckpointInterfaces>();
        }
        return checkpoint_interfaces;
    }

    if(child_yang_name == "interface-statistics")
    {
        if(interface_statistics == nullptr)
        {
            interface_statistics = std::make_shared<Isis::Instances::Instance::InterfaceStatistics>();
        }
        return interface_statistics;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Isis::Instances::Instance::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "neighbor-summaries")
    {
        if(neighbor_summaries == nullptr)
        {
            neighbor_summaries = std::make_shared<Isis::Instances::Instance::NeighborSummaries>();
        }
        return neighbor_summaries;
    }

    if(child_yang_name == "checkpoint-lsps")
    {
        if(checkpoint_lsps == nullptr)
        {
            checkpoint_lsps = std::make_shared<Isis::Instances::Instance::CheckpointLsps>();
        }
        return checkpoint_lsps;
    }

    if(child_yang_name == "mesh-groups")
    {
        if(mesh_groups == nullptr)
        {
            mesh_groups = std::make_shared<Isis::Instances::Instance::MeshGroups>();
        }
        return mesh_groups;
    }

    if(child_yang_name == "nsr-statistics")
    {
        if(nsr_statistics == nullptr)
        {
            nsr_statistics = std::make_shared<Isis::Instances::Instance::NsrStatistics>();
        }
        return nsr_statistics;
    }

    if(child_yang_name == "checkpoint-te-tunnels")
    {
        if(checkpoint_te_tunnels == nullptr)
        {
            checkpoint_te_tunnels = std::make_shared<Isis::Instances::Instance::CheckpointTeTunnels>();
        }
        return checkpoint_te_tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbors != nullptr)
    {
        _children["neighbors"] = neighbors;
    }

    if(host_names != nullptr)
    {
        _children["host-names"] = host_names;
    }

    if(statistics_global != nullptr)
    {
        _children["statistics-global"] = statistics_global;
    }

    if(levels != nullptr)
    {
        _children["levels"] = levels;
    }

    if(topologies != nullptr)
    {
        _children["topologies"] = topologies;
    }

    if(nsr_status != nullptr)
    {
        _children["nsr-status"] = nsr_status;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(checkpoint_adjacencies != nullptr)
    {
        _children["checkpoint-adjacencies"] = checkpoint_adjacencies;
    }

    if(flex_algos != nullptr)
    {
        _children["flex-algos"] = flex_algos;
    }

    if(srms != nullptr)
    {
        _children["srms"] = srms;
    }

    if(error_log != nullptr)
    {
        _children["error-log"] = error_log;
    }

    if(checkpoint_interfaces != nullptr)
    {
        _children["checkpoint-interfaces"] = checkpoint_interfaces;
    }

    if(interface_statistics != nullptr)
    {
        _children["interface-statistics"] = interface_statistics;
    }

    if(protocol != nullptr)
    {
        _children["protocol"] = protocol;
    }

    if(neighbor_summaries != nullptr)
    {
        _children["neighbor-summaries"] = neighbor_summaries;
    }

    if(checkpoint_lsps != nullptr)
    {
        _children["checkpoint-lsps"] = checkpoint_lsps;
    }

    if(mesh_groups != nullptr)
    {
        _children["mesh-groups"] = mesh_groups;
    }

    if(nsr_statistics != nullptr)
    {
        _children["nsr-statistics"] = nsr_statistics;
    }

    if(checkpoint_te_tunnels != nullptr)
    {
        _children["checkpoint-te-tunnels"] = checkpoint_te_tunnels;
    }

    return _children;
}

void Isis::Instances::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors" || name == "host-names" || name == "statistics-global" || name == "levels" || name == "topologies" || name == "nsr-status" || name == "interfaces" || name == "checkpoint-adjacencies" || name == "flex-algos" || name == "srms" || name == "error-log" || name == "checkpoint-interfaces" || name == "interface-statistics" || name == "protocol" || name == "neighbor-summaries" || name == "checkpoint-lsps" || name == "mesh-groups" || name == "nsr-statistics" || name == "checkpoint-te-tunnels" || name == "instance-name")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbors()
    :
    neighbor(this, {})
{

    yang_name = "neighbors"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::~Neighbors()
{
}

bool Isis::Instances::Instance::Neighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::get_children() const
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

void Isis::Instances::Instance::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::Neighbor()
    :
    system_id{YType::str, "system-id"},
    interface_name{YType::str, "interface-name"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    local_interface{YType::str, "local-interface"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_circuit_type{YType::enumeration, "neighbor-circuit-type"},
    neighbor_ietf_nsf_capable_flag{YType::uint32, "neighbor-ietf-nsf-capable-flag"},
    neighbor_media_type{YType::enumeration, "neighbor-media-type"},
    neighbor_holdtime{YType::uint32, "neighbor-holdtime"},
    neighbor_uptime_valid_flag{YType::boolean, "neighbor-uptime-valid-flag"},
    neighbor_uptime{YType::uint32, "neighbor-uptime"},
    nsr_standby{YType::boolean, "nsr-standby"}
        ,
    neighbor_active_area_address(this, {})
    , topologies_supported(this, {})
    , neighbor_per_address_family_data(this, {})
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::~Neighbor()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_active_area_address.len(); index++)
    {
        if(neighbor_active_area_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topologies_supported.len(); index++)
    {
        if(topologies_supported[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor_per_address_family_data.len(); index++)
    {
        if(neighbor_per_address_family_data[index]->has_data())
            return true;
    }
    return system_id.is_set
	|| interface_name.is_set
	|| neighbor_system_id.is_set
	|| neighbor_snpa.is_set
	|| local_interface.is_set
	|| neighbor_state.is_set
	|| neighbor_circuit_type.is_set
	|| neighbor_ietf_nsf_capable_flag.is_set
	|| neighbor_media_type.is_set
	|| neighbor_holdtime.is_set
	|| neighbor_uptime_valid_flag.is_set
	|| neighbor_uptime.is_set
	|| nsr_standby.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor_active_area_address.len(); index++)
    {
        if(neighbor_active_area_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topologies_supported.len(); index++)
    {
        if(topologies_supported[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor_per_address_family_data.len(); index++)
    {
        if(neighbor_per_address_family_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_system_id.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(local_interface.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(neighbor_circuit_type.yfilter)
	|| ydk::is_set(neighbor_ietf_nsf_capable_flag.yfilter)
	|| ydk::is_set(neighbor_media_type.yfilter)
	|| ydk::is_set(neighbor_holdtime.yfilter)
	|| ydk::is_set(neighbor_uptime_valid_flag.yfilter)
	|| ydk::is_set(neighbor_uptime.yfilter)
	|| ydk::is_set(nsr_standby.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.yfilter)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (local_interface.is_set || is_set(local_interface.yfilter)) leaf_name_data.push_back(local_interface.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_circuit_type.is_set || is_set(neighbor_circuit_type.yfilter)) leaf_name_data.push_back(neighbor_circuit_type.get_name_leafdata());
    if (neighbor_ietf_nsf_capable_flag.is_set || is_set(neighbor_ietf_nsf_capable_flag.yfilter)) leaf_name_data.push_back(neighbor_ietf_nsf_capable_flag.get_name_leafdata());
    if (neighbor_media_type.is_set || is_set(neighbor_media_type.yfilter)) leaf_name_data.push_back(neighbor_media_type.get_name_leafdata());
    if (neighbor_holdtime.is_set || is_set(neighbor_holdtime.yfilter)) leaf_name_data.push_back(neighbor_holdtime.get_name_leafdata());
    if (neighbor_uptime_valid_flag.is_set || is_set(neighbor_uptime_valid_flag.yfilter)) leaf_name_data.push_back(neighbor_uptime_valid_flag.get_name_leafdata());
    if (neighbor_uptime.is_set || is_set(neighbor_uptime.yfilter)) leaf_name_data.push_back(neighbor_uptime.get_name_leafdata());
    if (nsr_standby.is_set || is_set(nsr_standby.yfilter)) leaf_name_data.push_back(nsr_standby.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-active-area-address")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress>();
        ent_->parent = this;
        neighbor_active_area_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "topologies-supported")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported>();
        ent_->parent = this;
        topologies_supported.append(ent_);
        return ent_;
    }

    if(child_yang_name == "neighbor-per-address-family-data")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData>();
        ent_->parent = this;
        neighbor_per_address_family_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor_active_area_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : topologies_supported.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : neighbor_per_address_family_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
        neighbor_system_id.value_namespace = name_space;
        neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-interface")
    {
        local_interface = value;
        local_interface.value_namespace = name_space;
        local_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-circuit-type")
    {
        neighbor_circuit_type = value;
        neighbor_circuit_type.value_namespace = name_space;
        neighbor_circuit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ietf-nsf-capable-flag")
    {
        neighbor_ietf_nsf_capable_flag = value;
        neighbor_ietf_nsf_capable_flag.value_namespace = name_space;
        neighbor_ietf_nsf_capable_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-media-type")
    {
        neighbor_media_type = value;
        neighbor_media_type.value_namespace = name_space;
        neighbor_media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-holdtime")
    {
        neighbor_holdtime = value;
        neighbor_holdtime.value_namespace = name_space;
        neighbor_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-uptime-valid-flag")
    {
        neighbor_uptime_valid_flag = value;
        neighbor_uptime_valid_flag.value_namespace = name_space;
        neighbor_uptime_valid_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-uptime")
    {
        neighbor_uptime = value;
        neighbor_uptime.value_namespace = name_space;
        neighbor_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-standby")
    {
        nsr_standby = value;
        nsr_standby.value_namespace = name_space;
        nsr_standby.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "local-interface")
    {
        local_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-circuit-type")
    {
        neighbor_circuit_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-ietf-nsf-capable-flag")
    {
        neighbor_ietf_nsf_capable_flag.yfilter = yfilter;
    }
    if(value_path == "neighbor-media-type")
    {
        neighbor_media_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-holdtime")
    {
        neighbor_holdtime.yfilter = yfilter;
    }
    if(value_path == "neighbor-uptime-valid-flag")
    {
        neighbor_uptime_valid_flag.yfilter = yfilter;
    }
    if(value_path == "neighbor-uptime")
    {
        neighbor_uptime.yfilter = yfilter;
    }
    if(value_path == "nsr-standby")
    {
        nsr_standby.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-active-area-address" || name == "topologies-supported" || name == "neighbor-per-address-family-data" || name == "system-id" || name == "interface-name" || name == "neighbor-system-id" || name == "neighbor-snpa" || name == "local-interface" || name == "neighbor-state" || name == "neighbor-circuit-type" || name == "neighbor-ietf-nsf-capable-flag" || name == "neighbor-media-type" || name == "neighbor-holdtime" || name == "neighbor-uptime-valid-flag" || name == "neighbor-uptime" || name == "nsr-standby")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::NeighborActiveAreaAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "neighbor-active-area-address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::~NeighborActiveAreaAddress()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-active-area-address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::TopologiesSupported()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    vrf_name{YType::str, "vrf-name"},
    topology_name{YType::str, "topology-name"}
{

    yang_name = "topologies-supported"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::~TopologiesSupported()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| saf_name.is_set
	|| vrf_name.is_set
	|| topology_name.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies-supported";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "vrf-name" || name == "topology-name")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::NeighborPerAddressFamilyData()
    :
    af_name{YType::enumeration, "af-name"}
        ,
    ipv4(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4>())
    , ipv6(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "neighbor-per-address-family-data"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::~NeighborPerAddressFamilyData()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-per-address-family-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "af-name")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::Ipv4()
    :
    next_hop{YType::str, "next-hop"}
        ,
    adjacency_sid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid>())
    , non_frr_adjacency_sid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid>())
    , interface_address(this, {})
    , underlying_adjacency_sid(this, {})
    , underlying_interface(this, {})
{
    adjacency_sid->parent = this;
    non_frr_adjacency_sid->parent = this;

    yang_name = "ipv4"; yang_parent_name = "neighbor-per-address-family-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::~Ipv4()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<underlying_adjacency_sid.len(); index++)
    {
        if(underlying_adjacency_sid[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<underlying_interface.len(); index++)
    {
        if(underlying_interface[index]->has_data())
            return true;
    }
    return next_hop.is_set
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_data())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<underlying_adjacency_sid.len(); index++)
    {
        if(underlying_adjacency_sid[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<underlying_interface.len(); index++)
    {
        if(underlying_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_operation())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid")
    {
        if(adjacency_sid == nullptr)
        {
            adjacency_sid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid>();
        }
        return adjacency_sid;
    }

    if(child_yang_name == "non-frr-adjacency-sid")
    {
        if(non_frr_adjacency_sid == nullptr)
        {
            non_frr_adjacency_sid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid>();
        }
        return non_frr_adjacency_sid;
    }

    if(child_yang_name == "interface-address")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress>();
        ent_->parent = this;
        interface_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "underlying-adjacency-sid")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid>();
        ent_->parent = this;
        underlying_adjacency_sid.append(ent_);
        return ent_;
    }

    if(child_yang_name == "underlying-interface")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface>();
        ent_->parent = this;
        underlying_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjacency_sid != nullptr)
    {
        _children["adjacency-sid"] = adjacency_sid;
    }

    if(non_frr_adjacency_sid != nullptr)
    {
        _children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
    }

    count_ = 0;
    for (auto ent_ : interface_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : underlying_adjacency_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : underlying_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid" || name == "non-frr-adjacency-sid" || name == "interface-address" || name == "underlying-adjacency-sid" || name == "underlying-interface" || name == "next-hop")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
        ,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup>())
    , adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    adjacency_sid_backup_te->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::~AdjacencySid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::has_data() const
{
    if (is_presence_container) return true;
    return adjacency_sid_value.is_set
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_data())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_value.yfilter)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.yfilter)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup == nullptr)
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup>();
        }
        return adjacency_sid_backup;
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te == nullptr)
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe>();
        }
        return adjacency_sid_backup_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjacency_sid_backup != nullptr)
    {
        _children["adjacency-sid-backup"] = adjacency_sid_backup;
    }

    if(adjacency_sid_backup_te != nullptr)
    {
        _children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
        adjacency_sid_value.value_namespace = name_space;
        adjacency_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid-backup" || name == "adjacency-sid-backup-te" || name == "adjacency-sid-value")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
        ,
    backup_label_stack(this, {})
{

    yang_name = "adjacency-sid-backup"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_label_stack.len(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.len(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack>();
        ent_->parent = this;
        backup_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : backup_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
        ,
    backup_label_stack(this, {})
{

    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_label_stack.len(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.len(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack>();
        ent_->parent = this;
        backup_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : backup_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup-te"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::NonFrrAdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
        ,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup>())
    , adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    adjacency_sid_backup_te->parent = this;

    yang_name = "non-frr-adjacency-sid"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::~NonFrrAdjacencySid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::has_data() const
{
    if (is_presence_container) return true;
    return adjacency_sid_value.is_set
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_data())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_value.yfilter)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-frr-adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.yfilter)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup == nullptr)
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup>();
        }
        return adjacency_sid_backup;
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te == nullptr)
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe>();
        }
        return adjacency_sid_backup_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjacency_sid_backup != nullptr)
    {
        _children["adjacency-sid-backup"] = adjacency_sid_backup;
    }

    if(adjacency_sid_backup_te != nullptr)
    {
        _children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
        adjacency_sid_value.value_namespace = name_space;
        adjacency_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid-backup" || name == "adjacency-sid-backup-te" || name == "adjacency-sid-value")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
        ,
    backup_label_stack(this, {})
{

    yang_name = "adjacency-sid-backup"; yang_parent_name = "non-frr-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_label_stack.len(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.len(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack>();
        ent_->parent = this;
        backup_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : backup_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
        ,
    backup_label_stack(this, {})
{

    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "non-frr-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_label_stack.len(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.len(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack>();
        ent_->parent = this;
        backup_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : backup_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup-te"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::InterfaceAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "interface-address"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::~InterfaceAddress()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::UnderlyingAdjacencySid()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "underlying-adjacency-sid"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::~UnderlyingAdjacencySid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-adjacency-sid";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::UnderlyingInterface()
    :
    interface_index{YType::uint32, "interface-index"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "underlying-interface"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::~UnderlyingInterface()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_index.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_index.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-index" || name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::Ipv6()
    :
    next_hop{YType::str, "next-hop"}
        ,
    adjacency_sid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid>())
    , non_frr_adjacency_sid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid>())
    , end_xsid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid>())
    , non_frr_end_xsid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid>())
    , interface_address(this, {})
    , underlying_adjacency_sid(this, {})
    , underlying_interface(this, {})
{
    adjacency_sid->parent = this;
    non_frr_adjacency_sid->parent = this;
    end_xsid->parent = this;
    non_frr_end_xsid->parent = this;

    yang_name = "ipv6"; yang_parent_name = "neighbor-per-address-family-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::~Ipv6()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<underlying_adjacency_sid.len(); index++)
    {
        if(underlying_adjacency_sid[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<underlying_interface.len(); index++)
    {
        if(underlying_interface[index]->has_data())
            return true;
    }
    return next_hop.is_set
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_data())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_data())
	|| (end_xsid !=  nullptr && end_xsid->has_data())
	|| (non_frr_end_xsid !=  nullptr && non_frr_end_xsid->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<underlying_adjacency_sid.len(); index++)
    {
        if(underlying_adjacency_sid[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<underlying_interface.len(); index++)
    {
        if(underlying_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_operation())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_operation())
	|| (end_xsid !=  nullptr && end_xsid->has_operation())
	|| (non_frr_end_xsid !=  nullptr && non_frr_end_xsid->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid")
    {
        if(adjacency_sid == nullptr)
        {
            adjacency_sid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid>();
        }
        return adjacency_sid;
    }

    if(child_yang_name == "non-frr-adjacency-sid")
    {
        if(non_frr_adjacency_sid == nullptr)
        {
            non_frr_adjacency_sid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid>();
        }
        return non_frr_adjacency_sid;
    }

    if(child_yang_name == "end-xsid")
    {
        if(end_xsid == nullptr)
        {
            end_xsid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid>();
        }
        return end_xsid;
    }

    if(child_yang_name == "non-frr-end-xsid")
    {
        if(non_frr_end_xsid == nullptr)
        {
            non_frr_end_xsid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid>();
        }
        return non_frr_end_xsid;
    }

    if(child_yang_name == "interface-address")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress>();
        ent_->parent = this;
        interface_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "underlying-adjacency-sid")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid>();
        ent_->parent = this;
        underlying_adjacency_sid.append(ent_);
        return ent_;
    }

    if(child_yang_name == "underlying-interface")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface>();
        ent_->parent = this;
        underlying_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjacency_sid != nullptr)
    {
        _children["adjacency-sid"] = adjacency_sid;
    }

    if(non_frr_adjacency_sid != nullptr)
    {
        _children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
    }

    if(end_xsid != nullptr)
    {
        _children["end-xsid"] = end_xsid;
    }

    if(non_frr_end_xsid != nullptr)
    {
        _children["non-frr-end-xsid"] = non_frr_end_xsid;
    }

    count_ = 0;
    for (auto ent_ : interface_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : underlying_adjacency_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : underlying_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid" || name == "non-frr-adjacency-sid" || name == "end-xsid" || name == "non-frr-end-xsid" || name == "interface-address" || name == "underlying-adjacency-sid" || name == "underlying-interface" || name == "next-hop")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
        ,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup>())
    , adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    adjacency_sid_backup_te->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::~AdjacencySid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::has_data() const
{
    if (is_presence_container) return true;
    return adjacency_sid_value.is_set
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_data())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_value.yfilter)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.yfilter)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup == nullptr)
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup>();
        }
        return adjacency_sid_backup;
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te == nullptr)
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe>();
        }
        return adjacency_sid_backup_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjacency_sid_backup != nullptr)
    {
        _children["adjacency-sid-backup"] = adjacency_sid_backup;
    }

    if(adjacency_sid_backup_te != nullptr)
    {
        _children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
        adjacency_sid_value.value_namespace = name_space;
        adjacency_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid-backup" || name == "adjacency-sid-backup-te" || name == "adjacency-sid-value")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
        ,
    backup_label_stack(this, {})
{

    yang_name = "adjacency-sid-backup"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_label_stack.len(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.len(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack>();
        ent_->parent = this;
        backup_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : backup_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
        ,
    backup_label_stack(this, {})
{

    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_label_stack.len(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.len(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack>();
        ent_->parent = this;
        backup_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : backup_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup-te"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::NonFrrAdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
        ,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup>())
    , adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    adjacency_sid_backup_te->parent = this;

    yang_name = "non-frr-adjacency-sid"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::~NonFrrAdjacencySid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::has_data() const
{
    if (is_presence_container) return true;
    return adjacency_sid_value.is_set
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_data())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_value.yfilter)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-frr-adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.yfilter)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup == nullptr)
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup>();
        }
        return adjacency_sid_backup;
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te == nullptr)
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe>();
        }
        return adjacency_sid_backup_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjacency_sid_backup != nullptr)
    {
        _children["adjacency-sid-backup"] = adjacency_sid_backup;
    }

    if(adjacency_sid_backup_te != nullptr)
    {
        _children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
        adjacency_sid_value.value_namespace = name_space;
        adjacency_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid-backup" || name == "adjacency-sid-backup-te" || name == "adjacency-sid-value")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
        ,
    backup_label_stack(this, {})
{

    yang_name = "adjacency-sid-backup"; yang_parent_name = "non-frr-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_label_stack.len(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.len(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack>();
        ent_->parent = this;
        backup_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : backup_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
        ,
    backup_label_stack(this, {})
{

    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "non-frr-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_label_stack.len(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.len(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack>();
        ent_->parent = this;
        backup_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : backup_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup-te"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsid()
    :
    end_xsid_function{YType::uint16, "end-xsid-function"}
        ,
    end_xsid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsid_>())
    , end_xsid_backup(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup>())
{
    end_xsid->parent = this;
    end_xsid_backup->parent = this;

    yang_name = "end-xsid"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::~EndXsid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::has_data() const
{
    if (is_presence_container) return true;
    return end_xsid_function.is_set
	|| (end_xsid !=  nullptr && end_xsid->has_data())
	|| (end_xsid_backup !=  nullptr && end_xsid_backup->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_xsid_function.yfilter)
	|| (end_xsid !=  nullptr && end_xsid->has_operation())
	|| (end_xsid_backup !=  nullptr && end_xsid_backup->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "end-xsid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_xsid_function.is_set || is_set(end_xsid_function.yfilter)) leaf_name_data.push_back(end_xsid_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "end-xsid")
    {
        if(end_xsid == nullptr)
        {
            end_xsid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsid_>();
        }
        return end_xsid;
    }

    if(child_yang_name == "end-xsid-backup")
    {
        if(end_xsid_backup == nullptr)
        {
            end_xsid_backup = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup>();
        }
        return end_xsid_backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(end_xsid != nullptr)
    {
        _children["end-xsid"] = end_xsid;
    }

    if(end_xsid_backup != nullptr)
    {
        _children["end-xsid-backup"] = end_xsid_backup;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-xsid-function")
    {
        end_xsid_function = value;
        end_xsid_function.value_namespace = name_space;
        end_xsid_function.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-xsid-function")
    {
        end_xsid_function.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-xsid" || name == "end-xsid-backup" || name == "end-xsid-function")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsid_::EndXsid_()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "end-xsid"; yang_parent_name = "end-xsid"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsid_::~EndXsid_()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsid_::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsid_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsid_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "end-xsid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsid_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsid_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsid_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsid_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsid_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsid_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::EndXsidBackup()
    :
    backup_stack_size{YType::uint8, "backup-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
        ,
    backup_stack(this, {})
{

    yang_name = "end-xsid-backup"; yang_parent_name = "end-xsid"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::~EndXsidBackup()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_stack.len(); index++)
    {
        if(backup_stack[index]->has_data())
            return true;
    }
    return backup_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_stack.len(); index++)
    {
        if(backup_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "end-xsid-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_stack_size.is_set || is_set(backup_stack_size.yfilter)) leaf_name_data.push_back(backup_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-stack")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::BackupStack>();
        ent_->parent = this;
        backup_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : backup_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-stack-size")
    {
        backup_stack_size = value;
        backup_stack_size.value_namespace = name_space;
        backup_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-stack-size")
    {
        backup_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-stack" || name == "backup-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::BackupStack::BackupStack()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "backup-stack"; yang_parent_name = "end-xsid-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::BackupStack::~BackupStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::BackupStack::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::BackupStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::BackupStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::BackupStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::BackupStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::BackupStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::BackupStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::BackupStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::BackupStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::NonFrrEndXsid()
    :
    end_xsid_function{YType::uint16, "end-xsid-function"}
        ,
    end_xsid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsid>())
    , end_xsid_backup(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup>())
{
    end_xsid->parent = this;
    end_xsid_backup->parent = this;

    yang_name = "non-frr-end-xsid"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::~NonFrrEndXsid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::has_data() const
{
    if (is_presence_container) return true;
    return end_xsid_function.is_set
	|| (end_xsid !=  nullptr && end_xsid->has_data())
	|| (end_xsid_backup !=  nullptr && end_xsid_backup->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_xsid_function.yfilter)
	|| (end_xsid !=  nullptr && end_xsid->has_operation())
	|| (end_xsid_backup !=  nullptr && end_xsid_backup->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-frr-end-xsid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_xsid_function.is_set || is_set(end_xsid_function.yfilter)) leaf_name_data.push_back(end_xsid_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "end-xsid")
    {
        if(end_xsid == nullptr)
        {
            end_xsid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsid>();
        }
        return end_xsid;
    }

    if(child_yang_name == "end-xsid-backup")
    {
        if(end_xsid_backup == nullptr)
        {
            end_xsid_backup = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup>();
        }
        return end_xsid_backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(end_xsid != nullptr)
    {
        _children["end-xsid"] = end_xsid;
    }

    if(end_xsid_backup != nullptr)
    {
        _children["end-xsid-backup"] = end_xsid_backup;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-xsid-function")
    {
        end_xsid_function = value;
        end_xsid_function.value_namespace = name_space;
        end_xsid_function.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-xsid-function")
    {
        end_xsid_function.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-xsid" || name == "end-xsid-backup" || name == "end-xsid-function")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsid::EndXsid()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "end-xsid"; yang_parent_name = "non-frr-end-xsid"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsid::~EndXsid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsid::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "end-xsid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::EndXsidBackup()
    :
    backup_stack_size{YType::uint8, "backup-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
        ,
    backup_stack(this, {})
{

    yang_name = "end-xsid-backup"; yang_parent_name = "non-frr-end-xsid"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::~EndXsidBackup()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_stack.len(); index++)
    {
        if(backup_stack[index]->has_data())
            return true;
    }
    return backup_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_stack.len(); index++)
    {
        if(backup_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "end-xsid-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_stack_size.is_set || is_set(backup_stack_size.yfilter)) leaf_name_data.push_back(backup_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-stack")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::BackupStack>();
        ent_->parent = this;
        backup_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : backup_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-stack-size")
    {
        backup_stack_size = value;
        backup_stack_size.value_namespace = name_space;
        backup_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-stack-size")
    {
        backup_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-stack" || name == "backup-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::BackupStack::BackupStack()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "backup-stack"; yang_parent_name = "end-xsid-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::BackupStack::~BackupStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::BackupStack::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::BackupStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::BackupStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::BackupStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::BackupStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::BackupStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::BackupStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::BackupStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::BackupStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::InterfaceAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "interface-address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::~InterfaceAddress()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::UnderlyingAdjacencySid()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "underlying-adjacency-sid"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::~UnderlyingAdjacencySid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-adjacency-sid";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::UnderlyingInterface()
    :
    interface_index{YType::uint32, "interface-index"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "underlying-interface"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::~UnderlyingInterface()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_index.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_index.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-index" || name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::HostNames::HostNames()
    :
    host_name(this, {"system_id"})
{

    yang_name = "host-names"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::HostNames::~HostNames()
{
}

bool Isis::Instances::Instance::HostNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host_name.len(); index++)
    {
        if(host_name[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::HostNames::has_operation() const
{
    for (std::size_t index=0; index<host_name.len(); index++)
    {
        if(host_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::HostNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::HostNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::HostNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-name")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::HostNames::HostName>();
        ent_->parent = this;
        host_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::HostNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::HostNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::HostNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::HostNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name")
        return true;
    return false;
}

Isis::Instances::Instance::HostNames::HostName::HostName()
    :
    system_id{YType::str, "system-id"},
    local_is_flag{YType::boolean, "local-is-flag"},
    host_levels{YType::enumeration, "host-levels"},
    host_name{YType::str, "host-name"}
{

    yang_name = "host-name"; yang_parent_name = "host-names"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::HostNames::HostName::~HostName()
{
}

bool Isis::Instances::Instance::HostNames::HostName::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| local_is_flag.is_set
	|| host_levels.is_set
	|| host_name.is_set;
}

bool Isis::Instances::Instance::HostNames::HostName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(local_is_flag.yfilter)
	|| ydk::is_set(host_levels.yfilter)
	|| ydk::is_set(host_name.yfilter);
}

std::string Isis::Instances::Instance::HostNames::HostName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-name";
    ADD_KEY_TOKEN(system_id, "system-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::HostNames::HostName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (local_is_flag.is_set || is_set(local_is_flag.yfilter)) leaf_name_data.push_back(local_is_flag.get_name_leafdata());
    if (host_levels.is_set || is_set(host_levels.yfilter)) leaf_name_data.push_back(host_levels.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::HostNames::HostName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::HostNames::HostName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::HostNames::HostName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-is-flag")
    {
        local_is_flag = value;
        local_is_flag.value_namespace = name_space;
        local_is_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-levels")
    {
        host_levels = value;
        host_levels.value_namespace = name_space;
        host_levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::HostNames::HostName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "local-is-flag")
    {
        local_is_flag.yfilter = yfilter;
    }
    if(value_path == "host-levels")
    {
        host_levels.yfilter = yfilter;
    }
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::HostNames::HostName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "local-is-flag" || name == "host-levels" || name == "host-name")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::StatisticsGlobal()
    :
    statistics(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics>())
    , per_area_data(this, {})
{
    statistics->parent = this;

    yang_name = "statistics-global"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::StatisticsGlobal::~StatisticsGlobal()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    return (statistics !=  nullptr && statistics->has_data());
}

bool Isis::Instances::Instance::StatisticsGlobal::has_operation() const
{
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Isis::Instances::Instance::StatisticsGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::StatisticsGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "per-area-data")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData>();
        ent_->parent = this;
        per_area_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::StatisticsGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    count_ = 0;
    for (auto ent_ : per_area_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::StatisticsGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::StatisticsGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::StatisticsGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "per-area-data")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::Statistics()
    :
    fast_psnp_lookup_count{YType::uint32, "fast-psnp-lookup-count"},
    fast_psnp_lookup_hit_count{YType::uint32, "fast-psnp-lookup-hit-count"},
    fast_csnp_lookup_count{YType::uint32, "fast-csnp-lookup-count"},
    fast_csnp_lookup_hit_count{YType::uint32, "fast-csnp-lookup-hit-count"},
    fast_csnp_cache_update_count{YType::uint32, "fast-csnp-cache-update-count"},
    zero_holdtime_lsp_count{YType::uint32, "zero-holdtime-lsp-count"},
    invalid_checksum_lsp_count{YType::uint32, "invalid-checksum-lsp-count"},
    iih_dropped_count{YType::uint32, "iih-dropped-count"},
    lsp_dropped_count{YType::uint32, "lsp-dropped-count"},
    snp_dropped_count{YType::uint32, "snp-dropped-count"},
    maximum_iih_queue_length{YType::uint32, "maximum-iih-queue-length"},
    maximum_pdu_queue_length{YType::uint32, "maximum-pdu-queue-length"},
    pdu_queue_length{YType::uint32, "pdu-queue-length"},
    avg_hello_recv_rate{YType::uint32, "avg-hello-recv-rate"},
    avg_csnp_recv_rate{YType::uint32, "avg-csnp-recv-rate"},
    avg_psnp_recv_rate{YType::uint32, "avg-psnp-recv-rate"},
    avg_lsp_recv_rate{YType::uint32, "avg-lsp-recv-rate"},
    avg_hello_send_rate{YType::uint32, "avg-hello-send-rate"},
    avg_csnp_send_rate{YType::uint32, "avg-csnp-send-rate"},
    avg_psnp_send_rate{YType::uint32, "avg-psnp-send-rate"},
    avg_lsp_send_rate{YType::uint32, "avg-lsp-send-rate"}
        ,
    avg_hello_process_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime>())
    , avg_csnp_process_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime>())
    , avg_psnp_process_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime>())
    , avg_lsp_process_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime>())
    , avg_hello_transmit_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime>())
    , avg_csnp_transmit_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime>())
    , avg_psnp_transmit_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime>())
    , avg_lsp_transmit_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime>())
{
    avg_hello_process_time->parent = this;
    avg_csnp_process_time->parent = this;
    avg_psnp_process_time->parent = this;
    avg_lsp_process_time->parent = this;
    avg_hello_transmit_time->parent = this;
    avg_csnp_transmit_time->parent = this;
    avg_psnp_transmit_time->parent = this;
    avg_lsp_transmit_time->parent = this;

    yang_name = "statistics"; yang_parent_name = "statistics-global"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::~Statistics()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return fast_psnp_lookup_count.is_set
	|| fast_psnp_lookup_hit_count.is_set
	|| fast_csnp_lookup_count.is_set
	|| fast_csnp_lookup_hit_count.is_set
	|| fast_csnp_cache_update_count.is_set
	|| zero_holdtime_lsp_count.is_set
	|| invalid_checksum_lsp_count.is_set
	|| iih_dropped_count.is_set
	|| lsp_dropped_count.is_set
	|| snp_dropped_count.is_set
	|| maximum_iih_queue_length.is_set
	|| maximum_pdu_queue_length.is_set
	|| pdu_queue_length.is_set
	|| avg_hello_recv_rate.is_set
	|| avg_csnp_recv_rate.is_set
	|| avg_psnp_recv_rate.is_set
	|| avg_lsp_recv_rate.is_set
	|| avg_hello_send_rate.is_set
	|| avg_csnp_send_rate.is_set
	|| avg_psnp_send_rate.is_set
	|| avg_lsp_send_rate.is_set
	|| (avg_hello_process_time !=  nullptr && avg_hello_process_time->has_data())
	|| (avg_csnp_process_time !=  nullptr && avg_csnp_process_time->has_data())
	|| (avg_psnp_process_time !=  nullptr && avg_psnp_process_time->has_data())
	|| (avg_lsp_process_time !=  nullptr && avg_lsp_process_time->has_data())
	|| (avg_hello_transmit_time !=  nullptr && avg_hello_transmit_time->has_data())
	|| (avg_csnp_transmit_time !=  nullptr && avg_csnp_transmit_time->has_data())
	|| (avg_psnp_transmit_time !=  nullptr && avg_psnp_transmit_time->has_data())
	|| (avg_lsp_transmit_time !=  nullptr && avg_lsp_transmit_time->has_data());
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_psnp_lookup_count.yfilter)
	|| ydk::is_set(fast_psnp_lookup_hit_count.yfilter)
	|| ydk::is_set(fast_csnp_lookup_count.yfilter)
	|| ydk::is_set(fast_csnp_lookup_hit_count.yfilter)
	|| ydk::is_set(fast_csnp_cache_update_count.yfilter)
	|| ydk::is_set(zero_holdtime_lsp_count.yfilter)
	|| ydk::is_set(invalid_checksum_lsp_count.yfilter)
	|| ydk::is_set(iih_dropped_count.yfilter)
	|| ydk::is_set(lsp_dropped_count.yfilter)
	|| ydk::is_set(snp_dropped_count.yfilter)
	|| ydk::is_set(maximum_iih_queue_length.yfilter)
	|| ydk::is_set(maximum_pdu_queue_length.yfilter)
	|| ydk::is_set(pdu_queue_length.yfilter)
	|| ydk::is_set(avg_hello_recv_rate.yfilter)
	|| ydk::is_set(avg_csnp_recv_rate.yfilter)
	|| ydk::is_set(avg_psnp_recv_rate.yfilter)
	|| ydk::is_set(avg_lsp_recv_rate.yfilter)
	|| ydk::is_set(avg_hello_send_rate.yfilter)
	|| ydk::is_set(avg_csnp_send_rate.yfilter)
	|| ydk::is_set(avg_psnp_send_rate.yfilter)
	|| ydk::is_set(avg_lsp_send_rate.yfilter)
	|| (avg_hello_process_time !=  nullptr && avg_hello_process_time->has_operation())
	|| (avg_csnp_process_time !=  nullptr && avg_csnp_process_time->has_operation())
	|| (avg_psnp_process_time !=  nullptr && avg_psnp_process_time->has_operation())
	|| (avg_lsp_process_time !=  nullptr && avg_lsp_process_time->has_operation())
	|| (avg_hello_transmit_time !=  nullptr && avg_hello_transmit_time->has_operation())
	|| (avg_csnp_transmit_time !=  nullptr && avg_csnp_transmit_time->has_operation())
	|| (avg_psnp_transmit_time !=  nullptr && avg_psnp_transmit_time->has_operation())
	|| (avg_lsp_transmit_time !=  nullptr && avg_lsp_transmit_time->has_operation());
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_psnp_lookup_count.is_set || is_set(fast_psnp_lookup_count.yfilter)) leaf_name_data.push_back(fast_psnp_lookup_count.get_name_leafdata());
    if (fast_psnp_lookup_hit_count.is_set || is_set(fast_psnp_lookup_hit_count.yfilter)) leaf_name_data.push_back(fast_psnp_lookup_hit_count.get_name_leafdata());
    if (fast_csnp_lookup_count.is_set || is_set(fast_csnp_lookup_count.yfilter)) leaf_name_data.push_back(fast_csnp_lookup_count.get_name_leafdata());
    if (fast_csnp_lookup_hit_count.is_set || is_set(fast_csnp_lookup_hit_count.yfilter)) leaf_name_data.push_back(fast_csnp_lookup_hit_count.get_name_leafdata());
    if (fast_csnp_cache_update_count.is_set || is_set(fast_csnp_cache_update_count.yfilter)) leaf_name_data.push_back(fast_csnp_cache_update_count.get_name_leafdata());
    if (zero_holdtime_lsp_count.is_set || is_set(zero_holdtime_lsp_count.yfilter)) leaf_name_data.push_back(zero_holdtime_lsp_count.get_name_leafdata());
    if (invalid_checksum_lsp_count.is_set || is_set(invalid_checksum_lsp_count.yfilter)) leaf_name_data.push_back(invalid_checksum_lsp_count.get_name_leafdata());
    if (iih_dropped_count.is_set || is_set(iih_dropped_count.yfilter)) leaf_name_data.push_back(iih_dropped_count.get_name_leafdata());
    if (lsp_dropped_count.is_set || is_set(lsp_dropped_count.yfilter)) leaf_name_data.push_back(lsp_dropped_count.get_name_leafdata());
    if (snp_dropped_count.is_set || is_set(snp_dropped_count.yfilter)) leaf_name_data.push_back(snp_dropped_count.get_name_leafdata());
    if (maximum_iih_queue_length.is_set || is_set(maximum_iih_queue_length.yfilter)) leaf_name_data.push_back(maximum_iih_queue_length.get_name_leafdata());
    if (maximum_pdu_queue_length.is_set || is_set(maximum_pdu_queue_length.yfilter)) leaf_name_data.push_back(maximum_pdu_queue_length.get_name_leafdata());
    if (pdu_queue_length.is_set || is_set(pdu_queue_length.yfilter)) leaf_name_data.push_back(pdu_queue_length.get_name_leafdata());
    if (avg_hello_recv_rate.is_set || is_set(avg_hello_recv_rate.yfilter)) leaf_name_data.push_back(avg_hello_recv_rate.get_name_leafdata());
    if (avg_csnp_recv_rate.is_set || is_set(avg_csnp_recv_rate.yfilter)) leaf_name_data.push_back(avg_csnp_recv_rate.get_name_leafdata());
    if (avg_psnp_recv_rate.is_set || is_set(avg_psnp_recv_rate.yfilter)) leaf_name_data.push_back(avg_psnp_recv_rate.get_name_leafdata());
    if (avg_lsp_recv_rate.is_set || is_set(avg_lsp_recv_rate.yfilter)) leaf_name_data.push_back(avg_lsp_recv_rate.get_name_leafdata());
    if (avg_hello_send_rate.is_set || is_set(avg_hello_send_rate.yfilter)) leaf_name_data.push_back(avg_hello_send_rate.get_name_leafdata());
    if (avg_csnp_send_rate.is_set || is_set(avg_csnp_send_rate.yfilter)) leaf_name_data.push_back(avg_csnp_send_rate.get_name_leafdata());
    if (avg_psnp_send_rate.is_set || is_set(avg_psnp_send_rate.yfilter)) leaf_name_data.push_back(avg_psnp_send_rate.get_name_leafdata());
    if (avg_lsp_send_rate.is_set || is_set(avg_lsp_send_rate.yfilter)) leaf_name_data.push_back(avg_lsp_send_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "avg-hello-process-time")
    {
        if(avg_hello_process_time == nullptr)
        {
            avg_hello_process_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime>();
        }
        return avg_hello_process_time;
    }

    if(child_yang_name == "avg-csnp-process-time")
    {
        if(avg_csnp_process_time == nullptr)
        {
            avg_csnp_process_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime>();
        }
        return avg_csnp_process_time;
    }

    if(child_yang_name == "avg-psnp-process-time")
    {
        if(avg_psnp_process_time == nullptr)
        {
            avg_psnp_process_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime>();
        }
        return avg_psnp_process_time;
    }

    if(child_yang_name == "avg-lsp-process-time")
    {
        if(avg_lsp_process_time == nullptr)
        {
            avg_lsp_process_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime>();
        }
        return avg_lsp_process_time;
    }

    if(child_yang_name == "avg-hello-transmit-time")
    {
        if(avg_hello_transmit_time == nullptr)
        {
            avg_hello_transmit_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime>();
        }
        return avg_hello_transmit_time;
    }

    if(child_yang_name == "avg-csnp-transmit-time")
    {
        if(avg_csnp_transmit_time == nullptr)
        {
            avg_csnp_transmit_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime>();
        }
        return avg_csnp_transmit_time;
    }

    if(child_yang_name == "avg-psnp-transmit-time")
    {
        if(avg_psnp_transmit_time == nullptr)
        {
            avg_psnp_transmit_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime>();
        }
        return avg_psnp_transmit_time;
    }

    if(child_yang_name == "avg-lsp-transmit-time")
    {
        if(avg_lsp_transmit_time == nullptr)
        {
            avg_lsp_transmit_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime>();
        }
        return avg_lsp_transmit_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(avg_hello_process_time != nullptr)
    {
        _children["avg-hello-process-time"] = avg_hello_process_time;
    }

    if(avg_csnp_process_time != nullptr)
    {
        _children["avg-csnp-process-time"] = avg_csnp_process_time;
    }

    if(avg_psnp_process_time != nullptr)
    {
        _children["avg-psnp-process-time"] = avg_psnp_process_time;
    }

    if(avg_lsp_process_time != nullptr)
    {
        _children["avg-lsp-process-time"] = avg_lsp_process_time;
    }

    if(avg_hello_transmit_time != nullptr)
    {
        _children["avg-hello-transmit-time"] = avg_hello_transmit_time;
    }

    if(avg_csnp_transmit_time != nullptr)
    {
        _children["avg-csnp-transmit-time"] = avg_csnp_transmit_time;
    }

    if(avg_psnp_transmit_time != nullptr)
    {
        _children["avg-psnp-transmit-time"] = avg_psnp_transmit_time;
    }

    if(avg_lsp_transmit_time != nullptr)
    {
        _children["avg-lsp-transmit-time"] = avg_lsp_transmit_time;
    }

    return _children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-psnp-lookup-count")
    {
        fast_psnp_lookup_count = value;
        fast_psnp_lookup_count.value_namespace = name_space;
        fast_psnp_lookup_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-psnp-lookup-hit-count")
    {
        fast_psnp_lookup_hit_count = value;
        fast_psnp_lookup_hit_count.value_namespace = name_space;
        fast_psnp_lookup_hit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-csnp-lookup-count")
    {
        fast_csnp_lookup_count = value;
        fast_csnp_lookup_count.value_namespace = name_space;
        fast_csnp_lookup_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-csnp-lookup-hit-count")
    {
        fast_csnp_lookup_hit_count = value;
        fast_csnp_lookup_hit_count.value_namespace = name_space;
        fast_csnp_lookup_hit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-csnp-cache-update-count")
    {
        fast_csnp_cache_update_count = value;
        fast_csnp_cache_update_count.value_namespace = name_space;
        fast_csnp_cache_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-holdtime-lsp-count")
    {
        zero_holdtime_lsp_count = value;
        zero_holdtime_lsp_count.value_namespace = name_space;
        zero_holdtime_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-checksum-lsp-count")
    {
        invalid_checksum_lsp_count = value;
        invalid_checksum_lsp_count.value_namespace = name_space;
        invalid_checksum_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iih-dropped-count")
    {
        iih_dropped_count = value;
        iih_dropped_count.value_namespace = name_space;
        iih_dropped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-dropped-count")
    {
        lsp_dropped_count = value;
        lsp_dropped_count.value_namespace = name_space;
        lsp_dropped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snp-dropped-count")
    {
        snp_dropped_count = value;
        snp_dropped_count.value_namespace = name_space;
        snp_dropped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-iih-queue-length")
    {
        maximum_iih_queue_length = value;
        maximum_iih_queue_length.value_namespace = name_space;
        maximum_iih_queue_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-pdu-queue-length")
    {
        maximum_pdu_queue_length = value;
        maximum_pdu_queue_length.value_namespace = name_space;
        maximum_pdu_queue_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-queue-length")
    {
        pdu_queue_length = value;
        pdu_queue_length.value_namespace = name_space;
        pdu_queue_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-hello-recv-rate")
    {
        avg_hello_recv_rate = value;
        avg_hello_recv_rate.value_namespace = name_space;
        avg_hello_recv_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-csnp-recv-rate")
    {
        avg_csnp_recv_rate = value;
        avg_csnp_recv_rate.value_namespace = name_space;
        avg_csnp_recv_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-psnp-recv-rate")
    {
        avg_psnp_recv_rate = value;
        avg_psnp_recv_rate.value_namespace = name_space;
        avg_psnp_recv_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-lsp-recv-rate")
    {
        avg_lsp_recv_rate = value;
        avg_lsp_recv_rate.value_namespace = name_space;
        avg_lsp_recv_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-hello-send-rate")
    {
        avg_hello_send_rate = value;
        avg_hello_send_rate.value_namespace = name_space;
        avg_hello_send_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-csnp-send-rate")
    {
        avg_csnp_send_rate = value;
        avg_csnp_send_rate.value_namespace = name_space;
        avg_csnp_send_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-psnp-send-rate")
    {
        avg_psnp_send_rate = value;
        avg_psnp_send_rate.value_namespace = name_space;
        avg_psnp_send_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-lsp-send-rate")
    {
        avg_lsp_send_rate = value;
        avg_lsp_send_rate.value_namespace = name_space;
        avg_lsp_send_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-psnp-lookup-count")
    {
        fast_psnp_lookup_count.yfilter = yfilter;
    }
    if(value_path == "fast-psnp-lookup-hit-count")
    {
        fast_psnp_lookup_hit_count.yfilter = yfilter;
    }
    if(value_path == "fast-csnp-lookup-count")
    {
        fast_csnp_lookup_count.yfilter = yfilter;
    }
    if(value_path == "fast-csnp-lookup-hit-count")
    {
        fast_csnp_lookup_hit_count.yfilter = yfilter;
    }
    if(value_path == "fast-csnp-cache-update-count")
    {
        fast_csnp_cache_update_count.yfilter = yfilter;
    }
    if(value_path == "zero-holdtime-lsp-count")
    {
        zero_holdtime_lsp_count.yfilter = yfilter;
    }
    if(value_path == "invalid-checksum-lsp-count")
    {
        invalid_checksum_lsp_count.yfilter = yfilter;
    }
    if(value_path == "iih-dropped-count")
    {
        iih_dropped_count.yfilter = yfilter;
    }
    if(value_path == "lsp-dropped-count")
    {
        lsp_dropped_count.yfilter = yfilter;
    }
    if(value_path == "snp-dropped-count")
    {
        snp_dropped_count.yfilter = yfilter;
    }
    if(value_path == "maximum-iih-queue-length")
    {
        maximum_iih_queue_length.yfilter = yfilter;
    }
    if(value_path == "maximum-pdu-queue-length")
    {
        maximum_pdu_queue_length.yfilter = yfilter;
    }
    if(value_path == "pdu-queue-length")
    {
        pdu_queue_length.yfilter = yfilter;
    }
    if(value_path == "avg-hello-recv-rate")
    {
        avg_hello_recv_rate.yfilter = yfilter;
    }
    if(value_path == "avg-csnp-recv-rate")
    {
        avg_csnp_recv_rate.yfilter = yfilter;
    }
    if(value_path == "avg-psnp-recv-rate")
    {
        avg_psnp_recv_rate.yfilter = yfilter;
    }
    if(value_path == "avg-lsp-recv-rate")
    {
        avg_lsp_recv_rate.yfilter = yfilter;
    }
    if(value_path == "avg-hello-send-rate")
    {
        avg_hello_send_rate.yfilter = yfilter;
    }
    if(value_path == "avg-csnp-send-rate")
    {
        avg_csnp_send_rate.yfilter = yfilter;
    }
    if(value_path == "avg-psnp-send-rate")
    {
        avg_psnp_send_rate.yfilter = yfilter;
    }
    if(value_path == "avg-lsp-send-rate")
    {
        avg_lsp_send_rate.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avg-hello-process-time" || name == "avg-csnp-process-time" || name == "avg-psnp-process-time" || name == "avg-lsp-process-time" || name == "avg-hello-transmit-time" || name == "avg-csnp-transmit-time" || name == "avg-psnp-transmit-time" || name == "avg-lsp-transmit-time" || name == "fast-psnp-lookup-count" || name == "fast-psnp-lookup-hit-count" || name == "fast-csnp-lookup-count" || name == "fast-csnp-lookup-hit-count" || name == "fast-csnp-cache-update-count" || name == "zero-holdtime-lsp-count" || name == "invalid-checksum-lsp-count" || name == "iih-dropped-count" || name == "lsp-dropped-count" || name == "snp-dropped-count" || name == "maximum-iih-queue-length" || name == "maximum-pdu-queue-length" || name == "pdu-queue-length" || name == "avg-hello-recv-rate" || name == "avg-csnp-recv-rate" || name == "avg-psnp-recv-rate" || name == "avg-lsp-recv-rate" || name == "avg-hello-send-rate" || name == "avg-csnp-send-rate" || name == "avg-psnp-send-rate" || name == "avg-lsp-send-rate")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::AvgHelloProcessTime()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "avg-hello-process-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::~AvgHelloProcessTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-hello-process-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::AvgCsnpProcessTime()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "avg-csnp-process-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::~AvgCsnpProcessTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-csnp-process-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::AvgPsnpProcessTime()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "avg-psnp-process-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::~AvgPsnpProcessTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-psnp-process-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::AvgLspProcessTime()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "avg-lsp-process-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::~AvgLspProcessTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-lsp-process-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::AvgHelloTransmitTime()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "avg-hello-transmit-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::~AvgHelloTransmitTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-hello-transmit-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::AvgCsnpTransmitTime()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "avg-csnp-transmit-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::~AvgCsnpTransmitTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-csnp-transmit-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::AvgPsnpTransmitTime()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "avg-psnp-transmit-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::~AvgPsnpTransmitTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-psnp-transmit-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::AvgLspTransmitTime()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "avg-lsp-transmit-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::~AvgLspTransmitTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-lsp-transmit-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerAreaData()
    :
    level{YType::enumeration, "level"}
        ,
    statistics(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics>())
    , per_topology_data(this, {})
{
    statistics->parent = this;

    yang_name = "per-area-data"; yang_parent_name = "statistics-global"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<per_topology_data.len(); index++)
    {
        if(per_topology_data[index]->has_data())
            return true;
    }
    return level.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::has_operation() const
{
    for (std::size_t index=0; index<per_topology_data.len(); index++)
    {
        if(per_topology_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::PerAreaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "per-topology-data")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData>();
        ent_->parent = this;
        per_topology_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    count_ = 0;
    for (auto ent_ : per_topology_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "per-topology-data" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::Statistics()
    :
    system_lsp_build_count{YType::uint32, "system-lsp-build-count"},
    system_lsp_refresh_count{YType::uint32, "system-lsp-refresh-count"}
{

    yang_name = "statistics"; yang_parent_name = "per-area-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::~Statistics()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return system_lsp_build_count.is_set
	|| system_lsp_refresh_count.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_lsp_build_count.yfilter)
	|| ydk::is_set(system_lsp_refresh_count.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_lsp_build_count.is_set || is_set(system_lsp_build_count.yfilter)) leaf_name_data.push_back(system_lsp_build_count.get_name_leafdata());
    if (system_lsp_refresh_count.is_set || is_set(system_lsp_refresh_count.yfilter)) leaf_name_data.push_back(system_lsp_refresh_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-lsp-build-count")
    {
        system_lsp_build_count = value;
        system_lsp_build_count.value_namespace = name_space;
        system_lsp_build_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-lsp-refresh-count")
    {
        system_lsp_refresh_count = value;
        system_lsp_refresh_count.value_namespace = name_space;
        system_lsp_refresh_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-lsp-build-count")
    {
        system_lsp_build_count.yfilter = yfilter;
    }
    if(value_path == "system-lsp-refresh-count")
    {
        system_lsp_refresh_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-lsp-build-count" || name == "system-lsp-refresh-count")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::PerTopologyData()
    :
    id(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id>())
    , statistics(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics>())
{
    id->parent = this;
    statistics->parent = this;

    yang_name = "per-topology-data"; yang_parent_name = "per-area-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::~PerTopologyData()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::has_data() const
{
    if (is_presence_container) return true;
    return (id !=  nullptr && id->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-topology-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id>();
        }
        return id;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(id != nullptr)
    {
        _children["id"] = id;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "statistics")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    vrf_name{YType::str, "vrf-name"},
    topology_name{YType::str, "topology-name"}
{

    yang_name = "id"; yang_parent_name = "per-topology-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::~Id()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| saf_name.is_set
	|| vrf_name.is_set
	|| topology_name.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "vrf-name" || name == "topology-name")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::Statistics()
    :
    spf_run_count{YType::uint32, "spf-run-count"},
    ispf_run_count{YType::uint32, "ispf-run-count"},
    nhc_run_count{YType::uint32, "nhc-run-count"},
    prc_run_count{YType::uint32, "prc-run-count"},
    periodic_run_count{YType::uint32, "periodic-run-count"}
{

    yang_name = "statistics"; yang_parent_name = "per-topology-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::~Statistics()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return spf_run_count.is_set
	|| ispf_run_count.is_set
	|| nhc_run_count.is_set
	|| prc_run_count.is_set
	|| periodic_run_count.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spf_run_count.yfilter)
	|| ydk::is_set(ispf_run_count.yfilter)
	|| ydk::is_set(nhc_run_count.yfilter)
	|| ydk::is_set(prc_run_count.yfilter)
	|| ydk::is_set(periodic_run_count.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_run_count.is_set || is_set(spf_run_count.yfilter)) leaf_name_data.push_back(spf_run_count.get_name_leafdata());
    if (ispf_run_count.is_set || is_set(ispf_run_count.yfilter)) leaf_name_data.push_back(ispf_run_count.get_name_leafdata());
    if (nhc_run_count.is_set || is_set(nhc_run_count.yfilter)) leaf_name_data.push_back(nhc_run_count.get_name_leafdata());
    if (prc_run_count.is_set || is_set(prc_run_count.yfilter)) leaf_name_data.push_back(prc_run_count.get_name_leafdata());
    if (periodic_run_count.is_set || is_set(periodic_run_count.yfilter)) leaf_name_data.push_back(periodic_run_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-run-count")
    {
        spf_run_count = value;
        spf_run_count.value_namespace = name_space;
        spf_run_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ispf-run-count")
    {
        ispf_run_count = value;
        ispf_run_count.value_namespace = name_space;
        ispf_run_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhc-run-count")
    {
        nhc_run_count = value;
        nhc_run_count.value_namespace = name_space;
        nhc_run_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prc-run-count")
    {
        prc_run_count = value;
        prc_run_count.value_namespace = name_space;
        prc_run_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-run-count")
    {
        periodic_run_count = value;
        periodic_run_count.value_namespace = name_space;
        periodic_run_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-run-count")
    {
        spf_run_count.yfilter = yfilter;
    }
    if(value_path == "ispf-run-count")
    {
        ispf_run_count.yfilter = yfilter;
    }
    if(value_path == "nhc-run-count")
    {
        nhc_run_count.yfilter = yfilter;
    }
    if(value_path == "prc-run-count")
    {
        prc_run_count.yfilter = yfilter;
    }
    if(value_path == "periodic-run-count")
    {
        periodic_run_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-run-count" || name == "ispf-run-count" || name == "nhc-run-count" || name == "prc-run-count" || name == "periodic-run-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Levels()
    :
    level(this, {"level"})
{

    yang_name = "levels"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::~Levels()
{
}

bool Isis::Instances::Instance::Levels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Levels::has_operation() const
{
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Levels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "levels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Levels::Level>();
        ent_->parent = this;
        level.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : level.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Levels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Level()
    :
    level{YType::enumeration, "level"}
        ,
    adjacency_log(std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog>())
    , lsp_table_summary(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary>())
    , adjacencies(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies>())
    , detailed_lsps(std::make_shared<Isis::Instances::Instance::Levels::Level::DetailedLsps>())
    , lsps(std::make_shared<Isis::Instances::Instance::Levels::Level::Lsps>())
    , lsp_log(std::make_shared<Isis::Instances::Instance::Levels::Level::LspLog>())
    , database_log(std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog>())
{
    adjacency_log->parent = this;
    lsp_table_summary->parent = this;
    adjacencies->parent = this;
    detailed_lsps->parent = this;
    lsps->parent = this;
    lsp_log->parent = this;
    database_log->parent = this;

    yang_name = "level"; yang_parent_name = "levels"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::~Level()
{
}

bool Isis::Instances::Instance::Levels::Level::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| (adjacency_log !=  nullptr && adjacency_log->has_data())
	|| (lsp_table_summary !=  nullptr && lsp_table_summary->has_data())
	|| (adjacencies !=  nullptr && adjacencies->has_data())
	|| (detailed_lsps !=  nullptr && detailed_lsps->has_data())
	|| (lsps !=  nullptr && lsps->has_data())
	|| (lsp_log !=  nullptr && lsp_log->has_data())
	|| (database_log !=  nullptr && database_log->has_data());
}

bool Isis::Instances::Instance::Levels::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (adjacency_log !=  nullptr && adjacency_log->has_operation())
	|| (lsp_table_summary !=  nullptr && lsp_table_summary->has_operation())
	|| (adjacencies !=  nullptr && adjacencies->has_operation())
	|| (detailed_lsps !=  nullptr && detailed_lsps->has_operation())
	|| (lsps !=  nullptr && lsps->has_operation())
	|| (lsp_log !=  nullptr && lsp_log->has_operation())
	|| (database_log !=  nullptr && database_log->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-log")
    {
        if(adjacency_log == nullptr)
        {
            adjacency_log = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog>();
        }
        return adjacency_log;
    }

    if(child_yang_name == "lsp-table-summary")
    {
        if(lsp_table_summary == nullptr)
        {
            lsp_table_summary = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary>();
        }
        return lsp_table_summary;
    }

    if(child_yang_name == "adjacencies")
    {
        if(adjacencies == nullptr)
        {
            adjacencies = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies>();
        }
        return adjacencies;
    }

    if(child_yang_name == "detailed-lsps")
    {
        if(detailed_lsps == nullptr)
        {
            detailed_lsps = std::make_shared<Isis::Instances::Instance::Levels::Level::DetailedLsps>();
        }
        return detailed_lsps;
    }

    if(child_yang_name == "lsps")
    {
        if(lsps == nullptr)
        {
            lsps = std::make_shared<Isis::Instances::Instance::Levels::Level::Lsps>();
        }
        return lsps;
    }

    if(child_yang_name == "lsp-log")
    {
        if(lsp_log == nullptr)
        {
            lsp_log = std::make_shared<Isis::Instances::Instance::Levels::Level::LspLog>();
        }
        return lsp_log;
    }

    if(child_yang_name == "database-log")
    {
        if(database_log == nullptr)
        {
            database_log = std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog>();
        }
        return database_log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjacency_log != nullptr)
    {
        _children["adjacency-log"] = adjacency_log;
    }

    if(lsp_table_summary != nullptr)
    {
        _children["lsp-table-summary"] = lsp_table_summary;
    }

    if(adjacencies != nullptr)
    {
        _children["adjacencies"] = adjacencies;
    }

    if(detailed_lsps != nullptr)
    {
        _children["detailed-lsps"] = detailed_lsps;
    }

    if(lsps != nullptr)
    {
        _children["lsps"] = lsps;
    }

    if(lsp_log != nullptr)
    {
        _children["lsp-log"] = lsp_log;
    }

    if(database_log != nullptr)
    {
        _children["database-log"] = database_log;
    }

    return _children;
}

void Isis::Instances::Instance::Levels::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-log" || name == "lsp-table-summary" || name == "adjacencies" || name == "detailed-lsps" || name == "lsps" || name == "lsp-log" || name == "database-log" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::AdjacencyLog()
    :
    log_entry(this, {})
{

    yang_name = "adjacency-log"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::~AdjacencyLog()
{
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_entry.len(); index++)
    {
        if(log_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::has_operation() const
{
    for (std::size_t index=0; index<log_entry.len(); index++)
    {
        if(log_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::AdjacencyLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::AdjacencyLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-entry")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry>();
        ent_->parent = this;
        log_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::AdjacencyLog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : log_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-entry")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::LogEntry()
    :
    adj_log_neighbor_system_id{YType::str, "adj-log-neighbor-system-id"},
    interface_name{YType::str, "interface-name"},
    prev_adj_state{YType::enumeration, "prev-adj-state"},
    cur_adj_state{YType::enumeration, "cur-adj-state"},
    state_reason{YType::enumeration, "state-reason"}
        ,
    generic_data(std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData>())
    , adjacency_per_topology_change(this, {})
{
    generic_data->parent = this;

    yang_name = "log-entry"; yang_parent_name = "adjacency-log"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::~LogEntry()
{
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjacency_per_topology_change.len(); index++)
    {
        if(adjacency_per_topology_change[index]->has_data())
            return true;
    }
    return adj_log_neighbor_system_id.is_set
	|| interface_name.is_set
	|| prev_adj_state.is_set
	|| cur_adj_state.is_set
	|| state_reason.is_set
	|| (generic_data !=  nullptr && generic_data->has_data());
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::has_operation() const
{
    for (std::size_t index=0; index<adjacency_per_topology_change.len(); index++)
    {
        if(adjacency_per_topology_change[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(adj_log_neighbor_system_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(prev_adj_state.yfilter)
	|| ydk::is_set(cur_adj_state.yfilter)
	|| ydk::is_set(state_reason.yfilter)
	|| (generic_data !=  nullptr && generic_data->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adj_log_neighbor_system_id.is_set || is_set(adj_log_neighbor_system_id.yfilter)) leaf_name_data.push_back(adj_log_neighbor_system_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (prev_adj_state.is_set || is_set(prev_adj_state.yfilter)) leaf_name_data.push_back(prev_adj_state.get_name_leafdata());
    if (cur_adj_state.is_set || is_set(cur_adj_state.yfilter)) leaf_name_data.push_back(cur_adj_state.get_name_leafdata());
    if (state_reason.is_set || is_set(state_reason.yfilter)) leaf_name_data.push_back(state_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-data")
    {
        if(generic_data == nullptr)
        {
            generic_data = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData>();
        }
        return generic_data;
    }

    if(child_yang_name == "adjacency-per-topology-change")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange>();
        ent_->parent = this;
        adjacency_per_topology_change.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(generic_data != nullptr)
    {
        _children["generic-data"] = generic_data;
    }

    count_ = 0;
    for (auto ent_ : adjacency_per_topology_change.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adj-log-neighbor-system-id")
    {
        adj_log_neighbor_system_id = value;
        adj_log_neighbor_system_id.value_namespace = name_space;
        adj_log_neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prev-adj-state")
    {
        prev_adj_state = value;
        prev_adj_state.value_namespace = name_space;
        prev_adj_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cur-adj-state")
    {
        cur_adj_state = value;
        cur_adj_state.value_namespace = name_space;
        cur_adj_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-reason")
    {
        state_reason = value;
        state_reason.value_namespace = name_space;
        state_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adj-log-neighbor-system-id")
    {
        adj_log_neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "prev-adj-state")
    {
        prev_adj_state.yfilter = yfilter;
    }
    if(value_path == "cur-adj-state")
    {
        cur_adj_state.yfilter = yfilter;
    }
    if(value_path == "state-reason")
    {
        state_reason.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-data" || name == "adjacency-per-topology-change" || name == "adj-log-neighbor-system-id" || name == "interface-name" || name == "prev-adj-state" || name == "cur-adj-state" || name == "state-reason")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;

    yang_name = "generic-data"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::~GenericData()
{
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::has_data() const
{
    if (is_presence_container) return true;
    return (timestamp !=  nullptr && timestamp->has_data());
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::has_operation() const
{
    return is_set(yfilter)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp>();
        }
        return timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(timestamp != nullptr)
    {
        _children["timestamp"] = timestamp;
    }

    return _children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "timestamp"; yang_parent_name = "generic-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::AdjacencyPerTopologyChange()
    :
    change{YType::enumeration, "change"}
        ,
    id(std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id>())
{
    id->parent = this;

    yang_name = "adjacency-per-topology-change"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::~AdjacencyPerTopologyChange()
{
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::has_data() const
{
    if (is_presence_container) return true;
    return change.is_set
	|| (id !=  nullptr && id->has_data());
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change.yfilter)
	|| (id !=  nullptr && id->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-per-topology-change";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change.is_set || is_set(change.yfilter)) leaf_name_data.push_back(change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(id != nullptr)
    {
        _children["id"] = id;
    }

    return _children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change")
    {
        change = value;
        change.value_namespace = name_space;
        change.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change")
    {
        change.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "change")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    vrf_name{YType::str, "vrf-name"},
    topology_name{YType::str, "topology-name"}
{

    yang_name = "id"; yang_parent_name = "adjacency-per-topology-change"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::~Id()
{
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| saf_name.is_set
	|| vrf_name.is_set
	|| topology_name.is_set;
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "vrf-name" || name == "topology-name")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::LspTableSummary()
    :
    fragment0lsp_stats(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats>())
    , all_fragment_lsp_stats(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats>())
{
    fragment0lsp_stats->parent = this;
    all_fragment_lsp_stats->parent = this;

    yang_name = "lsp-table-summary"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::~LspTableSummary()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::has_data() const
{
    if (is_presence_container) return true;
    return (fragment0lsp_stats !=  nullptr && fragment0lsp_stats->has_data())
	|| (all_fragment_lsp_stats !=  nullptr && all_fragment_lsp_stats->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::has_operation() const
{
    return is_set(yfilter)
	|| (fragment0lsp_stats !=  nullptr && fragment0lsp_stats->has_operation())
	|| (all_fragment_lsp_stats !=  nullptr && all_fragment_lsp_stats->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-table-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fragment0lsp-stats")
    {
        if(fragment0lsp_stats == nullptr)
        {
            fragment0lsp_stats = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats>();
        }
        return fragment0lsp_stats;
    }

    if(child_yang_name == "all-fragment-lsp-stats")
    {
        if(all_fragment_lsp_stats == nullptr)
        {
            all_fragment_lsp_stats = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats>();
        }
        return all_fragment_lsp_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fragment0lsp_stats != nullptr)
    {
        _children["fragment0lsp-stats"] = fragment0lsp_stats;
    }

    if(all_fragment_lsp_stats != nullptr)
    {
        _children["all-fragment-lsp-stats"] = all_fragment_lsp_stats;
    }

    return _children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fragment0lsp-stats" || name == "all-fragment-lsp-stats")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::Fragment0lspStats()
    :
    node_counters(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters>())
    , per_topology_counter(this, {})
{
    node_counters->parent = this;

    yang_name = "fragment0lsp-stats"; yang_parent_name = "lsp-table-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::~Fragment0lspStats()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<per_topology_counter.len(); index++)
    {
        if(per_topology_counter[index]->has_data())
            return true;
    }
    return (node_counters !=  nullptr && node_counters->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::has_operation() const
{
    for (std::size_t index=0; index<per_topology_counter.len(); index++)
    {
        if(per_topology_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (node_counters !=  nullptr && node_counters->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragment0lsp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-counters")
    {
        if(node_counters == nullptr)
        {
            node_counters = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters>();
        }
        return node_counters;
    }

    if(child_yang_name == "per-topology-counter")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter>();
        ent_->parent = this;
        per_topology_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_counters != nullptr)
    {
        _children["node-counters"] = node_counters;
    }

    count_ = 0;
    for (auto ent_ : per_topology_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-counters" || name == "per-topology-counter")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::NodeCounters()
    :
    route_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::RouteLspCount>())
    , pseudo_node_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::PseudoNodeLspCount>())
{
    route_lsp_count->parent = this;
    pseudo_node_lsp_count->parent = this;

    yang_name = "node-counters"; yang_parent_name = "fragment0lsp-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::~NodeCounters()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::has_data() const
{
    if (is_presence_container) return true;
    return (route_lsp_count !=  nullptr && route_lsp_count->has_data())
	|| (pseudo_node_lsp_count !=  nullptr && pseudo_node_lsp_count->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::has_operation() const
{
    return is_set(yfilter)
	|| (route_lsp_count !=  nullptr && route_lsp_count->has_operation())
	|| (pseudo_node_lsp_count !=  nullptr && pseudo_node_lsp_count->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-lsp-count")
    {
        if(route_lsp_count == nullptr)
        {
            route_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::RouteLspCount>();
        }
        return route_lsp_count;
    }

    if(child_yang_name == "pseudo-node-lsp-count")
    {
        if(pseudo_node_lsp_count == nullptr)
        {
            pseudo_node_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::PseudoNodeLspCount>();
        }
        return pseudo_node_lsp_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_lsp_count != nullptr)
    {
        _children["route-lsp-count"] = route_lsp_count;
    }

    if(pseudo_node_lsp_count != nullptr)
    {
        _children["pseudo-node-lsp-count"] = pseudo_node_lsp_count;
    }

    return _children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-lsp-count" || name == "pseudo-node-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::RouteLspCount::RouteLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{

    yang_name = "route-lsp-count"; yang_parent_name = "node-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::RouteLspCount::~RouteLspCount()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::RouteLspCount::has_data() const
{
    if (is_presence_container) return true;
    return active_lsp_count.is_set
	|| purged_lsp_count.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::RouteLspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_count.yfilter)
	|| ydk::is_set(purged_lsp_count.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::RouteLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::RouteLspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.yfilter)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.yfilter)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::RouteLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::RouteLspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::RouteLspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
        active_lsp_count.value_namespace = name_space;
        active_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
        purged_lsp_count.value_namespace = name_space;
        purged_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::RouteLspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count.yfilter = yfilter;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::RouteLspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-count" || name == "purged-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::PseudoNodeLspCount::PseudoNodeLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{

    yang_name = "pseudo-node-lsp-count"; yang_parent_name = "node-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::PseudoNodeLspCount::~PseudoNodeLspCount()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::PseudoNodeLspCount::has_data() const
{
    if (is_presence_container) return true;
    return active_lsp_count.is_set
	|| purged_lsp_count.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::PseudoNodeLspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_count.yfilter)
	|| ydk::is_set(purged_lsp_count.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::PseudoNodeLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-node-lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::PseudoNodeLspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.yfilter)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.yfilter)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::PseudoNodeLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::PseudoNodeLspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::PseudoNodeLspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
        active_lsp_count.value_namespace = name_space;
        active_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
        purged_lsp_count.value_namespace = name_space;
        purged_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::PseudoNodeLspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count.yfilter = yfilter;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::PseudoNodeLspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-count" || name == "purged-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::PerTopologyCounter()
    :
    id(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::Id>())
    , overloaded_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::OverloadedLspCount>())
    , attached_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::AttachedLspCount>())
{
    id->parent = this;
    overloaded_lsp_count->parent = this;
    attached_lsp_count->parent = this;

    yang_name = "per-topology-counter"; yang_parent_name = "fragment0lsp-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::~PerTopologyCounter()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::has_data() const
{
    if (is_presence_container) return true;
    return (id !=  nullptr && id->has_data())
	|| (overloaded_lsp_count !=  nullptr && overloaded_lsp_count->has_data())
	|| (attached_lsp_count !=  nullptr && attached_lsp_count->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (overloaded_lsp_count !=  nullptr && overloaded_lsp_count->has_operation())
	|| (attached_lsp_count !=  nullptr && attached_lsp_count->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-topology-counter";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::Id>();
        }
        return id;
    }

    if(child_yang_name == "overloaded-lsp-count")
    {
        if(overloaded_lsp_count == nullptr)
        {
            overloaded_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::OverloadedLspCount>();
        }
        return overloaded_lsp_count;
    }

    if(child_yang_name == "attached-lsp-count")
    {
        if(attached_lsp_count == nullptr)
        {
            attached_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::AttachedLspCount>();
        }
        return attached_lsp_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(id != nullptr)
    {
        _children["id"] = id;
    }

    if(overloaded_lsp_count != nullptr)
    {
        _children["overloaded-lsp-count"] = overloaded_lsp_count;
    }

    if(attached_lsp_count != nullptr)
    {
        _children["attached-lsp-count"] = attached_lsp_count;
    }

    return _children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "overloaded-lsp-count" || name == "attached-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    vrf_name{YType::str, "vrf-name"},
    topology_name{YType::str, "topology-name"}
{

    yang_name = "id"; yang_parent_name = "per-topology-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::Id::~Id()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::Id::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| saf_name.is_set
	|| vrf_name.is_set
	|| topology_name.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "vrf-name" || name == "topology-name")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::OverloadedLspCount::OverloadedLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{

    yang_name = "overloaded-lsp-count"; yang_parent_name = "per-topology-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::OverloadedLspCount::~OverloadedLspCount()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::OverloadedLspCount::has_data() const
{
    if (is_presence_container) return true;
    return active_lsp_count.is_set
	|| purged_lsp_count.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::OverloadedLspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_count.yfilter)
	|| ydk::is_set(purged_lsp_count.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::OverloadedLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overloaded-lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::OverloadedLspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.yfilter)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.yfilter)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::OverloadedLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::OverloadedLspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::OverloadedLspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
        active_lsp_count.value_namespace = name_space;
        active_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
        purged_lsp_count.value_namespace = name_space;
        purged_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::OverloadedLspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count.yfilter = yfilter;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::OverloadedLspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-count" || name == "purged-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::AttachedLspCount::AttachedLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{

    yang_name = "attached-lsp-count"; yang_parent_name = "per-topology-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::AttachedLspCount::~AttachedLspCount()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::AttachedLspCount::has_data() const
{
    if (is_presence_container) return true;
    return active_lsp_count.is_set
	|| purged_lsp_count.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::AttachedLspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_count.yfilter)
	|| ydk::is_set(purged_lsp_count.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::AttachedLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached-lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::AttachedLspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.yfilter)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.yfilter)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::AttachedLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::AttachedLspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::AttachedLspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
        active_lsp_count.value_namespace = name_space;
        active_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
        purged_lsp_count.value_namespace = name_space;
        purged_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::AttachedLspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count.yfilter = yfilter;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::AttachedLspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-count" || name == "purged-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::AllFragmentLspStats()
    :
    node_counters(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters>())
{
    node_counters->parent = this;

    yang_name = "all-fragment-lsp-stats"; yang_parent_name = "lsp-table-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::~AllFragmentLspStats()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::has_data() const
{
    if (is_presence_container) return true;
    return (node_counters !=  nullptr && node_counters->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::has_operation() const
{
    return is_set(yfilter)
	|| (node_counters !=  nullptr && node_counters->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-fragment-lsp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-counters")
    {
        if(node_counters == nullptr)
        {
            node_counters = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters>();
        }
        return node_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_counters != nullptr)
    {
        _children["node-counters"] = node_counters;
    }

    return _children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-counters")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::NodeCounters()
    :
    route_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount>())
    , pseudo_node_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount>())
{
    route_lsp_count->parent = this;
    pseudo_node_lsp_count->parent = this;

    yang_name = "node-counters"; yang_parent_name = "all-fragment-lsp-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::~NodeCounters()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::has_data() const
{
    if (is_presence_container) return true;
    return (route_lsp_count !=  nullptr && route_lsp_count->has_data())
	|| (pseudo_node_lsp_count !=  nullptr && pseudo_node_lsp_count->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::has_operation() const
{
    return is_set(yfilter)
	|| (route_lsp_count !=  nullptr && route_lsp_count->has_operation())
	|| (pseudo_node_lsp_count !=  nullptr && pseudo_node_lsp_count->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-lsp-count")
    {
        if(route_lsp_count == nullptr)
        {
            route_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount>();
        }
        return route_lsp_count;
    }

    if(child_yang_name == "pseudo-node-lsp-count")
    {
        if(pseudo_node_lsp_count == nullptr)
        {
            pseudo_node_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount>();
        }
        return pseudo_node_lsp_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_lsp_count != nullptr)
    {
        _children["route-lsp-count"] = route_lsp_count;
    }

    if(pseudo_node_lsp_count != nullptr)
    {
        _children["pseudo-node-lsp-count"] = pseudo_node_lsp_count;
    }

    return _children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-lsp-count" || name == "pseudo-node-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::RouteLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{

    yang_name = "route-lsp-count"; yang_parent_name = "node-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::~RouteLspCount()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::has_data() const
{
    if (is_presence_container) return true;
    return active_lsp_count.is_set
	|| purged_lsp_count.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_count.yfilter)
	|| ydk::is_set(purged_lsp_count.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.yfilter)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.yfilter)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
        active_lsp_count.value_namespace = name_space;
        active_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
        purged_lsp_count.value_namespace = name_space;
        purged_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count.yfilter = yfilter;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-count" || name == "purged-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::PseudoNodeLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{

    yang_name = "pseudo-node-lsp-count"; yang_parent_name = "node-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::~PseudoNodeLspCount()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::has_data() const
{
    if (is_presence_container) return true;
    return active_lsp_count.is_set
	|| purged_lsp_count.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_count.yfilter)
	|| ydk::is_set(purged_lsp_count.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-node-lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.yfilter)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.yfilter)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
        active_lsp_count.value_namespace = name_space;
        active_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
        purged_lsp_count.value_namespace = name_space;
        purged_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count.yfilter = yfilter;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-count" || name == "purged-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacencies()
    :
    adjacency(this, {})
{

    yang_name = "adjacencies"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::Adjacencies::~Adjacencies()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjacency.len(); index++)
    {
        if(adjacency[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::has_operation() const
{
    for (std::size_t index=0; index<adjacency.len(); index++)
    {
        if(adjacency[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacencies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency>();
        ent_->parent = this;
        adjacency.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : adjacency.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::Adjacency()
    :
    system_id{YType::str, "system-id"},
    interface_name{YType::str, "interface-name"},
    adjacency_system_id{YType::str, "adjacency-system-id"},
    adjacency_snpa{YType::str, "adjacency-snpa"},
    adjacency_interface{YType::str, "adjacency-interface"},
    adjacency_media_type{YType::enumeration, "adjacency-media-type"},
    adjacency_state{YType::enumeration, "adjacency-state"},
    adjacency_bfd_state{YType::enumeration, "adjacency-bfd-state"},
    adjacency_ipv6bfd_state{YType::enumeration, "adjacency-ipv6bfd-state"},
    adj_ipv4bfd_retry_running{YType::boolean, "adj-ipv4bfd-retry-running"},
    adj_ipv6bfd_retry_running{YType::boolean, "adj-ipv6bfd-retry-running"},
    adj_ipv4bfd_retry_exp{YType::uint32, "adj-ipv4bfd-retry-exp"},
    adj_ipv6bfd_retry_exp{YType::uint32, "adj-ipv6bfd-retry-exp"},
    adj_ipv4bfd_retry_count{YType::uint32, "adj-ipv4bfd-retry-count"},
    adj_ipv6bfd_retry_count{YType::uint32, "adj-ipv6bfd-retry-count"},
    adjacency_uptime_valid_flag{YType::boolean, "adjacency-uptime-valid-flag"},
    adjacency_uptime{YType::uint32, "adjacency-uptime"},
    adjacency_holdtime{YType::uint32, "adjacency-holdtime"},
    adjacency_checkpoint_object_id{YType::uint32, "adjacency-checkpoint-object-id"},
    adjacency_ietf_nsf_capable_flag{YType::boolean, "adjacency-ietf-nsf-capable-flag"},
    adjacency_dispriority{YType::uint8, "adjacency-dispriority"},
    adjacency_neighbor_priority{YType::uint8, "adjacency-neighbor-priority"},
    adjacency_local_priority{YType::uint8, "adjacency-local-priority"},
    local_dis_flag{YType::boolean, "local-dis-flag"},
    neighbor_dis_flag{YType::boolean, "neighbor-dis-flag"},
    nsr_standby{YType::uint8, "nsr-standby"}
        ,
    adjacency_area_address(this, {})
    , adjacency_topology(this, {})
    , adjacency_per_address_family_data(this, {})
{

    yang_name = "adjacency"; yang_parent_name = "adjacencies"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::~Adjacency()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjacency_area_address.len(); index++)
    {
        if(adjacency_area_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<adjacency_topology.len(); index++)
    {
        if(adjacency_topology[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<adjacency_per_address_family_data.len(); index++)
    {
        if(adjacency_per_address_family_data[index]->has_data())
            return true;
    }
    return system_id.is_set
	|| interface_name.is_set
	|| adjacency_system_id.is_set
	|| adjacency_snpa.is_set
	|| adjacency_interface.is_set
	|| adjacency_media_type.is_set
	|| adjacency_state.is_set
	|| adjacency_bfd_state.is_set
	|| adjacency_ipv6bfd_state.is_set
	|| adj_ipv4bfd_retry_running.is_set
	|| adj_ipv6bfd_retry_running.is_set
	|| adj_ipv4bfd_retry_exp.is_set
	|| adj_ipv6bfd_retry_exp.is_set
	|| adj_ipv4bfd_retry_count.is_set
	|| adj_ipv6bfd_retry_count.is_set
	|| adjacency_uptime_valid_flag.is_set
	|| adjacency_uptime.is_set
	|| adjacency_holdtime.is_set
	|| adjacency_checkpoint_object_id.is_set
	|| adjacency_ietf_nsf_capable_flag.is_set
	|| adjacency_dispriority.is_set
	|| adjacency_neighbor_priority.is_set
	|| adjacency_local_priority.is_set
	|| local_dis_flag.is_set
	|| neighbor_dis_flag.is_set
	|| nsr_standby.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::has_operation() const
{
    for (std::size_t index=0; index<adjacency_area_address.len(); index++)
    {
        if(adjacency_area_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<adjacency_topology.len(); index++)
    {
        if(adjacency_topology[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<adjacency_per_address_family_data.len(); index++)
    {
        if(adjacency_per_address_family_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(adjacency_system_id.yfilter)
	|| ydk::is_set(adjacency_snpa.yfilter)
	|| ydk::is_set(adjacency_interface.yfilter)
	|| ydk::is_set(adjacency_media_type.yfilter)
	|| ydk::is_set(adjacency_state.yfilter)
	|| ydk::is_set(adjacency_bfd_state.yfilter)
	|| ydk::is_set(adjacency_ipv6bfd_state.yfilter)
	|| ydk::is_set(adj_ipv4bfd_retry_running.yfilter)
	|| ydk::is_set(adj_ipv6bfd_retry_running.yfilter)
	|| ydk::is_set(adj_ipv4bfd_retry_exp.yfilter)
	|| ydk::is_set(adj_ipv6bfd_retry_exp.yfilter)
	|| ydk::is_set(adj_ipv4bfd_retry_count.yfilter)
	|| ydk::is_set(adj_ipv6bfd_retry_count.yfilter)
	|| ydk::is_set(adjacency_uptime_valid_flag.yfilter)
	|| ydk::is_set(adjacency_uptime.yfilter)
	|| ydk::is_set(adjacency_holdtime.yfilter)
	|| ydk::is_set(adjacency_checkpoint_object_id.yfilter)
	|| ydk::is_set(adjacency_ietf_nsf_capable_flag.yfilter)
	|| ydk::is_set(adjacency_dispriority.yfilter)
	|| ydk::is_set(adjacency_neighbor_priority.yfilter)
	|| ydk::is_set(adjacency_local_priority.yfilter)
	|| ydk::is_set(local_dis_flag.yfilter)
	|| ydk::is_set(neighbor_dis_flag.yfilter)
	|| ydk::is_set(nsr_standby.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (adjacency_system_id.is_set || is_set(adjacency_system_id.yfilter)) leaf_name_data.push_back(adjacency_system_id.get_name_leafdata());
    if (adjacency_snpa.is_set || is_set(adjacency_snpa.yfilter)) leaf_name_data.push_back(adjacency_snpa.get_name_leafdata());
    if (adjacency_interface.is_set || is_set(adjacency_interface.yfilter)) leaf_name_data.push_back(adjacency_interface.get_name_leafdata());
    if (adjacency_media_type.is_set || is_set(adjacency_media_type.yfilter)) leaf_name_data.push_back(adjacency_media_type.get_name_leafdata());
    if (adjacency_state.is_set || is_set(adjacency_state.yfilter)) leaf_name_data.push_back(adjacency_state.get_name_leafdata());
    if (adjacency_bfd_state.is_set || is_set(adjacency_bfd_state.yfilter)) leaf_name_data.push_back(adjacency_bfd_state.get_name_leafdata());
    if (adjacency_ipv6bfd_state.is_set || is_set(adjacency_ipv6bfd_state.yfilter)) leaf_name_data.push_back(adjacency_ipv6bfd_state.get_name_leafdata());
    if (adj_ipv4bfd_retry_running.is_set || is_set(adj_ipv4bfd_retry_running.yfilter)) leaf_name_data.push_back(adj_ipv4bfd_retry_running.get_name_leafdata());
    if (adj_ipv6bfd_retry_running.is_set || is_set(adj_ipv6bfd_retry_running.yfilter)) leaf_name_data.push_back(adj_ipv6bfd_retry_running.get_name_leafdata());
    if (adj_ipv4bfd_retry_exp.is_set || is_set(adj_ipv4bfd_retry_exp.yfilter)) leaf_name_data.push_back(adj_ipv4bfd_retry_exp.get_name_leafdata());
    if (adj_ipv6bfd_retry_exp.is_set || is_set(adj_ipv6bfd_retry_exp.yfilter)) leaf_name_data.push_back(adj_ipv6bfd_retry_exp.get_name_leafdata());
    if (adj_ipv4bfd_retry_count.is_set || is_set(adj_ipv4bfd_retry_count.yfilter)) leaf_name_data.push_back(adj_ipv4bfd_retry_count.get_name_leafdata());
    if (adj_ipv6bfd_retry_count.is_set || is_set(adj_ipv6bfd_retry_count.yfilter)) leaf_name_data.push_back(adj_ipv6bfd_retry_count.get_name_leafdata());
    if (adjacency_uptime_valid_flag.is_set || is_set(adjacency_uptime_valid_flag.yfilter)) leaf_name_data.push_back(adjacency_uptime_valid_flag.get_name_leafdata());
    if (adjacency_uptime.is_set || is_set(adjacency_uptime.yfilter)) leaf_name_data.push_back(adjacency_uptime.get_name_leafdata());
    if (adjacency_holdtime.is_set || is_set(adjacency_holdtime.yfilter)) leaf_name_data.push_back(adjacency_holdtime.get_name_leafdata());
    if (adjacency_checkpoint_object_id.is_set || is_set(adjacency_checkpoint_object_id.yfilter)) leaf_name_data.push_back(adjacency_checkpoint_object_id.get_name_leafdata());
    if (adjacency_ietf_nsf_capable_flag.is_set || is_set(adjacency_ietf_nsf_capable_flag.yfilter)) leaf_name_data.push_back(adjacency_ietf_nsf_capable_flag.get_name_leafdata());
    if (adjacency_dispriority.is_set || is_set(adjacency_dispriority.yfilter)) leaf_name_data.push_back(adjacency_dispriority.get_name_leafdata());
    if (adjacency_neighbor_priority.is_set || is_set(adjacency_neighbor_priority.yfilter)) leaf_name_data.push_back(adjacency_neighbor_priority.get_name_leafdata());
    if (adjacency_local_priority.is_set || is_set(adjacency_local_priority.yfilter)) leaf_name_data.push_back(adjacency_local_priority.get_name_leafdata());
    if (local_dis_flag.is_set || is_set(local_dis_flag.yfilter)) leaf_name_data.push_back(local_dis_flag.get_name_leafdata());
    if (neighbor_dis_flag.is_set || is_set(neighbor_dis_flag.yfilter)) leaf_name_data.push_back(neighbor_dis_flag.get_name_leafdata());
    if (nsr_standby.is_set || is_set(nsr_standby.yfilter)) leaf_name_data.push_back(nsr_standby.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-area-address")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress>();
        ent_->parent = this;
        adjacency_area_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "adjacency-topology")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology>();
        ent_->parent = this;
        adjacency_topology.append(ent_);
        return ent_;
    }

    if(child_yang_name == "adjacency-per-address-family-data")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData>();
        ent_->parent = this;
        adjacency_per_address_family_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : adjacency_area_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : adjacency_topology.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : adjacency_per_address_family_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-system-id")
    {
        adjacency_system_id = value;
        adjacency_system_id.value_namespace = name_space;
        adjacency_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-snpa")
    {
        adjacency_snpa = value;
        adjacency_snpa.value_namespace = name_space;
        adjacency_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-interface")
    {
        adjacency_interface = value;
        adjacency_interface.value_namespace = name_space;
        adjacency_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-media-type")
    {
        adjacency_media_type = value;
        adjacency_media_type.value_namespace = name_space;
        adjacency_media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-state")
    {
        adjacency_state = value;
        adjacency_state.value_namespace = name_space;
        adjacency_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-bfd-state")
    {
        adjacency_bfd_state = value;
        adjacency_bfd_state.value_namespace = name_space;
        adjacency_bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-ipv6bfd-state")
    {
        adjacency_ipv6bfd_state = value;
        adjacency_ipv6bfd_state.value_namespace = name_space;
        adjacency_ipv6bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-ipv4bfd-retry-running")
    {
        adj_ipv4bfd_retry_running = value;
        adj_ipv4bfd_retry_running.value_namespace = name_space;
        adj_ipv4bfd_retry_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-ipv6bfd-retry-running")
    {
        adj_ipv6bfd_retry_running = value;
        adj_ipv6bfd_retry_running.value_namespace = name_space;
        adj_ipv6bfd_retry_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-ipv4bfd-retry-exp")
    {
        adj_ipv4bfd_retry_exp = value;
        adj_ipv4bfd_retry_exp.value_namespace = name_space;
        adj_ipv4bfd_retry_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-ipv6bfd-retry-exp")
    {
        adj_ipv6bfd_retry_exp = value;
        adj_ipv6bfd_retry_exp.value_namespace = name_space;
        adj_ipv6bfd_retry_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-ipv4bfd-retry-count")
    {
        adj_ipv4bfd_retry_count = value;
        adj_ipv4bfd_retry_count.value_namespace = name_space;
        adj_ipv4bfd_retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-ipv6bfd-retry-count")
    {
        adj_ipv6bfd_retry_count = value;
        adj_ipv6bfd_retry_count.value_namespace = name_space;
        adj_ipv6bfd_retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-uptime-valid-flag")
    {
        adjacency_uptime_valid_flag = value;
        adjacency_uptime_valid_flag.value_namespace = name_space;
        adjacency_uptime_valid_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-uptime")
    {
        adjacency_uptime = value;
        adjacency_uptime.value_namespace = name_space;
        adjacency_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-holdtime")
    {
        adjacency_holdtime = value;
        adjacency_holdtime.value_namespace = name_space;
        adjacency_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-checkpoint-object-id")
    {
        adjacency_checkpoint_object_id = value;
        adjacency_checkpoint_object_id.value_namespace = name_space;
        adjacency_checkpoint_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-ietf-nsf-capable-flag")
    {
        adjacency_ietf_nsf_capable_flag = value;
        adjacency_ietf_nsf_capable_flag.value_namespace = name_space;
        adjacency_ietf_nsf_capable_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-dispriority")
    {
        adjacency_dispriority = value;
        adjacency_dispriority.value_namespace = name_space;
        adjacency_dispriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-neighbor-priority")
    {
        adjacency_neighbor_priority = value;
        adjacency_neighbor_priority.value_namespace = name_space;
        adjacency_neighbor_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-local-priority")
    {
        adjacency_local_priority = value;
        adjacency_local_priority.value_namespace = name_space;
        adjacency_local_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-dis-flag")
    {
        local_dis_flag = value;
        local_dis_flag.value_namespace = name_space;
        local_dis_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dis-flag")
    {
        neighbor_dis_flag = value;
        neighbor_dis_flag.value_namespace = name_space;
        neighbor_dis_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-standby")
    {
        nsr_standby = value;
        nsr_standby.value_namespace = name_space;
        nsr_standby.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "adjacency-system-id")
    {
        adjacency_system_id.yfilter = yfilter;
    }
    if(value_path == "adjacency-snpa")
    {
        adjacency_snpa.yfilter = yfilter;
    }
    if(value_path == "adjacency-interface")
    {
        adjacency_interface.yfilter = yfilter;
    }
    if(value_path == "adjacency-media-type")
    {
        adjacency_media_type.yfilter = yfilter;
    }
    if(value_path == "adjacency-state")
    {
        adjacency_state.yfilter = yfilter;
    }
    if(value_path == "adjacency-bfd-state")
    {
        adjacency_bfd_state.yfilter = yfilter;
    }
    if(value_path == "adjacency-ipv6bfd-state")
    {
        adjacency_ipv6bfd_state.yfilter = yfilter;
    }
    if(value_path == "adj-ipv4bfd-retry-running")
    {
        adj_ipv4bfd_retry_running.yfilter = yfilter;
    }
    if(value_path == "adj-ipv6bfd-retry-running")
    {
        adj_ipv6bfd_retry_running.yfilter = yfilter;
    }
    if(value_path == "adj-ipv4bfd-retry-exp")
    {
        adj_ipv4bfd_retry_exp.yfilter = yfilter;
    }
    if(value_path == "adj-ipv6bfd-retry-exp")
    {
        adj_ipv6bfd_retry_exp.yfilter = yfilter;
    }
    if(value_path == "adj-ipv4bfd-retry-count")
    {
        adj_ipv4bfd_retry_count.yfilter = yfilter;
    }
    if(value_path == "adj-ipv6bfd-retry-count")
    {
        adj_ipv6bfd_retry_count.yfilter = yfilter;
    }
    if(value_path == "adjacency-uptime-valid-flag")
    {
        adjacency_uptime_valid_flag.yfilter = yfilter;
    }
    if(value_path == "adjacency-uptime")
    {
        adjacency_uptime.yfilter = yfilter;
    }
    if(value_path == "adjacency-holdtime")
    {
        adjacency_holdtime.yfilter = yfilter;
    }
    if(value_path == "adjacency-checkpoint-object-id")
    {
        adjacency_checkpoint_object_id.yfilter = yfilter;
    }
    if(value_path == "adjacency-ietf-nsf-capable-flag")
    {
        adjacency_ietf_nsf_capable_flag.yfilter = yfilter;
    }
    if(value_path == "adjacency-dispriority")
    {
        adjacency_dispriority.yfilter = yfilter;
    }
    if(value_path == "adjacency-neighbor-priority")
    {
        adjacency_neighbor_priority.yfilter = yfilter;
    }
    if(value_path == "adjacency-local-priority")
    {
        adjacency_local_priority.yfilter = yfilter;
    }
    if(value_path == "local-dis-flag")
    {
        local_dis_flag.yfilter = yfilter;
    }
    if(value_path == "neighbor-dis-flag")
    {
        neighbor_dis_flag.yfilter = yfilter;
    }
    if(value_path == "nsr-standby")
    {
        nsr_standby.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-area-address" || name == "adjacency-topology" || name == "adjacency-per-address-family-data" || name == "system-id" || name == "interface-name" || name == "adjacency-system-id" || name == "adjacency-snpa" || name == "adjacency-interface" || name == "adjacency-media-type" || name == "adjacency-state" || name == "adjacency-bfd-state" || name == "adjacency-ipv6bfd-state" || name == "adj-ipv4bfd-retry-running" || name == "adj-ipv6bfd-retry-running" || name == "adj-ipv4bfd-retry-exp" || name == "adj-ipv6bfd-retry-exp" || name == "adj-ipv4bfd-retry-count" || name == "adj-ipv6bfd-retry-count" || name == "adjacency-uptime-valid-flag" || name == "adjacency-uptime" || name == "adjacency-holdtime" || name == "adjacency-checkpoint-object-id" || name == "adjacency-ietf-nsf-capable-flag" || name == "adjacency-dispriority" || name == "adjacency-neighbor-priority" || name == "adjacency-local-priority" || name == "local-dis-flag" || name == "neighbor-dis-flag" || name == "nsr-standby")
        return true;
    return false;
}


}
}

