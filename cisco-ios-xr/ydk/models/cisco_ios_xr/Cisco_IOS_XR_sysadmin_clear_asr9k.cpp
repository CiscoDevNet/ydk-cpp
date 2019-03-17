
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_clear_asr9k.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_clear_asr9k {

Clear::Clear()
    :
    controller(std::make_shared<Clear::Controller>())
    , plugin(std::make_shared<Clear::Plugin>())
{
    controller->parent = this;
    plugin->parent = this;

    yang_name = "clear"; yang_parent_name = "Cisco-IOS-XR-sysadmin-clear-asr9k"; is_top_level_class = true; has_list_ancestor = false; 
}

Clear::~Clear()
{
}

bool Clear::has_data() const
{
    if (is_presence_container) return true;
    return (controller !=  nullptr && controller->has_data())
	|| (plugin !=  nullptr && plugin->has_data());
}

bool Clear::has_operation() const
{
    return is_set(yfilter)
	|| (controller !=  nullptr && controller->has_operation())
	|| (plugin !=  nullptr && plugin->has_operation());
}

std::string Clear::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-asr9k:clear";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        if(controller == nullptr)
        {
            controller = std::make_shared<Clear::Controller>();
        }
        return controller;
    }

    if(child_yang_name == "plugin")
    {
        if(plugin == nullptr)
        {
            plugin = std::make_shared<Clear::Plugin>();
        }
        return plugin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(controller != nullptr)
    {
        _children["controller"] = controller;
    }

    if(plugin != nullptr)
    {
        _children["plugin"] = plugin;
    }

    return _children;
}

void Clear::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Clear::clone_ptr() const
{
    return std::make_shared<Clear>();
}

std::string Clear::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Clear::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Clear::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Clear::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Clear::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller" || name == "plugin")
        return true;
    return false;
}

Clear::Controller::Controller()
    :
    switch_(std::make_shared<Clear::Controller::Switch>())
{
    switch_->parent = this;

    yang_name = "controller"; yang_parent_name = "clear"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Controller::~Controller()
{
}

bool Clear::Controller::has_data() const
{
    if (is_presence_container) return true;
    return (switch_ !=  nullptr && switch_->has_data());
}

bool Clear::Controller::has_operation() const
{
    return is_set(yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Clear::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-asr9k:clear/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Clear::Controller::Switch>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switch_ != nullptr)
    {
        _children["switch"] = switch_;
    }

    return _children;
}

void Clear::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Clear::Controller::Switch::Switch()
    :
    oper(std::make_shared<Clear::Controller::Switch::Oper>())
{
    oper->parent = this;

    yang_name = "switch"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Controller::Switch::~Switch()
{
}

bool Clear::Controller::Switch::has_data() const
{
    if (is_presence_container) return true;
    return (oper !=  nullptr && oper->has_data());
}

bool Clear::Controller::Switch::has_operation() const
{
    return is_set(yfilter)
	|| (oper !=  nullptr && oper->has_operation());
}

std::string Clear::Controller::Switch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-asr9k:clear/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Controller::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<Clear::Controller::Switch::Oper>();
        }
        return oper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Controller::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oper != nullptr)
    {
        _children["oper"] = oper;
    }

    return _children;
}

void Clear::Controller::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oper")
        return true;
    return false;
}

Clear::Controller::Switch::Oper::Oper()
    :
    fdb(std::make_shared<Clear::Controller::Switch::Oper::Fdb>())
    , statistics(std::make_shared<Clear::Controller::Switch::Oper::Statistics>())
{
    fdb->parent = this;
    statistics->parent = this;

    yang_name = "oper"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Controller::Switch::Oper::~Oper()
{
}

bool Clear::Controller::Switch::Oper::has_data() const
{
    if (is_presence_container) return true;
    return (fdb !=  nullptr && fdb->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Clear::Controller::Switch::Oper::has_operation() const
{
    return is_set(yfilter)
	|| (fdb !=  nullptr && fdb->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Clear::Controller::Switch::Oper::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-asr9k:clear/controller/switch/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Switch::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Switch::Oper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Controller::Switch::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb")
    {
        if(fdb == nullptr)
        {
            fdb = std::make_shared<Clear::Controller::Switch::Oper::Fdb>();
        }
        return fdb;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Clear::Controller::Switch::Oper::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Controller::Switch::Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fdb != nullptr)
    {
        _children["fdb"] = fdb;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void Clear::Controller::Switch::Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Switch::Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Switch::Oper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb" || name == "statistics")
        return true;
    return false;
}

Clear::Controller::Switch::Oper::Fdb::Fdb()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "fdb"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Controller::Switch::Oper::Fdb::~Fdb()
{
}

bool Clear::Controller::Switch::Oper::Fdb::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::Controller::Switch::Oper::Fdb::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::Controller::Switch::Oper::Fdb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-asr9k:clear/controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Switch::Oper::Fdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Switch::Oper::Fdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Controller::Switch::Oper::Fdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::Controller::Switch::Oper::Fdb::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Controller::Switch::Oper::Fdb::get_children() const
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

void Clear::Controller::Switch::Oper::Fdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Switch::Oper::Fdb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Switch::Oper::Fdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::Controller::Switch::Oper::Fdb::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Controller::Switch::Oper::Fdb::Location::~Location()
{
}

bool Clear::Controller::Switch::Oper::Fdb::Location::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Clear::Controller::Switch::Oper::Fdb::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Clear::Controller::Switch::Oper::Fdb::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-asr9k:clear/controller/switch/oper/fdb/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Switch::Oper::Fdb::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Switch::Oper::Fdb::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Controller::Switch::Oper::Fdb::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Controller::Switch::Oper::Fdb::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::Controller::Switch::Oper::Fdb::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Controller::Switch::Oper::Fdb::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Clear::Controller::Switch::Oper::Fdb::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Clear::Controller::Switch::Oper::Statistics::Statistics()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "statistics"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Controller::Switch::Oper::Statistics::~Statistics()
{
}

bool Clear::Controller::Switch::Oper::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::Controller::Switch::Oper::Statistics::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::Controller::Switch::Oper::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-asr9k:clear/controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Switch::Oper::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Switch::Oper::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Controller::Switch::Oper::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::Controller::Switch::Oper::Statistics::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Controller::Switch::Oper::Statistics::get_children() const
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

void Clear::Controller::Switch::Oper::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Switch::Oper::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Switch::Oper::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::Controller::Switch::Oper::Statistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Controller::Switch::Oper::Statistics::Location::~Location()
{
}

bool Clear::Controller::Switch::Oper::Statistics::Location::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Clear::Controller::Switch::Oper::Statistics::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Clear::Controller::Switch::Oper::Statistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-asr9k:clear/controller/switch/oper/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Switch::Oper::Statistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Switch::Oper::Statistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Controller::Switch::Oper::Statistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Controller::Switch::Oper::Statistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::Controller::Switch::Oper::Statistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Controller::Switch::Oper::Statistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Clear::Controller::Switch::Oper::Statistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Clear::Plugin::Plugin()
    :
    slot(std::make_shared<Clear::Plugin::Slot>())
{
    slot->parent = this;

    yang_name = "plugin"; yang_parent_name = "clear"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Plugin::~Plugin()
{
}

bool Clear::Plugin::has_data() const
{
    if (is_presence_container) return true;
    return (slot !=  nullptr && slot->has_data());
}

bool Clear::Plugin::has_operation() const
{
    return is_set(yfilter)
	|| (slot !=  nullptr && slot->has_operation());
}

std::string Clear::Plugin::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-asr9k:clear/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Plugin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plugin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Plugin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Plugin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slot")
    {
        if(slot == nullptr)
        {
            slot = std::make_shared<Clear::Plugin::Slot>();
        }
        return slot;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Plugin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(slot != nullptr)
    {
        _children["slot"] = slot;
    }

    return _children;
}

void Clear::Plugin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Plugin::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Plugin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

Clear::Plugin::Slot::Slot()
    :
    location(this, {"location"})
{

    yang_name = "slot"; yang_parent_name = "plugin"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Plugin::Slot::~Slot()
{
}

bool Clear::Plugin::Slot::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::Plugin::Slot::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::Plugin::Slot::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-asr9k:clear/plugin/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Plugin::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Plugin::Slot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Plugin::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::Plugin::Slot::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Plugin::Slot::get_children() const
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

void Clear::Plugin::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Plugin::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Plugin::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::Plugin::Slot::Location::Location()
    :
    location{YType::str, "location"}
{

    yang_name = "location"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Plugin::Slot::Location::~Location()
{
}

bool Clear::Plugin::Slot::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set;
}

bool Clear::Plugin::Slot::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Clear::Plugin::Slot::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-asr9k:clear/plugin/slot/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Plugin::Slot::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Plugin::Slot::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Plugin::Slot::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Plugin::Slot::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::Plugin::Slot::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Plugin::Slot::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Clear::Plugin::Slot::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}


}
}

