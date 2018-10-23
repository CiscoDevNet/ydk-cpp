
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_hw_module.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_hw_module {

HwModule::HwModule()
    :
    config(std::make_shared<HwModule::Config>())
    , oper(std::make_shared<HwModule::Oper>())
    , shhwfpd(std::make_shared<HwModule::Shhwfpd>())
{
    config->parent = this;
    oper->parent = this;
    shhwfpd->parent = this;

    yang_name = "hw-module"; yang_parent_name = "Cisco-IOS-XR-sysadmin-hw-module"; is_top_level_class = true; has_list_ancestor = false; 
}

HwModule::~HwModule()
{
}

bool HwModule::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (oper !=  nullptr && oper->has_data())
	|| (shhwfpd !=  nullptr && shhwfpd->has_data());
}

bool HwModule::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (oper !=  nullptr && oper->has_operation())
	|| (shhwfpd !=  nullptr && shhwfpd->has_operation());
}

std::string HwModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-hw-module:hw-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<HwModule::Config>();
        }
        return config;
    }

    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<HwModule::Oper>();
        }
        return oper;
    }

    if(child_yang_name == "shhwfpd")
    {
        if(shhwfpd == nullptr)
        {
            shhwfpd = std::make_shared<HwModule::Shhwfpd>();
        }
        return shhwfpd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(oper != nullptr)
    {
        _children["oper"] = oper;
    }

    if(shhwfpd != nullptr)
    {
        _children["shhwfpd"] = shhwfpd;
    }

    return _children;
}

void HwModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> HwModule::clone_ptr() const
{
    return std::make_shared<HwModule>();
}

std::string HwModule::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HwModule::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HwModule::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HwModule::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HwModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "oper" || name == "shhwfpd")
        return true;
    return false;
}

HwModule::Config::Config()
    :
    shutdown(std::make_shared<HwModule::Config::Shutdown>())
    , reset(std::make_shared<HwModule::Config::Reset>())
    , offline(std::make_shared<HwModule::Config::Offline>())
    , attention_led(std::make_shared<HwModule::Config::AttentionLed>())
    , location(this, {"location"})
{
    shutdown->parent = this;
    reset->parent = this;
    offline->parent = this;
    attention_led->parent = this;

    yang_name = "config"; yang_parent_name = "hw-module"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Config::~Config()
{
}

bool HwModule::Config::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (shutdown !=  nullptr && shutdown->has_data())
	|| (reset !=  nullptr && reset->has_data())
	|| (offline !=  nullptr && offline->has_data())
	|| (attention_led !=  nullptr && attention_led->has_data());
}

bool HwModule::Config::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (shutdown !=  nullptr && shutdown->has_operation())
	|| (reset !=  nullptr && reset->has_operation())
	|| (offline !=  nullptr && offline->has_operation())
	|| (attention_led !=  nullptr && attention_led->has_operation());
}

std::string HwModule::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-hw-module:hw-module/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<HwModule::Config::Shutdown>();
        }
        return shutdown;
    }

    if(child_yang_name == "reset")
    {
        if(reset == nullptr)
        {
            reset = std::make_shared<HwModule::Config::Reset>();
        }
        return reset;
    }

    if(child_yang_name == "offline")
    {
        if(offline == nullptr)
        {
            offline = std::make_shared<HwModule::Config::Offline>();
        }
        return offline;
    }

    if(child_yang_name == "attention-led")
    {
        if(attention_led == nullptr)
        {
            attention_led = std::make_shared<HwModule::Config::AttentionLed>();
        }
        return attention_led;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<HwModule::Config::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(shutdown != nullptr)
    {
        _children["shutdown"] = shutdown;
    }

    if(reset != nullptr)
    {
        _children["reset"] = reset;
    }

    if(offline != nullptr)
    {
        _children["offline"] = offline;
    }

    if(attention_led != nullptr)
    {
        _children["attention-led"] = attention_led;
    }

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

void HwModule::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "reset" || name == "offline" || name == "attention-led" || name == "location")
        return true;
    return false;
}

HwModule::Config::Shutdown::Shutdown()
    :
    location(this, {"location"})
{

    yang_name = "shutdown"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Config::Shutdown::~Shutdown()
{
}

bool HwModule::Config::Shutdown::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool HwModule::Config::Shutdown::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModule::Config::Shutdown::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-hw-module:hw-module/config/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Config::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Config::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Config::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<HwModule::Config::Shutdown::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Config::Shutdown::get_children() const
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

void HwModule::Config::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::Config::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::Config::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

HwModule::Config::Shutdown::Location::Location()
    :
    location{YType::str, "location"}
{

    yang_name = "location"; yang_parent_name = "shutdown"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Config::Shutdown::Location::~Location()
{
}

bool HwModule::Config::Shutdown::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set;
}

bool HwModule::Config::Shutdown::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string HwModule::Config::Shutdown::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-hw-module:hw-module/config/shutdown/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Config::Shutdown::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Config::Shutdown::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Config::Shutdown::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Config::Shutdown::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HwModule::Config::Shutdown::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::Config::Shutdown::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool HwModule::Config::Shutdown::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

HwModule::Config::Reset::Reset()
    :
    auto_(std::make_shared<HwModule::Config::Reset::Auto>())
{
    auto_->parent = this;

    yang_name = "reset"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Config::Reset::~Reset()
{
}

bool HwModule::Config::Reset::has_data() const
{
    if (is_presence_container) return true;
    return (auto_ !=  nullptr && auto_->has_data());
}

bool HwModule::Config::Reset::has_operation() const
{
    return is_set(yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation());
}

std::string HwModule::Config::Reset::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-hw-module:hw-module/config/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Config::Reset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Config::Reset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Config::Reset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<HwModule::Config::Reset::Auto>();
        }
        return auto_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Config::Reset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_ != nullptr)
    {
        _children["auto"] = auto_;
    }

    return _children;
}

void HwModule::Config::Reset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::Config::Reset::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::Config::Reset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

HwModule::Config::Reset::Auto::Auto()
    :
    disable(std::make_shared<HwModule::Config::Reset::Auto::Disable>())
{
    disable->parent = this;

    yang_name = "auto"; yang_parent_name = "reset"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Config::Reset::Auto::~Auto()
{
}

bool HwModule::Config::Reset::Auto::has_data() const
{
    if (is_presence_container) return true;
    return (disable !=  nullptr && disable->has_data());
}

bool HwModule::Config::Reset::Auto::has_operation() const
{
    return is_set(yfilter)
	|| (disable !=  nullptr && disable->has_operation());
}

std::string HwModule::Config::Reset::Auto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-hw-module:hw-module/config/reset/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Config::Reset::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Config::Reset::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Config::Reset::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<HwModule::Config::Reset::Auto::Disable>();
        }
        return disable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Config::Reset::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disable != nullptr)
    {
        _children["disable"] = disable;
    }

    return _children;
}

void HwModule::Config::Reset::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::Config::Reset::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::Config::Reset::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

HwModule::Config::Reset::Auto::Disable::Disable()
    :
    location(this, {"location"})
{

    yang_name = "disable"; yang_parent_name = "auto"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Config::Reset::Auto::Disable::~Disable()
{
}

bool HwModule::Config::Reset::Auto::Disable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool HwModule::Config::Reset::Auto::Disable::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModule::Config::Reset::Auto::Disable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-hw-module:hw-module/config/reset/auto/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Config::Reset::Auto::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Config::Reset::Auto::Disable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Config::Reset::Auto::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<HwModule::Config::Reset::Auto::Disable::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Config::Reset::Auto::Disable::get_children() const
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

void HwModule::Config::Reset::Auto::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::Config::Reset::Auto::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::Config::Reset::Auto::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

HwModule::Config::Reset::Auto::Disable::Location::Location()
    :
    location{YType::str, "location"}
{

    yang_name = "location"; yang_parent_name = "disable"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Config::Reset::Auto::Disable::Location::~Location()
{
}

bool HwModule::Config::Reset::Auto::Disable::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set;
}

bool HwModule::Config::Reset::Auto::Disable::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string HwModule::Config::Reset::Auto::Disable::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-hw-module:hw-module/config/reset/auto/disable/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Config::Reset::Auto::Disable::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Config::Reset::Auto::Disable::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Config::Reset::Auto::Disable::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Config::Reset::Auto::Disable::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HwModule::Config::Reset::Auto::Disable::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::Config::Reset::Auto::Disable::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool HwModule::Config::Reset::Auto::Disable::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

HwModule::Config::Offline::Offline()
    :
    location(this, {"location"})
{

    yang_name = "offline"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Config::Offline::~Offline()
{
}

bool HwModule::Config::Offline::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool HwModule::Config::Offline::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModule::Config::Offline::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-hw-module:hw-module/config/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Config::Offline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "offline";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Config::Offline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Config::Offline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<HwModule::Config::Offline::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Config::Offline::get_children() const
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

void HwModule::Config::Offline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::Config::Offline::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::Config::Offline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

HwModule::Config::Offline::Location::Location()
    :
    location{YType::str, "location"}
{

    yang_name = "location"; yang_parent_name = "offline"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Config::Offline::Location::~Location()
{
}

bool HwModule::Config::Offline::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set;
}

bool HwModule::Config::Offline::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string HwModule::Config::Offline::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-hw-module:hw-module/config/offline/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Config::Offline::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Config::Offline::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Config::Offline::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Config::Offline::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HwModule::Config::Offline::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::Config::Offline::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool HwModule::Config::Offline::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

HwModule::Config::AttentionLed::AttentionLed()
    :
    location(this, {"location"})
{

    yang_name = "attention-led"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Config::AttentionLed::~AttentionLed()
{
}

bool HwModule::Config::AttentionLed::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool HwModule::Config::AttentionLed::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModule::Config::AttentionLed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-hw-module:hw-module/config/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Config::AttentionLed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attention-led";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Config::AttentionLed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Config::AttentionLed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<HwModule::Config::AttentionLed::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Config::AttentionLed::get_children() const
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

void HwModule::Config::AttentionLed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::Config::AttentionLed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::Config::AttentionLed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

HwModule::Config::AttentionLed::Location::Location()
    :
    location{YType::str, "location"}
{

    yang_name = "location"; yang_parent_name = "attention-led"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Config::AttentionLed::Location::~Location()
{
}

bool HwModule::Config::AttentionLed::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set;
}

bool HwModule::Config::AttentionLed::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string HwModule::Config::AttentionLed::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-hw-module:hw-module/config/attention-led/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Config::AttentionLed::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Config::AttentionLed::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Config::AttentionLed::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Config::AttentionLed::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HwModule::Config::AttentionLed::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::Config::AttentionLed::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool HwModule::Config::AttentionLed::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

HwModule::Config::Location::Location()
    :
    location{YType::str, "location"}
        ,
    logging(std::make_shared<HwModule::Config::Location::Logging>())
{
    logging->parent = this;

    yang_name = "location"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Config::Location::~Location()
{
}

bool HwModule::Config::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (logging !=  nullptr && logging->has_data());
}

bool HwModule::Config::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string HwModule::Config::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-hw-module:hw-module/config/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Config::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Config::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Config::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<HwModule::Config::Location::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Config::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    return _children;
}

void HwModule::Config::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::Config::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool HwModule::Config::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "location")
        return true;
    return false;
}

HwModule::Config::Location::Logging::Logging()
    :
    onboard(std::make_shared<HwModule::Config::Location::Logging::Onboard>())
{
    onboard->parent = this;

    yang_name = "logging"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::Config::Location::Logging::~Logging()
{
}

bool HwModule::Config::Location::Logging::has_data() const
{
    if (is_presence_container) return true;
    return (onboard !=  nullptr && onboard->has_data());
}

bool HwModule::Config::Location::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (onboard !=  nullptr && onboard->has_operation());
}

std::string HwModule::Config::Location::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Config::Location::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Config::Location::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "onboard")
    {
        if(onboard == nullptr)
        {
            onboard = std::make_shared<HwModule::Config::Location::Logging::Onboard>();
        }
        return onboard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Config::Location::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(onboard != nullptr)
    {
        _children["onboard"] = onboard;
    }

    return _children;
}

void HwModule::Config::Location::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::Config::Location::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::Config::Location::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "onboard")
        return true;
    return false;
}

HwModule::Config::Location::Logging::Onboard::Onboard()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "onboard"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::Config::Location::Logging::Onboard::~Onboard()
{
}

bool HwModule::Config::Location::Logging::Onboard::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool HwModule::Config::Location::Logging::Onboard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string HwModule::Config::Location::Logging::Onboard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onboard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Config::Location::Logging::Onboard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Config::Location::Logging::Onboard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Config::Location::Logging::Onboard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HwModule::Config::Location::Logging::Onboard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::Config::Location::Logging::Onboard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool HwModule::Config::Location::Logging::Onboard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

HwModule::Oper::Oper()
    :
    location(this, {"location"})
{

    yang_name = "oper"; yang_parent_name = "hw-module"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Oper::~Oper()
{
}

bool HwModule::Oper::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool HwModule::Oper::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModule::Oper::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-hw-module:hw-module/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Oper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<HwModule::Oper::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Oper::get_children() const
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

void HwModule::Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::Oper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

HwModule::Oper::Location::Location()
    :
    location{YType::str, "location"}
        ,
    actions(std::make_shared<HwModule::Oper::Location::Actions>())
    , show(std::make_shared<HwModule::Oper::Location::Show>())
{
    actions->parent = this;
    show->parent = this;

    yang_name = "location"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Oper::Location::~Location()
{
}

bool HwModule::Oper::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (actions !=  nullptr && actions->has_data())
	|| (show !=  nullptr && show->has_data());
}

bool HwModule::Oper::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (actions !=  nullptr && actions->has_operation())
	|| (show !=  nullptr && show->has_operation());
}

std::string HwModule::Oper::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-hw-module:hw-module/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Oper::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Oper::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Oper::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actions")
    {
        if(actions == nullptr)
        {
            actions = std::make_shared<HwModule::Oper::Location::Actions>();
        }
        return actions;
    }

    if(child_yang_name == "show")
    {
        if(show == nullptr)
        {
            show = std::make_shared<HwModule::Oper::Location::Show>();
        }
        return show;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Oper::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(actions != nullptr)
    {
        _children["actions"] = actions;
    }

    if(show != nullptr)
    {
        _children["show"] = show;
    }

    return _children;
}

void HwModule::Oper::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::Oper::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool HwModule::Oper::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actions" || name == "show" || name == "location")
        return true;
    return false;
}

HwModule::Oper::Location::Actions::Actions()
    :
    cbootmedia(std::make_shared<HwModule::Oper::Location::Actions::Cbootmedia>())
{
    cbootmedia->parent = this;

    yang_name = "actions"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::Oper::Location::Actions::~Actions()
{
}

bool HwModule::Oper::Location::Actions::has_data() const
{
    if (is_presence_container) return true;
    return (cbootmedia !=  nullptr && cbootmedia->has_data());
}

bool HwModule::Oper::Location::Actions::has_operation() const
{
    return is_set(yfilter)
	|| (cbootmedia !=  nullptr && cbootmedia->has_operation());
}

std::string HwModule::Oper::Location::Actions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Oper::Location::Actions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Oper::Location::Actions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbootmedia")
    {
        if(cbootmedia == nullptr)
        {
            cbootmedia = std::make_shared<HwModule::Oper::Location::Actions::Cbootmedia>();
        }
        return cbootmedia;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Oper::Location::Actions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cbootmedia != nullptr)
    {
        _children["cbootmedia"] = cbootmedia;
    }

    return _children;
}

void HwModule::Oper::Location::Actions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::Oper::Location::Actions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::Oper::Location::Actions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbootmedia")
        return true;
    return false;
}

HwModule::Oper::Location::Actions::Cbootmedia::Cbootmedia()
    :
    bootmedia(this, {"bootmedium"})
{

    yang_name = "cbootmedia"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::Oper::Location::Actions::Cbootmedia::~Cbootmedia()
{
}

bool HwModule::Oper::Location::Actions::Cbootmedia::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bootmedia.len(); index++)
    {
        if(bootmedia[index]->has_data())
            return true;
    }
    return false;
}

bool HwModule::Oper::Location::Actions::Cbootmedia::has_operation() const
{
    for (std::size_t index=0; index<bootmedia.len(); index++)
    {
        if(bootmedia[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModule::Oper::Location::Actions::Cbootmedia::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbootmedia";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Oper::Location::Actions::Cbootmedia::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Oper::Location::Actions::Cbootmedia::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bootmedia")
    {
        auto ent_ = std::make_shared<HwModule::Oper::Location::Actions::Cbootmedia::Bootmedia>();
        ent_->parent = this;
        bootmedia.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Oper::Location::Actions::Cbootmedia::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bootmedia.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void HwModule::Oper::Location::Actions::Cbootmedia::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::Oper::Location::Actions::Cbootmedia::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::Oper::Location::Actions::Cbootmedia::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootmedia")
        return true;
    return false;
}

HwModule::Oper::Location::Actions::Cbootmedia::Bootmedia::Bootmedia()
    :
    bootmedium{YType::str, "bootmedium"}
{

    yang_name = "bootmedia"; yang_parent_name = "cbootmedia"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::Oper::Location::Actions::Cbootmedia::Bootmedia::~Bootmedia()
{
}

bool HwModule::Oper::Location::Actions::Cbootmedia::Bootmedia::has_data() const
{
    if (is_presence_container) return true;
    return bootmedium.is_set;
}

bool HwModule::Oper::Location::Actions::Cbootmedia::Bootmedia::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bootmedium.yfilter);
}

std::string HwModule::Oper::Location::Actions::Cbootmedia::Bootmedia::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootmedia";
    ADD_KEY_TOKEN(bootmedium, "bootmedium");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Oper::Location::Actions::Cbootmedia::Bootmedia::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bootmedium.is_set || is_set(bootmedium.yfilter)) leaf_name_data.push_back(bootmedium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Oper::Location::Actions::Cbootmedia::Bootmedia::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Oper::Location::Actions::Cbootmedia::Bootmedia::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HwModule::Oper::Location::Actions::Cbootmedia::Bootmedia::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bootmedium")
    {
        bootmedium = value;
        bootmedium.value_namespace = name_space;
        bootmedium.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::Oper::Location::Actions::Cbootmedia::Bootmedia::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bootmedium")
    {
        bootmedium.yfilter = yfilter;
    }
}

bool HwModule::Oper::Location::Actions::Cbootmedia::Bootmedia::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootmedium")
        return true;
    return false;
}

HwModule::Oper::Location::Show::Show()
{

    yang_name = "show"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::Oper::Location::Show::~Show()
{
}

bool HwModule::Oper::Location::Show::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool HwModule::Oper::Location::Show::has_operation() const
{
    return is_set(yfilter);
}

std::string HwModule::Oper::Location::Show::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Oper::Location::Show::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Oper::Location::Show::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Oper::Location::Show::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HwModule::Oper::Location::Show::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::Oper::Location::Show::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::Oper::Location::Show::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

HwModule::Shhwfpd::Shhwfpd()
    :
    alocation(this, {"locs"})
    , fpd(this, {"fpdname"})
{

    yang_name = "shhwfpd"; yang_parent_name = "hw-module"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Shhwfpd::~Shhwfpd()
{
}

bool HwModule::Shhwfpd::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alocation.len(); index++)
    {
        if(alocation[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<fpd.len(); index++)
    {
        if(fpd[index]->has_data())
            return true;
    }
    return false;
}

bool HwModule::Shhwfpd::has_operation() const
{
    for (std::size_t index=0; index<alocation.len(); index++)
    {
        if(alocation[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<fpd.len(); index++)
    {
        if(fpd[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModule::Shhwfpd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-hw-module:hw-module/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Shhwfpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shhwfpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Shhwfpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Shhwfpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alocation")
    {
        auto ent_ = std::make_shared<HwModule::Shhwfpd::Alocation>();
        ent_->parent = this;
        alocation.append(ent_);
        return ent_;
    }

    if(child_yang_name == "fpd")
    {
        auto ent_ = std::make_shared<HwModule::Shhwfpd::Fpd>();
        ent_->parent = this;
        fpd.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Shhwfpd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : alocation.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : fpd.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void HwModule::Shhwfpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::Shhwfpd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::Shhwfpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alocation" || name == "fpd")
        return true;
    return false;
}

HwModule::Shhwfpd::Alocation::Alocation()
    :
    locs{YType::str, "locs"}
        ,
    fpd(this, {"fpdname"})
{

    yang_name = "alocation"; yang_parent_name = "shhwfpd"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Shhwfpd::Alocation::~Alocation()
{
}

bool HwModule::Shhwfpd::Alocation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fpd.len(); index++)
    {
        if(fpd[index]->has_data())
            return true;
    }
    return locs.is_set;
}

bool HwModule::Shhwfpd::Alocation::has_operation() const
{
    for (std::size_t index=0; index<fpd.len(); index++)
    {
        if(fpd[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(locs.yfilter);
}

std::string HwModule::Shhwfpd::Alocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-hw-module:hw-module/shhwfpd/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Shhwfpd::Alocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alocation";
    ADD_KEY_TOKEN(locs, "locs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Shhwfpd::Alocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locs.is_set || is_set(locs.yfilter)) leaf_name_data.push_back(locs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Shhwfpd::Alocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd")
    {
        auto ent_ = std::make_shared<HwModule::Shhwfpd::Alocation::Fpd>();
        ent_->parent = this;
        fpd.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Shhwfpd::Alocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fpd.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void HwModule::Shhwfpd::Alocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locs")
    {
        locs = value;
        locs.value_namespace = name_space;
        locs.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::Shhwfpd::Alocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locs")
    {
        locs.yfilter = yfilter;
    }
}

bool HwModule::Shhwfpd::Alocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd" || name == "locs")
        return true;
    return false;
}

HwModule::Shhwfpd::Alocation::Fpd::Fpd()
    :
    fpdname{YType::str, "fpdname"},
    state{YType::str, "state"},
    hwver{YType::str, "hwver"},
    fpdver{YType::str, "fpdver"},
    cardname{YType::str, "cardname"},
    attr{YType::str, "attr"},
    fpddnld{YType::str, "fpddnld"}
{

    yang_name = "fpd"; yang_parent_name = "alocation"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::Shhwfpd::Alocation::Fpd::~Fpd()
{
}

bool HwModule::Shhwfpd::Alocation::Fpd::has_data() const
{
    if (is_presence_container) return true;
    return fpdname.is_set
	|| state.is_set
	|| hwver.is_set
	|| fpdver.is_set
	|| cardname.is_set
	|| attr.is_set
	|| fpddnld.is_set;
}

bool HwModule::Shhwfpd::Alocation::Fpd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fpdname.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| ydk::is_set(fpdver.yfilter)
	|| ydk::is_set(cardname.yfilter)
	|| ydk::is_set(attr.yfilter)
	|| ydk::is_set(fpddnld.yfilter);
}

std::string HwModule::Shhwfpd::Alocation::Fpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd";
    ADD_KEY_TOKEN(fpdname, "fpdname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Shhwfpd::Alocation::Fpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpdname.is_set || is_set(fpdname.yfilter)) leaf_name_data.push_back(fpdname.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());
    if (fpdver.is_set || is_set(fpdver.yfilter)) leaf_name_data.push_back(fpdver.get_name_leafdata());
    if (cardname.is_set || is_set(cardname.yfilter)) leaf_name_data.push_back(cardname.get_name_leafdata());
    if (attr.is_set || is_set(attr.yfilter)) leaf_name_data.push_back(attr.get_name_leafdata());
    if (fpddnld.is_set || is_set(fpddnld.yfilter)) leaf_name_data.push_back(fpddnld.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Shhwfpd::Alocation::Fpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Shhwfpd::Alocation::Fpd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HwModule::Shhwfpd::Alocation::Fpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fpdname")
    {
        fpdname = value;
        fpdname.value_namespace = name_space;
        fpdname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwver")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpdver")
    {
        fpdver = value;
        fpdver.value_namespace = name_space;
        fpdver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cardname")
    {
        cardname = value;
        cardname.value_namespace = name_space;
        cardname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr")
    {
        attr = value;
        attr.value_namespace = name_space;
        attr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpddnld")
    {
        fpddnld = value;
        fpddnld.value_namespace = name_space;
        fpddnld.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::Shhwfpd::Alocation::Fpd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fpdname")
    {
        fpdname.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "hwver")
    {
        hwver.yfilter = yfilter;
    }
    if(value_path == "fpdver")
    {
        fpdver.yfilter = yfilter;
    }
    if(value_path == "cardname")
    {
        cardname.yfilter = yfilter;
    }
    if(value_path == "attr")
    {
        attr.yfilter = yfilter;
    }
    if(value_path == "fpddnld")
    {
        fpddnld.yfilter = yfilter;
    }
}

bool HwModule::Shhwfpd::Alocation::Fpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpdname" || name == "state" || name == "hwver" || name == "fpdver" || name == "cardname" || name == "attr" || name == "fpddnld")
        return true;
    return false;
}

HwModule::Shhwfpd::Fpd::Fpd()
    :
    fpdname{YType::str, "fpdname"}
{

    yang_name = "fpd"; yang_parent_name = "shhwfpd"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Shhwfpd::Fpd::~Fpd()
{
}

bool HwModule::Shhwfpd::Fpd::has_data() const
{
    if (is_presence_container) return true;
    return fpdname.is_set;
}

bool HwModule::Shhwfpd::Fpd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fpdname.yfilter);
}

std::string HwModule::Shhwfpd::Fpd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-hw-module:hw-module/shhwfpd/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Shhwfpd::Fpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd";
    ADD_KEY_TOKEN(fpdname, "fpdname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Shhwfpd::Fpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpdname.is_set || is_set(fpdname.yfilter)) leaf_name_data.push_back(fpdname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::Shhwfpd::Fpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::Shhwfpd::Fpd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HwModule::Shhwfpd::Fpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fpdname")
    {
        fpdname = value;
        fpdname.value_namespace = name_space;
        fpdname.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::Shhwfpd::Fpd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fpdname")
    {
        fpdname.yfilter = yfilter;
    }
}

bool HwModule::Shhwfpd::Fpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpdname")
        return true;
    return false;
}


}
}

