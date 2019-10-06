
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs5500_5.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers_ncs5500 {

Controller::CardMgr::EventHistory::Detail::Detail()
    :
    location(this, {"location"})
{

    yang_name = "detail"; yang_parent_name = "event-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::EventHistory::Detail::~Detail()
{
}

bool Controller::CardMgr::EventHistory::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::EventHistory::Detail::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::EventHistory::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/event-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::EventHistory::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::EventHistory::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::EventHistory::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::EventHistory::Detail::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::EventHistory::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::EventHistory::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::EventHistory::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::EventHistory::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CardMgr::EventHistory::Detail::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_event_hist_detail(std::make_shared<Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail>())
{
    card_event_hist_detail->parent = this;

    yang_name = "location"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::EventHistory::Detail::Location::~Location()
{
}

bool Controller::CardMgr::EventHistory::Detail::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_event_hist_detail !=  nullptr && card_event_hist_detail->has_data());
}

bool Controller::CardMgr::EventHistory::Detail::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_event_hist_detail !=  nullptr && card_event_hist_detail->has_operation());
}

std::string Controller::CardMgr::EventHistory::Detail::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/event-history/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::EventHistory::Detail::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::EventHistory::Detail::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::EventHistory::Detail::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_event_hist_detail")
    {
        if(card_event_hist_detail == nullptr)
        {
            card_event_hist_detail = std::make_shared<Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail>();
        }
        return card_event_hist_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::EventHistory::Detail::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card_event_hist_detail != nullptr)
    {
        _children["card_event_hist_detail"] = card_event_hist_detail;
    }

    return _children;
}

void Controller::CardMgr::EventHistory::Detail::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::EventHistory::Detail::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::EventHistory::Detail::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_event_hist_detail" || name == "location")
        return true;
    return false;
}

Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::CardEventHistDetail()
    :
    card_event_hist_detail_values{YType::str, "card_event_hist_detail_values"}
{

    yang_name = "card_event_hist_detail"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::~CardEventHistDetail()
{
}

bool Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_event_hist_detail_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::has_operation() const
{
    for (auto const & leaf : card_event_hist_detail_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_event_hist_detail_values.yfilter);
}

std::string Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_event_hist_detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_event_hist_detail_values_name_datas = card_event_hist_detail_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_event_hist_detail_values_name_datas.begin(), card_event_hist_detail_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_event_hist_detail_values")
    {
        card_event_hist_detail_values.append(value);
    }
}

void Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_event_hist_detail_values")
    {
        card_event_hist_detail_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_event_hist_detail_values")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::NotifHistory()
    :
    brief(std::make_shared<Controller::CardMgr::NotifHistory::Brief>())
    , detail(std::make_shared<Controller::CardMgr::NotifHistory::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "notif-history"; yang_parent_name = "card_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::NotifHistory::~NotifHistory()
{
}

bool Controller::CardMgr::NotifHistory::has_data() const
{
    if (is_presence_container) return true;
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::CardMgr::NotifHistory::has_operation() const
{
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::CardMgr::NotifHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::NotifHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notif-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::CardMgr::NotifHistory::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::CardMgr::NotifHistory::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(brief != nullptr)
    {
        _children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    return _children;
}

void Controller::CardMgr::NotifHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::NotifHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::NotifHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::Brief::Brief()
    :
    location(this, {"location"})
{

    yang_name = "brief"; yang_parent_name = "notif-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::NotifHistory::Brief::~Brief()
{
}

bool Controller::CardMgr::NotifHistory::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::NotifHistory::Brief::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::NotifHistory::Brief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/notif-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::NotifHistory::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::NotifHistory::Brief::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::NotifHistory::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::NotifHistory::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::NotifHistory::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::Brief::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_notif_hist_brief(std::make_shared<Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief>())
{
    card_notif_hist_brief->parent = this;

    yang_name = "location"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::NotifHistory::Brief::Location::~Location()
{
}

bool Controller::CardMgr::NotifHistory::Brief::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_notif_hist_brief !=  nullptr && card_notif_hist_brief->has_data());
}

bool Controller::CardMgr::NotifHistory::Brief::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_notif_hist_brief !=  nullptr && card_notif_hist_brief->has_operation());
}

std::string Controller::CardMgr::NotifHistory::Brief::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/notif-history/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::NotifHistory::Brief::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::Brief::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::Brief::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_notif_hist_brief")
    {
        if(card_notif_hist_brief == nullptr)
        {
            card_notif_hist_brief = std::make_shared<Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief>();
        }
        return card_notif_hist_brief;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::Brief::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card_notif_hist_brief != nullptr)
    {
        _children["card_notif_hist_brief"] = card_notif_hist_brief;
    }

    return _children;
}

void Controller::CardMgr::NotifHistory::Brief::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::NotifHistory::Brief::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::NotifHistory::Brief::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_brief" || name == "location")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::CardNotifHistBrief()
    :
    card_notif_hist_brief_values{YType::str, "card_notif_hist_brief_values"}
{

    yang_name = "card_notif_hist_brief"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::~CardNotifHistBrief()
{
}

bool Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_notif_hist_brief_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::has_operation() const
{
    for (auto const & leaf : card_notif_hist_brief_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_notif_hist_brief_values.yfilter);
}

std::string Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_notif_hist_brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_notif_hist_brief_values_name_datas = card_notif_hist_brief_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_notif_hist_brief_values_name_datas.begin(), card_notif_hist_brief_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_notif_hist_brief_values")
    {
        card_notif_hist_brief_values.append(value);
    }
}

void Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_notif_hist_brief_values")
    {
        card_notif_hist_brief_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_brief_values")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::Detail::Detail()
    :
    location(this, {"location"})
{

    yang_name = "detail"; yang_parent_name = "notif-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::NotifHistory::Detail::~Detail()
{
}

bool Controller::CardMgr::NotifHistory::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::NotifHistory::Detail::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::NotifHistory::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/notif-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::NotifHistory::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::NotifHistory::Detail::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::NotifHistory::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::NotifHistory::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::NotifHistory::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::Detail::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_notif_hist_detail(std::make_shared<Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail>())
{
    card_notif_hist_detail->parent = this;

    yang_name = "location"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::NotifHistory::Detail::Location::~Location()
{
}

bool Controller::CardMgr::NotifHistory::Detail::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_notif_hist_detail !=  nullptr && card_notif_hist_detail->has_data());
}

bool Controller::CardMgr::NotifHistory::Detail::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_notif_hist_detail !=  nullptr && card_notif_hist_detail->has_operation());
}

std::string Controller::CardMgr::NotifHistory::Detail::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/notif-history/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::NotifHistory::Detail::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::Detail::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::Detail::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_notif_hist_detail")
    {
        if(card_notif_hist_detail == nullptr)
        {
            card_notif_hist_detail = std::make_shared<Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail>();
        }
        return card_notif_hist_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::Detail::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card_notif_hist_detail != nullptr)
    {
        _children["card_notif_hist_detail"] = card_notif_hist_detail;
    }

    return _children;
}

void Controller::CardMgr::NotifHistory::Detail::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::NotifHistory::Detail::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::NotifHistory::Detail::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_detail" || name == "location")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::CardNotifHistDetail()
    :
    card_notif_hist_detail_values{YType::str, "card_notif_hist_detail_values"}
{

    yang_name = "card_notif_hist_detail"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::~CardNotifHistDetail()
{
}

bool Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_notif_hist_detail_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::has_operation() const
{
    for (auto const & leaf : card_notif_hist_detail_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_notif_hist_detail_values.yfilter);
}

std::string Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_notif_hist_detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_notif_hist_detail_values_name_datas = card_notif_hist_detail_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_notif_hist_detail_values_name_datas.begin(), card_notif_hist_detail_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_notif_hist_detail_values")
    {
        card_notif_hist_detail_values.append(value);
    }
}

void Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_notif_hist_detail_values")
    {
        card_notif_hist_detail_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_detail_values")
        return true;
    return false;
}

Controller::CardMgr::OirHistory::OirHistory()
    :
    rack(this, {"rack"})
{

    yang_name = "oir-history"; yang_parent_name = "card_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::OirHistory::~OirHistory()
{
}

bool Controller::CardMgr::OirHistory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::OirHistory::has_operation() const
{
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::OirHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::OirHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oir-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::OirHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::OirHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::OirHistory::Rack>();
        ent_->parent = this;
        rack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::OirHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::OirHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::OirHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::OirHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

Controller::CardMgr::OirHistory::Rack::Rack()
    :
    rack{YType::str, "rack"}
        ,
    card_oir_hist(std::make_shared<Controller::CardMgr::OirHistory::Rack::CardOirHist>())
{
    card_oir_hist->parent = this;

    yang_name = "rack"; yang_parent_name = "oir-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::OirHistory::Rack::~Rack()
{
}

bool Controller::CardMgr::OirHistory::Rack::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| (card_oir_hist !=  nullptr && card_oir_hist->has_data());
}

bool Controller::CardMgr::OirHistory::Rack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| (card_oir_hist !=  nullptr && card_oir_hist->has_operation());
}

std::string Controller::CardMgr::OirHistory::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/oir-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::OirHistory::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack";
    ADD_KEY_TOKEN(rack, "rack");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::OirHistory::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::OirHistory::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_oir_hist")
    {
        if(card_oir_hist == nullptr)
        {
            card_oir_hist = std::make_shared<Controller::CardMgr::OirHistory::Rack::CardOirHist>();
        }
        return card_oir_hist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::OirHistory::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card_oir_hist != nullptr)
    {
        _children["card_oir_hist"] = card_oir_hist;
    }

    return _children;
}

void Controller::CardMgr::OirHistory::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::OirHistory::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
}

bool Controller::CardMgr::OirHistory::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_oir_hist" || name == "rack")
        return true;
    return false;
}

Controller::CardMgr::OirHistory::Rack::CardOirHist::CardOirHist()
    :
    card_oir_events{YType::str, "card_oir_events"}
{

    yang_name = "card_oir_hist"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::OirHistory::Rack::CardOirHist::~CardOirHist()
{
}

bool Controller::CardMgr::OirHistory::Rack::CardOirHist::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_oir_events.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::OirHistory::Rack::CardOirHist::has_operation() const
{
    for (auto const & leaf : card_oir_events.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_oir_events.yfilter);
}

std::string Controller::CardMgr::OirHistory::Rack::CardOirHist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_oir_hist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::OirHistory::Rack::CardOirHist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_oir_events_name_datas = card_oir_events.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_oir_events_name_datas.begin(), card_oir_events_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::OirHistory::Rack::CardOirHist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::OirHistory::Rack::CardOirHist::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::OirHistory::Rack::CardOirHist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_oir_events")
    {
        card_oir_events.append(value);
    }
}

void Controller::CardMgr::OirHistory::Rack::CardOirHist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_oir_events")
    {
        card_oir_events.yfilter = yfilter;
    }
}

bool Controller::CardMgr::OirHistory::Rack::CardOirHist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_oir_events")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Iofpga()
    :
    register_(std::make_shared<Controller::CardMgr::Iofpga::Register>())
    , flash(std::make_shared<Controller::CardMgr::Iofpga::Flash>())
{
    register_->parent = this;
    flash->parent = this;

    yang_name = "iofpga"; yang_parent_name = "card_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::~Iofpga()
{
}

bool Controller::CardMgr::Iofpga::has_data() const
{
    if (is_presence_container) return true;
    return (register_ !=  nullptr && register_->has_data())
	|| (flash !=  nullptr && flash->has_data());
}

bool Controller::CardMgr::Iofpga::has_operation() const
{
    return is_set(yfilter)
	|| (register_ !=  nullptr && register_->has_operation())
	|| (flash !=  nullptr && flash->has_operation());
}

std::string Controller::CardMgr::Iofpga::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register")
    {
        if(register_ == nullptr)
        {
            register_ = std::make_shared<Controller::CardMgr::Iofpga::Register>();
        }
        return register_;
    }

    if(child_yang_name == "flash")
    {
        if(flash == nullptr)
        {
            flash = std::make_shared<Controller::CardMgr::Iofpga::Flash>();
        }
        return flash;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(register_ != nullptr)
    {
        _children["register"] = register_;
    }

    if(flash != nullptr)
    {
        _children["flash"] = flash;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register" || name == "flash")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Register()
    :
    cpu(std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu>())
    , mb(std::make_shared<Controller::CardMgr::Iofpga::Register::Mb>())
    , dc(std::make_shared<Controller::CardMgr::Iofpga::Register::Dc>())
{
    cpu->parent = this;
    mb->parent = this;
    dc->parent = this;

    yang_name = "register"; yang_parent_name = "iofpga"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::~Register()
{
}

bool Controller::CardMgr::Iofpga::Register::has_data() const
{
    if (is_presence_container) return true;
    return (cpu !=  nullptr && cpu->has_data())
	|| (mb !=  nullptr && mb->has_data())
	|| (dc !=  nullptr && dc->has_data());
}

bool Controller::CardMgr::Iofpga::Register::has_operation() const
{
    return is_set(yfilter)
	|| (cpu !=  nullptr && cpu->has_operation())
	|| (mb !=  nullptr && mb->has_operation())
	|| (dc !=  nullptr && dc->has_operation());
}

std::string Controller::CardMgr::Iofpga::Register::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/iofpga/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu")
    {
        if(cpu == nullptr)
        {
            cpu = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu>();
        }
        return cpu;
    }

    if(child_yang_name == "mb")
    {
        if(mb == nullptr)
        {
            mb = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb>();
        }
        return mb;
    }

    if(child_yang_name == "dc")
    {
        if(dc == nullptr)
        {
            dc = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc>();
        }
        return dc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cpu != nullptr)
    {
        _children["cpu"] = cpu;
    }

    if(mb != nullptr)
    {
        _children["mb"] = mb;
    }

    if(dc != nullptr)
    {
        _children["dc"] = dc;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Register::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Register::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu" || name == "mb" || name == "dc")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::Cpu()
    :
    register_location(this, {"register_location"})
{

    yang_name = "cpu"; yang_parent_name = "register"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::Cpu::~Cpu()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::has_operation() const
{
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/iofpga/register/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation>();
        ent_->parent = this;
        register_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : register_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Register::Cpu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::RegisterLocation()
    :
    register_location{YType::str, "register_location"}
        ,
    iofpga_block_number(this, {"iofpga_block_num"})
    , iofpga_offset(this, {"hex_offset"})
    , iofpga_address(this, {"start_hex_addr", "end_hex_addr"})
{

    yang_name = "register_location"; yang_parent_name = "cpu"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::~RegisterLocation()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_block_number.len(); index++)
    {
        if(iofpga_block_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<iofpga_offset.len(); index++)
    {
        if(iofpga_offset[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<iofpga_address.len(); index++)
    {
        if(iofpga_address[index]->has_data())
            return true;
    }
    return register_location.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::has_operation() const
{
    for (std::size_t index=0; index<iofpga_block_number.len(); index++)
    {
        if(iofpga_block_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<iofpga_offset.len(); index++)
    {
        if(iofpga_offset[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<iofpga_address.len(); index++)
    {
        if(iofpga_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(register_location.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/iofpga/register/cpu/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register_location";
    ADD_KEY_TOKEN(register_location, "register_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (register_location.is_set || is_set(register_location.yfilter)) leaf_name_data.push_back(register_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_block_number")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber>();
        ent_->parent = this;
        iofpga_block_number.append(ent_);
        return ent_;
    }

    if(child_yang_name == "iofpga_offset")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset>();
        ent_->parent = this;
        iofpga_offset.append(ent_);
        return ent_;
    }

    if(child_yang_name == "iofpga_address")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress>();
        ent_->parent = this;
        iofpga_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_block_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : iofpga_offset.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : iofpga_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "register_location")
    {
        register_location = value;
        register_location.value_namespace = name_space;
        register_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "register_location")
    {
        register_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_block_number" || name == "iofpga_offset" || name == "iofpga_address" || name == "register_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaBlockNumber()
    :
    iofpga_block_num{YType::uint32, "iofpga_block_num"},
    block_location{YType::str, "block_location"},
    iofpga_block_nm{YType::str, "iofpga_block_nm"}
        ,
    iofpga_register_number(this, {"index_"})
{

    yang_name = "iofpga_block_number"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::~IofpgaBlockNumber()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_register_number.len(); index++)
    {
        if(iofpga_register_number[index]->has_data())
            return true;
    }
    return iofpga_block_num.is_set
	|| block_location.is_set
	|| iofpga_block_nm.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::has_operation() const
{
    for (std::size_t index=0; index<iofpga_register_number.len(); index++)
    {
        if(iofpga_register_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_block_num.yfilter)
	|| ydk::is_set(block_location.yfilter)
	|| ydk::is_set(iofpga_block_nm.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_block_number";
    ADD_KEY_TOKEN(iofpga_block_num, "iofpga_block_num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_block_num.is_set || is_set(iofpga_block_num.yfilter)) leaf_name_data.push_back(iofpga_block_num.get_name_leafdata());
    if (block_location.is_set || is_set(block_location.yfilter)) leaf_name_data.push_back(block_location.get_name_leafdata());
    if (iofpga_block_nm.is_set || is_set(iofpga_block_nm.yfilter)) leaf_name_data.push_back(iofpga_block_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_register_number")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber>();
        ent_->parent = this;
        iofpga_register_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_register_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_block_num")
    {
        iofpga_block_num = value;
        iofpga_block_num.value_namespace = name_space;
        iofpga_block_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block_location")
    {
        block_location = value;
        block_location.value_namespace = name_space;
        block_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iofpga_block_nm")
    {
        iofpga_block_nm = value;
        iofpga_block_nm.value_namespace = name_space;
        iofpga_block_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_block_num")
    {
        iofpga_block_num.yfilter = yfilter;
    }
    if(value_path == "block_location")
    {
        block_location.yfilter = yfilter;
    }
    if(value_path == "iofpga_block_nm")
    {
        iofpga_block_nm.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_register_number" || name == "iofpga_block_num" || name == "block_location" || name == "iofpga_block_nm")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaRegisterNumber()
    :
    index_{YType::uint32, "index"},
    iofpga_register_name{YType::str, "iofpga_register_name"}
        ,
    iofpga_data(this, {})
{

    yang_name = "iofpga_register_number"; yang_parent_name = "iofpga_block_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::~IofpgaRegisterNumber()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_data.len(); index++)
    {
        if(iofpga_data[index]->has_data())
            return true;
    }
    return index_.is_set
	|| iofpga_register_name.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_operation() const
{
    for (std::size_t index=0; index<iofpga_data.len(); index++)
    {
        if(iofpga_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(iofpga_register_name.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_register_number";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (iofpga_register_name.is_set || is_set(iofpga_register_name.yfilter)) leaf_name_data.push_back(iofpga_register_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData>();
        ent_->parent = this;
        iofpga_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iofpga_register_name")
    {
        iofpga_register_name = value;
        iofpga_register_name.value_namespace = name_space;
        iofpga_register_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "iofpga_register_name")
    {
        iofpga_register_name.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_data" || name == "index" || name == "iofpga_register_name")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::IofpgaData()
    :
    name{YType::str, "name"},
    offset{YType::uint32, "offset"},
    value_{YType::uint32, "value"}
{

    yang_name = "iofpga_data"; yang_parent_name = "iofpga_register_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::~IofpgaData()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| offset.is_set
	|| value_.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "offset" || name == "value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaOffset()
    :
    hex_offset{YType::str, "hex_offset"}
        ,
    iofpga_reg_offset_data(this, {})
{

    yang_name = "iofpga_offset"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::~IofpgaOffset()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_offset_data.len(); index++)
    {
        if(iofpga_reg_offset_data[index]->has_data())
            return true;
    }
    return hex_offset.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_offset_data.len(); index++)
    {
        if(iofpga_reg_offset_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hex_offset.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_offset";
    ADD_KEY_TOKEN(hex_offset, "hex_offset");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_offset.is_set || is_set(hex_offset.yfilter)) leaf_name_data.push_back(hex_offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_offset_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData>();
        ent_->parent = this;
        iofpga_reg_offset_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_offset_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex_offset")
    {
        hex_offset = value;
        hex_offset.value_namespace = name_space;
        hex_offset.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex_offset")
    {
        hex_offset.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_offset_data" || name == "hex_offset")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::IofpgaRegOffsetData()
    :
    iofpga_reg_off_addr{YType::uint32, "iofpga_reg_off_addr"},
    reg_off_value{YType::str, "reg_off_value"}
{

    yang_name = "iofpga_reg_offset_data"; yang_parent_name = "iofpga_offset"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::~IofpgaRegOffsetData()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_data() const
{
    if (is_presence_container) return true;
    return iofpga_reg_off_addr.is_set
	|| reg_off_value.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_off_addr.yfilter)
	|| ydk::is_set(reg_off_value.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_offset_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_off_addr.is_set || is_set(iofpga_reg_off_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_off_addr.get_name_leafdata());
    if (reg_off_value.is_set || is_set(reg_off_value.yfilter)) leaf_name_data.push_back(reg_off_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_off_addr")
    {
        iofpga_reg_off_addr = value;
        iofpga_reg_off_addr.value_namespace = name_space;
        iofpga_reg_off_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value = value;
        reg_off_value.value_namespace = name_space;
        reg_off_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_off_addr")
    {
        iofpga_reg_off_addr.yfilter = yfilter;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_off_addr" || name == "reg_off_value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaAddress()
    :
    start_hex_addr{YType::str, "start_hex_addr"},
    end_hex_addr{YType::str, "end_hex_addr"}
        ,
    iofpga_reg_range_addr_list(this, {"iofpga_reg_range_addr"})
{

    yang_name = "iofpga_address"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::~IofpgaAddress()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_range_addr_list.len(); index++)
    {
        if(iofpga_reg_range_addr_list[index]->has_data())
            return true;
    }
    return start_hex_addr.is_set
	|| end_hex_addr.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_range_addr_list.len(); index++)
    {
        if(iofpga_reg_range_addr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(start_hex_addr.yfilter)
	|| ydk::is_set(end_hex_addr.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_address";
    ADD_KEY_TOKEN(start_hex_addr, "start_hex_addr");
    ADD_KEY_TOKEN(end_hex_addr, "end_hex_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_hex_addr.is_set || is_set(start_hex_addr.yfilter)) leaf_name_data.push_back(start_hex_addr.get_name_leafdata());
    if (end_hex_addr.is_set || is_set(end_hex_addr.yfilter)) leaf_name_data.push_back(end_hex_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_range_addr_list")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList>();
        ent_->parent = this;
        iofpga_reg_range_addr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_range_addr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr = value;
        start_hex_addr.value_namespace = name_space;
        start_hex_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr = value;
        end_hex_addr.value_namespace = name_space;
        end_hex_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr.yfilter = yfilter;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_range_addr_list" || name == "start_hex_addr" || name == "end_hex_addr")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegRangeAddrList()
    :
    iofpga_reg_range_addr{YType::uint32, "iofpga_reg_range_addr"}
        ,
    iofpga_reg_data(this, {})
{

    yang_name = "iofpga_reg_range_addr_list"; yang_parent_name = "iofpga_address"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::~IofpgaRegRangeAddrList()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_data.len(); index++)
    {
        if(iofpga_reg_data[index]->has_data())
            return true;
    }
    return iofpga_reg_range_addr.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_data.len(); index++)
    {
        if(iofpga_reg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_range_addr.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_range_addr_list";
    ADD_KEY_TOKEN(iofpga_reg_range_addr, "iofpga_reg_range_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_range_addr.is_set || is_set(iofpga_reg_range_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_range_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData>();
        ent_->parent = this;
        iofpga_reg_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_range_addr")
    {
        iofpga_reg_range_addr = value;
        iofpga_reg_range_addr.value_namespace = name_space;
        iofpga_reg_range_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_range_addr")
    {
        iofpga_reg_range_addr.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_data" || name == "iofpga_reg_range_addr")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::IofpgaRegData()
    :
    iofpga_reg_addr{YType::uint32, "iofpga_reg_addr"},
    reg_value{YType::str, "reg_value"}
{

    yang_name = "iofpga_reg_data"; yang_parent_name = "iofpga_reg_range_addr_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::~IofpgaRegData()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_data() const
{
    if (is_presence_container) return true;
    return iofpga_reg_addr.is_set
	|| reg_value.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_addr.yfilter)
	|| ydk::is_set(reg_value.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_addr.is_set || is_set(iofpga_reg_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_addr.get_name_leafdata());
    if (reg_value.is_set || is_set(reg_value.yfilter)) leaf_name_data.push_back(reg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_addr")
    {
        iofpga_reg_addr = value;
        iofpga_reg_addr.value_namespace = name_space;
        iofpga_reg_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_value")
    {
        reg_value = value;
        reg_value.value_namespace = name_space;
        reg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_addr")
    {
        iofpga_reg_addr.yfilter = yfilter;
    }
    if(value_path == "reg_value")
    {
        reg_value.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_addr" || name == "reg_value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::Mb()
    :
    register_location(this, {"register_location"})
{

    yang_name = "mb"; yang_parent_name = "register"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::Mb::~Mb()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Register::Mb::has_operation() const
{
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/iofpga/register/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::Mb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation>();
        ent_->parent = this;
        register_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : register_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Register::Mb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::RegisterLocation()
    :
    register_location{YType::str, "register_location"}
        ,
    iofpga_block_number(this, {"iofpga_block_num"})
    , iofpga_offset(this, {"hex_offset"})
    , iofpga_address(this, {"start_hex_addr", "end_hex_addr"})
{

    yang_name = "register_location"; yang_parent_name = "mb"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::~RegisterLocation()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_block_number.len(); index++)
    {
        if(iofpga_block_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<iofpga_offset.len(); index++)
    {
        if(iofpga_offset[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<iofpga_address.len(); index++)
    {
        if(iofpga_address[index]->has_data())
            return true;
    }
    return register_location.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::has_operation() const
{
    for (std::size_t index=0; index<iofpga_block_number.len(); index++)
    {
        if(iofpga_block_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<iofpga_offset.len(); index++)
    {
        if(iofpga_offset[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<iofpga_address.len(); index++)
    {
        if(iofpga_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(register_location.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/iofpga/register/mb/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register_location";
    ADD_KEY_TOKEN(register_location, "register_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (register_location.is_set || is_set(register_location.yfilter)) leaf_name_data.push_back(register_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_block_number")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber>();
        ent_->parent = this;
        iofpga_block_number.append(ent_);
        return ent_;
    }

    if(child_yang_name == "iofpga_offset")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset>();
        ent_->parent = this;
        iofpga_offset.append(ent_);
        return ent_;
    }

    if(child_yang_name == "iofpga_address")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress>();
        ent_->parent = this;
        iofpga_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_block_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : iofpga_offset.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : iofpga_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "register_location")
    {
        register_location = value;
        register_location.value_namespace = name_space;
        register_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "register_location")
    {
        register_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_block_number" || name == "iofpga_offset" || name == "iofpga_address" || name == "register_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaBlockNumber()
    :
    iofpga_block_num{YType::uint32, "iofpga_block_num"},
    block_location{YType::str, "block_location"},
    iofpga_block_nm{YType::str, "iofpga_block_nm"}
        ,
    iofpga_register_number(this, {"index_"})
{

    yang_name = "iofpga_block_number"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::~IofpgaBlockNumber()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_register_number.len(); index++)
    {
        if(iofpga_register_number[index]->has_data())
            return true;
    }
    return iofpga_block_num.is_set
	|| block_location.is_set
	|| iofpga_block_nm.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::has_operation() const
{
    for (std::size_t index=0; index<iofpga_register_number.len(); index++)
    {
        if(iofpga_register_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_block_num.yfilter)
	|| ydk::is_set(block_location.yfilter)
	|| ydk::is_set(iofpga_block_nm.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_block_number";
    ADD_KEY_TOKEN(iofpga_block_num, "iofpga_block_num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_block_num.is_set || is_set(iofpga_block_num.yfilter)) leaf_name_data.push_back(iofpga_block_num.get_name_leafdata());
    if (block_location.is_set || is_set(block_location.yfilter)) leaf_name_data.push_back(block_location.get_name_leafdata());
    if (iofpga_block_nm.is_set || is_set(iofpga_block_nm.yfilter)) leaf_name_data.push_back(iofpga_block_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_register_number")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber>();
        ent_->parent = this;
        iofpga_register_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_register_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_block_num")
    {
        iofpga_block_num = value;
        iofpga_block_num.value_namespace = name_space;
        iofpga_block_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block_location")
    {
        block_location = value;
        block_location.value_namespace = name_space;
        block_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iofpga_block_nm")
    {
        iofpga_block_nm = value;
        iofpga_block_nm.value_namespace = name_space;
        iofpga_block_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_block_num")
    {
        iofpga_block_num.yfilter = yfilter;
    }
    if(value_path == "block_location")
    {
        block_location.yfilter = yfilter;
    }
    if(value_path == "iofpga_block_nm")
    {
        iofpga_block_nm.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_register_number" || name == "iofpga_block_num" || name == "block_location" || name == "iofpga_block_nm")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaRegisterNumber()
    :
    index_{YType::uint32, "index"},
    iofpga_register_name{YType::str, "iofpga_register_name"}
        ,
    iofpga_data(this, {})
{

    yang_name = "iofpga_register_number"; yang_parent_name = "iofpga_block_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::~IofpgaRegisterNumber()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_data.len(); index++)
    {
        if(iofpga_data[index]->has_data())
            return true;
    }
    return index_.is_set
	|| iofpga_register_name.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_operation() const
{
    for (std::size_t index=0; index<iofpga_data.len(); index++)
    {
        if(iofpga_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(iofpga_register_name.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_register_number";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (iofpga_register_name.is_set || is_set(iofpga_register_name.yfilter)) leaf_name_data.push_back(iofpga_register_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData>();
        ent_->parent = this;
        iofpga_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iofpga_register_name")
    {
        iofpga_register_name = value;
        iofpga_register_name.value_namespace = name_space;
        iofpga_register_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "iofpga_register_name")
    {
        iofpga_register_name.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_data" || name == "index" || name == "iofpga_register_name")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::IofpgaData()
    :
    name{YType::str, "name"},
    offset{YType::uint32, "offset"},
    value_{YType::uint32, "value"}
{

    yang_name = "iofpga_data"; yang_parent_name = "iofpga_register_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::~IofpgaData()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| offset.is_set
	|| value_.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "offset" || name == "value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaOffset()
    :
    hex_offset{YType::str, "hex_offset"}
        ,
    iofpga_reg_offset_data(this, {})
{

    yang_name = "iofpga_offset"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::~IofpgaOffset()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_offset_data.len(); index++)
    {
        if(iofpga_reg_offset_data[index]->has_data())
            return true;
    }
    return hex_offset.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_offset_data.len(); index++)
    {
        if(iofpga_reg_offset_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hex_offset.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_offset";
    ADD_KEY_TOKEN(hex_offset, "hex_offset");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_offset.is_set || is_set(hex_offset.yfilter)) leaf_name_data.push_back(hex_offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_offset_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData>();
        ent_->parent = this;
        iofpga_reg_offset_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_offset_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex_offset")
    {
        hex_offset = value;
        hex_offset.value_namespace = name_space;
        hex_offset.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex_offset")
    {
        hex_offset.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_offset_data" || name == "hex_offset")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::IofpgaRegOffsetData()
    :
    iofpga_reg_off_addr{YType::uint32, "iofpga_reg_off_addr"},
    reg_off_value{YType::str, "reg_off_value"}
{

    yang_name = "iofpga_reg_offset_data"; yang_parent_name = "iofpga_offset"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::~IofpgaRegOffsetData()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_data() const
{
    if (is_presence_container) return true;
    return iofpga_reg_off_addr.is_set
	|| reg_off_value.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_off_addr.yfilter)
	|| ydk::is_set(reg_off_value.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_offset_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_off_addr.is_set || is_set(iofpga_reg_off_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_off_addr.get_name_leafdata());
    if (reg_off_value.is_set || is_set(reg_off_value.yfilter)) leaf_name_data.push_back(reg_off_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_off_addr")
    {
        iofpga_reg_off_addr = value;
        iofpga_reg_off_addr.value_namespace = name_space;
        iofpga_reg_off_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value = value;
        reg_off_value.value_namespace = name_space;
        reg_off_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_off_addr")
    {
        iofpga_reg_off_addr.yfilter = yfilter;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_off_addr" || name == "reg_off_value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaAddress()
    :
    start_hex_addr{YType::str, "start_hex_addr"},
    end_hex_addr{YType::str, "end_hex_addr"}
        ,
    iofpga_reg_range_addr_list(this, {"iofpga_reg_range_addr"})
{

    yang_name = "iofpga_address"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::~IofpgaAddress()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_range_addr_list.len(); index++)
    {
        if(iofpga_reg_range_addr_list[index]->has_data())
            return true;
    }
    return start_hex_addr.is_set
	|| end_hex_addr.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_range_addr_list.len(); index++)
    {
        if(iofpga_reg_range_addr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(start_hex_addr.yfilter)
	|| ydk::is_set(end_hex_addr.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_address";
    ADD_KEY_TOKEN(start_hex_addr, "start_hex_addr");
    ADD_KEY_TOKEN(end_hex_addr, "end_hex_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_hex_addr.is_set || is_set(start_hex_addr.yfilter)) leaf_name_data.push_back(start_hex_addr.get_name_leafdata());
    if (end_hex_addr.is_set || is_set(end_hex_addr.yfilter)) leaf_name_data.push_back(end_hex_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_range_addr_list")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList>();
        ent_->parent = this;
        iofpga_reg_range_addr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_range_addr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr = value;
        start_hex_addr.value_namespace = name_space;
        start_hex_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr = value;
        end_hex_addr.value_namespace = name_space;
        end_hex_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr.yfilter = yfilter;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_range_addr_list" || name == "start_hex_addr" || name == "end_hex_addr")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegRangeAddrList()
    :
    iofpga_reg_range_addr{YType::uint32, "iofpga_reg_range_addr"}
        ,
    iofpga_reg_data(this, {})
{

    yang_name = "iofpga_reg_range_addr_list"; yang_parent_name = "iofpga_address"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::~IofpgaRegRangeAddrList()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_data.len(); index++)
    {
        if(iofpga_reg_data[index]->has_data())
            return true;
    }
    return iofpga_reg_range_addr.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_data.len(); index++)
    {
        if(iofpga_reg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_range_addr.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_range_addr_list";
    ADD_KEY_TOKEN(iofpga_reg_range_addr, "iofpga_reg_range_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_range_addr.is_set || is_set(iofpga_reg_range_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_range_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData>();
        ent_->parent = this;
        iofpga_reg_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_range_addr")
    {
        iofpga_reg_range_addr = value;
        iofpga_reg_range_addr.value_namespace = name_space;
        iofpga_reg_range_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_range_addr")
    {
        iofpga_reg_range_addr.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_data" || name == "iofpga_reg_range_addr")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::IofpgaRegData()
    :
    iofpga_reg_addr{YType::uint32, "iofpga_reg_addr"},
    reg_value{YType::str, "reg_value"}
{

    yang_name = "iofpga_reg_data"; yang_parent_name = "iofpga_reg_range_addr_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::~IofpgaRegData()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_data() const
{
    if (is_presence_container) return true;
    return iofpga_reg_addr.is_set
	|| reg_value.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_addr.yfilter)
	|| ydk::is_set(reg_value.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_addr.is_set || is_set(iofpga_reg_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_addr.get_name_leafdata());
    if (reg_value.is_set || is_set(reg_value.yfilter)) leaf_name_data.push_back(reg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_addr")
    {
        iofpga_reg_addr = value;
        iofpga_reg_addr.value_namespace = name_space;
        iofpga_reg_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_value")
    {
        reg_value = value;
        reg_value.value_namespace = name_space;
        reg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_addr")
    {
        iofpga_reg_addr.yfilter = yfilter;
    }
    if(value_path == "reg_value")
    {
        reg_value.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_addr" || name == "reg_value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::Dc()
    :
    register_location(this, {"register_location"})
{

    yang_name = "dc"; yang_parent_name = "register"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::Dc::~Dc()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Register::Dc::has_operation() const
{
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/iofpga/register/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::Dc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation>();
        ent_->parent = this;
        register_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : register_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Register::Dc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::RegisterLocation()
    :
    register_location{YType::str, "register_location"}
        ,
    iofpga_block_number(this, {"iofpga_block_num"})
    , iofpga_offset(this, {"hex_offset"})
    , iofpga_address(this, {"start_hex_addr", "end_hex_addr"})
{

    yang_name = "register_location"; yang_parent_name = "dc"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::~RegisterLocation()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_block_number.len(); index++)
    {
        if(iofpga_block_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<iofpga_offset.len(); index++)
    {
        if(iofpga_offset[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<iofpga_address.len(); index++)
    {
        if(iofpga_address[index]->has_data())
            return true;
    }
    return register_location.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::has_operation() const
{
    for (std::size_t index=0; index<iofpga_block_number.len(); index++)
    {
        if(iofpga_block_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<iofpga_offset.len(); index++)
    {
        if(iofpga_offset[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<iofpga_address.len(); index++)
    {
        if(iofpga_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(register_location.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/iofpga/register/dc/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register_location";
    ADD_KEY_TOKEN(register_location, "register_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (register_location.is_set || is_set(register_location.yfilter)) leaf_name_data.push_back(register_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_block_number")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber>();
        ent_->parent = this;
        iofpga_block_number.append(ent_);
        return ent_;
    }

    if(child_yang_name == "iofpga_offset")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset>();
        ent_->parent = this;
        iofpga_offset.append(ent_);
        return ent_;
    }

    if(child_yang_name == "iofpga_address")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress>();
        ent_->parent = this;
        iofpga_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_block_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : iofpga_offset.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : iofpga_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "register_location")
    {
        register_location = value;
        register_location.value_namespace = name_space;
        register_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "register_location")
    {
        register_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_block_number" || name == "iofpga_offset" || name == "iofpga_address" || name == "register_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaBlockNumber()
    :
    iofpga_block_num{YType::uint32, "iofpga_block_num"},
    block_location{YType::str, "block_location"},
    iofpga_block_nm{YType::str, "iofpga_block_nm"}
        ,
    iofpga_register_number(this, {"index_"})
{

    yang_name = "iofpga_block_number"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::~IofpgaBlockNumber()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_register_number.len(); index++)
    {
        if(iofpga_register_number[index]->has_data())
            return true;
    }
    return iofpga_block_num.is_set
	|| block_location.is_set
	|| iofpga_block_nm.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::has_operation() const
{
    for (std::size_t index=0; index<iofpga_register_number.len(); index++)
    {
        if(iofpga_register_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_block_num.yfilter)
	|| ydk::is_set(block_location.yfilter)
	|| ydk::is_set(iofpga_block_nm.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_block_number";
    ADD_KEY_TOKEN(iofpga_block_num, "iofpga_block_num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_block_num.is_set || is_set(iofpga_block_num.yfilter)) leaf_name_data.push_back(iofpga_block_num.get_name_leafdata());
    if (block_location.is_set || is_set(block_location.yfilter)) leaf_name_data.push_back(block_location.get_name_leafdata());
    if (iofpga_block_nm.is_set || is_set(iofpga_block_nm.yfilter)) leaf_name_data.push_back(iofpga_block_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_register_number")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber>();
        ent_->parent = this;
        iofpga_register_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_register_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_block_num")
    {
        iofpga_block_num = value;
        iofpga_block_num.value_namespace = name_space;
        iofpga_block_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block_location")
    {
        block_location = value;
        block_location.value_namespace = name_space;
        block_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iofpga_block_nm")
    {
        iofpga_block_nm = value;
        iofpga_block_nm.value_namespace = name_space;
        iofpga_block_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_block_num")
    {
        iofpga_block_num.yfilter = yfilter;
    }
    if(value_path == "block_location")
    {
        block_location.yfilter = yfilter;
    }
    if(value_path == "iofpga_block_nm")
    {
        iofpga_block_nm.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_register_number" || name == "iofpga_block_num" || name == "block_location" || name == "iofpga_block_nm")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaRegisterNumber()
    :
    index_{YType::uint32, "index"},
    iofpga_register_name{YType::str, "iofpga_register_name"}
        ,
    iofpga_data(this, {})
{

    yang_name = "iofpga_register_number"; yang_parent_name = "iofpga_block_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::~IofpgaRegisterNumber()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_data.len(); index++)
    {
        if(iofpga_data[index]->has_data())
            return true;
    }
    return index_.is_set
	|| iofpga_register_name.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_operation() const
{
    for (std::size_t index=0; index<iofpga_data.len(); index++)
    {
        if(iofpga_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(iofpga_register_name.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_register_number";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (iofpga_register_name.is_set || is_set(iofpga_register_name.yfilter)) leaf_name_data.push_back(iofpga_register_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData>();
        ent_->parent = this;
        iofpga_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iofpga_register_name")
    {
        iofpga_register_name = value;
        iofpga_register_name.value_namespace = name_space;
        iofpga_register_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "iofpga_register_name")
    {
        iofpga_register_name.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_data" || name == "index" || name == "iofpga_register_name")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::IofpgaData()
    :
    name{YType::str, "name"},
    offset{YType::uint32, "offset"},
    value_{YType::uint32, "value"}
{

    yang_name = "iofpga_data"; yang_parent_name = "iofpga_register_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::~IofpgaData()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| offset.is_set
	|| value_.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "offset" || name == "value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaOffset()
    :
    hex_offset{YType::str, "hex_offset"}
        ,
    iofpga_reg_offset_data(this, {})
{

    yang_name = "iofpga_offset"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::~IofpgaOffset()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_offset_data.len(); index++)
    {
        if(iofpga_reg_offset_data[index]->has_data())
            return true;
    }
    return hex_offset.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_offset_data.len(); index++)
    {
        if(iofpga_reg_offset_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hex_offset.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_offset";
    ADD_KEY_TOKEN(hex_offset, "hex_offset");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_offset.is_set || is_set(hex_offset.yfilter)) leaf_name_data.push_back(hex_offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_offset_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData>();
        ent_->parent = this;
        iofpga_reg_offset_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_offset_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex_offset")
    {
        hex_offset = value;
        hex_offset.value_namespace = name_space;
        hex_offset.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex_offset")
    {
        hex_offset.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_offset_data" || name == "hex_offset")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::IofpgaRegOffsetData()
    :
    iofpga_reg_off_addr{YType::uint32, "iofpga_reg_off_addr"},
    reg_off_value{YType::str, "reg_off_value"}
{

    yang_name = "iofpga_reg_offset_data"; yang_parent_name = "iofpga_offset"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::~IofpgaRegOffsetData()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_data() const
{
    if (is_presence_container) return true;
    return iofpga_reg_off_addr.is_set
	|| reg_off_value.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_off_addr.yfilter)
	|| ydk::is_set(reg_off_value.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_offset_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_off_addr.is_set || is_set(iofpga_reg_off_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_off_addr.get_name_leafdata());
    if (reg_off_value.is_set || is_set(reg_off_value.yfilter)) leaf_name_data.push_back(reg_off_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_off_addr")
    {
        iofpga_reg_off_addr = value;
        iofpga_reg_off_addr.value_namespace = name_space;
        iofpga_reg_off_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value = value;
        reg_off_value.value_namespace = name_space;
        reg_off_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_off_addr")
    {
        iofpga_reg_off_addr.yfilter = yfilter;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_off_addr" || name == "reg_off_value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaAddress()
    :
    start_hex_addr{YType::str, "start_hex_addr"},
    end_hex_addr{YType::str, "end_hex_addr"}
        ,
    iofpga_reg_range_addr_list(this, {"iofpga_reg_range_addr"})
{

    yang_name = "iofpga_address"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::~IofpgaAddress()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_range_addr_list.len(); index++)
    {
        if(iofpga_reg_range_addr_list[index]->has_data())
            return true;
    }
    return start_hex_addr.is_set
	|| end_hex_addr.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_range_addr_list.len(); index++)
    {
        if(iofpga_reg_range_addr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(start_hex_addr.yfilter)
	|| ydk::is_set(end_hex_addr.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_address";
    ADD_KEY_TOKEN(start_hex_addr, "start_hex_addr");
    ADD_KEY_TOKEN(end_hex_addr, "end_hex_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_hex_addr.is_set || is_set(start_hex_addr.yfilter)) leaf_name_data.push_back(start_hex_addr.get_name_leafdata());
    if (end_hex_addr.is_set || is_set(end_hex_addr.yfilter)) leaf_name_data.push_back(end_hex_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_range_addr_list")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList>();
        ent_->parent = this;
        iofpga_reg_range_addr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_range_addr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr = value;
        start_hex_addr.value_namespace = name_space;
        start_hex_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr = value;
        end_hex_addr.value_namespace = name_space;
        end_hex_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr.yfilter = yfilter;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_range_addr_list" || name == "start_hex_addr" || name == "end_hex_addr")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegRangeAddrList()
    :
    iofpga_reg_range_addr{YType::uint32, "iofpga_reg_range_addr"}
        ,
    iofpga_reg_data(this, {})
{

    yang_name = "iofpga_reg_range_addr_list"; yang_parent_name = "iofpga_address"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::~IofpgaRegRangeAddrList()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_data.len(); index++)
    {
        if(iofpga_reg_data[index]->has_data())
            return true;
    }
    return iofpga_reg_range_addr.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_data.len(); index++)
    {
        if(iofpga_reg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_range_addr.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_range_addr_list";
    ADD_KEY_TOKEN(iofpga_reg_range_addr, "iofpga_reg_range_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_range_addr.is_set || is_set(iofpga_reg_range_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_range_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData>();
        ent_->parent = this;
        iofpga_reg_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_range_addr")
    {
        iofpga_reg_range_addr = value;
        iofpga_reg_range_addr.value_namespace = name_space;
        iofpga_reg_range_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_range_addr")
    {
        iofpga_reg_range_addr.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_data" || name == "iofpga_reg_range_addr")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::IofpgaRegData()
    :
    iofpga_reg_addr{YType::uint32, "iofpga_reg_addr"},
    reg_value{YType::str, "reg_value"}
{

    yang_name = "iofpga_reg_data"; yang_parent_name = "iofpga_reg_range_addr_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::~IofpgaRegData()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_data() const
{
    if (is_presence_container) return true;
    return iofpga_reg_addr.is_set
	|| reg_value.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_addr.yfilter)
	|| ydk::is_set(reg_value.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_addr.is_set || is_set(iofpga_reg_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_addr.get_name_leafdata());
    if (reg_value.is_set || is_set(reg_value.yfilter)) leaf_name_data.push_back(reg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_addr")
    {
        iofpga_reg_addr = value;
        iofpga_reg_addr.value_namespace = name_space;
        iofpga_reg_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_value")
    {
        reg_value = value;
        reg_value.value_namespace = name_space;
        reg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_addr")
    {
        iofpga_reg_addr.yfilter = yfilter;
    }
    if(value_path == "reg_value")
    {
        reg_value.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_addr" || name == "reg_value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Flash()
    :
    info(std::make_shared<Controller::CardMgr::Iofpga::Flash::Info>())
    , status(std::make_shared<Controller::CardMgr::Iofpga::Flash::Status>())
{
    info->parent = this;
    status->parent = this;

    yang_name = "flash"; yang_parent_name = "iofpga"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Flash::~Flash()
{
}

bool Controller::CardMgr::Iofpga::Flash::has_data() const
{
    if (is_presence_container) return true;
    return (info !=  nullptr && info->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Controller::CardMgr::Iofpga::Flash::has_operation() const
{
    return is_set(yfilter)
	|| (info !=  nullptr && info->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Controller::CardMgr::Iofpga::Flash::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/iofpga/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Flash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Controller::CardMgr::Iofpga::Flash::Info>();
        }
        return info;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Controller::CardMgr::Iofpga::Flash::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(info != nullptr)
    {
        _children["info"] = info;
    }

    if(status != nullptr)
    {
        _children["status"] = status;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Flash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Flash::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Flash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "info" || name == "status")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Info::Info()
    :
    flash_location(this, {"flash_location"})
{

    yang_name = "info"; yang_parent_name = "flash"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Flash::Info::~Info()
{
}

bool Controller::CardMgr::Iofpga::Flash::Info::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Flash::Info::has_operation() const
{
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Iofpga::Flash::Info::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/iofpga/flash/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Flash::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flash_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Flash::Info::FlashLocation>();
        ent_->parent = this;
        flash_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flash_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Flash::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Flash::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Flash::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::FlashLocation()
    :
    flash_location{YType::str, "flash_location"}
        ,
    iofpga_flash_info(std::make_shared<Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo>())
{
    iofpga_flash_info->parent = this;

    yang_name = "flash_location"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::~FlashLocation()
{
}

bool Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::has_data() const
{
    if (is_presence_container) return true;
    return flash_location.is_set
	|| (iofpga_flash_info !=  nullptr && iofpga_flash_info->has_data());
}

bool Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flash_location.yfilter)
	|| (iofpga_flash_info !=  nullptr && iofpga_flash_info->has_operation());
}

std::string Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/iofpga/flash/info/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash_location";
    ADD_KEY_TOKEN(flash_location, "flash_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flash_location.is_set || is_set(flash_location.yfilter)) leaf_name_data.push_back(flash_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_flash_info")
    {
        if(iofpga_flash_info == nullptr)
        {
            iofpga_flash_info = std::make_shared<Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo>();
        }
        return iofpga_flash_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iofpga_flash_info != nullptr)
    {
        _children["iofpga_flash_info"] = iofpga_flash_info;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flash_location")
    {
        flash_location = value;
        flash_location.value_namespace = name_space;
        flash_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flash_location")
    {
        flash_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_flash_info" || name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::IofpgaFlashInfo()
    :
    iofpga_flash_info_values{YType::str, "iofpga_flash_info_values"}
{

    yang_name = "iofpga_flash_info"; yang_parent_name = "flash_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::~IofpgaFlashInfo()
{
}

bool Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : iofpga_flash_info_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::has_operation() const
{
    for (auto const & leaf : iofpga_flash_info_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_flash_info_values.yfilter);
}

std::string Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_flash_info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto iofpga_flash_info_values_name_datas = iofpga_flash_info_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), iofpga_flash_info_values_name_datas.begin(), iofpga_flash_info_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_flash_info_values")
    {
        iofpga_flash_info_values.append(value);
    }
}

void Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_flash_info_values")
    {
        iofpga_flash_info_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_flash_info_values")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Status::Status()
    :
    flash_location(this, {"flash_location"})
{

    yang_name = "status"; yang_parent_name = "flash"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Flash::Status::~Status()
{
}

bool Controller::CardMgr::Iofpga::Flash::Status::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Flash::Status::has_operation() const
{
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Iofpga::Flash::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/iofpga/flash/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Flash::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flash_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Flash::Status::FlashLocation>();
        ent_->parent = this;
        flash_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flash_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Flash::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Flash::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Flash::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::FlashLocation()
    :
    flash_location{YType::str, "flash_location"}
        ,
    iofpga_flash_status(std::make_shared<Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus>())
{
    iofpga_flash_status->parent = this;

    yang_name = "flash_location"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::~FlashLocation()
{
}

bool Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::has_data() const
{
    if (is_presence_container) return true;
    return flash_location.is_set
	|| (iofpga_flash_status !=  nullptr && iofpga_flash_status->has_data());
}

bool Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flash_location.yfilter)
	|| (iofpga_flash_status !=  nullptr && iofpga_flash_status->has_operation());
}

std::string Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/iofpga/flash/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash_location";
    ADD_KEY_TOKEN(flash_location, "flash_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flash_location.is_set || is_set(flash_location.yfilter)) leaf_name_data.push_back(flash_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_flash_status")
    {
        if(iofpga_flash_status == nullptr)
        {
            iofpga_flash_status = std::make_shared<Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus>();
        }
        return iofpga_flash_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iofpga_flash_status != nullptr)
    {
        _children["iofpga_flash_status"] = iofpga_flash_status;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flash_location")
    {
        flash_location = value;
        flash_location.value_namespace = name_space;
        flash_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flash_location")
    {
        flash_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_flash_status" || name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::IofpgaFlashStatus()
    :
    iofpga_flash_status_values{YType::str, "iofpga_flash_status_values"}
{

    yang_name = "iofpga_flash_status"; yang_parent_name = "flash_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::~IofpgaFlashStatus()
{
}

bool Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : iofpga_flash_status_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::has_operation() const
{
    for (auto const & leaf : iofpga_flash_status_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_flash_status_values.yfilter);
}

std::string Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_flash_status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto iofpga_flash_status_values_name_datas = iofpga_flash_status_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), iofpga_flash_status_values_name_datas.begin(), iofpga_flash_status_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_flash_status_values")
    {
        iofpga_flash_status_values.append(value);
    }
}

void Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_flash_status_values")
    {
        iofpga_flash_status_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_flash_status_values")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Bootloader()
    :
    flash(std::make_shared<Controller::CardMgr::Bootloader::Flash>())
{
    flash->parent = this;

    yang_name = "bootloader"; yang_parent_name = "card_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Bootloader::~Bootloader()
{
}

bool Controller::CardMgr::Bootloader::has_data() const
{
    if (is_presence_container) return true;
    return (flash !=  nullptr && flash->has_data());
}

bool Controller::CardMgr::Bootloader::has_operation() const
{
    return is_set(yfilter)
	|| (flash !=  nullptr && flash->has_operation());
}

std::string Controller::CardMgr::Bootloader::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Bootloader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootloader";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flash")
    {
        if(flash == nullptr)
        {
            flash = std::make_shared<Controller::CardMgr::Bootloader::Flash>();
        }
        return flash;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flash != nullptr)
    {
        _children["flash"] = flash;
    }

    return _children;
}

void Controller::CardMgr::Bootloader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Bootloader::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Bootloader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Flash()
    :
    info(std::make_shared<Controller::CardMgr::Bootloader::Flash::Info>())
    , status(std::make_shared<Controller::CardMgr::Bootloader::Flash::Status>())
{
    info->parent = this;
    status->parent = this;

    yang_name = "flash"; yang_parent_name = "bootloader"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Bootloader::Flash::~Flash()
{
}

bool Controller::CardMgr::Bootloader::Flash::has_data() const
{
    if (is_presence_container) return true;
    return (info !=  nullptr && info->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Controller::CardMgr::Bootloader::Flash::has_operation() const
{
    return is_set(yfilter)
	|| (info !=  nullptr && info->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Controller::CardMgr::Bootloader::Flash::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/bootloader/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Bootloader::Flash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Controller::CardMgr::Bootloader::Flash::Info>();
        }
        return info;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Controller::CardMgr::Bootloader::Flash::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(info != nullptr)
    {
        _children["info"] = info;
    }

    if(status != nullptr)
    {
        _children["status"] = status;
    }

    return _children;
}

void Controller::CardMgr::Bootloader::Flash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Bootloader::Flash::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Bootloader::Flash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "info" || name == "status")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Info::Info()
    :
    flash_location(this, {"flash_location"})
{

    yang_name = "info"; yang_parent_name = "flash"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Bootloader::Flash::Info::~Info()
{
}

bool Controller::CardMgr::Bootloader::Flash::Info::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Bootloader::Flash::Info::has_operation() const
{
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Bootloader::Flash::Info::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/bootloader/flash/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Bootloader::Flash::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flash_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Bootloader::Flash::Info::FlashLocation>();
        ent_->parent = this;
        flash_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flash_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Bootloader::Flash::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Bootloader::Flash::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Bootloader::Flash::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::FlashLocation()
    :
    flash_location{YType::str, "flash_location"}
        ,
    bootldr_flash_info(std::make_shared<Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo>())
{
    bootldr_flash_info->parent = this;

    yang_name = "flash_location"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::~FlashLocation()
{
}

bool Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::has_data() const
{
    if (is_presence_container) return true;
    return flash_location.is_set
	|| (bootldr_flash_info !=  nullptr && bootldr_flash_info->has_data());
}

bool Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flash_location.yfilter)
	|| (bootldr_flash_info !=  nullptr && bootldr_flash_info->has_operation());
}

std::string Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/bootloader/flash/info/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash_location";
    ADD_KEY_TOKEN(flash_location, "flash_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flash_location.is_set || is_set(flash_location.yfilter)) leaf_name_data.push_back(flash_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bootldr_flash_info")
    {
        if(bootldr_flash_info == nullptr)
        {
            bootldr_flash_info = std::make_shared<Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo>();
        }
        return bootldr_flash_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bootldr_flash_info != nullptr)
    {
        _children["bootldr_flash_info"] = bootldr_flash_info;
    }

    return _children;
}

void Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flash_location")
    {
        flash_location = value;
        flash_location.value_namespace = name_space;
        flash_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flash_location")
    {
        flash_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootldr_flash_info" || name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::BootldrFlashInfo()
    :
    bootldr_flash_info_values{YType::str, "bootldr_flash_info_values"}
{

    yang_name = "bootldr_flash_info"; yang_parent_name = "flash_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::~BootldrFlashInfo()
{
}

bool Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : bootldr_flash_info_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::has_operation() const
{
    for (auto const & leaf : bootldr_flash_info_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bootldr_flash_info_values.yfilter);
}

std::string Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootldr_flash_info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bootldr_flash_info_values_name_datas = bootldr_flash_info_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bootldr_flash_info_values_name_datas.begin(), bootldr_flash_info_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bootldr_flash_info_values")
    {
        bootldr_flash_info_values.append(value);
    }
}

void Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bootldr_flash_info_values")
    {
        bootldr_flash_info_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootldr_flash_info_values")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Status::Status()
    :
    flash_location(this, {"flash_location"})
{

    yang_name = "status"; yang_parent_name = "flash"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Bootloader::Flash::Status::~Status()
{
}

bool Controller::CardMgr::Bootloader::Flash::Status::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Bootloader::Flash::Status::has_operation() const
{
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Bootloader::Flash::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/bootloader/flash/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Bootloader::Flash::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flash_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Bootloader::Flash::Status::FlashLocation>();
        ent_->parent = this;
        flash_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flash_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Bootloader::Flash::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Bootloader::Flash::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Bootloader::Flash::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::FlashLocation()
    :
    flash_location{YType::str, "flash_location"}
        ,
    bootldr_flash_status(std::make_shared<Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus>())
{
    bootldr_flash_status->parent = this;

    yang_name = "flash_location"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::~FlashLocation()
{
}

bool Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::has_data() const
{
    if (is_presence_container) return true;
    return flash_location.is_set
	|| (bootldr_flash_status !=  nullptr && bootldr_flash_status->has_data());
}

bool Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flash_location.yfilter)
	|| (bootldr_flash_status !=  nullptr && bootldr_flash_status->has_operation());
}

std::string Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/bootloader/flash/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash_location";
    ADD_KEY_TOKEN(flash_location, "flash_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flash_location.is_set || is_set(flash_location.yfilter)) leaf_name_data.push_back(flash_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bootldr_flash_status")
    {
        if(bootldr_flash_status == nullptr)
        {
            bootldr_flash_status = std::make_shared<Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus>();
        }
        return bootldr_flash_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bootldr_flash_status != nullptr)
    {
        _children["bootldr_flash_status"] = bootldr_flash_status;
    }

    return _children;
}

void Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flash_location")
    {
        flash_location = value;
        flash_location.value_namespace = name_space;
        flash_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flash_location")
    {
        flash_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootldr_flash_status" || name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::BootldrFlashStatus()
    :
    bootldr_flash_status_values{YType::str, "bootldr_flash_status_values"}
{

    yang_name = "bootldr_flash_status"; yang_parent_name = "flash_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::~BootldrFlashStatus()
{
}

bool Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : bootldr_flash_status_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::has_operation() const
{
    for (auto const & leaf : bootldr_flash_status_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bootldr_flash_status_values.yfilter);
}

std::string Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootldr_flash_status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bootldr_flash_status_values_name_datas = bootldr_flash_status_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bootldr_flash_status_values_name_datas.begin(), bootldr_flash_status_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bootldr_flash_status_values")
    {
        bootldr_flash_status_values.append(value);
    }
}

void Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bootldr_flash_status_values")
    {
        bootldr_flash_status_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootldr_flash_status_values")
        return true;
    return false;
}


}
}

