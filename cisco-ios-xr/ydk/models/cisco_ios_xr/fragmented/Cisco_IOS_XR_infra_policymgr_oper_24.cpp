
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_24.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_28.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_25.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_policymgr_oper {

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::Uint16RngArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "dst-port"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClmpP()
    :
    class_map_bg(this, {})
{

    yang_name = "clmp-p"; yang_parent_name = "policy-class-info-bg"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::~ClmpP()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_map_bg.len(); index++)
    {
        if(class_map_bg[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::has_operation() const
{
    for (std::size_t index=0; index<class_map_bg.len(); index++)
    {
        if(class_map_bg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmp-p";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map-bg")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg>();
        ent_->parent = this;
        class_map_bg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : class_map_bg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map-bg")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::ClassMapBg()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"},
    description{YType::str, "description"}
        ,
    match_infop(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop>())
{
    match_infop->parent = this;

    yang_name = "class-map-bg"; yang_parent_name = "clmp-p"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::~ClassMapBg()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| mode.is_set
	|| description.is_set
	|| (match_infop !=  nullptr && match_infop->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (match_infop !=  nullptr && match_infop->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-bg";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-infop")
    {
        if(match_infop == nullptr)
        {
            match_infop = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop>();
        }
        return match_infop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match_infop != nullptr)
    {
        _children["match-infop"] = match_infop;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-infop" || name == "name" || name == "type" || name == "mode" || name == "description")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::MatchInfop()
    :
    class_match_info_st(this, {})
{

    yang_name = "match-infop"; yang_parent_name = "class-map-bg"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::~MatchInfop()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_match_info_st.len(); index++)
    {
        if(class_match_info_st[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::has_operation() const
{
    for (std::size_t index=0; index<class_match_info_st.len(); index++)
    {
        if(class_match_info_st[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-infop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-match-info-st")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt>();
        ent_->parent = this;
        class_match_info_st.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : class_match_info_st.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-match-info-st")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::ClassMatchInfoSt()
    :
    flags{YType::uint32, "flags"}
        ,
    match_data(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData>())
{
    match_data->parent = this;

    yang_name = "class-match-info-st"; yang_parent_name = "match-infop"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::~ClassMatchInfoSt()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| (match_data !=  nullptr && match_data->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (match_data !=  nullptr && match_data->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-match-info-st";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-data")
    {
        if(match_data == nullptr)
        {
            match_data = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData>();
        }
        return match_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match_data != nullptr)
    {
        _children["match-data"] = match_data;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-data" || name == "flags")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MatchData()
    :
    type{YType::enumeration, "type"},
    mpls_top_eos{YType::uint8, "mpls-top-eos"},
    fragment_type{YType::uint8, "fragment-type"},
    authen_status{YType::enumeration, "authen-status"},
    mlp_negotiated{YType::enumeration, "mlp-negotiated"}
        ,
    ipv4_dscp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp>())
    , ipv6_dscp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp>())
    , dscp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp>())
    , ipv4_prec(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec>())
    , ipv6_prec(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec>())
    , prec(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec>())
    , discard_class(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass>())
    , qos_group(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup>())
    , traffic_class(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass>())
    , proto(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto>())
    , icmp_v4(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4>())
    , icmp_v6(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6>())
    , ipv4_packet_len(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen>())
    , ipv6_packet_len(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen>())
    , packet_len(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen>())
    , flow_tag(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag>())
    , tcp_flag(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag>())
    , icmpv4_type(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type>())
    , icmpv4_code(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code>())
    , icmpv6_type(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type>())
    , icmpv6_code(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code>())
    , mpls_exp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp>())
    , mpls_exp_imp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp>())
    , mpls_disp_ipv4_acl(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl>())
    , mpls_disp_ipv6_acl(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl>())
    , mpls_top_label(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel>())
    , cos(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos>())
    , cos_inr(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr>())
    , dei(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei>())
    , dei_inr(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr>())
    , vlan(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan>())
    , vlan_inr(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr>())
    , fr_dlci(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci>())
    , src_mac(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac>())
    , dst_mac(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac>())
    , atm_clp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp>())
    , fr_de(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe>())
    , ipv4_acl(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl>())
    , ipv6_acl(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl>())
    , ether_service_acl(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl>())
    , avail_id(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId>())
    , media_type(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType>())
    , subs_protocol(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol>())
    , dnis(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis>())
    , dnis_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex>())
    , domain(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain>())
    , domain_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex>())
    , nas_port(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort>())
    , service_name(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName>())
    , service_name_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex>())
    , src_addr_ipv4(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4>())
    , dst_addr_ipv4(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4>())
    , src_addr_ipv6(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6>())
    , dst_addr_ipv6(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6>())
    , src_addr_mac(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac>())
    , timer(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer>())
    , timer_regexp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp>())
    , tunnel_name(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName>())
    , tunnel_name_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex>())
    , user_name(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName>())
    , user_name_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex>())
    , auth_username(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername>())
    , auth_username_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex>())
    , unauth_username(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername>())
    , unauth_username_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex>())
    , auth_domain(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain>())
    , auth_domain_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex>())
    , unauth_domain(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain>())
    , unauth_domain_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex>())
    , vendor_id(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId>())
    , vendor_id_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex>())
    , access_interface(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface>())
    , input_interface(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface>())
    , input_intfhdl(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl>())
    , ethertype(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype>())
    , flow_key_data(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData>())
    , dhcp_client_id(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId>())
    , dhcp_client_id_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex>())
    , circuit_id(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId>())
    , circuit_id_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex>())
    , remote_id(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId>())
    , remote_id_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex>())
    , src_port(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort>())
    , dst_port(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort>())
{
    ipv4_dscp->parent = this;
    ipv6_dscp->parent = this;
    dscp->parent = this;
    ipv4_prec->parent = this;
    ipv6_prec->parent = this;
    prec->parent = this;
    discard_class->parent = this;
    qos_group->parent = this;
    traffic_class->parent = this;
    proto->parent = this;
    icmp_v4->parent = this;
    icmp_v6->parent = this;
    ipv4_packet_len->parent = this;
    ipv6_packet_len->parent = this;
    packet_len->parent = this;
    flow_tag->parent = this;
    tcp_flag->parent = this;
    icmpv4_type->parent = this;
    icmpv4_code->parent = this;
    icmpv6_type->parent = this;
    icmpv6_code->parent = this;
    mpls_exp->parent = this;
    mpls_exp_imp->parent = this;
    mpls_disp_ipv4_acl->parent = this;
    mpls_disp_ipv6_acl->parent = this;
    mpls_top_label->parent = this;
    cos->parent = this;
    cos_inr->parent = this;
    dei->parent = this;
    dei_inr->parent = this;
    vlan->parent = this;
    vlan_inr->parent = this;
    fr_dlci->parent = this;
    src_mac->parent = this;
    dst_mac->parent = this;
    atm_clp->parent = this;
    fr_de->parent = this;
    ipv4_acl->parent = this;
    ipv6_acl->parent = this;
    ether_service_acl->parent = this;
    avail_id->parent = this;
    media_type->parent = this;
    subs_protocol->parent = this;
    dnis->parent = this;
    dnis_regex->parent = this;
    domain->parent = this;
    domain_regex->parent = this;
    nas_port->parent = this;
    service_name->parent = this;
    service_name_regex->parent = this;
    src_addr_ipv4->parent = this;
    dst_addr_ipv4->parent = this;
    src_addr_ipv6->parent = this;
    dst_addr_ipv6->parent = this;
    src_addr_mac->parent = this;
    timer->parent = this;
    timer_regexp->parent = this;
    tunnel_name->parent = this;
    tunnel_name_regex->parent = this;
    user_name->parent = this;
    user_name_regex->parent = this;
    auth_username->parent = this;
    auth_username_regex->parent = this;
    unauth_username->parent = this;
    unauth_username_regex->parent = this;
    auth_domain->parent = this;
    auth_domain_regex->parent = this;
    unauth_domain->parent = this;
    unauth_domain_regex->parent = this;
    vendor_id->parent = this;
    vendor_id_regex->parent = this;
    access_interface->parent = this;
    input_interface->parent = this;
    input_intfhdl->parent = this;
    ethertype->parent = this;
    flow_key_data->parent = this;
    dhcp_client_id->parent = this;
    dhcp_client_id_regex->parent = this;
    circuit_id->parent = this;
    circuit_id_regex->parent = this;
    remote_id->parent = this;
    remote_id_regex->parent = this;
    src_port->parent = this;
    dst_port->parent = this;

    yang_name = "match-data"; yang_parent_name = "class-match-info-st"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::~MatchData()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| mpls_top_eos.is_set
	|| fragment_type.is_set
	|| authen_status.is_set
	|| mlp_negotiated.is_set
	|| (ipv4_dscp !=  nullptr && ipv4_dscp->has_data())
	|| (ipv6_dscp !=  nullptr && ipv6_dscp->has_data())
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ipv4_prec !=  nullptr && ipv4_prec->has_data())
	|| (ipv6_prec !=  nullptr && ipv6_prec->has_data())
	|| (prec !=  nullptr && prec->has_data())
	|| (discard_class !=  nullptr && discard_class->has_data())
	|| (qos_group !=  nullptr && qos_group->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data())
	|| (proto !=  nullptr && proto->has_data())
	|| (icmp_v4 !=  nullptr && icmp_v4->has_data())
	|| (icmp_v6 !=  nullptr && icmp_v6->has_data())
	|| (ipv4_packet_len !=  nullptr && ipv4_packet_len->has_data())
	|| (ipv6_packet_len !=  nullptr && ipv6_packet_len->has_data())
	|| (packet_len !=  nullptr && packet_len->has_data())
	|| (flow_tag !=  nullptr && flow_tag->has_data())
	|| (tcp_flag !=  nullptr && tcp_flag->has_data())
	|| (icmpv4_type !=  nullptr && icmpv4_type->has_data())
	|| (icmpv4_code !=  nullptr && icmpv4_code->has_data())
	|| (icmpv6_type !=  nullptr && icmpv6_type->has_data())
	|| (icmpv6_code !=  nullptr && icmpv6_code->has_data())
	|| (mpls_exp !=  nullptr && mpls_exp->has_data())
	|| (mpls_exp_imp !=  nullptr && mpls_exp_imp->has_data())
	|| (mpls_disp_ipv4_acl !=  nullptr && mpls_disp_ipv4_acl->has_data())
	|| (mpls_disp_ipv6_acl !=  nullptr && mpls_disp_ipv6_acl->has_data())
	|| (mpls_top_label !=  nullptr && mpls_top_label->has_data())
	|| (cos !=  nullptr && cos->has_data())
	|| (cos_inr !=  nullptr && cos_inr->has_data())
	|| (dei !=  nullptr && dei->has_data())
	|| (dei_inr !=  nullptr && dei_inr->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (vlan_inr !=  nullptr && vlan_inr->has_data())
	|| (fr_dlci !=  nullptr && fr_dlci->has_data())
	|| (src_mac !=  nullptr && src_mac->has_data())
	|| (dst_mac !=  nullptr && dst_mac->has_data())
	|| (atm_clp !=  nullptr && atm_clp->has_data())
	|| (fr_de !=  nullptr && fr_de->has_data())
	|| (ipv4_acl !=  nullptr && ipv4_acl->has_data())
	|| (ipv6_acl !=  nullptr && ipv6_acl->has_data())
	|| (ether_service_acl !=  nullptr && ether_service_acl->has_data())
	|| (avail_id !=  nullptr && avail_id->has_data())
	|| (media_type !=  nullptr && media_type->has_data())
	|| (subs_protocol !=  nullptr && subs_protocol->has_data())
	|| (dnis !=  nullptr && dnis->has_data())
	|| (dnis_regex !=  nullptr && dnis_regex->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (domain_regex !=  nullptr && domain_regex->has_data())
	|| (nas_port !=  nullptr && nas_port->has_data())
	|| (service_name !=  nullptr && service_name->has_data())
	|| (service_name_regex !=  nullptr && service_name_regex->has_data())
	|| (src_addr_ipv4 !=  nullptr && src_addr_ipv4->has_data())
	|| (dst_addr_ipv4 !=  nullptr && dst_addr_ipv4->has_data())
	|| (src_addr_ipv6 !=  nullptr && src_addr_ipv6->has_data())
	|| (dst_addr_ipv6 !=  nullptr && dst_addr_ipv6->has_data())
	|| (src_addr_mac !=  nullptr && src_addr_mac->has_data())
	|| (timer !=  nullptr && timer->has_data())
	|| (timer_regexp !=  nullptr && timer_regexp->has_data())
	|| (tunnel_name !=  nullptr && tunnel_name->has_data())
	|| (tunnel_name_regex !=  nullptr && tunnel_name_regex->has_data())
	|| (user_name !=  nullptr && user_name->has_data())
	|| (user_name_regex !=  nullptr && user_name_regex->has_data())
	|| (auth_username !=  nullptr && auth_username->has_data())
	|| (auth_username_regex !=  nullptr && auth_username_regex->has_data())
	|| (unauth_username !=  nullptr && unauth_username->has_data())
	|| (unauth_username_regex !=  nullptr && unauth_username_regex->has_data())
	|| (auth_domain !=  nullptr && auth_domain->has_data())
	|| (auth_domain_regex !=  nullptr && auth_domain_regex->has_data())
	|| (unauth_domain !=  nullptr && unauth_domain->has_data())
	|| (unauth_domain_regex !=  nullptr && unauth_domain_regex->has_data())
	|| (vendor_id !=  nullptr && vendor_id->has_data())
	|| (vendor_id_regex !=  nullptr && vendor_id_regex->has_data())
	|| (access_interface !=  nullptr && access_interface->has_data())
	|| (input_interface !=  nullptr && input_interface->has_data())
	|| (input_intfhdl !=  nullptr && input_intfhdl->has_data())
	|| (ethertype !=  nullptr && ethertype->has_data())
	|| (flow_key_data !=  nullptr && flow_key_data->has_data())
	|| (dhcp_client_id !=  nullptr && dhcp_client_id->has_data())
	|| (dhcp_client_id_regex !=  nullptr && dhcp_client_id_regex->has_data())
	|| (circuit_id !=  nullptr && circuit_id->has_data())
	|| (circuit_id_regex !=  nullptr && circuit_id_regex->has_data())
	|| (remote_id !=  nullptr && remote_id->has_data())
	|| (remote_id_regex !=  nullptr && remote_id_regex->has_data())
	|| (src_port !=  nullptr && src_port->has_data())
	|| (dst_port !=  nullptr && dst_port->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mpls_top_eos.yfilter)
	|| ydk::is_set(fragment_type.yfilter)
	|| ydk::is_set(authen_status.yfilter)
	|| ydk::is_set(mlp_negotiated.yfilter)
	|| (ipv4_dscp !=  nullptr && ipv4_dscp->has_operation())
	|| (ipv6_dscp !=  nullptr && ipv6_dscp->has_operation())
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ipv4_prec !=  nullptr && ipv4_prec->has_operation())
	|| (ipv6_prec !=  nullptr && ipv6_prec->has_operation())
	|| (prec !=  nullptr && prec->has_operation())
	|| (discard_class !=  nullptr && discard_class->has_operation())
	|| (qos_group !=  nullptr && qos_group->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation())
	|| (proto !=  nullptr && proto->has_operation())
	|| (icmp_v4 !=  nullptr && icmp_v4->has_operation())
	|| (icmp_v6 !=  nullptr && icmp_v6->has_operation())
	|| (ipv4_packet_len !=  nullptr && ipv4_packet_len->has_operation())
	|| (ipv6_packet_len !=  nullptr && ipv6_packet_len->has_operation())
	|| (packet_len !=  nullptr && packet_len->has_operation())
	|| (flow_tag !=  nullptr && flow_tag->has_operation())
	|| (tcp_flag !=  nullptr && tcp_flag->has_operation())
	|| (icmpv4_type !=  nullptr && icmpv4_type->has_operation())
	|| (icmpv4_code !=  nullptr && icmpv4_code->has_operation())
	|| (icmpv6_type !=  nullptr && icmpv6_type->has_operation())
	|| (icmpv6_code !=  nullptr && icmpv6_code->has_operation())
	|| (mpls_exp !=  nullptr && mpls_exp->has_operation())
	|| (mpls_exp_imp !=  nullptr && mpls_exp_imp->has_operation())
	|| (mpls_disp_ipv4_acl !=  nullptr && mpls_disp_ipv4_acl->has_operation())
	|| (mpls_disp_ipv6_acl !=  nullptr && mpls_disp_ipv6_acl->has_operation())
	|| (mpls_top_label !=  nullptr && mpls_top_label->has_operation())
	|| (cos !=  nullptr && cos->has_operation())
	|| (cos_inr !=  nullptr && cos_inr->has_operation())
	|| (dei !=  nullptr && dei->has_operation())
	|| (dei_inr !=  nullptr && dei_inr->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (vlan_inr !=  nullptr && vlan_inr->has_operation())
	|| (fr_dlci !=  nullptr && fr_dlci->has_operation())
	|| (src_mac !=  nullptr && src_mac->has_operation())
	|| (dst_mac !=  nullptr && dst_mac->has_operation())
	|| (atm_clp !=  nullptr && atm_clp->has_operation())
	|| (fr_de !=  nullptr && fr_de->has_operation())
	|| (ipv4_acl !=  nullptr && ipv4_acl->has_operation())
	|| (ipv6_acl !=  nullptr && ipv6_acl->has_operation())
	|| (ether_service_acl !=  nullptr && ether_service_acl->has_operation())
	|| (avail_id !=  nullptr && avail_id->has_operation())
	|| (media_type !=  nullptr && media_type->has_operation())
	|| (subs_protocol !=  nullptr && subs_protocol->has_operation())
	|| (dnis !=  nullptr && dnis->has_operation())
	|| (dnis_regex !=  nullptr && dnis_regex->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (domain_regex !=  nullptr && domain_regex->has_operation())
	|| (nas_port !=  nullptr && nas_port->has_operation())
	|| (service_name !=  nullptr && service_name->has_operation())
	|| (service_name_regex !=  nullptr && service_name_regex->has_operation())
	|| (src_addr_ipv4 !=  nullptr && src_addr_ipv4->has_operation())
	|| (dst_addr_ipv4 !=  nullptr && dst_addr_ipv4->has_operation())
	|| (src_addr_ipv6 !=  nullptr && src_addr_ipv6->has_operation())
	|| (dst_addr_ipv6 !=  nullptr && dst_addr_ipv6->has_operation())
	|| (src_addr_mac !=  nullptr && src_addr_mac->has_operation())
	|| (timer !=  nullptr && timer->has_operation())
	|| (timer_regexp !=  nullptr && timer_regexp->has_operation())
	|| (tunnel_name !=  nullptr && tunnel_name->has_operation())
	|| (tunnel_name_regex !=  nullptr && tunnel_name_regex->has_operation())
	|| (user_name !=  nullptr && user_name->has_operation())
	|| (user_name_regex !=  nullptr && user_name_regex->has_operation())
	|| (auth_username !=  nullptr && auth_username->has_operation())
	|| (auth_username_regex !=  nullptr && auth_username_regex->has_operation())
	|| (unauth_username !=  nullptr && unauth_username->has_operation())
	|| (unauth_username_regex !=  nullptr && unauth_username_regex->has_operation())
	|| (auth_domain !=  nullptr && auth_domain->has_operation())
	|| (auth_domain_regex !=  nullptr && auth_domain_regex->has_operation())
	|| (unauth_domain !=  nullptr && unauth_domain->has_operation())
	|| (unauth_domain_regex !=  nullptr && unauth_domain_regex->has_operation())
	|| (vendor_id !=  nullptr && vendor_id->has_operation())
	|| (vendor_id_regex !=  nullptr && vendor_id_regex->has_operation())
	|| (access_interface !=  nullptr && access_interface->has_operation())
	|| (input_interface !=  nullptr && input_interface->has_operation())
	|| (input_intfhdl !=  nullptr && input_intfhdl->has_operation())
	|| (ethertype !=  nullptr && ethertype->has_operation())
	|| (flow_key_data !=  nullptr && flow_key_data->has_operation())
	|| (dhcp_client_id !=  nullptr && dhcp_client_id->has_operation())
	|| (dhcp_client_id_regex !=  nullptr && dhcp_client_id_regex->has_operation())
	|| (circuit_id !=  nullptr && circuit_id->has_operation())
	|| (circuit_id_regex !=  nullptr && circuit_id_regex->has_operation())
	|| (remote_id !=  nullptr && remote_id->has_operation())
	|| (remote_id_regex !=  nullptr && remote_id_regex->has_operation())
	|| (src_port !=  nullptr && src_port->has_operation())
	|| (dst_port !=  nullptr && dst_port->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mpls_top_eos.is_set || is_set(mpls_top_eos.yfilter)) leaf_name_data.push_back(mpls_top_eos.get_name_leafdata());
    if (fragment_type.is_set || is_set(fragment_type.yfilter)) leaf_name_data.push_back(fragment_type.get_name_leafdata());
    if (authen_status.is_set || is_set(authen_status.yfilter)) leaf_name_data.push_back(authen_status.get_name_leafdata());
    if (mlp_negotiated.is_set || is_set(mlp_negotiated.yfilter)) leaf_name_data.push_back(mlp_negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-dscp")
    {
        if(ipv4_dscp == nullptr)
        {
            ipv4_dscp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp>();
        }
        return ipv4_dscp;
    }

    if(child_yang_name == "ipv6-dscp")
    {
        if(ipv6_dscp == nullptr)
        {
            ipv6_dscp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp>();
        }
        return ipv6_dscp;
    }

    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ipv4-prec")
    {
        if(ipv4_prec == nullptr)
        {
            ipv4_prec = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec>();
        }
        return ipv4_prec;
    }

    if(child_yang_name == "ipv6-prec")
    {
        if(ipv6_prec == nullptr)
        {
            ipv6_prec = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec>();
        }
        return ipv6_prec;
    }

    if(child_yang_name == "prec")
    {
        if(prec == nullptr)
        {
            prec = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec>();
        }
        return prec;
    }

    if(child_yang_name == "discard-class")
    {
        if(discard_class == nullptr)
        {
            discard_class = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass>();
        }
        return discard_class;
    }

    if(child_yang_name == "qos-group")
    {
        if(qos_group == nullptr)
        {
            qos_group = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup>();
        }
        return qos_group;
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class == nullptr)
        {
            traffic_class = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass>();
        }
        return traffic_class;
    }

    if(child_yang_name == "proto")
    {
        if(proto == nullptr)
        {
            proto = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto>();
        }
        return proto;
    }

    if(child_yang_name == "icmp-v4")
    {
        if(icmp_v4 == nullptr)
        {
            icmp_v4 = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4>();
        }
        return icmp_v4;
    }

    if(child_yang_name == "icmp-v6")
    {
        if(icmp_v6 == nullptr)
        {
            icmp_v6 = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6>();
        }
        return icmp_v6;
    }

    if(child_yang_name == "ipv4-packet-len")
    {
        if(ipv4_packet_len == nullptr)
        {
            ipv4_packet_len = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen>();
        }
        return ipv4_packet_len;
    }

    if(child_yang_name == "ipv6-packet-len")
    {
        if(ipv6_packet_len == nullptr)
        {
            ipv6_packet_len = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen>();
        }
        return ipv6_packet_len;
    }

    if(child_yang_name == "packet-len")
    {
        if(packet_len == nullptr)
        {
            packet_len = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen>();
        }
        return packet_len;
    }

    if(child_yang_name == "flow-tag")
    {
        if(flow_tag == nullptr)
        {
            flow_tag = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag>();
        }
        return flow_tag;
    }

    if(child_yang_name == "tcp-flag")
    {
        if(tcp_flag == nullptr)
        {
            tcp_flag = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag>();
        }
        return tcp_flag;
    }

    if(child_yang_name == "icmpv4-type")
    {
        if(icmpv4_type == nullptr)
        {
            icmpv4_type = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type>();
        }
        return icmpv4_type;
    }

    if(child_yang_name == "icmpv4-code")
    {
        if(icmpv4_code == nullptr)
        {
            icmpv4_code = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code>();
        }
        return icmpv4_code;
    }

    if(child_yang_name == "icmpv6-type")
    {
        if(icmpv6_type == nullptr)
        {
            icmpv6_type = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type>();
        }
        return icmpv6_type;
    }

    if(child_yang_name == "icmpv6-code")
    {
        if(icmpv6_code == nullptr)
        {
            icmpv6_code = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code>();
        }
        return icmpv6_code;
    }

    if(child_yang_name == "mpls-exp")
    {
        if(mpls_exp == nullptr)
        {
            mpls_exp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp>();
        }
        return mpls_exp;
    }

    if(child_yang_name == "mpls-exp-imp")
    {
        if(mpls_exp_imp == nullptr)
        {
            mpls_exp_imp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp>();
        }
        return mpls_exp_imp;
    }

    if(child_yang_name == "mpls-disp-ipv4-acl")
    {
        if(mpls_disp_ipv4_acl == nullptr)
        {
            mpls_disp_ipv4_acl = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl>();
        }
        return mpls_disp_ipv4_acl;
    }

    if(child_yang_name == "mpls-disp-ipv6-acl")
    {
        if(mpls_disp_ipv6_acl == nullptr)
        {
            mpls_disp_ipv6_acl = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl>();
        }
        return mpls_disp_ipv6_acl;
    }

    if(child_yang_name == "mpls-top-label")
    {
        if(mpls_top_label == nullptr)
        {
            mpls_top_label = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel>();
        }
        return mpls_top_label;
    }

    if(child_yang_name == "cos")
    {
        if(cos == nullptr)
        {
            cos = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos>();
        }
        return cos;
    }

    if(child_yang_name == "cos-inr")
    {
        if(cos_inr == nullptr)
        {
            cos_inr = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr>();
        }
        return cos_inr;
    }

    if(child_yang_name == "dei")
    {
        if(dei == nullptr)
        {
            dei = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei>();
        }
        return dei;
    }

    if(child_yang_name == "dei-inr")
    {
        if(dei_inr == nullptr)
        {
            dei_inr = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr>();
        }
        return dei_inr;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "vlan-inr")
    {
        if(vlan_inr == nullptr)
        {
            vlan_inr = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr>();
        }
        return vlan_inr;
    }

    if(child_yang_name == "fr-dlci")
    {
        if(fr_dlci == nullptr)
        {
            fr_dlci = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci>();
        }
        return fr_dlci;
    }

    if(child_yang_name == "src-mac")
    {
        if(src_mac == nullptr)
        {
            src_mac = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac>();
        }
        return src_mac;
    }

    if(child_yang_name == "dst-mac")
    {
        if(dst_mac == nullptr)
        {
            dst_mac = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac>();
        }
        return dst_mac;
    }

    if(child_yang_name == "atm-clp")
    {
        if(atm_clp == nullptr)
        {
            atm_clp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp>();
        }
        return atm_clp;
    }

    if(child_yang_name == "fr-de")
    {
        if(fr_de == nullptr)
        {
            fr_de = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe>();
        }
        return fr_de;
    }

    if(child_yang_name == "ipv4-acl")
    {
        if(ipv4_acl == nullptr)
        {
            ipv4_acl = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl>();
        }
        return ipv4_acl;
    }

    if(child_yang_name == "ipv6-acl")
    {
        if(ipv6_acl == nullptr)
        {
            ipv6_acl = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl>();
        }
        return ipv6_acl;
    }

    if(child_yang_name == "ether-service-acl")
    {
        if(ether_service_acl == nullptr)
        {
            ether_service_acl = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl>();
        }
        return ether_service_acl;
    }

    if(child_yang_name == "avail-id")
    {
        if(avail_id == nullptr)
        {
            avail_id = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId>();
        }
        return avail_id;
    }

    if(child_yang_name == "media-type")
    {
        if(media_type == nullptr)
        {
            media_type = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType>();
        }
        return media_type;
    }

    if(child_yang_name == "subs-protocol")
    {
        if(subs_protocol == nullptr)
        {
            subs_protocol = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol>();
        }
        return subs_protocol;
    }

    if(child_yang_name == "dnis")
    {
        if(dnis == nullptr)
        {
            dnis = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis>();
        }
        return dnis;
    }

    if(child_yang_name == "dnis-regex")
    {
        if(dnis_regex == nullptr)
        {
            dnis_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex>();
        }
        return dnis_regex;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "domain-regex")
    {
        if(domain_regex == nullptr)
        {
            domain_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex>();
        }
        return domain_regex;
    }

    if(child_yang_name == "nas-port")
    {
        if(nas_port == nullptr)
        {
            nas_port = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort>();
        }
        return nas_port;
    }

    if(child_yang_name == "service-name")
    {
        if(service_name == nullptr)
        {
            service_name = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName>();
        }
        return service_name;
    }

    if(child_yang_name == "service-name-regex")
    {
        if(service_name_regex == nullptr)
        {
            service_name_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex>();
        }
        return service_name_regex;
    }

    if(child_yang_name == "src-addr-ipv4")
    {
        if(src_addr_ipv4 == nullptr)
        {
            src_addr_ipv4 = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4>();
        }
        return src_addr_ipv4;
    }

    if(child_yang_name == "dst-addr-ipv4")
    {
        if(dst_addr_ipv4 == nullptr)
        {
            dst_addr_ipv4 = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4>();
        }
        return dst_addr_ipv4;
    }

    if(child_yang_name == "src-addr-ipv6")
    {
        if(src_addr_ipv6 == nullptr)
        {
            src_addr_ipv6 = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6>();
        }
        return src_addr_ipv6;
    }

    if(child_yang_name == "dst-addr-ipv6")
    {
        if(dst_addr_ipv6 == nullptr)
        {
            dst_addr_ipv6 = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6>();
        }
        return dst_addr_ipv6;
    }

    if(child_yang_name == "src-addr-mac")
    {
        if(src_addr_mac == nullptr)
        {
            src_addr_mac = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac>();
        }
        return src_addr_mac;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "timer-regexp")
    {
        if(timer_regexp == nullptr)
        {
            timer_regexp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp>();
        }
        return timer_regexp;
    }

    if(child_yang_name == "tunnel-name")
    {
        if(tunnel_name == nullptr)
        {
            tunnel_name = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName>();
        }
        return tunnel_name;
    }

    if(child_yang_name == "tunnel-name-regex")
    {
        if(tunnel_name_regex == nullptr)
        {
            tunnel_name_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex>();
        }
        return tunnel_name_regex;
    }

    if(child_yang_name == "user-name")
    {
        if(user_name == nullptr)
        {
            user_name = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName>();
        }
        return user_name;
    }

    if(child_yang_name == "user-name-regex")
    {
        if(user_name_regex == nullptr)
        {
            user_name_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex>();
        }
        return user_name_regex;
    }

    if(child_yang_name == "auth-username")
    {
        if(auth_username == nullptr)
        {
            auth_username = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername>();
        }
        return auth_username;
    }

    if(child_yang_name == "auth-username-regex")
    {
        if(auth_username_regex == nullptr)
        {
            auth_username_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex>();
        }
        return auth_username_regex;
    }

    if(child_yang_name == "unauth-username")
    {
        if(unauth_username == nullptr)
        {
            unauth_username = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername>();
        }
        return unauth_username;
    }

    if(child_yang_name == "unauth-username-regex")
    {
        if(unauth_username_regex == nullptr)
        {
            unauth_username_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex>();
        }
        return unauth_username_regex;
    }

    if(child_yang_name == "auth-domain")
    {
        if(auth_domain == nullptr)
        {
            auth_domain = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain>();
        }
        return auth_domain;
    }

    if(child_yang_name == "auth-domain-regex")
    {
        if(auth_domain_regex == nullptr)
        {
            auth_domain_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex>();
        }
        return auth_domain_regex;
    }

    if(child_yang_name == "unauth-domain")
    {
        if(unauth_domain == nullptr)
        {
            unauth_domain = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain>();
        }
        return unauth_domain;
    }

    if(child_yang_name == "unauth-domain-regex")
    {
        if(unauth_domain_regex == nullptr)
        {
            unauth_domain_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex>();
        }
        return unauth_domain_regex;
    }

    if(child_yang_name == "vendor-id")
    {
        if(vendor_id == nullptr)
        {
            vendor_id = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId>();
        }
        return vendor_id;
    }

    if(child_yang_name == "vendor-id-regex")
    {
        if(vendor_id_regex == nullptr)
        {
            vendor_id_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex>();
        }
        return vendor_id_regex;
    }

    if(child_yang_name == "access-interface")
    {
        if(access_interface == nullptr)
        {
            access_interface = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface>();
        }
        return access_interface;
    }

    if(child_yang_name == "input-interface")
    {
        if(input_interface == nullptr)
        {
            input_interface = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface>();
        }
        return input_interface;
    }

    if(child_yang_name == "input-intfhdl")
    {
        if(input_intfhdl == nullptr)
        {
            input_intfhdl = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl>();
        }
        return input_intfhdl;
    }

    if(child_yang_name == "ethertype")
    {
        if(ethertype == nullptr)
        {
            ethertype = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype>();
        }
        return ethertype;
    }

    if(child_yang_name == "flow-key-data")
    {
        if(flow_key_data == nullptr)
        {
            flow_key_data = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData>();
        }
        return flow_key_data;
    }

    if(child_yang_name == "dhcp-client-id")
    {
        if(dhcp_client_id == nullptr)
        {
            dhcp_client_id = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId>();
        }
        return dhcp_client_id;
    }

    if(child_yang_name == "dhcp-client-id-regex")
    {
        if(dhcp_client_id_regex == nullptr)
        {
            dhcp_client_id_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex>();
        }
        return dhcp_client_id_regex;
    }

    if(child_yang_name == "circuit-id")
    {
        if(circuit_id == nullptr)
        {
            circuit_id = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId>();
        }
        return circuit_id;
    }

    if(child_yang_name == "circuit-id-regex")
    {
        if(circuit_id_regex == nullptr)
        {
            circuit_id_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex>();
        }
        return circuit_id_regex;
    }

    if(child_yang_name == "remote-id")
    {
        if(remote_id == nullptr)
        {
            remote_id = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId>();
        }
        return remote_id;
    }

    if(child_yang_name == "remote-id-regex")
    {
        if(remote_id_regex == nullptr)
        {
            remote_id_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex>();
        }
        return remote_id_regex;
    }

    if(child_yang_name == "src-port")
    {
        if(src_port == nullptr)
        {
            src_port = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort>();
        }
        return src_port;
    }

    if(child_yang_name == "dst-port")
    {
        if(dst_port == nullptr)
        {
            dst_port = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort>();
        }
        return dst_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_dscp != nullptr)
    {
        _children["ipv4-dscp"] = ipv4_dscp;
    }

    if(ipv6_dscp != nullptr)
    {
        _children["ipv6-dscp"] = ipv6_dscp;
    }

    if(dscp != nullptr)
    {
        _children["dscp"] = dscp;
    }

    if(ipv4_prec != nullptr)
    {
        _children["ipv4-prec"] = ipv4_prec;
    }

    if(ipv6_prec != nullptr)
    {
        _children["ipv6-prec"] = ipv6_prec;
    }

    if(prec != nullptr)
    {
        _children["prec"] = prec;
    }

    if(discard_class != nullptr)
    {
        _children["discard-class"] = discard_class;
    }

    if(qos_group != nullptr)
    {
        _children["qos-group"] = qos_group;
    }

    if(traffic_class != nullptr)
    {
        _children["traffic-class"] = traffic_class;
    }

    if(proto != nullptr)
    {
        _children["proto"] = proto;
    }

    if(icmp_v4 != nullptr)
    {
        _children["icmp-v4"] = icmp_v4;
    }

    if(icmp_v6 != nullptr)
    {
        _children["icmp-v6"] = icmp_v6;
    }

    if(ipv4_packet_len != nullptr)
    {
        _children["ipv4-packet-len"] = ipv4_packet_len;
    }

    if(ipv6_packet_len != nullptr)
    {
        _children["ipv6-packet-len"] = ipv6_packet_len;
    }

    if(packet_len != nullptr)
    {
        _children["packet-len"] = packet_len;
    }

    if(flow_tag != nullptr)
    {
        _children["flow-tag"] = flow_tag;
    }

    if(tcp_flag != nullptr)
    {
        _children["tcp-flag"] = tcp_flag;
    }

    if(icmpv4_type != nullptr)
    {
        _children["icmpv4-type"] = icmpv4_type;
    }

    if(icmpv4_code != nullptr)
    {
        _children["icmpv4-code"] = icmpv4_code;
    }

    if(icmpv6_type != nullptr)
    {
        _children["icmpv6-type"] = icmpv6_type;
    }

    if(icmpv6_code != nullptr)
    {
        _children["icmpv6-code"] = icmpv6_code;
    }

    if(mpls_exp != nullptr)
    {
        _children["mpls-exp"] = mpls_exp;
    }

    if(mpls_exp_imp != nullptr)
    {
        _children["mpls-exp-imp"] = mpls_exp_imp;
    }

    if(mpls_disp_ipv4_acl != nullptr)
    {
        _children["mpls-disp-ipv4-acl"] = mpls_disp_ipv4_acl;
    }

    if(mpls_disp_ipv6_acl != nullptr)
    {
        _children["mpls-disp-ipv6-acl"] = mpls_disp_ipv6_acl;
    }

    if(mpls_top_label != nullptr)
    {
        _children["mpls-top-label"] = mpls_top_label;
    }

    if(cos != nullptr)
    {
        _children["cos"] = cos;
    }

    if(cos_inr != nullptr)
    {
        _children["cos-inr"] = cos_inr;
    }

    if(dei != nullptr)
    {
        _children["dei"] = dei;
    }

    if(dei_inr != nullptr)
    {
        _children["dei-inr"] = dei_inr;
    }

    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    if(vlan_inr != nullptr)
    {
        _children["vlan-inr"] = vlan_inr;
    }

    if(fr_dlci != nullptr)
    {
        _children["fr-dlci"] = fr_dlci;
    }

    if(src_mac != nullptr)
    {
        _children["src-mac"] = src_mac;
    }

    if(dst_mac != nullptr)
    {
        _children["dst-mac"] = dst_mac;
    }

    if(atm_clp != nullptr)
    {
        _children["atm-clp"] = atm_clp;
    }

    if(fr_de != nullptr)
    {
        _children["fr-de"] = fr_de;
    }

    if(ipv4_acl != nullptr)
    {
        _children["ipv4-acl"] = ipv4_acl;
    }

    if(ipv6_acl != nullptr)
    {
        _children["ipv6-acl"] = ipv6_acl;
    }

    if(ether_service_acl != nullptr)
    {
        _children["ether-service-acl"] = ether_service_acl;
    }

    if(avail_id != nullptr)
    {
        _children["avail-id"] = avail_id;
    }

    if(media_type != nullptr)
    {
        _children["media-type"] = media_type;
    }

    if(subs_protocol != nullptr)
    {
        _children["subs-protocol"] = subs_protocol;
    }

    if(dnis != nullptr)
    {
        _children["dnis"] = dnis;
    }

    if(dnis_regex != nullptr)
    {
        _children["dnis-regex"] = dnis_regex;
    }

    if(domain != nullptr)
    {
        _children["domain"] = domain;
    }

    if(domain_regex != nullptr)
    {
        _children["domain-regex"] = domain_regex;
    }

    if(nas_port != nullptr)
    {
        _children["nas-port"] = nas_port;
    }

    if(service_name != nullptr)
    {
        _children["service-name"] = service_name;
    }

    if(service_name_regex != nullptr)
    {
        _children["service-name-regex"] = service_name_regex;
    }

    if(src_addr_ipv4 != nullptr)
    {
        _children["src-addr-ipv4"] = src_addr_ipv4;
    }

    if(dst_addr_ipv4 != nullptr)
    {
        _children["dst-addr-ipv4"] = dst_addr_ipv4;
    }

    if(src_addr_ipv6 != nullptr)
    {
        _children["src-addr-ipv6"] = src_addr_ipv6;
    }

    if(dst_addr_ipv6 != nullptr)
    {
        _children["dst-addr-ipv6"] = dst_addr_ipv6;
    }

    if(src_addr_mac != nullptr)
    {
        _children["src-addr-mac"] = src_addr_mac;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    if(timer_regexp != nullptr)
    {
        _children["timer-regexp"] = timer_regexp;
    }

    if(tunnel_name != nullptr)
    {
        _children["tunnel-name"] = tunnel_name;
    }

    if(tunnel_name_regex != nullptr)
    {
        _children["tunnel-name-regex"] = tunnel_name_regex;
    }

    if(user_name != nullptr)
    {
        _children["user-name"] = user_name;
    }

    if(user_name_regex != nullptr)
    {
        _children["user-name-regex"] = user_name_regex;
    }

    if(auth_username != nullptr)
    {
        _children["auth-username"] = auth_username;
    }

    if(auth_username_regex != nullptr)
    {
        _children["auth-username-regex"] = auth_username_regex;
    }

    if(unauth_username != nullptr)
    {
        _children["unauth-username"] = unauth_username;
    }

    if(unauth_username_regex != nullptr)
    {
        _children["unauth-username-regex"] = unauth_username_regex;
    }

    if(auth_domain != nullptr)
    {
        _children["auth-domain"] = auth_domain;
    }

    if(auth_domain_regex != nullptr)
    {
        _children["auth-domain-regex"] = auth_domain_regex;
    }

    if(unauth_domain != nullptr)
    {
        _children["unauth-domain"] = unauth_domain;
    }

    if(unauth_domain_regex != nullptr)
    {
        _children["unauth-domain-regex"] = unauth_domain_regex;
    }

    if(vendor_id != nullptr)
    {
        _children["vendor-id"] = vendor_id;
    }

    if(vendor_id_regex != nullptr)
    {
        _children["vendor-id-regex"] = vendor_id_regex;
    }

    if(access_interface != nullptr)
    {
        _children["access-interface"] = access_interface;
    }

    if(input_interface != nullptr)
    {
        _children["input-interface"] = input_interface;
    }

    if(input_intfhdl != nullptr)
    {
        _children["input-intfhdl"] = input_intfhdl;
    }

    if(ethertype != nullptr)
    {
        _children["ethertype"] = ethertype;
    }

    if(flow_key_data != nullptr)
    {
        _children["flow-key-data"] = flow_key_data;
    }

    if(dhcp_client_id != nullptr)
    {
        _children["dhcp-client-id"] = dhcp_client_id;
    }

    if(dhcp_client_id_regex != nullptr)
    {
        _children["dhcp-client-id-regex"] = dhcp_client_id_regex;
    }

    if(circuit_id != nullptr)
    {
        _children["circuit-id"] = circuit_id;
    }

    if(circuit_id_regex != nullptr)
    {
        _children["circuit-id-regex"] = circuit_id_regex;
    }

    if(remote_id != nullptr)
    {
        _children["remote-id"] = remote_id;
    }

    if(remote_id_regex != nullptr)
    {
        _children["remote-id-regex"] = remote_id_regex;
    }

    if(src_port != nullptr)
    {
        _children["src-port"] = src_port;
    }

    if(dst_port != nullptr)
    {
        _children["dst-port"] = dst_port;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-top-eos")
    {
        mpls_top_eos = value;
        mpls_top_eos.value_namespace = name_space;
        mpls_top_eos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-type")
    {
        fragment_type = value;
        fragment_type.value_namespace = name_space;
        fragment_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-status")
    {
        authen_status = value;
        authen_status.value_namespace = name_space;
        authen_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlp-negotiated")
    {
        mlp_negotiated = value;
        mlp_negotiated.value_namespace = name_space;
        mlp_negotiated.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mpls-top-eos")
    {
        mpls_top_eos.yfilter = yfilter;
    }
    if(value_path == "fragment-type")
    {
        fragment_type.yfilter = yfilter;
    }
    if(value_path == "authen-status")
    {
        authen_status.yfilter = yfilter;
    }
    if(value_path == "mlp-negotiated")
    {
        mlp_negotiated.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-dscp" || name == "ipv6-dscp" || name == "dscp" || name == "ipv4-prec" || name == "ipv6-prec" || name == "prec" || name == "discard-class" || name == "qos-group" || name == "traffic-class" || name == "proto" || name == "icmp-v4" || name == "icmp-v6" || name == "ipv4-packet-len" || name == "ipv6-packet-len" || name == "packet-len" || name == "flow-tag" || name == "tcp-flag" || name == "icmpv4-type" || name == "icmpv4-code" || name == "icmpv6-type" || name == "icmpv6-code" || name == "mpls-exp" || name == "mpls-exp-imp" || name == "mpls-disp-ipv4-acl" || name == "mpls-disp-ipv6-acl" || name == "mpls-top-label" || name == "cos" || name == "cos-inr" || name == "dei" || name == "dei-inr" || name == "vlan" || name == "vlan-inr" || name == "fr-dlci" || name == "src-mac" || name == "dst-mac" || name == "atm-clp" || name == "fr-de" || name == "ipv4-acl" || name == "ipv6-acl" || name == "ether-service-acl" || name == "avail-id" || name == "media-type" || name == "subs-protocol" || name == "dnis" || name == "dnis-regex" || name == "domain" || name == "domain-regex" || name == "nas-port" || name == "service-name" || name == "service-name-regex" || name == "src-addr-ipv4" || name == "dst-addr-ipv4" || name == "src-addr-ipv6" || name == "dst-addr-ipv6" || name == "src-addr-mac" || name == "timer" || name == "timer-regexp" || name == "tunnel-name" || name == "tunnel-name-regex" || name == "user-name" || name == "user-name-regex" || name == "auth-username" || name == "auth-username-regex" || name == "unauth-username" || name == "unauth-username-regex" || name == "auth-domain" || name == "auth-domain-regex" || name == "unauth-domain" || name == "unauth-domain-regex" || name == "vendor-id" || name == "vendor-id-regex" || name == "access-interface" || name == "input-interface" || name == "input-intfhdl" || name == "ethertype" || name == "flow-key-data" || name == "dhcp-client-id" || name == "dhcp-client-id-regex" || name == "circuit-id" || name == "circuit-id-regex" || name == "remote-id" || name == "remote-id-regex" || name == "src-port" || name == "dst-port" || name == "type" || name == "mpls-top-eos" || name == "fragment-type" || name == "authen-status" || name == "mlp-negotiated")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Ipv4Dscp()
    :
    uint8_rng_array(this, {})
{

    yang_name = "ipv4-dscp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::~Ipv4Dscp()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray>();
        ent_->parent = this;
        uint8_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint8_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "ipv4-dscp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Ipv6Dscp()
    :
    uint8_rng_array(this, {})
{

    yang_name = "ipv6-dscp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::~Ipv6Dscp()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray>();
        ent_->parent = this;
        uint8_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint8_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "ipv6-dscp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Dscp()
    :
    uint8_rng_array(this, {})
{

    yang_name = "dscp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::~Dscp()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray>();
        ent_->parent = this;
        uint8_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint8_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "dscp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::Ipv4Prec()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "ipv4-prec"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::~Ipv4Prec()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-prec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::Ipv6Prec()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "ipv6-prec"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::~Ipv6Prec()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::Prec()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "prec"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::~Prec()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::DiscardClass()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "discard-class"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::~DiscardClass()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::QosGroup()
    :
    uint16_rng_array(this, {})
{

    yang_name = "qos-group"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::~QosGroup()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray>();
        ent_->parent = this;
        uint16_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint16_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::Uint16RngArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "qos-group"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::TrafficClass()
    :
    uint8_rng_array(this, {})
{

    yang_name = "traffic-class"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::~TrafficClass()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray>();
        ent_->parent = this;
        uint8_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint8_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "traffic-class"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Proto()
    :
    uint16_rng_array(this, {})
{

    yang_name = "proto"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::~Proto()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray>();
        ent_->parent = this;
        uint16_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint16_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::Uint16RngArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "proto"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::IcmpV4()
    :
    type{YType::uint8, "type"},
    code{YType::uint8, "code"}
{

    yang_name = "icmp-v4"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::~IcmpV4()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| code.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(code.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "code")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::IcmpV6()
    :
    type{YType::uint8, "type"},
    code{YType::uint8, "code"}
{

    yang_name = "icmp-v6"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::~IcmpV6()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| code.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(code.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "code")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Ipv4PacketLen()
    :
    uint16_rng_array(this, {})
{

    yang_name = "ipv4-packet-len"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::~Ipv4PacketLen()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-packet-len";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray>();
        ent_->parent = this;
        uint16_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint16_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::Uint16RngArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "ipv4-packet-len"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Ipv6PacketLen()
    :
    uint16_rng_array(this, {})
{

    yang_name = "ipv6-packet-len"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::~Ipv6PacketLen()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-packet-len";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray>();
        ent_->parent = this;
        uint16_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint16_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::Uint16RngArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "ipv6-packet-len"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::PacketLen()
    :
    uint16_rng_array(this, {})
{

    yang_name = "packet-len"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::~PacketLen()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-len";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray>();
        ent_->parent = this;
        uint16_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint16_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::Uint16RngArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "packet-len"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::FlowTag()
    :
    uint8_rng_array(this, {})
{

    yang_name = "flow-tag"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::~FlowTag()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray>();
        ent_->parent = this;
        uint8_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint8_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "flow-tag"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::TcpFlag()
    :
    value_{YType::uint16, "value"},
    match_any{YType::boolean, "match-any"}
{

    yang_name = "tcp-flag"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::~TcpFlag()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| match_any.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(match_any.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (match_any.is_set || is_set(match_any.yfilter)) leaf_name_data.push_back(match_any.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-any")
    {
        match_any = value;
        match_any.value_namespace = name_space;
        match_any.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "match-any")
    {
        match_any.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "match-any")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Icmpv4Type()
    :
    uint8_rng_array(this, {})
{

    yang_name = "icmpv4-type"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::~Icmpv4Type()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv4-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray>();
        ent_->parent = this;
        uint8_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint8_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv4-type"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Icmpv4Code()
    :
    uint8_rng_array(this, {})
{

    yang_name = "icmpv4-code"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::~Icmpv4Code()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv4-code";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray>();
        ent_->parent = this;
        uint8_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint8_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv4-code"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Icmpv6Type()
    :
    uint8_rng_array(this, {})
{

    yang_name = "icmpv6-type"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::~Icmpv6Type()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv6-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray>();
        ent_->parent = this;
        uint8_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint8_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv6-type"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Icmpv6Code()
    :
    uint8_rng_array(this, {})
{

    yang_name = "icmpv6-code"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::~Icmpv6Code()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv6-code";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray>();
        ent_->parent = this;
        uint8_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint8_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv6-code"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::MplsExp()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "mpls-exp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::~MplsExp()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::MplsExpImp()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "mpls-exp-imp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::~MplsExpImp()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp-imp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::MplsDispIpv4Acl()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "mpls-disp-ipv4-acl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::~MplsDispIpv4Acl()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-disp-ipv4-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::MplsDispIpv6Acl()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "mpls-disp-ipv6-acl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::~MplsDispIpv6Acl()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-disp-ipv6-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::MplsTopLabel()
    :
    uint32_rng_array(this, {})
{

    yang_name = "mpls-top-label"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::~MplsTopLabel()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_rng_array.len(); index++)
    {
        if(uint32_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::has_operation() const
{
    for (std::size_t index=0; index<uint32_rng_array.len(); index++)
    {
        if(uint32_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-top-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint32_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray>();
        ent_->parent = this;
        uint32_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint32_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint32_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::Uint32RngArray()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "uint32_rng_array"; yang_parent_name = "mpls-top-label"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::~Uint32RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::Cos()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "cos"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::~Cos()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::CosInr()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "cos-inr"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::~CosInr()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-inr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::Dei()
    :
    bit_value{YType::uint32, "bit-value"}
{

    yang_name = "dei"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::~Dei()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::has_data() const
{
    if (is_presence_container) return true;
    return bit_value.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_value.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dei";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_value.is_set || is_set(bit_value.yfilter)) leaf_name_data.push_back(bit_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-value")
    {
        bit_value = value;
        bit_value.value_namespace = name_space;
        bit_value.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-value")
    {
        bit_value.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::DeiInr()
    :
    bit_value{YType::uint32, "bit-value"}
{

    yang_name = "dei-inr"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::~DeiInr()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::has_data() const
{
    if (is_presence_container) return true;
    return bit_value.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_value.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dei-inr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_value.is_set || is_set(bit_value.yfilter)) leaf_name_data.push_back(bit_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-value")
    {
        bit_value = value;
        bit_value.value_namespace = name_space;
        bit_value.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-value")
    {
        bit_value.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::Vlan()
    :
    vlan_id_array(this, {})
{

    yang_name = "vlan"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::~Vlan()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_id_array.len(); index++)
    {
        if(vlan_id_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::has_operation() const
{
    for (std::size_t index=0; index<vlan_id_array.len(); index++)
    {
        if(vlan_id_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-id-array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray>();
        ent_->parent = this;
        vlan_id_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlan_id_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::VlanIdArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"},
    mask{YType::uint16, "mask"}
{

    yang_name = "vlan-id-array"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::~VlanIdArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set
	|| mask.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max" || name == "mask")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::VlanInr()
    :
    uint16_rng_array(this, {})
{

    yang_name = "vlan-inr"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::~VlanInr()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-inr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray>();
        ent_->parent = this;
        uint16_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint16_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::Uint16RngArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "vlan-inr"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::FrDlci()
    :
    uint16_rng_array(this, {})
{

    yang_name = "fr-dlci"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::~FrDlci()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr-dlci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray>();
        ent_->parent = this;
        uint16_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint16_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::Uint16RngArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "fr-dlci"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::SrcMac()
    :
    mac_addr{YType::uint16, "mac-addr"},
    mask{YType::uint16, "mask"}
{

    yang_name = "src-mac"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::~SrcMac()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::has_operation() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_addr_name_datas = mac_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_addr_name_datas.begin(), mac_addr_name_datas.end());
    auto mask_name_datas = mask.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mask_name_datas.begin(), mask_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-addr")
    {
        mac_addr.append(value);
    }
    if(value_path == "mask")
    {
        mask.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-addr")
    {
        mac_addr.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-addr" || name == "mask")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::DstMac()
    :
    mac_addr{YType::uint16, "mac-addr"},
    mask{YType::uint16, "mask"}
{

    yang_name = "dst-mac"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::~DstMac()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::has_operation() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_addr_name_datas = mac_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_addr_name_datas.begin(), mac_addr_name_datas.end());
    auto mask_name_datas = mask.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mask_name_datas.begin(), mask_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-addr")
    {
        mac_addr.append(value);
    }
    if(value_path == "mask")
    {
        mask.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-addr")
    {
        mac_addr.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-addr" || name == "mask")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::AtmClp()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "atm-clp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::~AtmClp()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm-clp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::FrDe()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "fr-de"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::~FrDe()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr-de";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::Ipv4Acl()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "ipv4-acl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::~Ipv4Acl()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::Ipv6Acl()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "ipv6-acl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::~Ipv6Acl()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::EtherServiceAcl()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "ether-service-acl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::~EtherServiceAcl()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-service-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::AvailId()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "avail-id"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::~AvailId()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avail-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::MediaType()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "media-type"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::~MediaType()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::SubsProtocol()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "subs-protocol"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::~SubsProtocol()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subs-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::Dnis()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "dnis"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::~Dnis()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::DnisRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "dnis-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::~DnisRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnis-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::Domain()
    :
    domain_array(this, {})
{

    yang_name = "domain"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::~Domain()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domain_array.len(); index++)
    {
        if(domain_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::has_operation() const
{
    for (std::size_t index=0; index<domain_array.len(); index++)
    {
        if(domain_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray>();
        ent_->parent = this;
        domain_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domain_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::DomainArray()
    :
    domain_name{YType::str, "domain-name"},
    format_name{YType::str, "format-name"}
{

    yang_name = "domain-array"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::~DomainArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::has_data() const
{
    if (is_presence_container) return true;
    return domain_name.is_set
	|| format_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(format_name.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.yfilter)) leaf_name_data.push_back(format_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-name")
    {
        format_name = value;
        format_name.value_namespace = name_space;
        format_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "format-name")
    {
        format_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name" || name == "format-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainRegex()
    :
    domain_array(this, {})
{

    yang_name = "domain-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::~DomainRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domain_array.len(); index++)
    {
        if(domain_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::has_operation() const
{
    for (std::size_t index=0; index<domain_array.len(); index++)
    {
        if(domain_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray>();
        ent_->parent = this;
        domain_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domain_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::DomainArray()
    :
    domain_name{YType::str, "domain-name"},
    format_name{YType::str, "format-name"}
{

    yang_name = "domain-array"; yang_parent_name = "domain-regex"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::~DomainArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::has_data() const
{
    if (is_presence_container) return true;
    return domain_name.is_set
	|| format_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(format_name.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.yfilter)) leaf_name_data.push_back(format_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-name")
    {
        format_name = value;
        format_name.value_namespace = name_space;
        format_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "format-name")
    {
        format_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name" || name == "format-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPort()
    :
    nas_port_array(this, {})
{

    yang_name = "nas-port"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::~NasPort()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nas_port_array.len(); index++)
    {
        if(nas_port_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::has_operation() const
{
    for (std::size_t index=0; index<nas_port_array.len(); index++)
    {
        if(nas_port_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nas-port-array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray>();
        ent_->parent = this;
        nas_port_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nas_port_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nas-port-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::NasPortArray()
    :
    sub_id{YType::enumeration, "sub-id"},
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"}
{

    yang_name = "nas-port-array"; yang_parent_name = "nas-port"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::~NasPortArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::has_data() const
{
    if (is_presence_container) return true;
    return sub_id.is_set
	|| operator_.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_id.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-port-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_id.is_set || is_set(sub_id.yfilter)) leaf_name_data.push_back(sub_id.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-id")
    {
        sub_id = value;
        sub_id.value_namespace = name_space;
        sub_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-id")
    {
        sub_id.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-id" || name == "operator" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::ServiceName()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "service-name"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::~ServiceName()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::ServiceNameRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "service-name-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::~ServiceNameRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::SrcAddrIpv4()
    :
    ipv4_addr_array(this, {})
{

    yang_name = "src-addr-ipv4"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::~SrcAddrIpv4()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_addr_array.len(); index++)
    {
        if(ipv4_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addr_array.len(); index++)
    {
        if(ipv4_addr_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-addr-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addr-array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray>();
        ent_->parent = this;
        ipv4_addr_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_addr_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::Ipv4AddrArray()
    :
    prefix{YType::str, "prefix"},
    mask{YType::str, "mask"}
{

    yang_name = "ipv4-addr-array"; yang_parent_name = "src-addr-ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::~Ipv4AddrArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| mask.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addr-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "mask")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::DstAddrIpv4()
    :
    ipv4_addr_array(this, {})
{

    yang_name = "dst-addr-ipv4"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::~DstAddrIpv4()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_addr_array.len(); index++)
    {
        if(ipv4_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addr_array.len(); index++)
    {
        if(ipv4_addr_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-addr-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addr-array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray>();
        ent_->parent = this;
        ipv4_addr_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_addr_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::Ipv4AddrArray()
    :
    prefix{YType::str, "prefix"},
    mask{YType::str, "mask"}
{

    yang_name = "ipv4-addr-array"; yang_parent_name = "dst-addr-ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::~Ipv4AddrArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| mask.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addr-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "mask")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::SrcAddrIpv6()
    :
    ipv6_addr_array(this, {})
{

    yang_name = "src-addr-ipv6"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::~SrcAddrIpv6()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_addr_array.len(); index++)
    {
        if(ipv6_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::has_operation() const
{
    for (std::size_t index=0; index<ipv6_addr_array.len(); index++)
    {
        if(ipv6_addr_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-addr-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-addr-array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray>();
        ent_->parent = this;
        ipv6_addr_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_addr_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-addr-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::Ipv6AddrArray()
    :
    prefix{YType::str, "prefix"},
    mask{YType::uint32, "mask"}
{

    yang_name = "ipv6-addr-array"; yang_parent_name = "src-addr-ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::~Ipv6AddrArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| mask.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addr-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "mask")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::DstAddrIpv6()
    :
    ipv6_addr_array(this, {})
{

    yang_name = "dst-addr-ipv6"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::~DstAddrIpv6()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_addr_array.len(); index++)
    {
        if(ipv6_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::has_operation() const
{
    for (std::size_t index=0; index<ipv6_addr_array.len(); index++)
    {
        if(ipv6_addr_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-addr-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-addr-array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray>();
        ent_->parent = this;
        ipv6_addr_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_addr_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-addr-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::Ipv6AddrArray()
    :
    prefix{YType::str, "prefix"},
    mask{YType::uint32, "mask"}
{

    yang_name = "ipv6-addr-array"; yang_parent_name = "dst-addr-ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::~Ipv6AddrArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| mask.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addr-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "mask")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::SrcAddrMac()
    :
    mac_addr_array(this, {})
{

    yang_name = "src-addr-mac"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::~SrcAddrMac()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_addr_array.len(); index++)
    {
        if(mac_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::has_operation() const
{
    for (std::size_t index=0; index<mac_addr_array.len(); index++)
    {
        if(mac_addr_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-addr-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-addr-array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray>();
        ent_->parent = this;
        mac_addr_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mac_addr_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-addr-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::MacAddrArray()
    :
    mac_addr{YType::uint16, "mac-addr"},
    mask{YType::uint16, "mask"}
{

    yang_name = "mac-addr-array"; yang_parent_name = "src-addr-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::~MacAddrArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::has_operation() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-addr-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_addr_name_datas = mac_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_addr_name_datas.begin(), mac_addr_name_datas.end());
    auto mask_name_datas = mask.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mask_name_datas.begin(), mask_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-addr")
    {
        mac_addr.append(value);
    }
    if(value_path == "mask")
    {
        mask.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-addr")
    {
        mac_addr.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-addr" || name == "mask")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::Timer()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "timer"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::~Timer()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::TimerRegexp()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "timer-regexp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::~TimerRegexp()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer-regexp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::TunnelName()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "tunnel-name"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::~TunnelName()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::TunnelNameRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "tunnel-name-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::~TunnelNameRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-name-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::UserName()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "user-name"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::~UserName()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::UserNameRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "user-name-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::~UserNameRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-name-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::AuthUsername()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "auth-username"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::~AuthUsername()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-username";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::AuthUsernameRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "auth-username-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::~AuthUsernameRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-username-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::UnauthUsername()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "unauth-username"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::~UnauthUsername()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauth-username";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::UnauthUsernameRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "unauth-username-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::~UnauthUsernameRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauth-username-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::AuthDomain()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "auth-domain"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::~AuthDomain()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::AuthDomainRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "auth-domain-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::~AuthDomainRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-domain-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::UnauthDomain()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "unauth-domain"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::~UnauthDomain()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauth-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::UnauthDomainRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "unauth-domain-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::~UnauthDomainRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauth-domain-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::VendorId()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "vendor-id"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::~VendorId()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::VendorIdRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "vendor-id-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::~VendorIdRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-id-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::AccessInterface()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "access-interface"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::~AccessInterface()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::InputInterface()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "input-interface"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::~InputInterface()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::InputIntfhdl()
    :
    uint64_array{YType::uint64, "uint64_array"}
{

    yang_name = "input-intfhdl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::~InputIntfhdl()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : uint64_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::has_operation() const
{
    for (auto const & leaf : uint64_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint64_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-intfhdl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint64_array_name_datas = uint64_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint64_array_name_datas.begin(), uint64_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint64_array")
    {
        uint64_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint64_array")
    {
        uint64_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint64_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Ethertype()
    :
    uint16_rng_array(this, {})
{

    yang_name = "ethertype"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::~Ethertype()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethertype";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray>();
        ent_->parent = this;
        uint16_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint16_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::Uint16RngArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "ethertype"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeyData()
    :
    max_count{YType::uint16, "max-count"},
    idle_timeout{YType::uint16, "idle-timeout"}
        ,
    flow_keys(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys>())
{
    flow_keys->parent = this;

    yang_name = "flow-key-data"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::~FlowKeyData()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::has_data() const
{
    if (is_presence_container) return true;
    return max_count.is_set
	|| idle_timeout.is_set
	|| (flow_keys !=  nullptr && flow_keys->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_count.yfilter)
	|| ydk::is_set(idle_timeout.yfilter)
	|| (flow_keys !=  nullptr && flow_keys->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-key-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_count.is_set || is_set(max_count.yfilter)) leaf_name_data.push_back(max_count.get_name_leafdata());
    if (idle_timeout.is_set || is_set(idle_timeout.yfilter)) leaf_name_data.push_back(idle_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-keys")
    {
        if(flow_keys == nullptr)
        {
            flow_keys = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys>();
        }
        return flow_keys;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow_keys != nullptr)
    {
        _children["flow-keys"] = flow_keys;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-count")
    {
        max_count = value;
        max_count.value_namespace = name_space;
        max_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout = value;
        idle_timeout.value_namespace = name_space;
        idle_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-count")
    {
        max_count.yfilter = yfilter;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-keys" || name == "max-count" || name == "idle-timeout")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::FlowKeys()
    :
    keys{YType::str, "keys"},
    num{YType::uint8, "num"}
{

    yang_name = "flow-keys"; yang_parent_name = "flow-key-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::~FlowKeys()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::has_data() const
{
    if (is_presence_container) return true;
    return keys.is_set
	|| num.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keys.yfilter)
	|| ydk::is_set(num.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-keys";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keys.is_set || is_set(keys.yfilter)) leaf_name_data.push_back(keys.get_name_leafdata());
    if (num.is_set || is_set(num.yfilter)) leaf_name_data.push_back(num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keys")
    {
        keys = value;
        keys.value_namespace = name_space;
        keys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num")
    {
        num = value;
        num.value_namespace = name_space;
        num.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keys")
    {
        keys.yfilter = yfilter;
    }
    if(value_path == "num")
    {
        num.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keys" || name == "num")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::DhcpClientId()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "dhcp-client-id"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::~DhcpClientId()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::DhcpClientIdRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "dhcp-client-id-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::~DhcpClientIdRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-client-id-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::CircuitId()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "circuit-id"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::~CircuitId()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::CircuitIdRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "circuit-id-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::~CircuitIdRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::RemoteId()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "remote-id"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::~RemoteId()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::RemoteIdRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "remote-id-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::~RemoteIdRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::SrcPort()
    :
    uint16_rng_array(this, {})
{

    yang_name = "src-port"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::~SrcPort()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray>();
        ent_->parent = this;
        uint16_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint16_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::Uint16RngArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "src-port"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::DstPort()
    :
    uint16_rng_array(this, {})
{

    yang_name = "dst-port"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::~DstPort()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.len(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray>();
        ent_->parent = this;
        uint16_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint16_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::Uint16RngArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "dst-port"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::ActInfop()
    :
    policy_action_info_st(this, {})
{

    yang_name = "act-infop"; yang_parent_name = "policy-class-info-bg"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::~ActInfop()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_action_info_st.len(); index++)
    {
        if(policy_action_info_st[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::has_operation() const
{
    for (std::size_t index=0; index<policy_action_info_st.len(); index++)
    {
        if(policy_action_info_st[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "act-infop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-action-info-st")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt>();
        ent_->parent = this;
        policy_action_info_st.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_action_info_st.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-action-info-st")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::PolicyActionInfoSt()
    :
    seq{YType::uint16, "seq"},
    flags{YType::uint16, "flags"}
        ,
    actp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp>())
{
    actp->parent = this;

    yang_name = "policy-action-info-st"; yang_parent_name = "act-infop"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::~PolicyActionInfoSt()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::has_data() const
{
    if (is_presence_container) return true;
    return seq.is_set
	|| flags.is_set
	|| (actp !=  nullptr && actp->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seq.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (actp !=  nullptr && actp->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-action-info-st";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actp")
    {
        if(actp == nullptr)
        {
            actp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp>();
        }
        return actp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(actp != nullptr)
    {
        _children["actp"] = actp;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actp" || name == "seq" || name == "flags")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Actp()
    :
    type{YType::enumeration, "type"},
    data_p{YType::uint32, "data-p"}
        ,
    mark(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark>())
    , mark2(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2>())
    , wred(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred>())
    , encap(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap>())
    , prio(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio>())
    , bwrem(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem>())
    , min_bw(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw>())
    , authen_aaa(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa>())
    , collect_id(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId>())
    , decode_id(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId>())
    , set_timer(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer>())
    , stop_timer(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer>())
    , acct_aaa_list(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList>())
    , query_ancp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp>())
    , prepaid_cfg(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg>())
    , timeout_idle(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle>())
    , proxy_aaa(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa>())
    , act_template(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate>())
    , deact_template(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate>())
    , qlimit(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit>())
    , accounting_event_aaa(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa>())
    , authorize_id(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId>())
    , afm_react(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact>())
    , httpr(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr>())
    , punt(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt>())
    , copy(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy>())
    , sfrag(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag>())
    , redirect(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect>())
    , out_intf(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf>())
    , serv_func(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc>())
    , police(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police>())
    , shape(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape>())
    , child_policy(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy>())
    , cac(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac>())
    , pfc(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc>())
    , flow_parm(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm>())
    , ipcbr(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr>())
    , rtp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp>())
    , rtp_mmr(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr>())
    , rtp_j2k(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2k>())
    , rtp_voice(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice>())
    , mdi(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi>())
    , mdi_rtp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp>())
    , fmm(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm>())
    , pbf(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf>())
    , ipv4_nh(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh>())
    , ipv6_nh(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh>())
{
    mark->parent = this;
    mark2->parent = this;
    wred->parent = this;
    encap->parent = this;
    prio->parent = this;
    bwrem->parent = this;
    min_bw->parent = this;
    authen_aaa->parent = this;
    collect_id->parent = this;
    decode_id->parent = this;
    set_timer->parent = this;
    stop_timer->parent = this;
    acct_aaa_list->parent = this;
    query_ancp->parent = this;
    prepaid_cfg->parent = this;
    timeout_idle->parent = this;
    proxy_aaa->parent = this;
    act_template->parent = this;
    deact_template->parent = this;
    qlimit->parent = this;
    accounting_event_aaa->parent = this;
    authorize_id->parent = this;
    afm_react->parent = this;
    httpr->parent = this;
    punt->parent = this;
    copy->parent = this;
    sfrag->parent = this;
    redirect->parent = this;
    out_intf->parent = this;
    serv_func->parent = this;
    police->parent = this;
    shape->parent = this;
    child_policy->parent = this;
    cac->parent = this;
    pfc->parent = this;
    flow_parm->parent = this;
    ipcbr->parent = this;
    rtp->parent = this;
    rtp_mmr->parent = this;
    rtp_j2k->parent = this;
    rtp_voice->parent = this;
    mdi->parent = this;
    mdi_rtp->parent = this;
    fmm->parent = this;
    pbf->parent = this;
    ipv4_nh->parent = this;
    ipv6_nh->parent = this;

    yang_name = "actp"; yang_parent_name = "policy-action-info-st"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::~Actp()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| data_p.is_set
	|| (mark !=  nullptr && mark->has_data())
	|| (mark2 !=  nullptr && mark2->has_data())
	|| (wred !=  nullptr && wred->has_data())
	|| (encap !=  nullptr && encap->has_data())
	|| (prio !=  nullptr && prio->has_data())
	|| (bwrem !=  nullptr && bwrem->has_data())
	|| (min_bw !=  nullptr && min_bw->has_data())
	|| (authen_aaa !=  nullptr && authen_aaa->has_data())
	|| (collect_id !=  nullptr && collect_id->has_data())
	|| (decode_id !=  nullptr && decode_id->has_data())
	|| (set_timer !=  nullptr && set_timer->has_data())
	|| (stop_timer !=  nullptr && stop_timer->has_data())
	|| (acct_aaa_list !=  nullptr && acct_aaa_list->has_data())
	|| (query_ancp !=  nullptr && query_ancp->has_data())
	|| (prepaid_cfg !=  nullptr && prepaid_cfg->has_data())
	|| (timeout_idle !=  nullptr && timeout_idle->has_data())
	|| (proxy_aaa !=  nullptr && proxy_aaa->has_data())
	|| (act_template !=  nullptr && act_template->has_data())
	|| (deact_template !=  nullptr && deact_template->has_data())
	|| (qlimit !=  nullptr && qlimit->has_data())
	|| (accounting_event_aaa !=  nullptr && accounting_event_aaa->has_data())
	|| (authorize_id !=  nullptr && authorize_id->has_data())
	|| (afm_react !=  nullptr && afm_react->has_data())
	|| (httpr !=  nullptr && httpr->has_data())
	|| (punt !=  nullptr && punt->has_data())
	|| (copy !=  nullptr && copy->has_data())
	|| (sfrag !=  nullptr && sfrag->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (out_intf !=  nullptr && out_intf->has_data())
	|| (serv_func !=  nullptr && serv_func->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (child_policy !=  nullptr && child_policy->has_data())
	|| (cac !=  nullptr && cac->has_data())
	|| (pfc !=  nullptr && pfc->has_data())
	|| (flow_parm !=  nullptr && flow_parm->has_data())
	|| (ipcbr !=  nullptr && ipcbr->has_data())
	|| (rtp !=  nullptr && rtp->has_data())
	|| (rtp_mmr !=  nullptr && rtp_mmr->has_data())
	|| (rtp_j2k !=  nullptr && rtp_j2k->has_data())
	|| (rtp_voice !=  nullptr && rtp_voice->has_data())
	|| (mdi !=  nullptr && mdi->has_data())
	|| (mdi_rtp !=  nullptr && mdi_rtp->has_data())
	|| (fmm !=  nullptr && fmm->has_data())
	|| (pbf !=  nullptr && pbf->has_data())
	|| (ipv4_nh !=  nullptr && ipv4_nh->has_data())
	|| (ipv6_nh !=  nullptr && ipv6_nh->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(data_p.yfilter)
	|| (mark !=  nullptr && mark->has_operation())
	|| (mark2 !=  nullptr && mark2->has_operation())
	|| (wred !=  nullptr && wred->has_operation())
	|| (encap !=  nullptr && encap->has_operation())
	|| (prio !=  nullptr && prio->has_operation())
	|| (bwrem !=  nullptr && bwrem->has_operation())
	|| (min_bw !=  nullptr && min_bw->has_operation())
	|| (authen_aaa !=  nullptr && authen_aaa->has_operation())
	|| (collect_id !=  nullptr && collect_id->has_operation())
	|| (decode_id !=  nullptr && decode_id->has_operation())
	|| (set_timer !=  nullptr && set_timer->has_operation())
	|| (stop_timer !=  nullptr && stop_timer->has_operation())
	|| (acct_aaa_list !=  nullptr && acct_aaa_list->has_operation())
	|| (query_ancp !=  nullptr && query_ancp->has_operation())
	|| (prepaid_cfg !=  nullptr && prepaid_cfg->has_operation())
	|| (timeout_idle !=  nullptr && timeout_idle->has_operation())
	|| (proxy_aaa !=  nullptr && proxy_aaa->has_operation())
	|| (act_template !=  nullptr && act_template->has_operation())
	|| (deact_template !=  nullptr && deact_template->has_operation())
	|| (qlimit !=  nullptr && qlimit->has_operation())
	|| (accounting_event_aaa !=  nullptr && accounting_event_aaa->has_operation())
	|| (authorize_id !=  nullptr && authorize_id->has_operation())
	|| (afm_react !=  nullptr && afm_react->has_operation())
	|| (httpr !=  nullptr && httpr->has_operation())
	|| (punt !=  nullptr && punt->has_operation())
	|| (copy !=  nullptr && copy->has_operation())
	|| (sfrag !=  nullptr && sfrag->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (out_intf !=  nullptr && out_intf->has_operation())
	|| (serv_func !=  nullptr && serv_func->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (shape !=  nullptr && shape->has_operation())
	|| (child_policy !=  nullptr && child_policy->has_operation())
	|| (cac !=  nullptr && cac->has_operation())
	|| (pfc !=  nullptr && pfc->has_operation())
	|| (flow_parm !=  nullptr && flow_parm->has_operation())
	|| (ipcbr !=  nullptr && ipcbr->has_operation())
	|| (rtp !=  nullptr && rtp->has_operation())
	|| (rtp_mmr !=  nullptr && rtp_mmr->has_operation())
	|| (rtp_j2k !=  nullptr && rtp_j2k->has_operation())
	|| (rtp_voice !=  nullptr && rtp_voice->has_operation())
	|| (mdi !=  nullptr && mdi->has_operation())
	|| (mdi_rtp !=  nullptr && mdi_rtp->has_operation())
	|| (fmm !=  nullptr && fmm->has_operation())
	|| (pbf !=  nullptr && pbf->has_operation())
	|| (ipv4_nh !=  nullptr && ipv4_nh->has_operation())
	|| (ipv6_nh !=  nullptr && ipv6_nh->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (data_p.is_set || is_set(data_p.yfilter)) leaf_name_data.push_back(data_p.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        if(mark == nullptr)
        {
            mark = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark>();
        }
        return mark;
    }

    if(child_yang_name == "mark2")
    {
        if(mark2 == nullptr)
        {
            mark2 = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2>();
        }
        return mark2;
    }

    if(child_yang_name == "wred")
    {
        if(wred == nullptr)
        {
            wred = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred>();
        }
        return wred;
    }

    if(child_yang_name == "encap")
    {
        if(encap == nullptr)
        {
            encap = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap>();
        }
        return encap;
    }

    if(child_yang_name == "prio")
    {
        if(prio == nullptr)
        {
            prio = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio>();
        }
        return prio;
    }

    if(child_yang_name == "bwrem")
    {
        if(bwrem == nullptr)
        {
            bwrem = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem>();
        }
        return bwrem;
    }

    if(child_yang_name == "min-bw")
    {
        if(min_bw == nullptr)
        {
            min_bw = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw>();
        }
        return min_bw;
    }

    if(child_yang_name == "authen-aaa")
    {
        if(authen_aaa == nullptr)
        {
            authen_aaa = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa>();
        }
        return authen_aaa;
    }

    if(child_yang_name == "collect-id")
    {
        if(collect_id == nullptr)
        {
            collect_id = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId>();
        }
        return collect_id;
    }

    if(child_yang_name == "decode-id")
    {
        if(decode_id == nullptr)
        {
            decode_id = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId>();
        }
        return decode_id;
    }

    if(child_yang_name == "set-timer")
    {
        if(set_timer == nullptr)
        {
            set_timer = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer>();
        }
        return set_timer;
    }

    if(child_yang_name == "stop-timer")
    {
        if(stop_timer == nullptr)
        {
            stop_timer = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer>();
        }
        return stop_timer;
    }

    if(child_yang_name == "acct-aaa-list")
    {
        if(acct_aaa_list == nullptr)
        {
            acct_aaa_list = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList>();
        }
        return acct_aaa_list;
    }

    if(child_yang_name == "query-ancp")
    {
        if(query_ancp == nullptr)
        {
            query_ancp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp>();
        }
        return query_ancp;
    }

    if(child_yang_name == "prepaid-cfg")
    {
        if(prepaid_cfg == nullptr)
        {
            prepaid_cfg = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg>();
        }
        return prepaid_cfg;
    }

    if(child_yang_name == "timeout-idle")
    {
        if(timeout_idle == nullptr)
        {
            timeout_idle = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle>();
        }
        return timeout_idle;
    }

    if(child_yang_name == "proxy-aaa")
    {
        if(proxy_aaa == nullptr)
        {
            proxy_aaa = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa>();
        }
        return proxy_aaa;
    }

    if(child_yang_name == "act-template")
    {
        if(act_template == nullptr)
        {
            act_template = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate>();
        }
        return act_template;
    }

    if(child_yang_name == "deact-template")
    {
        if(deact_template == nullptr)
        {
            deact_template = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate>();
        }
        return deact_template;
    }

    if(child_yang_name == "qlimit")
    {
        if(qlimit == nullptr)
        {
            qlimit = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit>();
        }
        return qlimit;
    }

    if(child_yang_name == "accounting-event-aaa")
    {
        if(accounting_event_aaa == nullptr)
        {
            accounting_event_aaa = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa>();
        }
        return accounting_event_aaa;
    }

    if(child_yang_name == "authorize-id")
    {
        if(authorize_id == nullptr)
        {
            authorize_id = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId>();
        }
        return authorize_id;
    }

    if(child_yang_name == "afm-react")
    {
        if(afm_react == nullptr)
        {
            afm_react = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact>();
        }
        return afm_react;
    }

    if(child_yang_name == "httpr")
    {
        if(httpr == nullptr)
        {
            httpr = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr>();
        }
        return httpr;
    }

    if(child_yang_name == "punt")
    {
        if(punt == nullptr)
        {
            punt = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt>();
        }
        return punt;
    }

    if(child_yang_name == "copy")
    {
        if(copy == nullptr)
        {
            copy = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy>();
        }
        return copy;
    }

    if(child_yang_name == "sfrag")
    {
        if(sfrag == nullptr)
        {
            sfrag = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag>();
        }
        return sfrag;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "out-intf")
    {
        if(out_intf == nullptr)
        {
            out_intf = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf>();
        }
        return out_intf;
    }

    if(child_yang_name == "serv-func")
    {
        if(serv_func == nullptr)
        {
            serv_func = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc>();
        }
        return serv_func;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police>();
        }
        return police;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "child-policy")
    {
        if(child_policy == nullptr)
        {
            child_policy = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy>();
        }
        return child_policy;
    }

    if(child_yang_name == "cac")
    {
        if(cac == nullptr)
        {
            cac = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac>();
        }
        return cac;
    }

    if(child_yang_name == "pfc")
    {
        if(pfc == nullptr)
        {
            pfc = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc>();
        }
        return pfc;
    }

    if(child_yang_name == "flow-parm")
    {
        if(flow_parm == nullptr)
        {
            flow_parm = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm>();
        }
        return flow_parm;
    }

    if(child_yang_name == "ipcbr")
    {
        if(ipcbr == nullptr)
        {
            ipcbr = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr>();
        }
        return ipcbr;
    }

    if(child_yang_name == "rtp")
    {
        if(rtp == nullptr)
        {
            rtp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp>();
        }
        return rtp;
    }

    if(child_yang_name == "rtp-mmr")
    {
        if(rtp_mmr == nullptr)
        {
            rtp_mmr = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr>();
        }
        return rtp_mmr;
    }

    if(child_yang_name == "rtp-j2k")
    {
        if(rtp_j2k == nullptr)
        {
            rtp_j2k = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2k>();
        }
        return rtp_j2k;
    }

    if(child_yang_name == "rtp-voice")
    {
        if(rtp_voice == nullptr)
        {
            rtp_voice = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice>();
        }
        return rtp_voice;
    }

    if(child_yang_name == "mdi")
    {
        if(mdi == nullptr)
        {
            mdi = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi>();
        }
        return mdi;
    }

    if(child_yang_name == "mdi-rtp")
    {
        if(mdi_rtp == nullptr)
        {
            mdi_rtp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp>();
        }
        return mdi_rtp;
    }

    if(child_yang_name == "fmm")
    {
        if(fmm == nullptr)
        {
            fmm = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm>();
        }
        return fmm;
    }

    if(child_yang_name == "pbf")
    {
        if(pbf == nullptr)
        {
            pbf = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf>();
        }
        return pbf;
    }

    if(child_yang_name == "ipv4-nh")
    {
        if(ipv4_nh == nullptr)
        {
            ipv4_nh = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh>();
        }
        return ipv4_nh;
    }

    if(child_yang_name == "ipv6-nh")
    {
        if(ipv6_nh == nullptr)
        {
            ipv6_nh = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh>();
        }
        return ipv6_nh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mark != nullptr)
    {
        _children["mark"] = mark;
    }

    if(mark2 != nullptr)
    {
        _children["mark2"] = mark2;
    }

    if(wred != nullptr)
    {
        _children["wred"] = wred;
    }

    if(encap != nullptr)
    {
        _children["encap"] = encap;
    }

    if(prio != nullptr)
    {
        _children["prio"] = prio;
    }

    if(bwrem != nullptr)
    {
        _children["bwrem"] = bwrem;
    }

    if(min_bw != nullptr)
    {
        _children["min-bw"] = min_bw;
    }

    if(authen_aaa != nullptr)
    {
        _children["authen-aaa"] = authen_aaa;
    }

    if(collect_id != nullptr)
    {
        _children["collect-id"] = collect_id;
    }

    if(decode_id != nullptr)
    {
        _children["decode-id"] = decode_id;
    }

    if(set_timer != nullptr)
    {
        _children["set-timer"] = set_timer;
    }

    if(stop_timer != nullptr)
    {
        _children["stop-timer"] = stop_timer;
    }

    if(acct_aaa_list != nullptr)
    {
        _children["acct-aaa-list"] = acct_aaa_list;
    }

    if(query_ancp != nullptr)
    {
        _children["query-ancp"] = query_ancp;
    }

    if(prepaid_cfg != nullptr)
    {
        _children["prepaid-cfg"] = prepaid_cfg;
    }

    if(timeout_idle != nullptr)
    {
        _children["timeout-idle"] = timeout_idle;
    }

    if(proxy_aaa != nullptr)
    {
        _children["proxy-aaa"] = proxy_aaa;
    }

    if(act_template != nullptr)
    {
        _children["act-template"] = act_template;
    }

    if(deact_template != nullptr)
    {
        _children["deact-template"] = deact_template;
    }

    if(qlimit != nullptr)
    {
        _children["qlimit"] = qlimit;
    }

    if(accounting_event_aaa != nullptr)
    {
        _children["accounting-event-aaa"] = accounting_event_aaa;
    }

    if(authorize_id != nullptr)
    {
        _children["authorize-id"] = authorize_id;
    }

    if(afm_react != nullptr)
    {
        _children["afm-react"] = afm_react;
    }

    if(httpr != nullptr)
    {
        _children["httpr"] = httpr;
    }

    if(punt != nullptr)
    {
        _children["punt"] = punt;
    }

    if(copy != nullptr)
    {
        _children["copy"] = copy;
    }

    if(sfrag != nullptr)
    {
        _children["sfrag"] = sfrag;
    }

    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    if(out_intf != nullptr)
    {
        _children["out-intf"] = out_intf;
    }

    if(serv_func != nullptr)
    {
        _children["serv-func"] = serv_func;
    }

    if(police != nullptr)
    {
        _children["police"] = police;
    }

    if(shape != nullptr)
    {
        _children["shape"] = shape;
    }

    if(child_policy != nullptr)
    {
        _children["child-policy"] = child_policy;
    }

    if(cac != nullptr)
    {
        _children["cac"] = cac;
    }

    if(pfc != nullptr)
    {
        _children["pfc"] = pfc;
    }

    if(flow_parm != nullptr)
    {
        _children["flow-parm"] = flow_parm;
    }

    if(ipcbr != nullptr)
    {
        _children["ipcbr"] = ipcbr;
    }

    if(rtp != nullptr)
    {
        _children["rtp"] = rtp;
    }

    if(rtp_mmr != nullptr)
    {
        _children["rtp-mmr"] = rtp_mmr;
    }

    if(rtp_j2k != nullptr)
    {
        _children["rtp-j2k"] = rtp_j2k;
    }

    if(rtp_voice != nullptr)
    {
        _children["rtp-voice"] = rtp_voice;
    }

    if(mdi != nullptr)
    {
        _children["mdi"] = mdi;
    }

    if(mdi_rtp != nullptr)
    {
        _children["mdi-rtp"] = mdi_rtp;
    }

    if(fmm != nullptr)
    {
        _children["fmm"] = fmm;
    }

    if(pbf != nullptr)
    {
        _children["pbf"] = pbf;
    }

    if(ipv4_nh != nullptr)
    {
        _children["ipv4-nh"] = ipv4_nh;
    }

    if(ipv6_nh != nullptr)
    {
        _children["ipv6-nh"] = ipv6_nh;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-p")
    {
        data_p = value;
        data_p.value_namespace = name_space;
        data_p.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "data-p")
    {
        data_p.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "mark2" || name == "wred" || name == "encap" || name == "prio" || name == "bwrem" || name == "min-bw" || name == "authen-aaa" || name == "collect-id" || name == "decode-id" || name == "set-timer" || name == "stop-timer" || name == "acct-aaa-list" || name == "query-ancp" || name == "prepaid-cfg" || name == "timeout-idle" || name == "proxy-aaa" || name == "act-template" || name == "deact-template" || name == "qlimit" || name == "accounting-event-aaa" || name == "authorize-id" || name == "afm-react" || name == "httpr" || name == "punt" || name == "copy" || name == "sfrag" || name == "redirect" || name == "out-intf" || name == "serv-func" || name == "police" || name == "shape" || name == "child-policy" || name == "cac" || name == "pfc" || name == "flow-parm" || name == "ipcbr" || name == "rtp" || name == "rtp-mmr" || name == "rtp-j2k" || name == "rtp-voice" || name == "mdi" || name == "mdi-rtp" || name == "fmm" || name == "pbf" || name == "ipv4-nh" || name == "ipv6-nh" || name == "type" || name == "data-p")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::Mark()
    :
    action_mark_info(this, {})
{

    yang_name = "mark"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::~Mark()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<action_mark_info.len(); index++)
    {
        if(action_mark_info[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::has_operation() const
{
    for (std::size_t index=0; index<action_mark_info.len(); index++)
    {
        if(action_mark_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-mark-info")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo>();
        ent_->parent = this;
        action_mark_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : action_mark_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-mark-info")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::ActionMarkInfo()
    :
    type{YType::enumeration, "type"},
    mark_flags{YType::uint32, "mark-flags"},
    value_{YType::uint16, "value"}
{

    yang_name = "action-mark-info"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::~ActionMarkInfo()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| mark_flags.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mark_flags.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-mark-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mark_flags.is_set || is_set(mark_flags.yfilter)) leaf_name_data.push_back(mark_flags.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-flags")
    {
        mark_flags = value;
        mark_flags.value_namespace = name_space;
        mark_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mark-flags")
    {
        mark_flags.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "mark-flags" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::Mark2()
    :
    action_mark2_info(this, {})
{

    yang_name = "mark2"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::~Mark2()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<action_mark2_info.len(); index++)
    {
        if(action_mark2_info[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::has_operation() const
{
    for (std::size_t index=0; index<action_mark2_info.len(); index++)
    {
        if(action_mark2_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-mark2-info")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info>();
        ent_->parent = this;
        action_mark2_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : action_mark2_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-mark2-info")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::ActionMark2Info()
    :
    value_{YType::uint32, "value"},
    value_overflow{YType::uint16, "value-overflow"},
    type{YType::uint8, "type"},
    mark_flags{YType::uint8, "mark-flags"}
{

    yang_name = "action-mark2-info"; yang_parent_name = "mark2"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::~ActionMark2Info()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| value_overflow.is_set
	|| type.is_set
	|| mark_flags.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(value_overflow.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mark_flags.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-mark2-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (value_overflow.is_set || is_set(value_overflow.yfilter)) leaf_name_data.push_back(value_overflow.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mark_flags.is_set || is_set(mark_flags.yfilter)) leaf_name_data.push_back(mark_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-overflow")
    {
        value_overflow = value;
        value_overflow.value_namespace = name_space;
        value_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-flags")
    {
        mark_flags = value;
        mark_flags.value_namespace = name_space;
        mark_flags.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "value-overflow")
    {
        value_overflow.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mark-flags")
    {
        mark_flags.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "value-overflow" || name == "type" || name == "mark-flags")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::Wred()
    :
    action_wred_info(this, {})
{

    yang_name = "wred"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::~Wred()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<action_wred_info.len(); index++)
    {
        if(action_wred_info[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::has_operation() const
{
    for (std::size_t index=0; index<action_wred_info.len(); index++)
    {
        if(action_wred_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-wred-info")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo>();
        ent_->parent = this;
        action_wred_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : action_wred_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-wred-info")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::ActionWredInfo()
    :
    type{YType::enumeration, "type"},
    wred_flags{YType::uint32, "wred-flags"},
    probability{YType::uint32, "probability"}
        ,
    match_ranges(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges>())
    , min_threshold(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold>())
    , max_threshold(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold>())
{
    match_ranges->parent = this;
    min_threshold->parent = this;
    max_threshold->parent = this;

    yang_name = "action-wred-info"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::~ActionWredInfo()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| wred_flags.is_set
	|| probability.is_set
	|| (match_ranges !=  nullptr && match_ranges->has_data())
	|| (min_threshold !=  nullptr && min_threshold->has_data())
	|| (max_threshold !=  nullptr && max_threshold->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(wred_flags.yfilter)
	|| ydk::is_set(probability.yfilter)
	|| (match_ranges !=  nullptr && match_ranges->has_operation())
	|| (min_threshold !=  nullptr && min_threshold->has_operation())
	|| (max_threshold !=  nullptr && max_threshold->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-wred-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (wred_flags.is_set || is_set(wred_flags.yfilter)) leaf_name_data.push_back(wred_flags.get_name_leafdata());
    if (probability.is_set || is_set(probability.yfilter)) leaf_name_data.push_back(probability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-ranges")
    {
        if(match_ranges == nullptr)
        {
            match_ranges = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges>();
        }
        return match_ranges;
    }

    if(child_yang_name == "min-threshold")
    {
        if(min_threshold == nullptr)
        {
            min_threshold = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold>();
        }
        return min_threshold;
    }

    if(child_yang_name == "max-threshold")
    {
        if(max_threshold == nullptr)
        {
            max_threshold = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold>();
        }
        return max_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match_ranges != nullptr)
    {
        _children["match-ranges"] = match_ranges;
    }

    if(min_threshold != nullptr)
    {
        _children["min-threshold"] = min_threshold;
    }

    if(max_threshold != nullptr)
    {
        _children["max-threshold"] = max_threshold;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-flags")
    {
        wred_flags = value;
        wred_flags.value_namespace = name_space;
        wred_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probability")
    {
        probability = value;
        probability.value_namespace = name_space;
        probability.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "wred-flags")
    {
        wred_flags.yfilter = yfilter;
    }
    if(value_path == "probability")
    {
        probability.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-ranges" || name == "min-threshold" || name == "max-threshold" || name == "type" || name == "wred-flags" || name == "probability")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::MatchRanges()
    :
    uint8_rng_array(this, {})
{

    yang_name = "match-ranges"; yang_parent_name = "action-wred-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::~MatchRanges()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.len(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        auto ent_ = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8RngArray>();
        ent_->parent = this;
        uint8_rng_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint8_rng_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "match-ranges"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8RngArray::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::MinThreshold()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "min-threshold"; yang_parent_name = "action-wred-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::~MinThreshold()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::MaxThreshold()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "max-threshold"; yang_parent_name = "action-wred-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::~MaxThreshold()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::Encap()
    :
    seq{YType::uint8, "seq"}
{

    yang_name = "encap"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::~Encap()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::has_data() const
{
    if (is_presence_container) return true;
    return seq.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seq.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::Prio()
    :
    prio_lvl{YType::uint32, "prio-lvl"}
{

    yang_name = "prio"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::~Prio()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::has_data() const
{
    if (is_presence_container) return true;
    return prio_lvl.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prio_lvl.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prio_lvl.is_set || is_set(prio_lvl.yfilter)) leaf_name_data.push_back(prio_lvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prio-lvl")
    {
        prio_lvl = value;
        prio_lvl.value_namespace = name_space;
        prio_lvl.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prio-lvl")
    {
        prio_lvl.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prio-lvl")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem()
    :
    bwrem(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_>())
{
    bwrem->parent = this;

    yang_name = "bwrem"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::~Bwrem()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::has_data() const
{
    if (is_presence_container) return true;
    return (bwrem !=  nullptr && bwrem->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::has_operation() const
{
    return is_set(yfilter)
	|| (bwrem !=  nullptr && bwrem->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bwrem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bwrem")
    {
        if(bwrem == nullptr)
        {
            bwrem = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_>();
        }
        return bwrem;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bwrem != nullptr)
    {
        _children["bwrem"] = bwrem;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bwrem")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::Bwrem_()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "bwrem"; yang_parent_name = "bwrem"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::~Bwrem_()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bwrem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::MinBw()
    :
    bw(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw>())
{
    bw->parent = this;

    yang_name = "min-bw"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::~MinBw()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::has_data() const
{
    if (is_presence_container) return true;
    return (bw !=  nullptr && bw->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::has_operation() const
{
    return is_set(yfilter)
	|| (bw !=  nullptr && bw->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw")
    {
        if(bw == nullptr)
        {
            bw = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw>();
        }
        return bw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bw != nullptr)
    {
        _children["bw"] = bw;
    }

    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::Bw()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "bw"; yang_parent_name = "min-bw"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::~Bw()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::AuthenAaa()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    authen_password{YType::str, "authen-password"}
{

    yang_name = "authen-aaa"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::~AuthenAaa()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::has_data() const
{
    if (is_presence_container) return true;
    return aaa_list_name.is_set
	|| authen_password.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list_name.yfilter)
	|| ydk::is_set(authen_password.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authen-aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (authen_password.is_set || is_set(authen_password.yfilter)) leaf_name_data.push_back(authen_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-password")
    {
        authen_password = value;
        authen_password.value_namespace = name_space;
        authen_password.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
    if(value_path == "authen-password")
    {
        authen_password.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list-name" || name == "authen-password")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::CollectId()
    :
    id{YType::enumeration, "id"},
    aaa_list_name{YType::str, "aaa-list-name"}
{

    yang_name = "collect-id"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::~CollectId()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| aaa_list_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(aaa_list_name.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collect-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "aaa-list-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::DecodeId()
    :
    id{YType::enumeration, "id"},
    format_name{YType::str, "format-name"}
{

    yang_name = "decode-id"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::~DecodeId()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| format_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(format_name.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decode-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.yfilter)) leaf_name_data.push_back(format_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-name")
    {
        format_name = value;
        format_name.value_namespace = name_space;
        format_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "format-name")
    {
        format_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "format-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::SetTimer()
    :
    timer_name{YType::str, "timer-name"},
    duration{YType::uint32, "duration"},
    absolute_time{YType::str, "absolute-time"}
{

    yang_name = "set-timer"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::~SetTimer()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::has_data() const
{
    if (is_presence_container) return true;
    return timer_name.is_set
	|| duration.is_set
	|| absolute_time.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer_name.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(absolute_time.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_name.is_set || is_set(timer_name.yfilter)) leaf_name_data.push_back(timer_name.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (absolute_time.is_set || is_set(absolute_time.yfilter)) leaf_name_data.push_back(absolute_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer-name")
    {
        timer_name = value;
        timer_name.value_namespace = name_space;
        timer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-time")
    {
        absolute_time = value;
        absolute_time.value_namespace = name_space;
        absolute_time.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer-name")
    {
        timer_name.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "absolute-time")
    {
        absolute_time.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-name" || name == "duration" || name == "absolute-time")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::StopTimer()
    :
    timer_name{YType::str, "timer-name"}
{

    yang_name = "stop-timer"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::~StopTimer()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::has_data() const
{
    if (is_presence_container) return true;
    return timer_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer_name.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_name.is_set || is_set(timer_name.yfilter)) leaf_name_data.push_back(timer_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer-name")
    {
        timer_name = value;
        timer_name.value_namespace = name_space;
        timer_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer-name")
    {
        timer_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::AcctAaaList()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    secs{YType::uint32, "secs"}
{

    yang_name = "acct-aaa-list"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::~AcctAaaList()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::has_data() const
{
    if (is_presence_container) return true;
    return aaa_list_name.is_set
	|| secs.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list_name.yfilter)
	|| ydk::is_set(secs.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acct-aaa-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (secs.is_set || is_set(secs.yfilter)) leaf_name_data.push_back(secs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secs")
    {
        secs = value;
        secs.value_namespace = name_space;
        secs.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
    if(value_path == "secs")
    {
        secs.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list-name" || name == "secs")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::QueryAncp()
    :
    enable{YType::uint8, "enable"}
{

    yang_name = "query-ancp"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::~QueryAncp()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query-ancp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::PrepaidCfg()
    :
    prepaid_config_profile_name{YType::str, "prepaid-config-profile-name"}
{

    yang_name = "prepaid-cfg"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::~PrepaidCfg()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::has_data() const
{
    if (is_presence_container) return true;
    return prepaid_config_profile_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prepaid_config_profile_name.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepaid-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prepaid_config_profile_name.is_set || is_set(prepaid_config_profile_name.yfilter)) leaf_name_data.push_back(prepaid_config_profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prepaid-config-profile-name")
    {
        prepaid_config_profile_name = value;
        prepaid_config_profile_name.value_namespace = name_space;
        prepaid_config_profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prepaid-config-profile-name")
    {
        prepaid_config_profile_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepaid-config-profile-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::TimeoutIdle()
    :
    secs{YType::uint32, "secs"}
{

    yang_name = "timeout-idle"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::~TimeoutIdle()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::has_data() const
{
    if (is_presence_container) return true;
    return secs.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secs.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout-idle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secs.is_set || is_set(secs.yfilter)) leaf_name_data.push_back(secs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secs")
    {
        secs = value;
        secs.value_namespace = name_space;
        secs.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secs")
    {
        secs.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secs")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::ProxyAaa()
    :
    aaa_list_name{YType::str, "aaa-list-name"}
{

    yang_name = "proxy-aaa"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::~ProxyAaa()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::has_data() const
{
    if (is_presence_container) return true;
    return aaa_list_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list_name.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::ActTemplate()
    :
    template_name{YType::str, "template-name"},
    aaa_list_name{YType::str, "aaa-list-name"},
    flags{YType::uint32, "flags"}
{

    yang_name = "act-template"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true; 
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::~ActTemplate()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::has_data() const
{
    if (is_presence_container) return true;
    return template_name.is_set
	|| aaa_list_name.is_set
	|| flags.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(aaa_list_name.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "act-template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name" || name == "aaa-list-name" || name == "flags")
        return true;
    return false;
}


}
}

