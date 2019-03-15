
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_219.hpp"
#include "Cisco_IOS_XE_native_220.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Rip::Default::Timers::Timers()
    :
    basic{YType::empty, "basic"}
{

    yang_name = "timers"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Rip::Default::Timers::~Timers()
{
}

bool Native::Router::Rip::Default::Timers::has_data() const
{
    if (is_presence_container) return true;
    return basic.is_set;
}

bool Native::Router::Rip::Default::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(basic.yfilter);
}

std::string Native::Router::Rip::Default::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (basic.is_set || is_set(basic.yfilter)) leaf_name_data.push_back(basic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Rip::Default::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Rip::Default::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Rip::Default::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "basic")
    {
        basic = value;
        basic.value_namespace = name_space;
        basic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "basic")
    {
        basic.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic")
        return true;
    return false;
}

Native::Router::Rip::Default::TrafficShare::TrafficShare()
    :
    min(std::make_shared<Native::Router::Rip::Default::TrafficShare::Min>())
{
    min->parent = this;

    yang_name = "traffic-share"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Rip::Default::TrafficShare::~TrafficShare()
{
}

bool Native::Router::Rip::Default::TrafficShare::has_data() const
{
    if (is_presence_container) return true;
    return (min !=  nullptr && min->has_data());
}

bool Native::Router::Rip::Default::TrafficShare::has_operation() const
{
    return is_set(yfilter)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Router::Rip::Default::TrafficShare::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default::TrafficShare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Rip::Default::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min")
    {
        if(min == nullptr)
        {
            min = std::make_shared<Native::Router::Rip::Default::TrafficShare::Min>();
        }
        return min;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Rip::Default::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(min != nullptr)
    {
        _children["min"] = min;
    }

    return _children;
}

void Native::Router::Rip::Default::TrafficShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Default::TrafficShare::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Default::TrafficShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min")
        return true;
    return false;
}

Native::Router::Rip::Default::TrafficShare::Min::Min()
    :
    across_interfaces{YType::empty, "across-interfaces"}
{

    yang_name = "min"; yang_parent_name = "traffic-share"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Rip::Default::TrafficShare::Min::~Min()
{
}

bool Native::Router::Rip::Default::TrafficShare::Min::has_data() const
{
    if (is_presence_container) return true;
    return across_interfaces.is_set;
}

bool Native::Router::Rip::Default::TrafficShare::Min::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(across_interfaces.yfilter);
}

std::string Native::Router::Rip::Default::TrafficShare::Min::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/traffic-share/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default::TrafficShare::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default::TrafficShare::Min::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (across_interfaces.is_set || is_set(across_interfaces.yfilter)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Rip::Default::TrafficShare::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Rip::Default::TrafficShare::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Rip::Default::TrafficShare::Min::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
        across_interfaces.value_namespace = name_space;
        across_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default::TrafficShare::Min::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default::TrafficShare::Min::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "across-interfaces")
        return true;
    return false;
}

Native::ServiceChain::ServiceChain()
    :
    service_function(this, {"name"})
    , service_function_forwarder(std::make_shared<Native::ServiceChain::ServiceFunctionForwarder>())
    , service_path(this, {"service_path_id"})
{
    service_function_forwarder->parent = this;

    yang_name = "service-chain"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ServiceChain::~ServiceChain()
{
}

bool Native::ServiceChain::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service_function.len(); index++)
    {
        if(service_function[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_path.len(); index++)
    {
        if(service_path[index]->has_data())
            return true;
    }
    return (service_function_forwarder !=  nullptr && service_function_forwarder->has_data());
}

bool Native::ServiceChain::has_operation() const
{
    for (std::size_t index=0; index<service_function.len(); index++)
    {
        if(service_function[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_path.len(); index++)
    {
        if(service_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (service_function_forwarder !=  nullptr && service_function_forwarder->has_operation());
}

std::string Native::ServiceChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-service-chain:service-function")
    {
        auto ent_ = std::make_shared<Native::ServiceChain::ServiceFunction>();
        ent_->parent = this;
        service_function.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-service-chain:service-function-forwarder")
    {
        if(service_function_forwarder == nullptr)
        {
            service_function_forwarder = std::make_shared<Native::ServiceChain::ServiceFunctionForwarder>();
        }
        return service_function_forwarder;
    }

    if(child_yang_name == "Cisco-IOS-XE-service-chain:service-path")
    {
        auto ent_ = std::make_shared<Native::ServiceChain::ServicePath>();
        ent_->parent = this;
        service_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : service_function.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(service_function_forwarder != nullptr)
    {
        _children["Cisco-IOS-XE-service-chain:service-function-forwarder"] = service_function_forwarder;
    }

    count_ = 0;
    for (auto ent_ : service_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::ServiceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ServiceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ServiceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-function" || name == "service-function-forwarder" || name == "service-path")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunction::ServiceFunction()
    :
    name{YType::str, "name"}
        ,
    config_service_chain_sf_mode(std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode>())
{
    config_service_chain_sf_mode->parent = this;

    yang_name = "service-function"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ServiceChain::ServiceFunction::~ServiceFunction()
{
}

bool Native::ServiceChain::ServiceFunction::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (config_service_chain_sf_mode !=  nullptr && config_service_chain_sf_mode->has_data());
}

bool Native::ServiceChain::ServiceFunction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config_service_chain_sf_mode !=  nullptr && config_service_chain_sf_mode->has_operation());
}

std::string Native::ServiceChain::ServiceFunction::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-chain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceChain::ServiceFunction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-chain:service-function";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceChain::ServiceFunction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-service-chain-sf-mode")
    {
        if(config_service_chain_sf_mode == nullptr)
        {
            config_service_chain_sf_mode = std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode>();
        }
        return config_service_chain_sf_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceChain::ServiceFunction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config_service_chain_sf_mode != nullptr)
    {
        _children["config-service-chain-sf-mode"] = config_service_chain_sf_mode;
    }

    return _children;
}

void Native::ServiceChain::ServiceFunction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServiceFunction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServiceFunction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-service-chain-sf-mode" || name == "name")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::ConfigServiceChainSfMode()
    :
    description{YType::str, "description"}
        ,
    encapsulation(std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation>())
    , ip(std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip>())
{
    encapsulation->parent = this;
    ip->parent = this;

    yang_name = "config-service-chain-sf-mode"; yang_parent_name = "service-function"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::~ConfigServiceChainSfMode()
{
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-service-chain-sf-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "ip" || name == "description")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Encapsulation()
    :
    none{YType::empty, "none"}
        ,
    gre(nullptr) // presence node
{

    yang_name = "encapsulation"; yang_parent_name = "config-service-chain-sf-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::~Encapsulation()
{
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set
	|| (gre !=  nullptr && gre->has_data());
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| (gre !=  nullptr && gre->has_operation());
}

std::string Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre")
    {
        if(gre == nullptr)
        {
            gre = std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre>();
        }
        return gre;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gre != nullptr)
    {
        _children["gre"] = gre;
    }

    return _children;
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre" || name == "none")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::Gre()
    :
    enhanced{YType::enumeration, "enhanced"}
{

    yang_name = "gre"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::~Gre()
{
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::has_data() const
{
    if (is_presence_container) return true;
    return enhanced.is_set;
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enhanced.yfilter);
}

std::string Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enhanced.is_set || is_set(enhanced.yfilter)) leaf_name_data.push_back(enhanced.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enhanced")
    {
        enhanced = value;
        enhanced.value_namespace = name_space;
        enhanced.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enhanced")
    {
        enhanced.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhanced")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "config-service-chain-sf-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::~Ip()
{
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunctionForwarder::ServiceFunctionForwarder()
    :
    service_ff_name(this, {"name"})
    , local(nullptr) // presence node
{

    yang_name = "service-function-forwarder"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ServiceChain::ServiceFunctionForwarder::~ServiceFunctionForwarder()
{
}

bool Native::ServiceChain::ServiceFunctionForwarder::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service_ff_name.len(); index++)
    {
        if(service_ff_name[index]->has_data())
            return true;
    }
    return (local !=  nullptr && local->has_data());
}

bool Native::ServiceChain::ServiceFunctionForwarder::has_operation() const
{
    for (std::size_t index=0; index<service_ff_name.len(); index++)
    {
        if(service_ff_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::ServiceChain::ServiceFunctionForwarder::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-chain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceChain::ServiceFunctionForwarder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-chain:service-function-forwarder";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunctionForwarder::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceChain::ServiceFunctionForwarder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-ff-name")
    {
        auto ent_ = std::make_shared<Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName>();
        ent_->parent = this;
        service_ff_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::ServiceChain::ServiceFunctionForwarder::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceChain::ServiceFunctionForwarder::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : service_ff_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(local != nullptr)
    {
        _children["local"] = local;
    }

    return _children;
}

void Native::ServiceChain::ServiceFunctionForwarder::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ServiceChain::ServiceFunctionForwarder::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ServiceChain::ServiceFunctionForwarder::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-ff-name" || name == "local")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::ServiceFfName()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
        ,
    ip(std::make_shared<Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip>())
{
    ip->parent = this;

    yang_name = "service-ff-name"; yang_parent_name = "service-function-forwarder"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::~ServiceFfName()
{
}

bool Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-chain/Cisco-IOS-XE-service-chain:service-function-forwarder/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-ff-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "name" || name == "description")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "service-ff-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::~Ip()
{
}

bool Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunctionForwarder::Local::Local()
    :
    description{YType::str, "description"}
        ,
    ip(std::make_shared<Native::ServiceChain::ServiceFunctionForwarder::Local::Ip>())
{
    ip->parent = this;

    yang_name = "local"; yang_parent_name = "service-function-forwarder"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::ServiceChain::ServiceFunctionForwarder::Local::~Local()
{
}

bool Native::ServiceChain::ServiceFunctionForwarder::Local::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::ServiceChain::ServiceFunctionForwarder::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::ServiceChain::ServiceFunctionForwarder::Local::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-chain/Cisco-IOS-XE-service-chain:service-function-forwarder/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceChain::ServiceFunctionForwarder::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunctionForwarder::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceChain::ServiceFunctionForwarder::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::ServiceChain::ServiceFunctionForwarder::Local::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceChain::ServiceFunctionForwarder::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::ServiceChain::ServiceFunctionForwarder::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServiceFunctionForwarder::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServiceFunctionForwarder::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "description")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::~Ip()
{
}

bool Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-chain/Cisco-IOS-XE-service-chain:service-function-forwarder/local/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::ServiceChain::ServicePath::ServicePath()
    :
    service_path_id{YType::uint32, "service-path-id"}
        ,
    config_service_chain_path_mode(std::make_shared<Native::ServiceChain::ServicePath::ConfigServiceChainPathMode>())
{
    config_service_chain_path_mode->parent = this;

    yang_name = "service-path"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ServiceChain::ServicePath::~ServicePath()
{
}

bool Native::ServiceChain::ServicePath::has_data() const
{
    if (is_presence_container) return true;
    return service_path_id.is_set
	|| (config_service_chain_path_mode !=  nullptr && config_service_chain_path_mode->has_data());
}

bool Native::ServiceChain::ServicePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_path_id.yfilter)
	|| (config_service_chain_path_mode !=  nullptr && config_service_chain_path_mode->has_operation());
}

std::string Native::ServiceChain::ServicePath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-chain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceChain::ServicePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-chain:service-path";
    ADD_KEY_TOKEN(service_path_id, "service-path-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServicePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_path_id.is_set || is_set(service_path_id.yfilter)) leaf_name_data.push_back(service_path_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceChain::ServicePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-service-chain-path-mode")
    {
        if(config_service_chain_path_mode == nullptr)
        {
            config_service_chain_path_mode = std::make_shared<Native::ServiceChain::ServicePath::ConfigServiceChainPathMode>();
        }
        return config_service_chain_path_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceChain::ServicePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config_service_chain_path_mode != nullptr)
    {
        _children["config-service-chain-path-mode"] = config_service_chain_path_mode;
    }

    return _children;
}

void Native::ServiceChain::ServicePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-path-id")
    {
        service_path_id = value;
        service_path_id.value_namespace = name_space;
        service_path_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServicePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-path-id")
    {
        service_path_id.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServicePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-service-chain-path-mode" || name == "service-path-id")
        return true;
    return false;
}

Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ConfigServiceChainPathMode()
    :
    description{YType::str, "description"}
        ,
    service_index(std::make_shared<Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex>())
{
    service_index->parent = this;

    yang_name = "config-service-chain-path-mode"; yang_parent_name = "service-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::~ConfigServiceChainPathMode()
{
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| (service_index !=  nullptr && service_index->has_data());
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (service_index !=  nullptr && service_index->has_operation());
}

std::string Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-service-chain-path-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-index")
    {
        if(service_index == nullptr)
        {
            service_index = std::make_shared<Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex>();
        }
        return service_index;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_index != nullptr)
    {
        _children["service-index"] = service_index;
    }

    return _children;
}

void Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-index" || name == "description")
        return true;
    return false;
}

Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::ServiceIndex()
    :
    services(this, {"service_index_id"})
{

    yang_name = "service-index"; yang_parent_name = "config-service-chain-path-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::~ServiceIndex()
{
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<services.len(); index++)
    {
        if(services[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::has_operation() const
{
    for (std::size_t index=0; index<services.len(); index++)
    {
        if(services[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "services")
    {
        auto ent_ = std::make_shared<Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services>();
        ent_->parent = this;
        services.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : services.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "services")
        return true;
    return false;
}

Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::Services()
    :
    service_index_id{YType::uint8, "service-index-id"},
    service_function{YType::str, "service-function"},
    service_function_forwarder{YType::str, "service-function-forwarder"},
    terminate{YType::empty, "terminate"}
{

    yang_name = "services"; yang_parent_name = "service-index"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::~Services()
{
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::has_data() const
{
    if (is_presence_container) return true;
    return service_index_id.is_set
	|| service_function.is_set
	|| service_function_forwarder.is_set
	|| terminate.is_set;
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_index_id.yfilter)
	|| ydk::is_set(service_function.yfilter)
	|| ydk::is_set(service_function_forwarder.yfilter)
	|| ydk::is_set(terminate.yfilter);
}

std::string Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services";
    ADD_KEY_TOKEN(service_index_id, "service-index-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_index_id.is_set || is_set(service_index_id.yfilter)) leaf_name_data.push_back(service_index_id.get_name_leafdata());
    if (service_function.is_set || is_set(service_function.yfilter)) leaf_name_data.push_back(service_function.get_name_leafdata());
    if (service_function_forwarder.is_set || is_set(service_function_forwarder.yfilter)) leaf_name_data.push_back(service_function_forwarder.get_name_leafdata());
    if (terminate.is_set || is_set(terminate.yfilter)) leaf_name_data.push_back(terminate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-index-id")
    {
        service_index_id = value;
        service_index_id.value_namespace = name_space;
        service_index_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-function")
    {
        service_function = value;
        service_function.value_namespace = name_space;
        service_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-function-forwarder")
    {
        service_function_forwarder = value;
        service_function_forwarder.value_namespace = name_space;
        service_function_forwarder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminate")
    {
        terminate = value;
        terminate.value_namespace = name_space;
        terminate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-index-id")
    {
        service_index_id.yfilter = yfilter;
    }
    if(value_path == "service-function")
    {
        service_function.yfilter = yfilter;
    }
    if(value_path == "service-function-forwarder")
    {
        service_function_forwarder.yfilter = yfilter;
    }
    if(value_path == "terminate")
    {
        terminate.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-index-id" || name == "service-function" || name == "service-function-forwarder" || name == "terminate")
        return true;
    return false;
}

Native::Performance::Performance()
    :
    monitor(std::make_shared<Native::Performance::Monitor>())
{
    monitor->parent = this;

    yang_name = "performance"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Performance::~Performance()
{
}

bool Native::Performance::has_data() const
{
    if (is_presence_container) return true;
    return (monitor !=  nullptr && monitor->has_data());
}

bool Native::Performance::has_operation() const
{
    return is_set(yfilter)
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Performance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Performance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-ezpm:monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Performance::Monitor>();
        }
        return monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(monitor != nullptr)
    {
        _children["Cisco-IOS-XE-ezpm:monitor"] = monitor;
    }

    return _children;
}

void Native::Performance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Performance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Performance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Performance::Monitor::Monitor()
    :
    context(this, {"name"})
    , observation_point(std::make_shared<Native::Performance::Monitor::ObservationPoint>())
{
    observation_point->parent = this;

    yang_name = "monitor"; yang_parent_name = "performance"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Performance::Monitor::~Monitor()
{
}

bool Native::Performance::Monitor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return (observation_point !=  nullptr && observation_point->has_data());
}

bool Native::Performance::Monitor::has_operation() const
{
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (observation_point !=  nullptr && observation_point->has_operation());
}

std::string Native::Performance::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/performance/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Performance::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ezpm:monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        auto ent_ = std::make_shared<Native::Performance::Monitor::Context>();
        ent_->parent = this;
        context.append(ent_);
        return ent_;
    }

    if(child_yang_name == "observation-point")
    {
        if(observation_point == nullptr)
        {
            observation_point = std::make_shared<Native::Performance::Monitor::ObservationPoint>();
        }
        return observation_point;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(observation_point != nullptr)
    {
        _children["observation-point"] = observation_point;
    }

    return _children;
}

void Native::Performance::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Performance::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Performance::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context" || name == "observation-point")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Context()
    :
    name{YType::str, "name"},
    profile{YType::enumeration, "profile"},
    description{YType::str, "description"}
        ,
    default_(std::make_shared<Native::Performance::Monitor::Context::Default>())
    , exporter(std::make_shared<Native::Performance::Monitor::Context::Exporter>())
    , traffic_monitor(std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor>())
{
    default_->parent = this;
    exporter->parent = this;
    traffic_monitor->parent = this;

    yang_name = "context"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Performance::Monitor::Context::~Context()
{
}

bool Native::Performance::Monitor::Context::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| profile.is_set
	|| description.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (exporter !=  nullptr && exporter->has_data())
	|| (traffic_monitor !=  nullptr && traffic_monitor->has_data());
}

bool Native::Performance::Monitor::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (exporter !=  nullptr && exporter->has_operation())
	|| (traffic_monitor !=  nullptr && traffic_monitor->has_operation());
}

std::string Native::Performance::Monitor::Context::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/performance/Cisco-IOS-XE-ezpm:monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Performance::Monitor::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Performance::Monitor::Context::Default>();
        }
        return default_;
    }

    if(child_yang_name == "exporter")
    {
        if(exporter == nullptr)
        {
            exporter = std::make_shared<Native::Performance::Monitor::Context::Exporter>();
        }
        return exporter;
    }

    if(child_yang_name == "traffic-monitor")
    {
        if(traffic_monitor == nullptr)
        {
            traffic_monitor = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor>();
        }
        return traffic_monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(exporter != nullptr)
    {
        _children["exporter"] = exporter;
    }

    if(traffic_monitor != nullptr)
    {
        _children["traffic-monitor"] = traffic_monitor;
    }

    return _children;
}

void Native::Performance::Monitor::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "exporter" || name == "traffic-monitor" || name == "name" || name == "profile" || name == "description")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default::Default()
    :
    description{YType::empty, "description"}
        ,
    exporter(std::make_shared<Native::Performance::Monitor::Context::Default::Exporter>())
    , traffic_monitor(std::make_shared<Native::Performance::Monitor::Context::Default::TrafficMonitor>())
{
    exporter->parent = this;
    traffic_monitor->parent = this;

    yang_name = "default"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Performance::Monitor::Context::Default::~Default()
{
}

bool Native::Performance::Monitor::Context::Default::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| (exporter !=  nullptr && exporter->has_data())
	|| (traffic_monitor !=  nullptr && traffic_monitor->has_data());
}

bool Native::Performance::Monitor::Context::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (exporter !=  nullptr && exporter->has_operation())
	|| (traffic_monitor !=  nullptr && traffic_monitor->has_operation());
}

std::string Native::Performance::Monitor::Context::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exporter")
    {
        if(exporter == nullptr)
        {
            exporter = std::make_shared<Native::Performance::Monitor::Context::Default::Exporter>();
        }
        return exporter;
    }

    if(child_yang_name == "traffic-monitor")
    {
        if(traffic_monitor == nullptr)
        {
            traffic_monitor = std::make_shared<Native::Performance::Monitor::Context::Default::TrafficMonitor>();
        }
        return traffic_monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(exporter != nullptr)
    {
        _children["exporter"] = exporter;
    }

    if(traffic_monitor != nullptr)
    {
        _children["traffic-monitor"] = traffic_monitor;
    }

    return _children;
}

void Native::Performance::Monitor::Context::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exporter" || name == "traffic-monitor" || name == "description")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default::Exporter::Exporter()
    :
    destination{YType::str, "destination"},
    source{YType::str, "source"},
    port{YType::uint16, "port"},
    transport{YType::enumeration, "transport"},
    vrf{YType::str, "vrf"}
{

    yang_name = "exporter"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Performance::Monitor::Context::Default::Exporter::~Exporter()
{
}

bool Native::Performance::Monitor::Context::Default::Exporter::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set
	|| source.is_set
	|| port.is_set
	|| transport.is_set
	|| vrf.is_set;
}

bool Native::Performance::Monitor::Context::Default::Exporter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Performance::Monitor::Context::Default::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default::Exporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::Default::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::Default::Exporter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::Context::Default::Exporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default::Exporter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default::Exporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source" || name == "port" || name == "transport" || name == "vrf")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default::TrafficMonitor::TrafficMonitor()
    :
    all(nullptr) // presence node
    , application_response_time(nullptr) // presence node
    , application_traffic_stats(nullptr) // presence node
    , conversation_traffic_stats(nullptr) // presence node
    , media(nullptr) // presence node
    , url(nullptr) // presence node
    , application_client_server_stats(nullptr) // presence node
    , application_stats(nullptr) // presence node
{

    yang_name = "traffic-monitor"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Performance::Monitor::Context::Default::TrafficMonitor::~TrafficMonitor()
{
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data())
	|| (application_response_time !=  nullptr && application_response_time->has_data())
	|| (application_traffic_stats !=  nullptr && application_traffic_stats->has_data())
	|| (conversation_traffic_stats !=  nullptr && conversation_traffic_stats->has_data())
	|| (media !=  nullptr && media->has_data())
	|| (url !=  nullptr && url->has_data())
	|| (application_client_server_stats !=  nullptr && application_client_server_stats->has_data())
	|| (application_stats !=  nullptr && application_stats->has_data());
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (application_response_time !=  nullptr && application_response_time->has_operation())
	|| (application_traffic_stats !=  nullptr && application_traffic_stats->has_operation())
	|| (conversation_traffic_stats !=  nullptr && conversation_traffic_stats->has_operation())
	|| (media !=  nullptr && media->has_operation())
	|| (url !=  nullptr && url->has_operation())
	|| (application_client_server_stats !=  nullptr && application_client_server_stats->has_operation())
	|| (application_stats !=  nullptr && application_stats->has_operation());
}

std::string Native::Performance::Monitor::Context::Default::TrafficMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default::TrafficMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::Default::TrafficMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Performance::Monitor::Context::Default::TrafficMonitor::All>();
        }
        return all;
    }

    if(child_yang_name == "application-response-time")
    {
        if(application_response_time == nullptr)
        {
            application_response_time = std::make_shared<Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime>();
        }
        return application_response_time;
    }

    if(child_yang_name == "application-traffic-stats")
    {
        if(application_traffic_stats == nullptr)
        {
            application_traffic_stats = std::make_shared<Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationTrafficStats>();
        }
        return application_traffic_stats;
    }

    if(child_yang_name == "conversation-traffic-stats")
    {
        if(conversation_traffic_stats == nullptr)
        {
            conversation_traffic_stats = std::make_shared<Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats>();
        }
        return conversation_traffic_stats;
    }

    if(child_yang_name == "media")
    {
        if(media == nullptr)
        {
            media = std::make_shared<Native::Performance::Monitor::Context::Default::TrafficMonitor::Media>();
        }
        return media;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Performance::Monitor::Context::Default::TrafficMonitor::Url>();
        }
        return url;
    }

    if(child_yang_name == "application-client-server-stats")
    {
        if(application_client_server_stats == nullptr)
        {
            application_client_server_stats = std::make_shared<Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats>();
        }
        return application_client_server_stats;
    }

    if(child_yang_name == "application-stats")
    {
        if(application_stats == nullptr)
        {
            application_stats = std::make_shared<Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationStats>();
        }
        return application_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::Default::TrafficMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    if(application_response_time != nullptr)
    {
        _children["application-response-time"] = application_response_time;
    }

    if(application_traffic_stats != nullptr)
    {
        _children["application-traffic-stats"] = application_traffic_stats;
    }

    if(conversation_traffic_stats != nullptr)
    {
        _children["conversation-traffic-stats"] = conversation_traffic_stats;
    }

    if(media != nullptr)
    {
        _children["media"] = media;
    }

    if(url != nullptr)
    {
        _children["url"] = url;
    }

    if(application_client_server_stats != nullptr)
    {
        _children["application-client-server-stats"] = application_client_server_stats;
    }

    if(application_stats != nullptr)
    {
        _children["application-stats"] = application_stats;
    }

    return _children;
}

void Native::Performance::Monitor::Context::Default::TrafficMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Performance::Monitor::Context::Default::TrafficMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "application-response-time" || name == "application-traffic-stats" || name == "conversation-traffic-stats" || name == "media" || name == "url" || name == "application-client-server-stats" || name == "application-stats")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default::TrafficMonitor::All::All()
    :
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "all"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Performance::Monitor::Context::Default::TrafficMonitor::All::~All()
{
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::All::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::Default::TrafficMonitor::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default::TrafficMonitor::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::Default::TrafficMonitor::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::Default::TrafficMonitor::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::Context::Default::TrafficMonitor::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default::TrafficMonitor::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime::ApplicationResponseTime()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    cache_type{YType::enumeration, "cache-type"},
    class_and{YType::str, "class-and"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "application-response-time"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime::~ApplicationResponseTime()
{
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime::has_data() const
{
    if (is_presence_container) return true;
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| cache_type.is_set
	|| class_and.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter)
	|| ydk::is_set(cache_type.yfilter)
	|| ydk::is_set(class_and.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-response-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (cache_type.is_set || is_set(cache_type.yfilter)) leaf_name_data.push_back(cache_type.get_name_leafdata());
    if (class_and.is_set || is_set(class_and.yfilter)) leaf_name_data.push_back(class_and.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-type")
    {
        cache_type = value;
        cache_type.value_namespace = name_space;
        cache_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-and")
    {
        class_and = value;
        class_and.value_namespace = name_space;
        class_and.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
    if(value_path == "cache-type")
    {
        cache_type.yfilter = yfilter;
    }
    if(value_path == "class-and")
    {
        class_and.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-replace" || name == "interval-timeout" || name == "cache-type" || name == "class-and" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationTrafficStats::ApplicationTrafficStats()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"}
{

    yang_name = "application-traffic-stats"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationTrafficStats::~ApplicationTrafficStats()
{
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationTrafficStats::has_data() const
{
    if (is_presence_container) return true;
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set;
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationTrafficStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter);
}

std::string Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationTrafficStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-traffic-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationTrafficStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationTrafficStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationTrafficStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationTrafficStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationTrafficStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationTrafficStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-replace" || name == "interval-timeout")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats::ConversationTrafficStats()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    cache_type{YType::enumeration, "cache-type"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "conversation-traffic-stats"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats::~ConversationTrafficStats()
{
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats::has_data() const
{
    if (is_presence_container) return true;
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| cache_type.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter)
	|| ydk::is_set(cache_type.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conversation-traffic-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (cache_type.is_set || is_set(cache_type.yfilter)) leaf_name_data.push_back(cache_type.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-type")
    {
        cache_type = value;
        cache_type.value_namespace = name_space;
        cache_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
    if(value_path == "cache-type")
    {
        cache_type.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-replace" || name == "interval-timeout" || name == "cache-type" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default::TrafficMonitor::Media::Media()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    class_and{YType::str, "class-and"},
    egress{YType::empty, "egress"},
    ingress{YType::empty, "ingress"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "media"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Performance::Monitor::Context::Default::TrafficMonitor::Media::~Media()
{
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::Media::has_data() const
{
    if (is_presence_container) return true;
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| class_and.is_set
	|| egress.is_set
	|| ingress.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::Media::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter)
	|| ydk::is_set(class_and.yfilter)
	|| ydk::is_set(egress.yfilter)
	|| ydk::is_set(ingress.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::Default::TrafficMonitor::Media::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default::TrafficMonitor::Media::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (class_and.is_set || is_set(class_and.yfilter)) leaf_name_data.push_back(class_and.get_name_leafdata());
    if (egress.is_set || is_set(egress.yfilter)) leaf_name_data.push_back(egress.get_name_leafdata());
    if (ingress.is_set || is_set(ingress.yfilter)) leaf_name_data.push_back(ingress.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::Default::TrafficMonitor::Media::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::Default::TrafficMonitor::Media::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::Context::Default::TrafficMonitor::Media::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-and")
    {
        class_and = value;
        class_and.value_namespace = name_space;
        class_and.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress")
    {
        egress = value;
        egress.value_namespace = name_space;
        egress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress")
    {
        ingress = value;
        ingress.value_namespace = name_space;
        ingress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default::TrafficMonitor::Media::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
    if(value_path == "class-and")
    {
        class_and.yfilter = yfilter;
    }
    if(value_path == "egress")
    {
        egress.yfilter = yfilter;
    }
    if(value_path == "ingress")
    {
        ingress.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::Media::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-replace" || name == "interval-timeout" || name == "class-and" || name == "egress" || name == "ingress" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default::TrafficMonitor::Url::Url()
    :
    cache_size{YType::uint32, "cache-size"},
    class_and{YType::str, "class-and"},
    class_replace{YType::str, "class-replace"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"},
    sampling_rate{YType::uint32, "sampling-rate"}
{

    yang_name = "url"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Performance::Monitor::Context::Default::TrafficMonitor::Url::~Url()
{
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::Url::has_data() const
{
    if (is_presence_container) return true;
    return cache_size.is_set
	|| class_and.is_set
	|| class_replace.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| sampling_rate.is_set;
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_and.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(sampling_rate.yfilter);
}

std::string Native::Performance::Monitor::Context::Default::TrafficMonitor::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default::TrafficMonitor::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_and.is_set || is_set(class_and.yfilter)) leaf_name_data.push_back(class_and.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (sampling_rate.is_set || is_set(sampling_rate.yfilter)) leaf_name_data.push_back(sampling_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::Default::TrafficMonitor::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::Default::TrafficMonitor::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::Context::Default::TrafficMonitor::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-and")
    {
        class_and = value;
        class_and.value_namespace = name_space;
        class_and.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampling-rate")
    {
        sampling_rate = value;
        sampling_rate.value_namespace = name_space;
        sampling_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default::TrafficMonitor::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-and")
    {
        class_and.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "sampling-rate")
    {
        sampling_rate.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-and" || name == "class-replace" || name == "ipv4" || name == "ipv6" || name == "sampling-rate")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats::ApplicationClientServerStats()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    cache_type{YType::enumeration, "cache-type"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "application-client-server-stats"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats::~ApplicationClientServerStats()
{
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats::has_data() const
{
    if (is_presence_container) return true;
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| cache_type.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter)
	|| ydk::is_set(cache_type.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-client-server-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (cache_type.is_set || is_set(cache_type.yfilter)) leaf_name_data.push_back(cache_type.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-type")
    {
        cache_type = value;
        cache_type.value_namespace = name_space;
        cache_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
    if(value_path == "cache-type")
    {
        cache_type.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-replace" || name == "interval-timeout" || name == "cache-type" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationStats::ApplicationStats()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"}
{

    yang_name = "application-stats"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationStats::~ApplicationStats()
{
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationStats::has_data() const
{
    if (is_presence_container) return true;
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set;
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter);
}

std::string Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-replace" || name == "interval-timeout")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Exporter::Exporter()
    :
    destination{YType::str, "destination"},
    source{YType::str, "source"},
    port{YType::uint16, "port"},
    transport{YType::enumeration, "transport"},
    vrf{YType::str, "vrf"}
{

    yang_name = "exporter"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Performance::Monitor::Context::Exporter::~Exporter()
{
}

bool Native::Performance::Monitor::Context::Exporter::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set
	|| source.is_set
	|| port.is_set
	|| transport.is_set
	|| vrf.is_set;
}

bool Native::Performance::Monitor::Context::Exporter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Performance::Monitor::Context::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Exporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::Exporter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::Context::Exporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Exporter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Exporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source" || name == "port" || name == "transport" || name == "vrf")
        return true;
    return false;
}

Native::Performance::Monitor::Context::TrafficMonitor::TrafficMonitor()
    :
    all(nullptr) // presence node
    , application_response_time(nullptr) // presence node
    , application_traffic_stats(nullptr) // presence node
    , conversation_traffic_stats(nullptr) // presence node
    , media(nullptr) // presence node
    , url(nullptr) // presence node
    , application_client_server_stats(nullptr) // presence node
    , application_stats(nullptr) // presence node
{

    yang_name = "traffic-monitor"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Performance::Monitor::Context::TrafficMonitor::~TrafficMonitor()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data())
	|| (application_response_time !=  nullptr && application_response_time->has_data())
	|| (application_traffic_stats !=  nullptr && application_traffic_stats->has_data())
	|| (conversation_traffic_stats !=  nullptr && conversation_traffic_stats->has_data())
	|| (media !=  nullptr && media->has_data())
	|| (url !=  nullptr && url->has_data())
	|| (application_client_server_stats !=  nullptr && application_client_server_stats->has_data())
	|| (application_stats !=  nullptr && application_stats->has_data());
}

bool Native::Performance::Monitor::Context::TrafficMonitor::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (application_response_time !=  nullptr && application_response_time->has_operation())
	|| (application_traffic_stats !=  nullptr && application_traffic_stats->has_operation())
	|| (conversation_traffic_stats !=  nullptr && conversation_traffic_stats->has_operation())
	|| (media !=  nullptr && media->has_operation())
	|| (url !=  nullptr && url->has_operation())
	|| (application_client_server_stats !=  nullptr && application_client_server_stats->has_operation())
	|| (application_stats !=  nullptr && application_stats->has_operation());
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::TrafficMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::TrafficMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::All>();
        }
        return all;
    }

    if(child_yang_name == "application-response-time")
    {
        if(application_response_time == nullptr)
        {
            application_response_time = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime>();
        }
        return application_response_time;
    }

    if(child_yang_name == "application-traffic-stats")
    {
        if(application_traffic_stats == nullptr)
        {
            application_traffic_stats = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats>();
        }
        return application_traffic_stats;
    }

    if(child_yang_name == "conversation-traffic-stats")
    {
        if(conversation_traffic_stats == nullptr)
        {
            conversation_traffic_stats = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats>();
        }
        return conversation_traffic_stats;
    }

    if(child_yang_name == "media")
    {
        if(media == nullptr)
        {
            media = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::Media>();
        }
        return media;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::Url>();
        }
        return url;
    }

    if(child_yang_name == "application-client-server-stats")
    {
        if(application_client_server_stats == nullptr)
        {
            application_client_server_stats = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats>();
        }
        return application_client_server_stats;
    }

    if(child_yang_name == "application-stats")
    {
        if(application_stats == nullptr)
        {
            application_stats = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats>();
        }
        return application_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::TrafficMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    if(application_response_time != nullptr)
    {
        _children["application-response-time"] = application_response_time;
    }

    if(application_traffic_stats != nullptr)
    {
        _children["application-traffic-stats"] = application_traffic_stats;
    }

    if(conversation_traffic_stats != nullptr)
    {
        _children["conversation-traffic-stats"] = conversation_traffic_stats;
    }

    if(media != nullptr)
    {
        _children["media"] = media;
    }

    if(url != nullptr)
    {
        _children["url"] = url;
    }

    if(application_client_server_stats != nullptr)
    {
        _children["application-client-server-stats"] = application_client_server_stats;
    }

    if(application_stats != nullptr)
    {
        _children["application-stats"] = application_stats;
    }

    return _children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Performance::Monitor::Context::TrafficMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "application-response-time" || name == "application-traffic-stats" || name == "conversation-traffic-stats" || name == "media" || name == "url" || name == "application-client-server-stats" || name == "application-stats")
        return true;
    return false;
}

Native::Performance::Monitor::Context::TrafficMonitor::All::All()
    :
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "all"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Performance::Monitor::Context::TrafficMonitor::All::~All()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::All::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::TrafficMonitor::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::TrafficMonitor::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::TrafficMonitor::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::TrafficMonitor::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::TrafficMonitor::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::ApplicationResponseTime()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    cache_type{YType::enumeration, "cache-type"},
    class_and{YType::str, "class-and"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "application-response-time"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::~ApplicationResponseTime()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::has_data() const
{
    if (is_presence_container) return true;
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| cache_type.is_set
	|| class_and.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter)
	|| ydk::is_set(cache_type.yfilter)
	|| ydk::is_set(class_and.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-response-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (cache_type.is_set || is_set(cache_type.yfilter)) leaf_name_data.push_back(cache_type.get_name_leafdata());
    if (class_and.is_set || is_set(class_and.yfilter)) leaf_name_data.push_back(class_and.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-type")
    {
        cache_type = value;
        cache_type.value_namespace = name_space;
        cache_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-and")
    {
        class_and = value;
        class_and.value_namespace = name_space;
        class_and.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
    if(value_path == "cache-type")
    {
        cache_type.yfilter = yfilter;
    }
    if(value_path == "class-and")
    {
        class_and.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-replace" || name == "interval-timeout" || name == "cache-type" || name == "class-and" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::ApplicationTrafficStats()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"}
{

    yang_name = "application-traffic-stats"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::~ApplicationTrafficStats()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::has_data() const
{
    if (is_presence_container) return true;
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-traffic-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-replace" || name == "interval-timeout")
        return true;
    return false;
}

Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::ConversationTrafficStats()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    cache_type{YType::enumeration, "cache-type"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "conversation-traffic-stats"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::~ConversationTrafficStats()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::has_data() const
{
    if (is_presence_container) return true;
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| cache_type.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter)
	|| ydk::is_set(cache_type.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conversation-traffic-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (cache_type.is_set || is_set(cache_type.yfilter)) leaf_name_data.push_back(cache_type.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-type")
    {
        cache_type = value;
        cache_type.value_namespace = name_space;
        cache_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
    if(value_path == "cache-type")
    {
        cache_type.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-replace" || name == "interval-timeout" || name == "cache-type" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::TrafficMonitor::Media::Media()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    class_and{YType::str, "class-and"},
    egress{YType::empty, "egress"},
    ingress{YType::empty, "ingress"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "media"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Performance::Monitor::Context::TrafficMonitor::Media::~Media()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::Media::has_data() const
{
    if (is_presence_container) return true;
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| class_and.is_set
	|| egress.is_set
	|| ingress.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::Media::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter)
	|| ydk::is_set(class_and.yfilter)
	|| ydk::is_set(egress.yfilter)
	|| ydk::is_set(ingress.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::Media::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::TrafficMonitor::Media::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (class_and.is_set || is_set(class_and.yfilter)) leaf_name_data.push_back(class_and.get_name_leafdata());
    if (egress.is_set || is_set(egress.yfilter)) leaf_name_data.push_back(egress.get_name_leafdata());
    if (ingress.is_set || is_set(ingress.yfilter)) leaf_name_data.push_back(ingress.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::TrafficMonitor::Media::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::TrafficMonitor::Media::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::Media::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-and")
    {
        class_and = value;
        class_and.value_namespace = name_space;
        class_and.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress")
    {
        egress = value;
        egress.value_namespace = name_space;
        egress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress")
    {
        ingress = value;
        ingress.value_namespace = name_space;
        ingress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::TrafficMonitor::Media::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
    if(value_path == "class-and")
    {
        class_and.yfilter = yfilter;
    }
    if(value_path == "egress")
    {
        egress.yfilter = yfilter;
    }
    if(value_path == "ingress")
    {
        ingress.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::TrafficMonitor::Media::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-replace" || name == "interval-timeout" || name == "class-and" || name == "egress" || name == "ingress" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::TrafficMonitor::Url::Url()
    :
    cache_size{YType::uint32, "cache-size"},
    class_and{YType::str, "class-and"},
    class_replace{YType::str, "class-replace"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"},
    sampling_rate{YType::uint32, "sampling-rate"}
{

    yang_name = "url"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Performance::Monitor::Context::TrafficMonitor::Url::~Url()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::Url::has_data() const
{
    if (is_presence_container) return true;
    return cache_size.is_set
	|| class_and.is_set
	|| class_replace.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| sampling_rate.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_and.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(sampling_rate.yfilter);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::TrafficMonitor::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_and.is_set || is_set(class_and.yfilter)) leaf_name_data.push_back(class_and.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (sampling_rate.is_set || is_set(sampling_rate.yfilter)) leaf_name_data.push_back(sampling_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::TrafficMonitor::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::TrafficMonitor::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-and")
    {
        class_and = value;
        class_and.value_namespace = name_space;
        class_and.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampling-rate")
    {
        sampling_rate = value;
        sampling_rate.value_namespace = name_space;
        sampling_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::TrafficMonitor::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-and")
    {
        class_and.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "sampling-rate")
    {
        sampling_rate.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::TrafficMonitor::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-and" || name == "class-replace" || name == "ipv4" || name == "ipv6" || name == "sampling-rate")
        return true;
    return false;
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::ApplicationClientServerStats()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    cache_type{YType::enumeration, "cache-type"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "application-client-server-stats"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::~ApplicationClientServerStats()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::has_data() const
{
    if (is_presence_container) return true;
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| cache_type.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter)
	|| ydk::is_set(cache_type.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-client-server-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (cache_type.is_set || is_set(cache_type.yfilter)) leaf_name_data.push_back(cache_type.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-type")
    {
        cache_type = value;
        cache_type.value_namespace = name_space;
        cache_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
    if(value_path == "cache-type")
    {
        cache_type.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-replace" || name == "interval-timeout" || name == "cache-type" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::ApplicationStats()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"}
{

    yang_name = "application-stats"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::~ApplicationStats()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::has_data() const
{
    if (is_presence_container) return true;
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-replace" || name == "interval-timeout")
        return true;
    return false;
}

Native::Performance::Monitor::ObservationPoint::ObservationPoint()
    :
    encrypted_text{YType::empty, "encrypted-text"}
{

    yang_name = "observation-point"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Performance::Monitor::ObservationPoint::~ObservationPoint()
{
}

bool Native::Performance::Monitor::ObservationPoint::has_data() const
{
    if (is_presence_container) return true;
    return encrypted_text.is_set;
}

bool Native::Performance::Monitor::ObservationPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypted_text.yfilter);
}

std::string Native::Performance::Monitor::ObservationPoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/performance/Cisco-IOS-XE-ezpm:monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Performance::Monitor::ObservationPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "observation-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::ObservationPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypted_text.is_set || is_set(encrypted_text.yfilter)) leaf_name_data.push_back(encrypted_text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Performance::Monitor::ObservationPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Performance::Monitor::ObservationPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Performance::Monitor::ObservationPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypted-text")
    {
        encrypted_text = value;
        encrypted_text.value_namespace = name_space;
        encrypted_text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::ObservationPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypted-text")
    {
        encrypted_text.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::ObservationPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypted-text")
        return true;
    return false;
}

Native::Otv::Otv()
    :
    site_identifier{YType::str, "Cisco-IOS-XE-otv:site-identifier"}
        ,
    fragmentation(std::make_shared<Native::Otv::Fragmentation>())
    , isis(std::make_shared<Native::Otv::Isis>())
    , site(this, {"bridge_domain"})
{
    fragmentation->parent = this;
    isis->parent = this;

    yang_name = "otv"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Otv::~Otv()
{
}

bool Native::Otv::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<site.len(); index++)
    {
        if(site[index]->has_data())
            return true;
    }
    return site_identifier.is_set
	|| (fragmentation !=  nullptr && fragmentation->has_data())
	|| (isis !=  nullptr && isis->has_data());
}

bool Native::Otv::has_operation() const
{
    for (std::size_t index=0; index<site.len(); index++)
    {
        if(site[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(site_identifier.yfilter)
	|| (fragmentation !=  nullptr && fragmentation->has_operation())
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Otv::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_identifier.is_set || is_set(site_identifier.yfilter)) leaf_name_data.push_back(site_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-otv:fragmentation")
    {
        if(fragmentation == nullptr)
        {
            fragmentation = std::make_shared<Native::Otv::Fragmentation>();
        }
        return fragmentation;
    }

    if(child_yang_name == "Cisco-IOS-XE-otv:isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Otv::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "Cisco-IOS-XE-otv:site")
    {
        auto ent_ = std::make_shared<Native::Otv::Site>();
        ent_->parent = this;
        site.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fragmentation != nullptr)
    {
        _children["Cisco-IOS-XE-otv:fragmentation"] = fragmentation;
    }

    if(isis != nullptr)
    {
        _children["Cisco-IOS-XE-otv:isis"] = isis;
    }

    count_ = 0;
    for (auto ent_ : site.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Otv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-otv:site-identifier")
    {
        site_identifier = value;
        site_identifier.value_namespace = name_space;
        site_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-identifier")
    {
        site_identifier.yfilter = yfilter;
    }
}

bool Native::Otv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fragmentation" || name == "isis" || name == "site" || name == "site-identifier")
        return true;
    return false;
}

Native::Otv::Fragmentation::Fragmentation()
    :
    join_interface(std::make_shared<Native::Otv::Fragmentation::JoinInterface>())
{
    join_interface->parent = this;

    yang_name = "fragmentation"; yang_parent_name = "otv"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Otv::Fragmentation::~Fragmentation()
{
}

bool Native::Otv::Fragmentation::has_data() const
{
    if (is_presence_container) return true;
    return (join_interface !=  nullptr && join_interface->has_data());
}

bool Native::Otv::Fragmentation::has_operation() const
{
    return is_set(yfilter)
	|| (join_interface !=  nullptr && join_interface->has_operation());
}

std::string Native::Otv::Fragmentation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Fragmentation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:fragmentation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Fragmentation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Fragmentation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join-interface")
    {
        if(join_interface == nullptr)
        {
            join_interface = std::make_shared<Native::Otv::Fragmentation::JoinInterface>();
        }
        return join_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Fragmentation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(join_interface != nullptr)
    {
        _children["join-interface"] = join_interface;
    }

    return _children;
}

void Native::Otv::Fragmentation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Fragmentation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Fragmentation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "join-interface")
        return true;
    return false;
}

Native::Otv::Fragmentation::JoinInterface::JoinInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::Otv::Fragmentation::JoinInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Otv::Fragmentation::JoinInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "join-interface"; yang_parent_name = "fragmentation"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Otv::Fragmentation::JoinInterface::~JoinInterface()
{
}

bool Native::Otv::Fragmentation::JoinInterface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Otv::Fragmentation::JoinInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Otv::Fragmentation::JoinInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:fragmentation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Fragmentation::JoinInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Fragmentation::JoinInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Fragmentation::JoinInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Otv::Fragmentation::JoinInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Otv::Fragmentation::JoinInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Fragmentation::JoinInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Otv::Fragmentation::JoinInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Fragmentation::JoinInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Otv::Fragmentation::JoinInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "join-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:fragmentation/join-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "join-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:fragmentation/join-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "join-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:fragmentation/join-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "join-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:fragmentation/join-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Otv::Isis::Isis()
    :
    overlay(this, {"number"})
    , site(std::make_shared<Native::Otv::Isis::Site>())
{
    site->parent = this;

    yang_name = "isis"; yang_parent_name = "otv"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Otv::Isis::~Isis()
{
}

bool Native::Otv::Isis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<overlay.len(); index++)
    {
        if(overlay[index]->has_data())
            return true;
    }
    return (site !=  nullptr && site->has_data());
}

bool Native::Otv::Isis::has_operation() const
{
    for (std::size_t index=0; index<overlay.len(); index++)
    {
        if(overlay[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (site !=  nullptr && site->has_operation());
}

std::string Native::Otv::Isis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Overlay")
    {
        auto ent_ = std::make_shared<Native::Otv::Isis::Overlay>();
        ent_->parent = this;
        overlay.append(ent_);
        return ent_;
    }

    if(child_yang_name == "site")
    {
        if(site == nullptr)
        {
            site = std::make_shared<Native::Otv::Isis::Site>();
        }
        return site;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : overlay.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(site != nullptr)
    {
        _children["site"] = site;
    }

    return _children;
}

void Native::Otv::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Overlay" || name == "site")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Overlay()
    :
    number{YType::uint16, "number"},
    delayed_deletion_interval{YType::uint32, "delayed-deletion-interval"},
    lsp_mtu{YType::uint32, "lsp-mtu"},
    lsp_refresh_interval{YType::uint32, "lsp-refresh-interval"},
    max_lsp_lifetime{YType::uint32, "max-lsp-lifetime"}
        ,
    authentication(std::make_shared<Native::Otv::Isis::Overlay::Authentication>())
    , default_(std::make_shared<Native::Otv::Isis::Overlay::Default>())
    , hostname(std::make_shared<Native::Otv::Isis::Overlay::Hostname>())
    , log_adjacency_changes(nullptr) // presence node
    , lsp_gen_interval(std::make_shared<Native::Otv::Isis::Overlay::LspGenInterval>())
    , nsf(std::make_shared<Native::Otv::Isis::Overlay::Nsf>())
    , prc_interval(std::make_shared<Native::Otv::Isis::Overlay::PrcInterval>())
    , skeptical(std::make_shared<Native::Otv::Isis::Overlay::Skeptical>())
    , spf_interval(std::make_shared<Native::Otv::Isis::Overlay::SpfInterval>())
{
    authentication->parent = this;
    default_->parent = this;
    hostname->parent = this;
    lsp_gen_interval->parent = this;
    nsf->parent = this;
    prc_interval->parent = this;
    skeptical->parent = this;
    spf_interval->parent = this;

    yang_name = "Overlay"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Otv::Isis::Overlay::~Overlay()
{
}

bool Native::Otv::Isis::Overlay::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| delayed_deletion_interval.is_set
	|| lsp_mtu.is_set
	|| lsp_refresh_interval.is_set
	|| max_lsp_lifetime.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (hostname !=  nullptr && hostname->has_data())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_data())
	|| (lsp_gen_interval !=  nullptr && lsp_gen_interval->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (prc_interval !=  nullptr && prc_interval->has_data())
	|| (skeptical !=  nullptr && skeptical->has_data())
	|| (spf_interval !=  nullptr && spf_interval->has_data());
}

bool Native::Otv::Isis::Overlay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(delayed_deletion_interval.yfilter)
	|| ydk::is_set(lsp_mtu.yfilter)
	|| ydk::is_set(lsp_refresh_interval.yfilter)
	|| ydk::is_set(max_lsp_lifetime.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_operation())
	|| (lsp_gen_interval !=  nullptr && lsp_gen_interval->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (prc_interval !=  nullptr && prc_interval->has_operation())
	|| (skeptical !=  nullptr && skeptical->has_operation())
	|| (spf_interval !=  nullptr && spf_interval->has_operation());
}

std::string Native::Otv::Isis::Overlay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Isis::Overlay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Overlay";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (delayed_deletion_interval.is_set || is_set(delayed_deletion_interval.yfilter)) leaf_name_data.push_back(delayed_deletion_interval.get_name_leafdata());
    if (lsp_mtu.is_set || is_set(lsp_mtu.yfilter)) leaf_name_data.push_back(lsp_mtu.get_name_leafdata());
    if (lsp_refresh_interval.is_set || is_set(lsp_refresh_interval.yfilter)) leaf_name_data.push_back(lsp_refresh_interval.get_name_leafdata());
    if (max_lsp_lifetime.is_set || is_set(max_lsp_lifetime.yfilter)) leaf_name_data.push_back(max_lsp_lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Overlay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Otv::Isis::Overlay::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Otv::Isis::Overlay::Default>();
        }
        return default_;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Otv::Isis::Overlay::Hostname>();
        }
        return hostname;
    }

    if(child_yang_name == "log-adjacency-changes")
    {
        if(log_adjacency_changes == nullptr)
        {
            log_adjacency_changes = std::make_shared<Native::Otv::Isis::Overlay::LogAdjacencyChanges>();
        }
        return log_adjacency_changes;
    }

    if(child_yang_name == "lsp-gen-interval")
    {
        if(lsp_gen_interval == nullptr)
        {
            lsp_gen_interval = std::make_shared<Native::Otv::Isis::Overlay::LspGenInterval>();
        }
        return lsp_gen_interval;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Native::Otv::Isis::Overlay::Nsf>();
        }
        return nsf;
    }

    if(child_yang_name == "prc-interval")
    {
        if(prc_interval == nullptr)
        {
            prc_interval = std::make_shared<Native::Otv::Isis::Overlay::PrcInterval>();
        }
        return prc_interval;
    }

    if(child_yang_name == "skeptical")
    {
        if(skeptical == nullptr)
        {
            skeptical = std::make_shared<Native::Otv::Isis::Overlay::Skeptical>();
        }
        return skeptical;
    }

    if(child_yang_name == "spf-interval")
    {
        if(spf_interval == nullptr)
        {
            spf_interval = std::make_shared<Native::Otv::Isis::Overlay::SpfInterval>();
        }
        return spf_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Overlay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(hostname != nullptr)
    {
        _children["hostname"] = hostname;
    }

    if(log_adjacency_changes != nullptr)
    {
        _children["log-adjacency-changes"] = log_adjacency_changes;
    }

    if(lsp_gen_interval != nullptr)
    {
        _children["lsp-gen-interval"] = lsp_gen_interval;
    }

    if(nsf != nullptr)
    {
        _children["nsf"] = nsf;
    }

    if(prc_interval != nullptr)
    {
        _children["prc-interval"] = prc_interval;
    }

    if(skeptical != nullptr)
    {
        _children["skeptical"] = skeptical;
    }

    if(spf_interval != nullptr)
    {
        _children["spf-interval"] = spf_interval;
    }

    return _children;
}

void Native::Otv::Isis::Overlay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delayed-deletion-interval")
    {
        delayed_deletion_interval = value;
        delayed_deletion_interval.value_namespace = name_space;
        delayed_deletion_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mtu")
    {
        lsp_mtu = value;
        lsp_mtu.value_namespace = name_space;
        lsp_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval = value;
        lsp_refresh_interval.value_namespace = name_space;
        lsp_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsp-lifetime")
    {
        max_lsp_lifetime = value;
        max_lsp_lifetime.value_namespace = name_space;
        max_lsp_lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "delayed-deletion-interval")
    {
        delayed_deletion_interval.yfilter = yfilter;
    }
    if(value_path == "lsp-mtu")
    {
        lsp_mtu.yfilter = yfilter;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "max-lsp-lifetime")
    {
        max_lsp_lifetime.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "default" || name == "hostname" || name == "log-adjacency-changes" || name == "lsp-gen-interval" || name == "nsf" || name == "prc-interval" || name == "skeptical" || name == "spf-interval" || name == "number" || name == "delayed-deletion-interval" || name == "lsp-mtu" || name == "lsp-refresh-interval" || name == "max-lsp-lifetime")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    mode{YType::enumeration, "mode"},
    send_only{YType::empty, "send-only"}
{

    yang_name = "authentication"; yang_parent_name = "Overlay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Isis::Overlay::Authentication::~Authentication()
{
}

bool Native::Otv::Isis::Overlay::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return key_chain.is_set
	|| mode.is_set
	|| send_only.is_set;
}

bool Native::Otv::Isis::Overlay::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(send_only.yfilter);
}

std::string Native::Otv::Isis::Overlay::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (send_only.is_set || is_set(send_only.yfilter)) leaf_name_data.push_back(send_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Overlay::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Overlay::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Isis::Overlay::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-only")
    {
        send_only = value;
        send_only.value_namespace = name_space;
        send_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "send-only")
    {
        send_only.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode" || name == "send-only")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Default::Default()
    :
    delayed_deletion_interval{YType::empty, "delayed-deletion-interval"},
    log_adjacency_changes{YType::empty, "log-adjacency-changes"},
    lsp_gen_interval{YType::empty, "lsp-gen-interval"},
    lsp_mtu{YType::empty, "lsp-mtu"},
    lsp_refresh_interval{YType::empty, "lsp-refresh-interval"},
    max_lsp_lifetime{YType::empty, "max-lsp-lifetime"},
    prc_interval{YType::empty, "prc-interval"},
    spf_interval{YType::empty, "spf-interval"}
        ,
    authentication(std::make_shared<Native::Otv::Isis::Overlay::Default::Authentication>())
    , hostname(std::make_shared<Native::Otv::Isis::Overlay::Default::Hostname>())
    , nsf(std::make_shared<Native::Otv::Isis::Overlay::Default::Nsf>())
    , skeptical(std::make_shared<Native::Otv::Isis::Overlay::Default::Skeptical>())
{
    authentication->parent = this;
    hostname->parent = this;
    nsf->parent = this;
    skeptical->parent = this;

    yang_name = "default"; yang_parent_name = "Overlay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Isis::Overlay::Default::~Default()
{
}

bool Native::Otv::Isis::Overlay::Default::has_data() const
{
    if (is_presence_container) return true;
    return delayed_deletion_interval.is_set
	|| log_adjacency_changes.is_set
	|| lsp_gen_interval.is_set
	|| lsp_mtu.is_set
	|| lsp_refresh_interval.is_set
	|| max_lsp_lifetime.is_set
	|| prc_interval.is_set
	|| spf_interval.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (hostname !=  nullptr && hostname->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (skeptical !=  nullptr && skeptical->has_data());
}

bool Native::Otv::Isis::Overlay::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delayed_deletion_interval.yfilter)
	|| ydk::is_set(log_adjacency_changes.yfilter)
	|| ydk::is_set(lsp_gen_interval.yfilter)
	|| ydk::is_set(lsp_mtu.yfilter)
	|| ydk::is_set(lsp_refresh_interval.yfilter)
	|| ydk::is_set(max_lsp_lifetime.yfilter)
	|| ydk::is_set(prc_interval.yfilter)
	|| ydk::is_set(spf_interval.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (skeptical !=  nullptr && skeptical->has_operation());
}

std::string Native::Otv::Isis::Overlay::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delayed_deletion_interval.is_set || is_set(delayed_deletion_interval.yfilter)) leaf_name_data.push_back(delayed_deletion_interval.get_name_leafdata());
    if (log_adjacency_changes.is_set || is_set(log_adjacency_changes.yfilter)) leaf_name_data.push_back(log_adjacency_changes.get_name_leafdata());
    if (lsp_gen_interval.is_set || is_set(lsp_gen_interval.yfilter)) leaf_name_data.push_back(lsp_gen_interval.get_name_leafdata());
    if (lsp_mtu.is_set || is_set(lsp_mtu.yfilter)) leaf_name_data.push_back(lsp_mtu.get_name_leafdata());
    if (lsp_refresh_interval.is_set || is_set(lsp_refresh_interval.yfilter)) leaf_name_data.push_back(lsp_refresh_interval.get_name_leafdata());
    if (max_lsp_lifetime.is_set || is_set(max_lsp_lifetime.yfilter)) leaf_name_data.push_back(max_lsp_lifetime.get_name_leafdata());
    if (prc_interval.is_set || is_set(prc_interval.yfilter)) leaf_name_data.push_back(prc_interval.get_name_leafdata());
    if (spf_interval.is_set || is_set(spf_interval.yfilter)) leaf_name_data.push_back(spf_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Overlay::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Otv::Isis::Overlay::Default::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Otv::Isis::Overlay::Default::Hostname>();
        }
        return hostname;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Native::Otv::Isis::Overlay::Default::Nsf>();
        }
        return nsf;
    }

    if(child_yang_name == "skeptical")
    {
        if(skeptical == nullptr)
        {
            skeptical = std::make_shared<Native::Otv::Isis::Overlay::Default::Skeptical>();
        }
        return skeptical;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Overlay::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(hostname != nullptr)
    {
        _children["hostname"] = hostname;
    }

    if(nsf != nullptr)
    {
        _children["nsf"] = nsf;
    }

    if(skeptical != nullptr)
    {
        _children["skeptical"] = skeptical;
    }

    return _children;
}

void Native::Otv::Isis::Overlay::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delayed-deletion-interval")
    {
        delayed_deletion_interval = value;
        delayed_deletion_interval.value_namespace = name_space;
        delayed_deletion_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes = value;
        log_adjacency_changes.value_namespace = name_space;
        log_adjacency_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-gen-interval")
    {
        lsp_gen_interval = value;
        lsp_gen_interval.value_namespace = name_space;
        lsp_gen_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mtu")
    {
        lsp_mtu = value;
        lsp_mtu.value_namespace = name_space;
        lsp_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval = value;
        lsp_refresh_interval.value_namespace = name_space;
        lsp_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsp-lifetime")
    {
        max_lsp_lifetime = value;
        max_lsp_lifetime.value_namespace = name_space;
        max_lsp_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prc-interval")
    {
        prc_interval = value;
        prc_interval.value_namespace = name_space;
        prc_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-interval")
    {
        spf_interval = value;
        spf_interval.value_namespace = name_space;
        spf_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delayed-deletion-interval")
    {
        delayed_deletion_interval.yfilter = yfilter;
    }
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes.yfilter = yfilter;
    }
    if(value_path == "lsp-gen-interval")
    {
        lsp_gen_interval.yfilter = yfilter;
    }
    if(value_path == "lsp-mtu")
    {
        lsp_mtu.yfilter = yfilter;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "max-lsp-lifetime")
    {
        max_lsp_lifetime.yfilter = yfilter;
    }
    if(value_path == "prc-interval")
    {
        prc_interval.yfilter = yfilter;
    }
    if(value_path == "spf-interval")
    {
        spf_interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "hostname" || name == "nsf" || name == "skeptical" || name == "delayed-deletion-interval" || name == "log-adjacency-changes" || name == "lsp-gen-interval" || name == "lsp-mtu" || name == "lsp-refresh-interval" || name == "max-lsp-lifetime" || name == "prc-interval" || name == "spf-interval")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Default::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    mode{YType::enumeration, "mode"},
    send_only{YType::empty, "send-only"}
{

    yang_name = "authentication"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Isis::Overlay::Default::Authentication::~Authentication()
{
}

bool Native::Otv::Isis::Overlay::Default::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return key_chain.is_set
	|| mode.is_set
	|| send_only.is_set;
}

bool Native::Otv::Isis::Overlay::Default::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(send_only.yfilter);
}

std::string Native::Otv::Isis::Overlay::Default::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::Default::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (send_only.is_set || is_set(send_only.yfilter)) leaf_name_data.push_back(send_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Overlay::Default::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Overlay::Default::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Isis::Overlay::Default::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-only")
    {
        send_only = value;
        send_only.value_namespace = name_space;
        send_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Default::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "send-only")
    {
        send_only.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Default::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode" || name == "send-only")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Default::Hostname::Hostname()
    :
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "hostname"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Isis::Overlay::Default::Hostname::~Hostname()
{
}

bool Native::Otv::Isis::Overlay::Default::Hostname::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set;
}

bool Native::Otv::Isis::Overlay::Default::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Otv::Isis::Overlay::Default::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::Default::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Overlay::Default::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Overlay::Default::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Isis::Overlay::Default::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Default::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Default::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Default::Nsf::Nsf()
    :
    cisco{YType::empty, "cisco"},
    interval{YType::empty, "interval"}
{

    yang_name = "nsf"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Isis::Overlay::Default::Nsf::~Nsf()
{
}

bool Native::Otv::Isis::Overlay::Default::Nsf::has_data() const
{
    if (is_presence_container) return true;
    return cisco.is_set
	|| interval.is_set;
}

bool Native::Otv::Isis::Overlay::Default::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Otv::Isis::Overlay::Default::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::Default::Nsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.yfilter)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Overlay::Default::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Overlay::Default::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Isis::Overlay::Default::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco")
    {
        cisco = value;
        cisco.value_namespace = name_space;
        cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Default::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco")
    {
        cisco.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Default::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "interval")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Default::Skeptical::Skeptical()
    :
    interval{YType::empty, "interval"}
{

    yang_name = "skeptical"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Isis::Overlay::Default::Skeptical::~Skeptical()
{
}

bool Native::Otv::Isis::Overlay::Default::Skeptical::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Otv::Isis::Overlay::Default::Skeptical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Otv::Isis::Overlay::Default::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::Default::Skeptical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Overlay::Default::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Overlay::Default::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Isis::Overlay::Default::Skeptical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Default::Skeptical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Default::Skeptical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Hostname::Hostname()
    :
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "hostname"; yang_parent_name = "Overlay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Isis::Overlay::Hostname::~Hostname()
{
}

bool Native::Otv::Isis::Overlay::Hostname::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set;
}

bool Native::Otv::Isis::Overlay::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Otv::Isis::Overlay::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Overlay::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Overlay::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Isis::Overlay::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::LogAdjacencyChanges::LogAdjacencyChanges()
    :
    all{YType::empty, "all"}
{

    yang_name = "log-adjacency-changes"; yang_parent_name = "Overlay"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Otv::Isis::Overlay::LogAdjacencyChanges::~LogAdjacencyChanges()
{
}

bool Native::Otv::Isis::Overlay::LogAdjacencyChanges::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Otv::Isis::Overlay::LogAdjacencyChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Otv::Isis::Overlay::LogAdjacencyChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-adjacency-changes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::LogAdjacencyChanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Overlay::LogAdjacencyChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Overlay::LogAdjacencyChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Isis::Overlay::LogAdjacencyChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::LogAdjacencyChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::LogAdjacencyChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::LspGenInterval::LspGenInterval()
    :
    seconds{YType::uint8, "seconds"},
    milliseconds{YType::uint32, "milliseconds"},
    wait{YType::uint32, "wait"}
{

    yang_name = "lsp-gen-interval"; yang_parent_name = "Overlay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Isis::Overlay::LspGenInterval::~LspGenInterval()
{
}

bool Native::Otv::Isis::Overlay::LspGenInterval::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| milliseconds.is_set
	|| wait.is_set;
}

bool Native::Otv::Isis::Overlay::LspGenInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(milliseconds.yfilter)
	|| ydk::is_set(wait.yfilter);
}

std::string Native::Otv::Isis::Overlay::LspGenInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-gen-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::LspGenInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (milliseconds.is_set || is_set(milliseconds.yfilter)) leaf_name_data.push_back(milliseconds.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Overlay::LspGenInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Overlay::LspGenInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Isis::Overlay::LspGenInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milliseconds")
    {
        milliseconds = value;
        milliseconds.value_namespace = name_space;
        milliseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::LspGenInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "milliseconds")
    {
        milliseconds.yfilter = yfilter;
    }
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::LspGenInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "milliseconds" || name == "wait")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Nsf::Nsf()
    :
    cisco{YType::empty, "cisco"},
    interval{YType::uint32, "interval"}
{

    yang_name = "nsf"; yang_parent_name = "Overlay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Isis::Overlay::Nsf::~Nsf()
{
}

bool Native::Otv::Isis::Overlay::Nsf::has_data() const
{
    if (is_presence_container) return true;
    return cisco.is_set
	|| interval.is_set;
}

bool Native::Otv::Isis::Overlay::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Otv::Isis::Overlay::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::Nsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.yfilter)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Overlay::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Overlay::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Isis::Overlay::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco")
    {
        cisco = value;
        cisco.value_namespace = name_space;
        cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco")
    {
        cisco.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "interval")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::PrcInterval::PrcInterval()
    :
    seconds{YType::uint8, "seconds"},
    milliseconds{YType::uint32, "milliseconds"},
    wait{YType::uint32, "wait"}
{

    yang_name = "prc-interval"; yang_parent_name = "Overlay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Isis::Overlay::PrcInterval::~PrcInterval()
{
}

bool Native::Otv::Isis::Overlay::PrcInterval::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| milliseconds.is_set
	|| wait.is_set;
}

bool Native::Otv::Isis::Overlay::PrcInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(milliseconds.yfilter)
	|| ydk::is_set(wait.yfilter);
}

std::string Native::Otv::Isis::Overlay::PrcInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::PrcInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (milliseconds.is_set || is_set(milliseconds.yfilter)) leaf_name_data.push_back(milliseconds.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Overlay::PrcInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Overlay::PrcInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Isis::Overlay::PrcInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milliseconds")
    {
        milliseconds = value;
        milliseconds.value_namespace = name_space;
        milliseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::PrcInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "milliseconds")
    {
        milliseconds.yfilter = yfilter;
    }
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::PrcInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "milliseconds" || name == "wait")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Skeptical::Skeptical()
    :
    interval{YType::uint32, "interval"}
{

    yang_name = "skeptical"; yang_parent_name = "Overlay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Isis::Overlay::Skeptical::~Skeptical()
{
}

bool Native::Otv::Isis::Overlay::Skeptical::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Otv::Isis::Overlay::Skeptical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Otv::Isis::Overlay::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::Skeptical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Overlay::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Overlay::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Isis::Overlay::Skeptical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Skeptical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Skeptical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::SpfInterval::SpfInterval()
    :
    seconds{YType::uint8, "seconds"},
    milliseconds{YType::uint32, "milliseconds"},
    wait{YType::uint32, "wait"}
{

    yang_name = "spf-interval"; yang_parent_name = "Overlay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Isis::Overlay::SpfInterval::~SpfInterval()
{
}

bool Native::Otv::Isis::Overlay::SpfInterval::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| milliseconds.is_set
	|| wait.is_set;
}

bool Native::Otv::Isis::Overlay::SpfInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(milliseconds.yfilter)
	|| ydk::is_set(wait.yfilter);
}

std::string Native::Otv::Isis::Overlay::SpfInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::SpfInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (milliseconds.is_set || is_set(milliseconds.yfilter)) leaf_name_data.push_back(milliseconds.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Overlay::SpfInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Overlay::SpfInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Isis::Overlay::SpfInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milliseconds")
    {
        milliseconds = value;
        milliseconds.value_namespace = name_space;
        milliseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::SpfInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "milliseconds")
    {
        milliseconds.yfilter = yfilter;
    }
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::SpfInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "milliseconds" || name == "wait")
        return true;
    return false;
}

Native::Otv::Isis::Site::Site()
    :
    net{YType::str, "net"}
        ,
    default_(std::make_shared<Native::Otv::Isis::Site::Default>())
    , log_adjacency_changes(nullptr) // presence node
    , skeptical(std::make_shared<Native::Otv::Isis::Site::Skeptical>())
{
    default_->parent = this;
    skeptical->parent = this;

    yang_name = "site"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Otv::Isis::Site::~Site()
{
}

bool Native::Otv::Isis::Site::has_data() const
{
    if (is_presence_container) return true;
    return net.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_data())
	|| (skeptical !=  nullptr && skeptical->has_data());
}

bool Native::Otv::Isis::Site::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(net.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_operation())
	|| (skeptical !=  nullptr && skeptical->has_operation());
}

std::string Native::Otv::Isis::Site::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Isis::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Site::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (net.is_set || is_set(net.yfilter)) leaf_name_data.push_back(net.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Otv::Isis::Site::Default>();
        }
        return default_;
    }

    if(child_yang_name == "log-adjacency-changes")
    {
        if(log_adjacency_changes == nullptr)
        {
            log_adjacency_changes = std::make_shared<Native::Otv::Isis::Site::LogAdjacencyChanges>();
        }
        return log_adjacency_changes;
    }

    if(child_yang_name == "skeptical")
    {
        if(skeptical == nullptr)
        {
            skeptical = std::make_shared<Native::Otv::Isis::Site::Skeptical>();
        }
        return skeptical;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Site::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(log_adjacency_changes != nullptr)
    {
        _children["log-adjacency-changes"] = log_adjacency_changes;
    }

    if(skeptical != nullptr)
    {
        _children["skeptical"] = skeptical;
    }

    return _children;
}

void Native::Otv::Isis::Site::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "net")
    {
        net = value;
        net.value_namespace = name_space;
        net.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Site::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "net")
    {
        net.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Site::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "log-adjacency-changes" || name == "skeptical" || name == "net")
        return true;
    return false;
}

Native::Otv::Isis::Site::Default::Default()
    :
    log_adjacency_changes{YType::empty, "log-adjacency-changes"},
    net{YType::empty, "net"}
        ,
    skeptical(std::make_shared<Native::Otv::Isis::Site::Default::Skeptical>())
{
    skeptical->parent = this;

    yang_name = "default"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Otv::Isis::Site::Default::~Default()
{
}

bool Native::Otv::Isis::Site::Default::has_data() const
{
    if (is_presence_container) return true;
    return log_adjacency_changes.is_set
	|| net.is_set
	|| (skeptical !=  nullptr && skeptical->has_data());
}

bool Native::Otv::Isis::Site::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_adjacency_changes.yfilter)
	|| ydk::is_set(net.yfilter)
	|| (skeptical !=  nullptr && skeptical->has_operation());
}

std::string Native::Otv::Isis::Site::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/site/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Isis::Site::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Site::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_adjacency_changes.is_set || is_set(log_adjacency_changes.yfilter)) leaf_name_data.push_back(log_adjacency_changes.get_name_leafdata());
    if (net.is_set || is_set(net.yfilter)) leaf_name_data.push_back(net.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Site::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "skeptical")
    {
        if(skeptical == nullptr)
        {
            skeptical = std::make_shared<Native::Otv::Isis::Site::Default::Skeptical>();
        }
        return skeptical;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Site::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(skeptical != nullptr)
    {
        _children["skeptical"] = skeptical;
    }

    return _children;
}

void Native::Otv::Isis::Site::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes = value;
        log_adjacency_changes.value_namespace = name_space;
        log_adjacency_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net")
    {
        net = value;
        net.value_namespace = name_space;
        net.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Site::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes.yfilter = yfilter;
    }
    if(value_path == "net")
    {
        net.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Site::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "skeptical" || name == "log-adjacency-changes" || name == "net")
        return true;
    return false;
}

Native::Otv::Isis::Site::Default::Skeptical::Skeptical()
    :
    interval{YType::empty, "interval"}
{

    yang_name = "skeptical"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Otv::Isis::Site::Default::Skeptical::~Skeptical()
{
}

bool Native::Otv::Isis::Site::Default::Skeptical::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Otv::Isis::Site::Default::Skeptical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Otv::Isis::Site::Default::Skeptical::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/site/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Isis::Site::Default::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Site::Default::Skeptical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Site::Default::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Site::Default::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Isis::Site::Default::Skeptical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Site::Default::Skeptical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Site::Default::Skeptical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Otv::Isis::Site::LogAdjacencyChanges::LogAdjacencyChanges()
    :
    all{YType::empty, "all"}
{

    yang_name = "log-adjacency-changes"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Otv::Isis::Site::LogAdjacencyChanges::~LogAdjacencyChanges()
{
}

bool Native::Otv::Isis::Site::LogAdjacencyChanges::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Otv::Isis::Site::LogAdjacencyChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Otv::Isis::Site::LogAdjacencyChanges::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/site/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Isis::Site::LogAdjacencyChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-adjacency-changes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Site::LogAdjacencyChanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Site::LogAdjacencyChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Site::LogAdjacencyChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Isis::Site::LogAdjacencyChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Site::LogAdjacencyChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Site::LogAdjacencyChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Otv::Isis::Site::Skeptical::Skeptical()
    :
    interval{YType::uint32, "interval"}
{

    yang_name = "skeptical"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Otv::Isis::Site::Skeptical::~Skeptical()
{
}

bool Native::Otv::Isis::Site::Skeptical::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Otv::Isis::Site::Skeptical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Otv::Isis::Site::Skeptical::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/site/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Isis::Site::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Site::Skeptical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Isis::Site::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Isis::Site::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Isis::Site::Skeptical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Site::Skeptical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Site::Skeptical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Otv::Site::Site()
    :
    bridge_domain{YType::uint16, "bridge-domain"}
        ,
    default_(std::make_shared<Native::Otv::Site::Default>())
    , otv(std::make_shared<Native::Otv::Site::Otv_>())
{
    default_->parent = this;
    otv->parent = this;

    yang_name = "site"; yang_parent_name = "otv"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Otv::Site::~Site()
{
}

bool Native::Otv::Site::has_data() const
{
    if (is_presence_container) return true;
    return bridge_domain.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (otv !=  nullptr && otv->has_data());
}

bool Native::Otv::Site::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_domain.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (otv !=  nullptr && otv->has_operation());
}

std::string Native::Otv::Site::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:site";
    ADD_KEY_TOKEN(bridge_domain, "bridge-domain");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain.is_set || is_set(bridge_domain.yfilter)) leaf_name_data.push_back(bridge_domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Otv::Site::Default>();
        }
        return default_;
    }

    if(child_yang_name == "otv")
    {
        if(otv == nullptr)
        {
            otv = std::make_shared<Native::Otv::Site::Otv_>();
        }
        return otv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Site::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(otv != nullptr)
    {
        _children["otv"] = otv;
    }

    return _children;
}

void Native::Otv::Site::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-domain")
    {
        bridge_domain = value;
        bridge_domain.value_namespace = name_space;
        bridge_domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-domain")
    {
        bridge_domain.yfilter = yfilter;
    }
}

bool Native::Otv::Site::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "otv" || name == "bridge-domain")
        return true;
    return false;
}

Native::Otv::Site::Default::Default()
    :
    otv(std::make_shared<Native::Otv::Site::Default::Otv_>())
{
    otv->parent = this;

    yang_name = "default"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Site::Default::~Default()
{
}

bool Native::Otv::Site::Default::has_data() const
{
    if (is_presence_container) return true;
    return (otv !=  nullptr && otv->has_data());
}

bool Native::Otv::Site::Default::has_operation() const
{
    return is_set(yfilter)
	|| (otv !=  nullptr && otv->has_operation());
}

std::string Native::Otv::Site::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Site::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otv")
    {
        if(otv == nullptr)
        {
            otv = std::make_shared<Native::Otv::Site::Default::Otv_>();
        }
        return otv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Site::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(otv != nullptr)
    {
        _children["otv"] = otv;
    }

    return _children;
}

void Native::Otv::Site::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Site::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Site::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otv")
        return true;
    return false;
}

Native::Otv::Site::Default::Otv_::Otv_()
    :
    isis(std::make_shared<Native::Otv::Site::Default::Otv_::Isis>())
{
    isis->parent = this;

    yang_name = "otv"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Site::Default::Otv_::~Otv_()
{
}

bool Native::Otv::Site::Default::Otv_::has_data() const
{
    if (is_presence_container) return true;
    return (isis !=  nullptr && isis->has_data());
}

bool Native::Otv::Site::Default::Otv_::has_operation() const
{
    return is_set(yfilter)
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Otv::Site::Default::Otv_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Default::Otv_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Site::Default::Otv_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Otv::Site::Default::Otv_::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Site::Default::Otv_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    return _children;
}

void Native::Otv::Site::Default::Otv_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Site::Default::Otv_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Site::Default::Otv_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis")
        return true;
    return false;
}

Native::Otv::Site::Default::Otv_::Isis::Isis()
    :
    bfd{YType::empty, "bfd"},
    hello_multiplier{YType::uint16, "hello-multiplier"},
    priority{YType::uint8, "priority"}
        ,
    authentication(std::make_shared<Native::Otv::Site::Default::Otv_::Isis::Authentication>())
    , hello(std::make_shared<Native::Otv::Site::Default::Otv_::Isis::Hello>())
    , hello_interval(std::make_shared<Native::Otv::Site::Default::Otv_::Isis::HelloInterval>())
{
    authentication->parent = this;
    hello->parent = this;
    hello_interval->parent = this;

    yang_name = "isis"; yang_parent_name = "otv"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Site::Default::Otv_::Isis::~Isis()
{
}

bool Native::Otv::Site::Default::Otv_::Isis::has_data() const
{
    if (is_presence_container) return true;
    return bfd.is_set
	|| hello_multiplier.is_set
	|| priority.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data());
}

bool Native::Otv::Site::Default::Otv_::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(hello_multiplier.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation());
}

std::string Native::Otv::Site::Default::Otv_::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Default::Otv_::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (hello_multiplier.is_set || is_set(hello_multiplier.yfilter)) leaf_name_data.push_back(hello_multiplier.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Site::Default::Otv_::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Otv::Site::Default::Otv_::Isis::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Otv::Site::Default::Otv_::Isis::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Otv::Site::Default::Otv_::Isis::HelloInterval>();
        }
        return hello_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Site::Default::Otv_::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(hello != nullptr)
    {
        _children["hello"] = hello;
    }

    if(hello_interval != nullptr)
    {
        _children["hello-interval"] = hello_interval;
    }

    return _children;
}

void Native::Otv::Site::Default::Otv_::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier = value;
        hello_multiplier.value_namespace = name_space;
        hello_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Default::Otv_::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Default::Otv_::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "hello" || name == "hello-interval" || name == "bfd" || name == "hello-multiplier" || name == "priority")
        return true;
    return false;
}

Native::Otv::Site::Default::Otv_::Isis::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    mode{YType::enumeration, "mode"},
    send_only{YType::empty, "send-only"}
{

    yang_name = "authentication"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Site::Default::Otv_::Isis::Authentication::~Authentication()
{
}

bool Native::Otv::Site::Default::Otv_::Isis::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return key_chain.is_set
	|| mode.is_set
	|| send_only.is_set;
}

bool Native::Otv::Site::Default::Otv_::Isis::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(send_only.yfilter);
}

std::string Native::Otv::Site::Default::Otv_::Isis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Default::Otv_::Isis::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (send_only.is_set || is_set(send_only.yfilter)) leaf_name_data.push_back(send_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Site::Default::Otv_::Isis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Site::Default::Otv_::Isis::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Site::Default::Otv_::Isis::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-only")
    {
        send_only = value;
        send_only.value_namespace = name_space;
        send_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Default::Otv_::Isis::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "send-only")
    {
        send_only.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Default::Otv_::Isis::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode" || name == "send-only")
        return true;
    return false;
}

Native::Otv::Site::Default::Otv_::Isis::Hello::Hello()
    :
    padding(nullptr) // presence node
{

    yang_name = "hello"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Site::Default::Otv_::Isis::Hello::~Hello()
{
}

bool Native::Otv::Site::Default::Otv_::Isis::Hello::has_data() const
{
    if (is_presence_container) return true;
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Otv::Site::Default::Otv_::Isis::Hello::has_operation() const
{
    return is_set(yfilter)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Otv::Site::Default::Otv_::Isis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Default::Otv_::Isis::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Site::Default::Otv_::Isis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Otv::Site::Default::Otv_::Isis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Site::Default::Otv_::Isis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(padding != nullptr)
    {
        _children["padding"] = padding;
    }

    return _children;
}

void Native::Otv::Site::Default::Otv_::Isis::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Site::Default::Otv_::Isis::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Site::Default::Otv_::Isis::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padding")
        return true;
    return false;
}

Native::Otv::Site::Default::Otv_::Isis::Hello::Padding::Padding()
    :
    always{YType::empty, "always"}
{

    yang_name = "padding"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Otv::Site::Default::Otv_::Isis::Hello::Padding::~Padding()
{
}

bool Native::Otv::Site::Default::Otv_::Isis::Hello::Padding::has_data() const
{
    if (is_presence_container) return true;
    return always.is_set;
}

bool Native::Otv::Site::Default::Otv_::Isis::Hello::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string Native::Otv::Site::Default::Otv_::Isis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Default::Otv_::Isis::Hello::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Site::Default::Otv_::Isis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Site::Default::Otv_::Isis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Site::Default::Otv_::Isis::Hello::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Default::Otv_::Isis::Hello::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Default::Otv_::Isis::Hello::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always")
        return true;
    return false;
}

Native::Otv::Site::Default::Otv_::Isis::HelloInterval::HelloInterval()
    :
    value_{YType::uint16, "value"},
    minimal{YType::empty, "minimal"}
{

    yang_name = "hello-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Site::Default::Otv_::Isis::HelloInterval::~HelloInterval()
{
}

bool Native::Otv::Site::Default::Otv_::Isis::HelloInterval::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| minimal.is_set;
}

bool Native::Otv::Site::Default::Otv_::Isis::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(minimal.yfilter);
}

std::string Native::Otv::Site::Default::Otv_::Isis::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Default::Otv_::Isis::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (minimal.is_set || is_set(minimal.yfilter)) leaf_name_data.push_back(minimal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Site::Default::Otv_::Isis::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Site::Default::Otv_::Isis::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Site::Default::Otv_::Isis::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimal")
    {
        minimal = value;
        minimal.value_namespace = name_space;
        minimal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Default::Otv_::Isis::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "minimal")
    {
        minimal.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Default::Otv_::Isis::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "minimal")
        return true;
    return false;
}

Native::Otv::Site::Otv_::Otv_()
    :
    isis(std::make_shared<Native::Otv::Site::Otv_::Isis>())
{
    isis->parent = this;

    yang_name = "otv"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Site::Otv_::~Otv_()
{
}

bool Native::Otv::Site::Otv_::has_data() const
{
    if (is_presence_container) return true;
    return (isis !=  nullptr && isis->has_data());
}

bool Native::Otv::Site::Otv_::has_operation() const
{
    return is_set(yfilter)
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Otv::Site::Otv_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Otv_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Site::Otv_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Otv::Site::Otv_::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Site::Otv_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    return _children;
}

void Native::Otv::Site::Otv_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Site::Otv_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Site::Otv_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis")
        return true;
    return false;
}

Native::Otv::Site::Otv_::Isis::Isis()
    :
    bfd{YType::empty, "bfd"},
    hello_multiplier{YType::uint16, "hello-multiplier"},
    priority{YType::uint8, "priority"}
        ,
    authentication(std::make_shared<Native::Otv::Site::Otv_::Isis::Authentication>())
    , hello(std::make_shared<Native::Otv::Site::Otv_::Isis::Hello>())
    , hello_interval(std::make_shared<Native::Otv::Site::Otv_::Isis::HelloInterval>())
{
    authentication->parent = this;
    hello->parent = this;
    hello_interval->parent = this;

    yang_name = "isis"; yang_parent_name = "otv"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Site::Otv_::Isis::~Isis()
{
}

bool Native::Otv::Site::Otv_::Isis::has_data() const
{
    if (is_presence_container) return true;
    return bfd.is_set
	|| hello_multiplier.is_set
	|| priority.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data());
}

bool Native::Otv::Site::Otv_::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(hello_multiplier.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation());
}

std::string Native::Otv::Site::Otv_::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Otv_::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (hello_multiplier.is_set || is_set(hello_multiplier.yfilter)) leaf_name_data.push_back(hello_multiplier.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Site::Otv_::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Otv::Site::Otv_::Isis::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Otv::Site::Otv_::Isis::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Otv::Site::Otv_::Isis::HelloInterval>();
        }
        return hello_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Site::Otv_::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(hello != nullptr)
    {
        _children["hello"] = hello;
    }

    if(hello_interval != nullptr)
    {
        _children["hello-interval"] = hello_interval;
    }

    return _children;
}

void Native::Otv::Site::Otv_::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier = value;
        hello_multiplier.value_namespace = name_space;
        hello_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Otv_::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Otv_::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "hello" || name == "hello-interval" || name == "bfd" || name == "hello-multiplier" || name == "priority")
        return true;
    return false;
}

Native::Otv::Site::Otv_::Isis::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    mode{YType::enumeration, "mode"},
    send_only{YType::empty, "send-only"}
{

    yang_name = "authentication"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Site::Otv_::Isis::Authentication::~Authentication()
{
}

bool Native::Otv::Site::Otv_::Isis::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return key_chain.is_set
	|| mode.is_set
	|| send_only.is_set;
}

bool Native::Otv::Site::Otv_::Isis::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(send_only.yfilter);
}

std::string Native::Otv::Site::Otv_::Isis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Otv_::Isis::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (send_only.is_set || is_set(send_only.yfilter)) leaf_name_data.push_back(send_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Site::Otv_::Isis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Site::Otv_::Isis::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Site::Otv_::Isis::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-only")
    {
        send_only = value;
        send_only.value_namespace = name_space;
        send_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Otv_::Isis::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "send-only")
    {
        send_only.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Otv_::Isis::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode" || name == "send-only")
        return true;
    return false;
}

Native::Otv::Site::Otv_::Isis::Hello::Hello()
    :
    padding(nullptr) // presence node
{

    yang_name = "hello"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Site::Otv_::Isis::Hello::~Hello()
{
}

bool Native::Otv::Site::Otv_::Isis::Hello::has_data() const
{
    if (is_presence_container) return true;
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Otv::Site::Otv_::Isis::Hello::has_operation() const
{
    return is_set(yfilter)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Otv::Site::Otv_::Isis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Otv_::Isis::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Site::Otv_::Isis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Otv::Site::Otv_::Isis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Site::Otv_::Isis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(padding != nullptr)
    {
        _children["padding"] = padding;
    }

    return _children;
}

void Native::Otv::Site::Otv_::Isis::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Site::Otv_::Isis::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Site::Otv_::Isis::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padding")
        return true;
    return false;
}

Native::Otv::Site::Otv_::Isis::Hello::Padding::Padding()
    :
    always{YType::empty, "always"}
{

    yang_name = "padding"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Otv::Site::Otv_::Isis::Hello::Padding::~Padding()
{
}

bool Native::Otv::Site::Otv_::Isis::Hello::Padding::has_data() const
{
    if (is_presence_container) return true;
    return always.is_set;
}

bool Native::Otv::Site::Otv_::Isis::Hello::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string Native::Otv::Site::Otv_::Isis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Otv_::Isis::Hello::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Site::Otv_::Isis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Site::Otv_::Isis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Site::Otv_::Isis::Hello::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Otv_::Isis::Hello::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Otv_::Isis::Hello::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always")
        return true;
    return false;
}

Native::Otv::Site::Otv_::Isis::HelloInterval::HelloInterval()
    :
    value_{YType::uint16, "value"},
    minimal{YType::empty, "minimal"}
{

    yang_name = "hello-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Otv::Site::Otv_::Isis::HelloInterval::~HelloInterval()
{
}

bool Native::Otv::Site::Otv_::Isis::HelloInterval::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| minimal.is_set;
}

bool Native::Otv::Site::Otv_::Isis::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(minimal.yfilter);
}

std::string Native::Otv::Site::Otv_::Isis::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Otv_::Isis::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (minimal.is_set || is_set(minimal.yfilter)) leaf_name_data.push_back(minimal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Otv::Site::Otv_::Isis::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Otv::Site::Otv_::Isis::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Otv::Site::Otv_::Isis::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimal")
    {
        minimal = value;
        minimal.value_namespace = name_space;
        minimal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Otv_::Isis::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "minimal")
    {
        minimal.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Otv_::Isis::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "minimal")
        return true;
    return false;
}

Native::RemoteManagement::RemoteManagement()
    :
    dmi{YType::empty, "dmi"},
    restful_api{YType::boolean, "restful-api"}
{

    yang_name = "remote-management"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::RemoteManagement::~RemoteManagement()
{
}

bool Native::RemoteManagement::has_data() const
{
    if (is_presence_container) return true;
    return dmi.is_set
	|| restful_api.is_set;
}

bool Native::RemoteManagement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dmi.yfilter)
	|| ydk::is_set(restful_api.yfilter);
}

std::string Native::RemoteManagement::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RemoteManagement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-management";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RemoteManagement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmi.is_set || is_set(dmi.yfilter)) leaf_name_data.push_back(dmi.get_name_leafdata());
    if (restful_api.is_set || is_set(restful_api.yfilter)) leaf_name_data.push_back(restful_api.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RemoteManagement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RemoteManagement::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RemoteManagement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dmi")
    {
        dmi = value;
        dmi.value_namespace = name_space;
        dmi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restful-api")
    {
        restful_api = value;
        restful_api.value_namespace = name_space;
        restful_api.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RemoteManagement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dmi")
    {
        dmi.yfilter = yfilter;
    }
    if(value_path == "restful-api")
    {
        restful_api.yfilter = yfilter;
    }
}

bool Native::RemoteManagement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmi" || name == "restful-api")
        return true;
    return false;
}

Native::VirtualService::VirtualService()
    :
    name{YType::str, "name"},
    activate{YType::empty, "Cisco-IOS-XE-vservice:activate"},
    profile{YType::str, "Cisco-IOS-XE-vservice:profile"}
        ,
    ip(std::make_shared<Native::VirtualService::Ip>())
    , vnic(std::make_shared<Native::VirtualService::Vnic>())
{
    ip->parent = this;
    vnic->parent = this;

    yang_name = "virtual-service"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::VirtualService::~VirtualService()
{
}

bool Native::VirtualService::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| activate.is_set
	|| profile.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (vnic !=  nullptr && vnic->has_data());
}

bool Native::VirtualService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (vnic !=  nullptr && vnic->has_operation());
}

std::string Native::VirtualService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::VirtualService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-service";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::VirtualService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-vservice:ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::VirtualService::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "Cisco-IOS-XE-vservice:vnic")
    {
        if(vnic == nullptr)
        {
            vnic = std::make_shared<Native::VirtualService::Vnic>();
        }
        return vnic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::VirtualService::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["Cisco-IOS-XE-vservice:ip"] = ip;
    }

    if(vnic != nullptr)
    {
        _children["Cisco-IOS-XE-vservice:vnic"] = vnic;
    }

    return _children;
}

void Native::VirtualService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-vservice:activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-vservice:profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::VirtualService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "vnic" || name == "name" || name == "activate" || name == "profile")
        return true;
    return false;
}

Native::VirtualService::Ip::Ip()
    :
    shared(std::make_shared<Native::VirtualService::Ip::Shared>())
{
    shared->parent = this;

    yang_name = "ip"; yang_parent_name = "virtual-service"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::VirtualService::Ip::~Ip()
{
}

bool Native::VirtualService::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (shared !=  nullptr && shared->has_data());
}

bool Native::VirtualService::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (shared !=  nullptr && shared->has_operation());
}

std::string Native::VirtualService::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vservice:ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::VirtualService::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shared")
    {
        if(shared == nullptr)
        {
            shared = std::make_shared<Native::VirtualService::Ip::Shared>();
        }
        return shared;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::VirtualService::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(shared != nullptr)
    {
        _children["shared"] = shared;
    }

    return _children;
}

void Native::VirtualService::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::VirtualService::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::VirtualService::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared")
        return true;
    return false;
}

Native::VirtualService::Ip::Shared::Shared()
    :
    host_interface(std::make_shared<Native::VirtualService::Ip::Shared::HostInterface>())
{
    host_interface->parent = this;

    yang_name = "shared"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::VirtualService::Ip::Shared::~Shared()
{
}

bool Native::VirtualService::Ip::Shared::has_data() const
{
    if (is_presence_container) return true;
    return (host_interface !=  nullptr && host_interface->has_data());
}

bool Native::VirtualService::Ip::Shared::has_operation() const
{
    return is_set(yfilter)
	|| (host_interface !=  nullptr && host_interface->has_operation());
}

std::string Native::VirtualService::Ip::Shared::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Ip::Shared::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::VirtualService::Ip::Shared::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-interface")
    {
        if(host_interface == nullptr)
        {
            host_interface = std::make_shared<Native::VirtualService::Ip::Shared::HostInterface>();
        }
        return host_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::VirtualService::Ip::Shared::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host_interface != nullptr)
    {
        _children["host-interface"] = host_interface;
    }

    return _children;
}

void Native::VirtualService::Ip::Shared::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::VirtualService::Ip::Shared::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::VirtualService::Ip::Shared::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-interface")
        return true;
    return false;
}

Native::VirtualService::Ip::Shared::HostInterface::HostInterface()
    :
    fastethernet{YType::str, "FastEthernet"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    loopback{YType::uint64, "Loopback"},
    vlan{YType::uint16, "Vlan"}
{

    yang_name = "host-interface"; yang_parent_name = "shared"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::VirtualService::Ip::Shared::HostInterface::~HostInterface()
{
}

bool Native::VirtualService::Ip::Shared::HostInterface::has_data() const
{
    if (is_presence_container) return true;
    return fastethernet.is_set
	|| tengigabitethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| loopback.is_set
	|| vlan.is_set;
}

bool Native::VirtualService::Ip::Shared::HostInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::VirtualService::Ip::Shared::HostInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Ip::Shared::HostInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::VirtualService::Ip::Shared::HostInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::VirtualService::Ip::Shared::HostInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::VirtualService::Ip::Shared::HostInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Ip::Shared::HostInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::VirtualService::Ip::Shared::HostInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FastEthernet" || name == "TenGigabitEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "Loopback" || name == "Vlan")
        return true;
    return false;
}

Native::VirtualService::Vnic::Vnic()
    :
    gateway(std::make_shared<Native::VirtualService::Vnic::Gateway>())
    , management(std::make_shared<Native::VirtualService::Vnic::Management>())
{
    gateway->parent = this;
    management->parent = this;

    yang_name = "vnic"; yang_parent_name = "virtual-service"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::VirtualService::Vnic::~Vnic()
{
}

bool Native::VirtualService::Vnic::has_data() const
{
    if (is_presence_container) return true;
    return (gateway !=  nullptr && gateway->has_data())
	|| (management !=  nullptr && management->has_data());
}

bool Native::VirtualService::Vnic::has_operation() const
{
    return is_set(yfilter)
	|| (gateway !=  nullptr && gateway->has_operation())
	|| (management !=  nullptr && management->has_operation());
}

std::string Native::VirtualService::Vnic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vservice:vnic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::VirtualService::Vnic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gateway")
    {
        if(gateway == nullptr)
        {
            gateway = std::make_shared<Native::VirtualService::Vnic::Gateway>();
        }
        return gateway;
    }

    if(child_yang_name == "management")
    {
        if(management == nullptr)
        {
            management = std::make_shared<Native::VirtualService::Vnic::Management>();
        }
        return management;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::VirtualService::Vnic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gateway != nullptr)
    {
        _children["gateway"] = gateway;
    }

    if(management != nullptr)
    {
        _children["management"] = management;
    }

    return _children;
}

void Native::VirtualService::Vnic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::VirtualService::Vnic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::VirtualService::Vnic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gateway" || name == "management")
        return true;
    return false;
}

Native::VirtualService::Vnic::Gateway::Gateway()
    :
    virtualportgroup(this, {"number"})
{

    yang_name = "gateway"; yang_parent_name = "vnic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::VirtualService::Vnic::Gateway::~Gateway()
{
}

bool Native::VirtualService::Vnic::Gateway::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<virtualportgroup.len(); index++)
    {
        if(virtualportgroup[index]->has_data())
            return true;
    }
    return false;
}

bool Native::VirtualService::Vnic::Gateway::has_operation() const
{
    for (std::size_t index=0; index<virtualportgroup.len(); index++)
    {
        if(virtualportgroup[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::VirtualService::Vnic::Gateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::Gateway::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::VirtualService::Vnic::Gateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VirtualPortGroup")
    {
        auto ent_ = std::make_shared<Native::VirtualService::Vnic::Gateway::VirtualPortGroup>();
        ent_->parent = this;
        virtualportgroup.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::VirtualService::Vnic::Gateway::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : virtualportgroup.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::VirtualService::Vnic::Gateway::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::VirtualService::Vnic::Gateway::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::VirtualService::Vnic::Gateway::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VirtualPortGroup")
        return true;
    return false;
}

Native::VirtualService::Vnic::Gateway::VirtualPortGroup::VirtualPortGroup()
    :
    number{YType::uint16, "number"}
        ,
    guest(std::make_shared<Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest>())
{
    guest->parent = this;

    yang_name = "VirtualPortGroup"; yang_parent_name = "gateway"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::VirtualService::Vnic::Gateway::VirtualPortGroup::~VirtualPortGroup()
{
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (guest !=  nullptr && guest->has_data());
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (guest !=  nullptr && guest->has_operation());
}

std::string Native::VirtualService::Vnic::Gateway::VirtualPortGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VirtualPortGroup";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::Gateway::VirtualPortGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::VirtualService::Vnic::Gateway::VirtualPortGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guest")
    {
        if(guest == nullptr)
        {
            guest = std::make_shared<Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest>();
        }
        return guest;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::VirtualService::Vnic::Gateway::VirtualPortGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(guest != nullptr)
    {
        _children["guest"] = guest;
    }

    return _children;
}

void Native::VirtualService::Vnic::Gateway::VirtualPortGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Vnic::Gateway::VirtualPortGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guest" || name == "number")
        return true;
    return false;
}

Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Guest()
    :
    ip(std::make_shared<Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip>())
    , ipv6(std::make_shared<Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6>())
{
    ip->parent = this;
    ipv6->parent = this;

    yang_name = "guest"; yang_parent_name = "VirtualPortGroup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::~Guest()
{
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "guest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ipv6")
        return true;
    return false;
}

Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "guest"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::~Ip()
{
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::Ipv6()
    :
    address{YType::str, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "guest"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::~Ipv6()
{
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::VirtualService::Vnic::Management::Management()
    :
    gigabitethernet0{YType::empty, "GigabitEthernet0"}
        ,
    guest(std::make_shared<Native::VirtualService::Vnic::Management::Guest>())
{
    guest->parent = this;

    yang_name = "management"; yang_parent_name = "vnic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::VirtualService::Vnic::Management::~Management()
{
}

bool Native::VirtualService::Vnic::Management::has_data() const
{
    if (is_presence_container) return true;
    return gigabitethernet0.is_set
	|| (guest !=  nullptr && guest->has_data());
}

bool Native::VirtualService::Vnic::Management::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gigabitethernet0.yfilter)
	|| (guest !=  nullptr && guest->has_operation());
}

std::string Native::VirtualService::Vnic::Management::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "management";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::Management::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gigabitethernet0.is_set || is_set(gigabitethernet0.yfilter)) leaf_name_data.push_back(gigabitethernet0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::VirtualService::Vnic::Management::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guest")
    {
        if(guest == nullptr)
        {
            guest = std::make_shared<Native::VirtualService::Vnic::Management::Guest>();
        }
        return guest;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::VirtualService::Vnic::Management::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(guest != nullptr)
    {
        _children["guest"] = guest;
    }

    return _children;
}

void Native::VirtualService::Vnic::Management::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "GigabitEthernet0")
    {
        gigabitethernet0 = value;
        gigabitethernet0.value_namespace = name_space;
        gigabitethernet0.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Vnic::Management::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "GigabitEthernet0")
    {
        gigabitethernet0.yfilter = yfilter;
    }
}

bool Native::VirtualService::Vnic::Management::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guest" || name == "GigabitEthernet0")
        return true;
    return false;
}

Native::VirtualService::Vnic::Management::Guest::Guest()
    :
    ip(std::make_shared<Native::VirtualService::Vnic::Management::Guest::Ip>())
    , ipv6(std::make_shared<Native::VirtualService::Vnic::Management::Guest::Ipv6>())
{
    ip->parent = this;
    ipv6->parent = this;

    yang_name = "guest"; yang_parent_name = "management"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::VirtualService::Vnic::Management::Guest::~Guest()
{
}

bool Native::VirtualService::Vnic::Management::Guest::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::VirtualService::Vnic::Management::Guest::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::VirtualService::Vnic::Management::Guest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "guest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::Management::Guest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::VirtualService::Vnic::Management::Guest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::VirtualService::Vnic::Management::Guest::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::VirtualService::Vnic::Management::Guest::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::VirtualService::Vnic::Management::Guest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::VirtualService::Vnic::Management::Guest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::VirtualService::Vnic::Management::Guest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::VirtualService::Vnic::Management::Guest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ipv6")
        return true;
    return false;
}

Native::VirtualService::Vnic::Management::Guest::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "guest"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::VirtualService::Vnic::Management::Guest::Ip::~Ip()
{
}

bool Native::VirtualService::Vnic::Management::Guest::Ip::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::VirtualService::Vnic::Management::Guest::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::VirtualService::Vnic::Management::Guest::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::Management::Guest::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::VirtualService::Vnic::Management::Guest::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::VirtualService::Vnic::Management::Guest::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::VirtualService::Vnic::Management::Guest::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Vnic::Management::Guest::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::VirtualService::Vnic::Management::Guest::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::VirtualService::Vnic::Management::Guest::Ipv6::Ipv6()
    :
    address{YType::str, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "guest"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::VirtualService::Vnic::Management::Guest::Ipv6::~Ipv6()
{
}

bool Native::VirtualService::Vnic::Management::Guest::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::VirtualService::Vnic::Management::Guest::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::VirtualService::Vnic::Management::Guest::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::Management::Guest::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::VirtualService::Vnic::Management::Guest::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::VirtualService::Vnic::Management::Guest::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::VirtualService::Vnic::Management::Guest::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Vnic::Management::Guest::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::VirtualService::Vnic::Management::Guest::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Snmp::Snmp()
    :
    ifmib(std::make_shared<Native::Snmp::Ifmib>())
    , mib(std::make_shared<Native::Snmp::Mib>())
{
    ifmib->parent = this;
    mib->parent = this;

    yang_name = "snmp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Snmp::~Snmp()
{
}

bool Native::Snmp::has_data() const
{
    if (is_presence_container) return true;
    return (ifmib !=  nullptr && ifmib->has_data())
	|| (mib !=  nullptr && mib->has_data());
}

bool Native::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (ifmib !=  nullptr && ifmib->has_operation())
	|| (mib !=  nullptr && mib->has_operation());
}

std::string Native::Snmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-snmp:ifmib")
    {
        if(ifmib == nullptr)
        {
            ifmib = std::make_shared<Native::Snmp::Ifmib>();
        }
        return ifmib;
    }

    if(child_yang_name == "Cisco-IOS-XE-snmp:mib")
    {
        if(mib == nullptr)
        {
            mib = std::make_shared<Native::Snmp::Mib>();
        }
        return mib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ifmib != nullptr)
    {
        _children["Cisco-IOS-XE-snmp:ifmib"] = ifmib;
    }

    if(mib != nullptr)
    {
        _children["Cisco-IOS-XE-snmp:mib"] = mib;
    }

    return _children;
}

void Native::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifmib" || name == "mib")
        return true;
    return false;
}

Native::Snmp::Ifmib::Ifmib()
    :
    ifindex(std::make_shared<Native::Snmp::Ifmib::Ifindex>())
    , ifalias(std::make_shared<Native::Snmp::Ifmib::Ifalias>())
{
    ifindex->parent = this;
    ifalias->parent = this;

    yang_name = "ifmib"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Snmp::Ifmib::~Ifmib()
{
}

bool Native::Snmp::Ifmib::has_data() const
{
    if (is_presence_container) return true;
    return (ifindex !=  nullptr && ifindex->has_data())
	|| (ifalias !=  nullptr && ifalias->has_data());
}

bool Native::Snmp::Ifmib::has_operation() const
{
    return is_set(yfilter)
	|| (ifindex !=  nullptr && ifindex->has_operation())
	|| (ifalias !=  nullptr && ifalias->has_operation());
}

std::string Native::Snmp::Ifmib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::Ifmib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:ifmib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::Ifmib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Snmp::Ifmib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Snmp::Ifmib::Ifindex>();
        }
        return ifindex;
    }

    if(child_yang_name == "ifalias")
    {
        if(ifalias == nullptr)
        {
            ifalias = std::make_shared<Native::Snmp::Ifmib::Ifalias>();
        }
        return ifalias;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Snmp::Ifmib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ifindex != nullptr)
    {
        _children["ifindex"] = ifindex;
    }

    if(ifalias != nullptr)
    {
        _children["ifalias"] = ifalias;
    }

    return _children;
}

void Native::Snmp::Ifmib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Snmp::Ifmib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Snmp::Ifmib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifindex" || name == "ifalias")
        return true;
    return false;
}

Native::Snmp::Ifmib::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"}
{

    yang_name = "ifindex"; yang_parent_name = "ifmib"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Snmp::Ifmib::Ifindex::~Ifindex()
{
}

bool Native::Snmp::Ifmib::Ifindex::has_data() const
{
    if (is_presence_container) return true;
    return persist.is_set;
}

bool Native::Snmp::Ifmib::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter);
}

std::string Native::Snmp::Ifmib::Ifindex::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:ifmib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::Ifmib::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::Ifmib::Ifindex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Snmp::Ifmib::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Snmp::Ifmib::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Snmp::Ifmib::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Snmp::Ifmib::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
}

bool Native::Snmp::Ifmib::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist")
        return true;
    return false;
}

Native::Snmp::Ifmib::Ifalias::Ifalias()
    :
    long_{YType::empty, "long"}
{

    yang_name = "ifalias"; yang_parent_name = "ifmib"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Snmp::Ifmib::Ifalias::~Ifalias()
{
}

bool Native::Snmp::Ifmib::Ifalias::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set;
}

bool Native::Snmp::Ifmib::Ifalias::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Snmp::Ifmib::Ifalias::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:ifmib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::Ifmib::Ifalias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifalias";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::Ifmib::Ifalias::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Snmp::Ifmib::Ifalias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Snmp::Ifmib::Ifalias::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Snmp::Ifmib::Ifalias::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Snmp::Ifmib::Ifalias::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Snmp::Ifmib::Ifalias::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Snmp::Mib::Mib()
    :
    community_map(std::make_shared<Native::Snmp::Mib::CommunityMap>())
    , bulkstat(std::make_shared<Native::Snmp::Mib::Bulkstat>())
    , persist(nullptr) // presence node
{
    community_map->parent = this;
    bulkstat->parent = this;

    yang_name = "mib"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Snmp::Mib::~Mib()
{
}

bool Native::Snmp::Mib::has_data() const
{
    if (is_presence_container) return true;
    return (community_map !=  nullptr && community_map->has_data())
	|| (bulkstat !=  nullptr && bulkstat->has_data())
	|| (persist !=  nullptr && persist->has_data());
}

bool Native::Snmp::Mib::has_operation() const
{
    return is_set(yfilter)
	|| (community_map !=  nullptr && community_map->has_operation())
	|| (bulkstat !=  nullptr && bulkstat->has_operation())
	|| (persist !=  nullptr && persist->has_operation());
}

std::string Native::Snmp::Mib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::Mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Snmp::Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-map")
    {
        if(community_map == nullptr)
        {
            community_map = std::make_shared<Native::Snmp::Mib::CommunityMap>();
        }
        return community_map;
    }

    if(child_yang_name == "bulkstat")
    {
        if(bulkstat == nullptr)
        {
            bulkstat = std::make_shared<Native::Snmp::Mib::Bulkstat>();
        }
        return bulkstat;
    }

    if(child_yang_name == "persist")
    {
        if(persist == nullptr)
        {
            persist = std::make_shared<Native::Snmp::Mib::Persist>();
        }
        return persist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Snmp::Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(community_map != nullptr)
    {
        _children["community-map"] = community_map;
    }

    if(bulkstat != nullptr)
    {
        _children["bulkstat"] = bulkstat;
    }

    if(persist != nullptr)
    {
        _children["persist"] = persist;
    }

    return _children;
}

void Native::Snmp::Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Snmp::Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Snmp::Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-map" || name == "bulkstat" || name == "persist")
        return true;
    return false;
}

Native::Snmp::Mib::CommunityMap::CommunityMap()
    :
    community_map_list(this, {"name"})
{

    yang_name = "community-map"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Snmp::Mib::CommunityMap::~CommunityMap()
{
}

bool Native::Snmp::Mib::CommunityMap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community_map_list.len(); index++)
    {
        if(community_map_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Snmp::Mib::CommunityMap::has_operation() const
{
    for (std::size_t index=0; index<community_map_list.len(); index++)
    {
        if(community_map_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Snmp::Mib::CommunityMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::Mib::CommunityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::Mib::CommunityMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Snmp::Mib::CommunityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-map-list")
    {
        auto ent_ = std::make_shared<Native::Snmp::Mib::CommunityMap::CommunityMapList>();
        ent_->parent = this;
        community_map_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Snmp::Mib::CommunityMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : community_map_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Snmp::Mib::CommunityMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Snmp::Mib::CommunityMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Snmp::Mib::CommunityMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-map-list")
        return true;
    return false;
}

Native::Snmp::Mib::CommunityMap::CommunityMapList::CommunityMapList()
    :
    name{YType::str, "name"},
    engineid{YType::str, "engineid"}
{

    yang_name = "community-map-list"; yang_parent_name = "community-map"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Snmp::Mib::CommunityMap::CommunityMapList::~CommunityMapList()
{
}

bool Native::Snmp::Mib::CommunityMap::CommunityMapList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| engineid.is_set;
}

bool Native::Snmp::Mib::CommunityMap::CommunityMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(engineid.yfilter);
}

std::string Native::Snmp::Mib::CommunityMap::CommunityMapList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:mib/community-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::Mib::CommunityMap::CommunityMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-map-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::Mib::CommunityMap::CommunityMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (engineid.is_set || is_set(engineid.yfilter)) leaf_name_data.push_back(engineid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Snmp::Mib::CommunityMap::CommunityMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Snmp::Mib::CommunityMap::CommunityMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Snmp::Mib::CommunityMap::CommunityMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engineid")
    {
        engineid = value;
        engineid.value_namespace = name_space;
        engineid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Snmp::Mib::CommunityMap::CommunityMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "engineid")
    {
        engineid.yfilter = yfilter;
    }
}

bool Native::Snmp::Mib::CommunityMap::CommunityMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "engineid")
        return true;
    return false;
}

Native::Snmp::Mib::Bulkstat::Bulkstat()
    :
    object_list(this, {"name"})
{

    yang_name = "bulkstat"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Snmp::Mib::Bulkstat::~Bulkstat()
{
}

bool Native::Snmp::Mib::Bulkstat::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<object_list.len(); index++)
    {
        if(object_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Snmp::Mib::Bulkstat::has_operation() const
{
    for (std::size_t index=0; index<object_list.len(); index++)
    {
        if(object_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Snmp::Mib::Bulkstat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::Mib::Bulkstat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulkstat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::Mib::Bulkstat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Snmp::Mib::Bulkstat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object-list")
    {
        auto ent_ = std::make_shared<Native::Snmp::Mib::Bulkstat::ObjectList>();
        ent_->parent = this;
        object_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Snmp::Mib::Bulkstat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : object_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Snmp::Mib::Bulkstat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Snmp::Mib::Bulkstat::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Snmp::Mib::Bulkstat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-list")
        return true;
    return false;
}

Native::Snmp::Mib::Bulkstat::ObjectList::ObjectList()
    :
    name{YType::str, "name"}
{

    yang_name = "object-list"; yang_parent_name = "bulkstat"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Snmp::Mib::Bulkstat::ObjectList::~ObjectList()
{
}

bool Native::Snmp::Mib::Bulkstat::ObjectList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Snmp::Mib::Bulkstat::ObjectList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Snmp::Mib::Bulkstat::ObjectList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:mib/bulkstat/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::Mib::Bulkstat::ObjectList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::Mib::Bulkstat::ObjectList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Snmp::Mib::Bulkstat::ObjectList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Snmp::Mib::Bulkstat::ObjectList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Snmp::Mib::Bulkstat::ObjectList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Snmp::Mib::Bulkstat::ObjectList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Snmp::Mib::Bulkstat::ObjectList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Snmp::Mib::Persist::Persist()
    :
    persist_enum{YType::enumeration, "persist-enum"}
{

    yang_name = "persist"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Snmp::Mib::Persist::~Persist()
{
}

bool Native::Snmp::Mib::Persist::has_data() const
{
    if (is_presence_container) return true;
    return persist_enum.is_set;
}

bool Native::Snmp::Mib::Persist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist_enum.yfilter);
}

std::string Native::Snmp::Mib::Persist::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::Mib::Persist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "persist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::Mib::Persist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist_enum.is_set || is_set(persist_enum.yfilter)) leaf_name_data.push_back(persist_enum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Snmp::Mib::Persist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Snmp::Mib::Persist::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Snmp::Mib::Persist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist-enum")
    {
        persist_enum = value;
        persist_enum.value_namespace = name_space;
        persist_enum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Snmp::Mib::Persist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist-enum")
    {
        persist_enum.yfilter = yfilter;
    }
}

bool Native::Snmp::Mib::Persist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist-enum")
        return true;
    return false;
}

Native::SnmpServer::SnmpServer()
    :
    chassis_id{YType::str, "Cisco-IOS-XE-snmp:chassis-id"},
    contact{YType::str, "Cisco-IOS-XE-snmp:contact"},
    location{YType::str, "Cisco-IOS-XE-snmp:location"},
    packetsize{YType::uint32, "Cisco-IOS-XE-snmp:packetsize"},
    queue_length{YType::uint16, "Cisco-IOS-XE-snmp:queue-length"},
    system_shutdown{YType::empty, "Cisco-IOS-XE-snmp:system-shutdown"},
    tftp_server_list{YType::str, "Cisco-IOS-XE-snmp:tftp-server-list"}
        ,
    community(this, {"name"})
    , context(this, {"name"})
    , enable(std::make_shared<Native::SnmpServer::Enable>())
    , engineid(std::make_shared<Native::SnmpServer::EngineID>())
    , group(this, {"id"})
    , host(this, {"ip_address", "community_or_user"})
    , ip(std::make_shared<Native::SnmpServer::Ip>())
    , ifindex(std::make_shared<Native::SnmpServer::Ifindex>())
    , manager(nullptr) // presence node
    , source_interface(std::make_shared<Native::SnmpServer::SourceInterface>())
    , trap(std::make_shared<Native::SnmpServer::Trap>())
    , trap_source(std::make_shared<Native::SnmpServer::TrapSource>())
    , user(std::make_shared<Native::SnmpServer::User>())
    , view(this, {"name", "mib"})
{
    enable->parent = this;
    engineid->parent = this;
    ip->parent = this;
    ifindex->parent = this;
    source_interface->parent = this;
    trap->parent = this;
    trap_source->parent = this;
    user->parent = this;

    yang_name = "snmp-server"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::~SnmpServer()
{
}

bool Native::SnmpServer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<view.len(); index++)
    {
        if(view[index]->has_data())
            return true;
    }
    return chassis_id.is_set
	|| contact.is_set
	|| location.is_set
	|| packetsize.is_set
	|| queue_length.is_set
	|| system_shutdown.is_set
	|| tftp_server_list.is_set
	|| (enable !=  nullptr && enable->has_data())
	|| (engineid !=  nullptr && engineid->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ifindex !=  nullptr && ifindex->has_data())
	|| (manager !=  nullptr && manager->has_data())
	|| (source_interface !=  nullptr && source_interface->has_data())
	|| (trap !=  nullptr && trap->has_data())
	|| (trap_source !=  nullptr && trap_source->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::SnmpServer::has_operation() const
{
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<view.len(); index++)
    {
        if(view[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(chassis_id.yfilter)
	|| ydk::is_set(contact.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(packetsize.yfilter)
	|| ydk::is_set(queue_length.yfilter)
	|| ydk::is_set(system_shutdown.yfilter)
	|| ydk::is_set(tftp_server_list.yfilter)
	|| (enable !=  nullptr && enable->has_operation())
	|| (engineid !=  nullptr && engineid->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ifindex !=  nullptr && ifindex->has_operation())
	|| (manager !=  nullptr && manager->has_operation())
	|| (source_interface !=  nullptr && source_interface->has_operation())
	|| (trap !=  nullptr && trap->has_operation())
	|| (trap_source !=  nullptr && trap_source->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::SnmpServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id.is_set || is_set(chassis_id.yfilter)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (contact.is_set || is_set(contact.yfilter)) leaf_name_data.push_back(contact.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (packetsize.is_set || is_set(packetsize.yfilter)) leaf_name_data.push_back(packetsize.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.yfilter)) leaf_name_data.push_back(queue_length.get_name_leafdata());
    if (system_shutdown.is_set || is_set(system_shutdown.yfilter)) leaf_name_data.push_back(system_shutdown.get_name_leafdata());
    if (tftp_server_list.is_set || is_set(tftp_server_list.yfilter)) leaf_name_data.push_back(tftp_server_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-snmp:community")
    {
        auto ent_ = std::make_shared<Native::SnmpServer::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-snmp:context")
    {
        auto ent_ = std::make_shared<Native::SnmpServer::Context>();
        ent_->parent = this;
        context.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-snmp:enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::SnmpServer::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "Cisco-IOS-XE-snmp:engineID")
    {
        if(engineid == nullptr)
        {
            engineid = std::make_shared<Native::SnmpServer::EngineID>();
        }
        return engineid;
    }

    if(child_yang_name == "Cisco-IOS-XE-snmp:group")
    {
        auto ent_ = std::make_shared<Native::SnmpServer::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-snmp:host")
    {
        auto ent_ = std::make_shared<Native::SnmpServer::Host>();
        ent_->parent = this;
        host.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-snmp:ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::SnmpServer::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "Cisco-IOS-XE-snmp:ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::SnmpServer::Ifindex>();
        }
        return ifindex;
    }

    if(child_yang_name == "Cisco-IOS-XE-snmp:manager")
    {
        if(manager == nullptr)
        {
            manager = std::make_shared<Native::SnmpServer::Manager>();
        }
        return manager;
    }

    if(child_yang_name == "Cisco-IOS-XE-snmp:source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::SnmpServer::SourceInterface>();
        }
        return source_interface;
    }

    if(child_yang_name == "Cisco-IOS-XE-snmp:trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::SnmpServer::Trap>();
        }
        return trap;
    }

    if(child_yang_name == "Cisco-IOS-XE-snmp:trap-source")
    {
        if(trap_source == nullptr)
        {
            trap_source = std::make_shared<Native::SnmpServer::TrapSource>();
        }
        return trap_source;
    }

    if(child_yang_name == "Cisco-IOS-XE-snmp:user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::SnmpServer::User>();
        }
        return user;
    }

    if(child_yang_name == "Cisco-IOS-XE-snmp:view")
    {
        auto ent_ = std::make_shared<Native::SnmpServer::View>();
        ent_->parent = this;
        view.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : context.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(enable != nullptr)
    {
        _children["Cisco-IOS-XE-snmp:enable"] = enable;
    }

    if(engineid != nullptr)
    {
        _children["Cisco-IOS-XE-snmp:engineID"] = engineid;
    }

    count_ = 0;
    for (auto ent_ : group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(ip != nullptr)
    {
        _children["Cisco-IOS-XE-snmp:ip"] = ip;
    }

    if(ifindex != nullptr)
    {
        _children["Cisco-IOS-XE-snmp:ifindex"] = ifindex;
    }

    if(manager != nullptr)
    {
        _children["Cisco-IOS-XE-snmp:manager"] = manager;
    }

    if(source_interface != nullptr)
    {
        _children["Cisco-IOS-XE-snmp:source-interface"] = source_interface;
    }

    if(trap != nullptr)
    {
        _children["Cisco-IOS-XE-snmp:trap"] = trap;
    }

    if(trap_source != nullptr)
    {
        _children["Cisco-IOS-XE-snmp:trap-source"] = trap_source;
    }

    if(user != nullptr)
    {
        _children["Cisco-IOS-XE-snmp:user"] = user;
    }

    count_ = 0;
    for (auto ent_ : view.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::SnmpServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-snmp:chassis-id")
    {
        chassis_id = value;
        chassis_id.value_namespace = name_space;
        chassis_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-snmp:contact")
    {
        contact = value;
        contact.value_namespace = name_space;
        contact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-snmp:location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-snmp:packetsize")
    {
        packetsize = value;
        packetsize.value_namespace = name_space;
        packetsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-snmp:queue-length")
    {
        queue_length = value;
        queue_length.value_namespace = name_space;
        queue_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-snmp:system-shutdown")
    {
        system_shutdown = value;
        system_shutdown.value_namespace = name_space;
        system_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-snmp:tftp-server-list")
    {
        tftp_server_list = value;
        tftp_server_list.value_namespace = name_space;
        tftp_server_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chassis-id")
    {
        chassis_id.yfilter = yfilter;
    }
    if(value_path == "contact")
    {
        contact.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "packetsize")
    {
        packetsize.yfilter = yfilter;
    }
    if(value_path == "queue-length")
    {
        queue_length.yfilter = yfilter;
    }
    if(value_path == "system-shutdown")
    {
        system_shutdown.yfilter = yfilter;
    }
    if(value_path == "tftp-server-list")
    {
        tftp_server_list.yfilter = yfilter;
    }
}

bool Native::SnmpServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community" || name == "context" || name == "enable" || name == "engineID" || name == "group" || name == "host" || name == "ip" || name == "ifindex" || name == "manager" || name == "source-interface" || name == "trap" || name == "trap-source" || name == "user" || name == "view" || name == "chassis-id" || name == "contact" || name == "location" || name == "packetsize" || name == "queue-length" || name == "system-shutdown" || name == "tftp-server-list")
        return true;
    return false;
}

Native::SnmpServer::Community::Community()
    :
    name{YType::str, "name"},
    view{YType::str, "view"},
    ro{YType::empty, "RO"},
    rw{YType::empty, "RW"},
    ipv6{YType::str, "ipv6"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "community"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Community::~Community()
{
}

bool Native::SnmpServer::Community::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| view.is_set
	|| ro.is_set
	|| rw.is_set
	|| ipv6.is_set
	|| access_list_name.is_set;
}

bool Native::SnmpServer::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(view.yfilter)
	|| ydk::is_set(ro.yfilter)
	|| ydk::is_set(rw.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Native::SnmpServer::Community::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:community";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (view.is_set || is_set(view.yfilter)) leaf_name_data.push_back(view.get_name_leafdata());
    if (ro.is_set || is_set(ro.yfilter)) leaf_name_data.push_back(ro.get_name_leafdata());
    if (rw.is_set || is_set(rw.yfilter)) leaf_name_data.push_back(rw.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "view")
    {
        view = value;
        view.value_namespace = name_space;
        view.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RO")
    {
        ro = value;
        ro.value_namespace = name_space;
        ro.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RW")
    {
        rw = value;
        rw.value_namespace = name_space;
        rw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "view")
    {
        view.yfilter = yfilter;
    }
    if(value_path == "RO")
    {
        ro.yfilter = yfilter;
    }
    if(value_path == "RW")
    {
        rw.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "view" || name == "RO" || name == "RW" || name == "ipv6" || name == "access-list-name")
        return true;
    return false;
}

Native::SnmpServer::Context::Context()
    :
    name{YType::str, "name"}
{

    yang_name = "context"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Context::~Context()
{
}

bool Native::SnmpServer::Context::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::SnmpServer::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::SnmpServer::Context::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:context";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::SnmpServer::Enable::Enable()
    :
    enable_choice(std::make_shared<Native::SnmpServer::Enable::EnableChoice>())
{
    enable_choice->parent = this;

    yang_name = "enable"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::~Enable()
{
}

bool Native::SnmpServer::Enable::has_data() const
{
    if (is_presence_container) return true;
    return (enable_choice !=  nullptr && enable_choice->has_data());
}

bool Native::SnmpServer::Enable::has_operation() const
{
    return is_set(yfilter)
	|| (enable_choice !=  nullptr && enable_choice->has_operation());
}

std::string Native::SnmpServer::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable-choice")
    {
        if(enable_choice == nullptr)
        {
            enable_choice = std::make_shared<Native::SnmpServer::Enable::EnableChoice>();
        }
        return enable_choice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(enable_choice != nullptr)
    {
        _children["enable-choice"] = enable_choice;
    }

    return _children;
}

void Native::SnmpServer::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable-choice")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::EnableChoice()
    :
    informs{YType::empty, "informs"}
        ,
    traps(nullptr) // presence node
{

    yang_name = "enable-choice"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::~EnableChoice()
{
}

bool Native::SnmpServer::Enable::EnableChoice::has_data() const
{
    if (is_presence_container) return true;
    return informs.is_set
	|| (traps !=  nullptr && traps->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(informs.yfilter)
	|| (traps !=  nullptr && traps->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable-choice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (informs.is_set || is_set(informs.yfilter)) leaf_name_data.push_back(informs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traps")
    {
        if(traps == nullptr)
        {
            traps = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps>();
        }
        return traps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(traps != nullptr)
    {
        _children["traps"] = traps;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "informs")
    {
        informs = value;
        informs.value_namespace = name_space;
        informs.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "informs")
    {
        informs.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traps" || name == "informs")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Traps()
    :
    aaa_server{YType::empty, "aaa_server"},
    local_auth{YType::empty, "local-auth"},
    authenticate_fail{YType::empty, "authenticate-fail"},
    bfd{YType::empty, "bfd"},
    bgp{YType::empty, "bgp"},
    bstun{YType::empty, "bstun"},
    c2900{YType::empty, "c2900"},
    casa{YType::empty, "casa"},
    ccme{YType::empty, "ccme"},
    cluster{YType::empty, "cluster"},
    channel{YType::empty, "channel"},
    chassis{YType::empty, "chassis"},
    cnpd{YType::empty, "cnpd"},
    config{YType::empty, "config"},
    copy_config{YType::empty, "copy-config"},
    config_copy{YType::empty, "config-copy"},
    config_ctid{YType::empty, "config-ctid"},
    cpu_threshold{YType::empty, "cpu_threshold"},
    dial{YType::empty, "dial"},
    director{YType::empty, "director"},
    dlsw{YType::empty, "dlsw"},
    deauthenticate{YType::empty, "deauthenticate"},
    disassociate{YType::empty, "disassociate"},
    dnis{YType::empty, "dnis"},
    dot11_qos{YType::empty, "dot11-qos"},
    ds0_busyout{YType::empty, "ds0-busyout"},
    ds1{YType::empty, "ds1"},
    ds1_loopback{YType::empty, "ds1-loopback"},
    ds3{YType::empty, "ds3"},
    dhcp{YType::empty, "dhcp"},
    eigrp{YType::empty, "eigrp"},
    entity_{YType::empty, "entity"},
    ether_oam{YType::empty, "ether-oam"},
    event_manager{YType::empty, "event-manager"},
    flowmon{YType::empty, "flowmon"},
    fru_ctrl{YType::empty, "fru-ctrl"},
    gatekeeper{YType::empty, "gatekeeper"},
    hsrp{YType::empty, "hsrp"},
    icsudsu{YType::empty, "icsudsu"},
    ima{YType::empty, "ima"},
    ipmobile{YType::empty, "ipmobile"},
    ipmulticast{YType::empty, "ipmulticast"},
    ipsla{YType::empty, "ipsla"},
    isis{YType::empty, "isis"},
    module{YType::empty, "module"},
    msdp{YType::empty, "msdp"},
    mvpn{YType::empty, "mvpn"},
    pppoe{YType::empty, "pppoe"},
    rep{YType::empty, "rep"},
    resource_policy{YType::empty, "resource-policy"},
    rf{YType::empty, "rf"},
    rogue_ap{YType::empty, "rogue-ap"},
    rsvp{YType::empty, "rsvp"},
    rtr{YType::empty, "rtr"},
    sonet{YType::empty, "sonet"},
    srst{YType::empty, "srst"},
    srp{YType::empty, "srp"},
    stun{YType::empty, "stun"},
    switch_over{YType::empty, "switch-over"},
    syslog{YType::empty, "syslog"},
    tty{YType::empty, "tty"},
    vlancreate{YType::empty, "vlancreate"},
    vlandelete{YType::empty, "vlandelete"},
    vlan_mac_limit{YType::empty, "vlan-mac-limit"},
    vlan_membership{YType::empty, "vlan-membership"},
    voice{YType::empty, "voice"},
    vrrp{YType::empty, "vrrp"},
    vsimaster{YType::empty, "vsimaster"},
    vtp{YType::empty, "vtp"},
    wlan_wep{YType::empty, "wlan-wep"},
    xgcp{YType::empty, "xgcp"}
        ,
    trustsec_sxp(nullptr) // presence node
    , vswitch(nullptr) // presence node
    , trustsec_server(nullptr) // presence node
    , trustsec(nullptr) // presence node
    , trustsec_interface(nullptr) // presence node
    , trustsec_policy(nullptr) // presence node
    , ospfv3(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3>())
    , ike(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ike>())
    , alarms(nullptr) // presence node
    , atm(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm>())
    , auth_framework(nullptr) // presence node
    , bgp_conf(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf>())
    , bridge(nullptr) // presence node
    , bulkstat(nullptr) // presence node
    , call_home(nullptr) // presence node
    , c6kxbar(nullptr) // presence node
    , cef(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Cef>())
    , cpu(nullptr) // presence node
    , csg(nullptr) // presence node
    , dot1x(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Dot1x>())
    , dsp(nullptr) // presence node
    , energywise(nullptr) // presence node
    , entity_diag(nullptr) // presence node
    , envmon(nullptr) // presence node
    , errdisable(nullptr) // presence node
    , ethernet(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet>())
    , firewall(nullptr) // presence node
    , flash(nullptr) // presence node
    , flex_links(nullptr) // presence node
    , frame_relay(nullptr) // presence node
    , ipsec(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec>())
    , isakmp(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp>())
    , isdn(nullptr) // presence node
    , l2tc(nullptr) // presence node
    , l2tun(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::L2tun>())
    , license(nullptr) // presence node
    , mac_notification(nullptr) // presence node
    , mac_notification2(nullptr) // presence node
    , memory(nullptr) // presence node
    , mpls(nullptr) // presence node
    , nhrp(nullptr) // presence node
    , ospf(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf>())
    , pim(nullptr) // presence node
    , plogd(nullptr) // presence node
    , port_security(nullptr) // presence node
    , power_ethernet(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet>())
    , pw(nullptr) // presence node
    , slb(nullptr) // presence node
    , snmp(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Snmp>())
    , stackwise(nullptr) // presence node
    , stpx(nullptr) // presence node
    , transceiver(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver>())
    , udld(nullptr) // presence node
    , vrfmib(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib>())
    , vstack(nullptr) // presence node
    , wireless(nullptr) // presence node
{
    ospfv3->parent = this;
    ike->parent = this;
    atm->parent = this;
    bgp_conf->parent = this;
    cef->parent = this;
    dot1x->parent = this;
    ethernet->parent = this;
    ipsec->parent = this;
    isakmp->parent = this;
    l2tun->parent = this;
    ospf->parent = this;
    power_ethernet->parent = this;
    snmp->parent = this;
    transceiver->parent = this;
    vrfmib->parent = this;

    yang_name = "traps"; yang_parent_name = "enable-choice"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::~Traps()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::has_data() const
{
    if (is_presence_container) return true;
    return aaa_server.is_set
	|| local_auth.is_set
	|| authenticate_fail.is_set
	|| bfd.is_set
	|| bgp.is_set
	|| bstun.is_set
	|| c2900.is_set
	|| casa.is_set
	|| ccme.is_set
	|| cluster.is_set
	|| channel.is_set
	|| chassis.is_set
	|| cnpd.is_set
	|| config.is_set
	|| copy_config.is_set
	|| config_copy.is_set
	|| config_ctid.is_set
	|| cpu_threshold.is_set
	|| dial.is_set
	|| director.is_set
	|| dlsw.is_set
	|| deauthenticate.is_set
	|| disassociate.is_set
	|| dnis.is_set
	|| dot11_qos.is_set
	|| ds0_busyout.is_set
	|| ds1.is_set
	|| ds1_loopback.is_set
	|| ds3.is_set
	|| dhcp.is_set
	|| eigrp.is_set
	|| entity_.is_set
	|| ether_oam.is_set
	|| event_manager.is_set
	|| flowmon.is_set
	|| fru_ctrl.is_set
	|| gatekeeper.is_set
	|| hsrp.is_set
	|| icsudsu.is_set
	|| ima.is_set
	|| ipmobile.is_set
	|| ipmulticast.is_set
	|| ipsla.is_set
	|| isis.is_set
	|| module.is_set
	|| msdp.is_set
	|| mvpn.is_set
	|| pppoe.is_set
	|| rep.is_set
	|| resource_policy.is_set
	|| rf.is_set
	|| rogue_ap.is_set
	|| rsvp.is_set
	|| rtr.is_set
	|| sonet.is_set
	|| srst.is_set
	|| srp.is_set
	|| stun.is_set
	|| switch_over.is_set
	|| syslog.is_set
	|| tty.is_set
	|| vlancreate.is_set
	|| vlandelete.is_set
	|| vlan_mac_limit.is_set
	|| vlan_membership.is_set
	|| voice.is_set
	|| vrrp.is_set
	|| vsimaster.is_set
	|| vtp.is_set
	|| wlan_wep.is_set
	|| xgcp.is_set
	|| (trustsec_sxp !=  nullptr && trustsec_sxp->has_data())
	|| (vswitch !=  nullptr && vswitch->has_data())
	|| (trustsec_server !=  nullptr && trustsec_server->has_data())
	|| (trustsec !=  nullptr && trustsec->has_data())
	|| (trustsec_interface !=  nullptr && trustsec_interface->has_data())
	|| (trustsec_policy !=  nullptr && trustsec_policy->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (ike !=  nullptr && ike->has_data())
	|| (alarms !=  nullptr && alarms->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (auth_framework !=  nullptr && auth_framework->has_data())
	|| (bgp_conf !=  nullptr && bgp_conf->has_data())
	|| (bridge !=  nullptr && bridge->has_data())
	|| (bulkstat !=  nullptr && bulkstat->has_data())
	|| (call_home !=  nullptr && call_home->has_data())
	|| (c6kxbar !=  nullptr && c6kxbar->has_data())
	|| (cef !=  nullptr && cef->has_data())
	|| (cpu !=  nullptr && cpu->has_data())
	|| (csg !=  nullptr && csg->has_data())
	|| (dot1x !=  nullptr && dot1x->has_data())
	|| (dsp !=  nullptr && dsp->has_data())
	|| (energywise !=  nullptr && energywise->has_data())
	|| (entity_diag !=  nullptr && entity_diag->has_data())
	|| (envmon !=  nullptr && envmon->has_data())
	|| (errdisable !=  nullptr && errdisable->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (firewall !=  nullptr && firewall->has_data())
	|| (flash !=  nullptr && flash->has_data())
	|| (flex_links !=  nullptr && flex_links->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (isdn !=  nullptr && isdn->has_data())
	|| (l2tc !=  nullptr && l2tc->has_data())
	|| (l2tun !=  nullptr && l2tun->has_data())
	|| (license !=  nullptr && license->has_data())
	|| (mac_notification !=  nullptr && mac_notification->has_data())
	|| (mac_notification2 !=  nullptr && mac_notification2->has_data())
	|| (memory !=  nullptr && memory->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (nhrp !=  nullptr && nhrp->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (plogd !=  nullptr && plogd->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (power_ethernet !=  nullptr && power_ethernet->has_data())
	|| (pw !=  nullptr && pw->has_data())
	|| (slb !=  nullptr && slb->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (stackwise !=  nullptr && stackwise->has_data())
	|| (stpx !=  nullptr && stpx->has_data())
	|| (transceiver !=  nullptr && transceiver->has_data())
	|| (udld !=  nullptr && udld->has_data())
	|| (vrfmib !=  nullptr && vrfmib->has_data())
	|| (vstack !=  nullptr && vstack->has_data())
	|| (wireless !=  nullptr && wireless->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_server.yfilter)
	|| ydk::is_set(local_auth.yfilter)
	|| ydk::is_set(authenticate_fail.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(bgp.yfilter)
	|| ydk::is_set(bstun.yfilter)
	|| ydk::is_set(c2900.yfilter)
	|| ydk::is_set(casa.yfilter)
	|| ydk::is_set(ccme.yfilter)
	|| ydk::is_set(cluster.yfilter)
	|| ydk::is_set(channel.yfilter)
	|| ydk::is_set(chassis.yfilter)
	|| ydk::is_set(cnpd.yfilter)
	|| ydk::is_set(config.yfilter)
	|| ydk::is_set(copy_config.yfilter)
	|| ydk::is_set(config_copy.yfilter)
	|| ydk::is_set(config_ctid.yfilter)
	|| ydk::is_set(cpu_threshold.yfilter)
	|| ydk::is_set(dial.yfilter)
	|| ydk::is_set(director.yfilter)
	|| ydk::is_set(dlsw.yfilter)
	|| ydk::is_set(deauthenticate.yfilter)
	|| ydk::is_set(disassociate.yfilter)
	|| ydk::is_set(dnis.yfilter)
	|| ydk::is_set(dot11_qos.yfilter)
	|| ydk::is_set(ds0_busyout.yfilter)
	|| ydk::is_set(ds1.yfilter)
	|| ydk::is_set(ds1_loopback.yfilter)
	|| ydk::is_set(ds3.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(entity_.yfilter)
	|| ydk::is_set(ether_oam.yfilter)
	|| ydk::is_set(event_manager.yfilter)
	|| ydk::is_set(flowmon.yfilter)
	|| ydk::is_set(fru_ctrl.yfilter)
	|| ydk::is_set(gatekeeper.yfilter)
	|| ydk::is_set(hsrp.yfilter)
	|| ydk::is_set(icsudsu.yfilter)
	|| ydk::is_set(ima.yfilter)
	|| ydk::is_set(ipmobile.yfilter)
	|| ydk::is_set(ipmulticast.yfilter)
	|| ydk::is_set(ipsla.yfilter)
	|| ydk::is_set(isis.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(msdp.yfilter)
	|| ydk::is_set(mvpn.yfilter)
	|| ydk::is_set(pppoe.yfilter)
	|| ydk::is_set(rep.yfilter)
	|| ydk::is_set(resource_policy.yfilter)
	|| ydk::is_set(rf.yfilter)
	|| ydk::is_set(rogue_ap.yfilter)
	|| ydk::is_set(rsvp.yfilter)
	|| ydk::is_set(rtr.yfilter)
	|| ydk::is_set(sonet.yfilter)
	|| ydk::is_set(srst.yfilter)
	|| ydk::is_set(srp.yfilter)
	|| ydk::is_set(stun.yfilter)
	|| ydk::is_set(switch_over.yfilter)
	|| ydk::is_set(syslog.yfilter)
	|| ydk::is_set(tty.yfilter)
	|| ydk::is_set(vlancreate.yfilter)
	|| ydk::is_set(vlandelete.yfilter)
	|| ydk::is_set(vlan_mac_limit.yfilter)
	|| ydk::is_set(vlan_membership.yfilter)
	|| ydk::is_set(voice.yfilter)
	|| ydk::is_set(vrrp.yfilter)
	|| ydk::is_set(vsimaster.yfilter)
	|| ydk::is_set(vtp.yfilter)
	|| ydk::is_set(wlan_wep.yfilter)
	|| ydk::is_set(xgcp.yfilter)
	|| (trustsec_sxp !=  nullptr && trustsec_sxp->has_operation())
	|| (vswitch !=  nullptr && vswitch->has_operation())
	|| (trustsec_server !=  nullptr && trustsec_server->has_operation())
	|| (trustsec !=  nullptr && trustsec->has_operation())
	|| (trustsec_interface !=  nullptr && trustsec_interface->has_operation())
	|| (trustsec_policy !=  nullptr && trustsec_policy->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (ike !=  nullptr && ike->has_operation())
	|| (alarms !=  nullptr && alarms->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (auth_framework !=  nullptr && auth_framework->has_operation())
	|| (bgp_conf !=  nullptr && bgp_conf->has_operation())
	|| (bridge !=  nullptr && bridge->has_operation())
	|| (bulkstat !=  nullptr && bulkstat->has_operation())
	|| (call_home !=  nullptr && call_home->has_operation())
	|| (c6kxbar !=  nullptr && c6kxbar->has_operation())
	|| (cef !=  nullptr && cef->has_operation())
	|| (cpu !=  nullptr && cpu->has_operation())
	|| (csg !=  nullptr && csg->has_operation())
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (dsp !=  nullptr && dsp->has_operation())
	|| (energywise !=  nullptr && energywise->has_operation())
	|| (entity_diag !=  nullptr && entity_diag->has_operation())
	|| (envmon !=  nullptr && envmon->has_operation())
	|| (errdisable !=  nullptr && errdisable->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (firewall !=  nullptr && firewall->has_operation())
	|| (flash !=  nullptr && flash->has_operation())
	|| (flex_links !=  nullptr && flex_links->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (isdn !=  nullptr && isdn->has_operation())
	|| (l2tc !=  nullptr && l2tc->has_operation())
	|| (l2tun !=  nullptr && l2tun->has_operation())
	|| (license !=  nullptr && license->has_operation())
	|| (mac_notification !=  nullptr && mac_notification->has_operation())
	|| (mac_notification2 !=  nullptr && mac_notification2->has_operation())
	|| (memory !=  nullptr && memory->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (nhrp !=  nullptr && nhrp->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (plogd !=  nullptr && plogd->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (power_ethernet !=  nullptr && power_ethernet->has_operation())
	|| (pw !=  nullptr && pw->has_operation())
	|| (slb !=  nullptr && slb->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (stackwise !=  nullptr && stackwise->has_operation())
	|| (stpx !=  nullptr && stpx->has_operation())
	|| (transceiver !=  nullptr && transceiver->has_operation())
	|| (udld !=  nullptr && udld->has_operation())
	|| (vrfmib !=  nullptr && vrfmib->has_operation())
	|| (vstack !=  nullptr && vstack->has_operation())
	|| (wireless !=  nullptr && wireless->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_server.is_set || is_set(aaa_server.yfilter)) leaf_name_data.push_back(aaa_server.get_name_leafdata());
    if (local_auth.is_set || is_set(local_auth.yfilter)) leaf_name_data.push_back(local_auth.get_name_leafdata());
    if (authenticate_fail.is_set || is_set(authenticate_fail.yfilter)) leaf_name_data.push_back(authenticate_fail.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());
    if (bstun.is_set || is_set(bstun.yfilter)) leaf_name_data.push_back(bstun.get_name_leafdata());
    if (c2900.is_set || is_set(c2900.yfilter)) leaf_name_data.push_back(c2900.get_name_leafdata());
    if (casa.is_set || is_set(casa.yfilter)) leaf_name_data.push_back(casa.get_name_leafdata());
    if (ccme.is_set || is_set(ccme.yfilter)) leaf_name_data.push_back(ccme.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());
    if (chassis.is_set || is_set(chassis.yfilter)) leaf_name_data.push_back(chassis.get_name_leafdata());
    if (cnpd.is_set || is_set(cnpd.yfilter)) leaf_name_data.push_back(cnpd.get_name_leafdata());
    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());
    if (copy_config.is_set || is_set(copy_config.yfilter)) leaf_name_data.push_back(copy_config.get_name_leafdata());
    if (config_copy.is_set || is_set(config_copy.yfilter)) leaf_name_data.push_back(config_copy.get_name_leafdata());
    if (config_ctid.is_set || is_set(config_ctid.yfilter)) leaf_name_data.push_back(config_ctid.get_name_leafdata());
    if (cpu_threshold.is_set || is_set(cpu_threshold.yfilter)) leaf_name_data.push_back(cpu_threshold.get_name_leafdata());
    if (dial.is_set || is_set(dial.yfilter)) leaf_name_data.push_back(dial.get_name_leafdata());
    if (director.is_set || is_set(director.yfilter)) leaf_name_data.push_back(director.get_name_leafdata());
    if (dlsw.is_set || is_set(dlsw.yfilter)) leaf_name_data.push_back(dlsw.get_name_leafdata());
    if (deauthenticate.is_set || is_set(deauthenticate.yfilter)) leaf_name_data.push_back(deauthenticate.get_name_leafdata());
    if (disassociate.is_set || is_set(disassociate.yfilter)) leaf_name_data.push_back(disassociate.get_name_leafdata());
    if (dnis.is_set || is_set(dnis.yfilter)) leaf_name_data.push_back(dnis.get_name_leafdata());
    if (dot11_qos.is_set || is_set(dot11_qos.yfilter)) leaf_name_data.push_back(dot11_qos.get_name_leafdata());
    if (ds0_busyout.is_set || is_set(ds0_busyout.yfilter)) leaf_name_data.push_back(ds0_busyout.get_name_leafdata());
    if (ds1.is_set || is_set(ds1.yfilter)) leaf_name_data.push_back(ds1.get_name_leafdata());
    if (ds1_loopback.is_set || is_set(ds1_loopback.yfilter)) leaf_name_data.push_back(ds1_loopback.get_name_leafdata());
    if (ds3.is_set || is_set(ds3.yfilter)) leaf_name_data.push_back(ds3.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (entity_.is_set || is_set(entity_.yfilter)) leaf_name_data.push_back(entity_.get_name_leafdata());
    if (ether_oam.is_set || is_set(ether_oam.yfilter)) leaf_name_data.push_back(ether_oam.get_name_leafdata());
    if (event_manager.is_set || is_set(event_manager.yfilter)) leaf_name_data.push_back(event_manager.get_name_leafdata());
    if (flowmon.is_set || is_set(flowmon.yfilter)) leaf_name_data.push_back(flowmon.get_name_leafdata());
    if (fru_ctrl.is_set || is_set(fru_ctrl.yfilter)) leaf_name_data.push_back(fru_ctrl.get_name_leafdata());
    if (gatekeeper.is_set || is_set(gatekeeper.yfilter)) leaf_name_data.push_back(gatekeeper.get_name_leafdata());
    if (hsrp.is_set || is_set(hsrp.yfilter)) leaf_name_data.push_back(hsrp.get_name_leafdata());
    if (icsudsu.is_set || is_set(icsudsu.yfilter)) leaf_name_data.push_back(icsudsu.get_name_leafdata());
    if (ima.is_set || is_set(ima.yfilter)) leaf_name_data.push_back(ima.get_name_leafdata());
    if (ipmobile.is_set || is_set(ipmobile.yfilter)) leaf_name_data.push_back(ipmobile.get_name_leafdata());
    if (ipmulticast.is_set || is_set(ipmulticast.yfilter)) leaf_name_data.push_back(ipmulticast.get_name_leafdata());
    if (ipsla.is_set || is_set(ipsla.yfilter)) leaf_name_data.push_back(ipsla.get_name_leafdata());
    if (isis.is_set || is_set(isis.yfilter)) leaf_name_data.push_back(isis.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (msdp.is_set || is_set(msdp.yfilter)) leaf_name_data.push_back(msdp.get_name_leafdata());
    if (mvpn.is_set || is_set(mvpn.yfilter)) leaf_name_data.push_back(mvpn.get_name_leafdata());
    if (pppoe.is_set || is_set(pppoe.yfilter)) leaf_name_data.push_back(pppoe.get_name_leafdata());
    if (rep.is_set || is_set(rep.yfilter)) leaf_name_data.push_back(rep.get_name_leafdata());
    if (resource_policy.is_set || is_set(resource_policy.yfilter)) leaf_name_data.push_back(resource_policy.get_name_leafdata());
    if (rf.is_set || is_set(rf.yfilter)) leaf_name_data.push_back(rf.get_name_leafdata());
    if (rogue_ap.is_set || is_set(rogue_ap.yfilter)) leaf_name_data.push_back(rogue_ap.get_name_leafdata());
    if (rsvp.is_set || is_set(rsvp.yfilter)) leaf_name_data.push_back(rsvp.get_name_leafdata());
    if (rtr.is_set || is_set(rtr.yfilter)) leaf_name_data.push_back(rtr.get_name_leafdata());
    if (sonet.is_set || is_set(sonet.yfilter)) leaf_name_data.push_back(sonet.get_name_leafdata());
    if (srst.is_set || is_set(srst.yfilter)) leaf_name_data.push_back(srst.get_name_leafdata());
    if (srp.is_set || is_set(srp.yfilter)) leaf_name_data.push_back(srp.get_name_leafdata());
    if (stun.is_set || is_set(stun.yfilter)) leaf_name_data.push_back(stun.get_name_leafdata());
    if (switch_over.is_set || is_set(switch_over.yfilter)) leaf_name_data.push_back(switch_over.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());
    if (tty.is_set || is_set(tty.yfilter)) leaf_name_data.push_back(tty.get_name_leafdata());
    if (vlancreate.is_set || is_set(vlancreate.yfilter)) leaf_name_data.push_back(vlancreate.get_name_leafdata());
    if (vlandelete.is_set || is_set(vlandelete.yfilter)) leaf_name_data.push_back(vlandelete.get_name_leafdata());
    if (vlan_mac_limit.is_set || is_set(vlan_mac_limit.yfilter)) leaf_name_data.push_back(vlan_mac_limit.get_name_leafdata());
    if (vlan_membership.is_set || is_set(vlan_membership.yfilter)) leaf_name_data.push_back(vlan_membership.get_name_leafdata());
    if (voice.is_set || is_set(voice.yfilter)) leaf_name_data.push_back(voice.get_name_leafdata());
    if (vrrp.is_set || is_set(vrrp.yfilter)) leaf_name_data.push_back(vrrp.get_name_leafdata());
    if (vsimaster.is_set || is_set(vsimaster.yfilter)) leaf_name_data.push_back(vsimaster.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());
    if (wlan_wep.is_set || is_set(wlan_wep.yfilter)) leaf_name_data.push_back(wlan_wep.get_name_leafdata());
    if (xgcp.is_set || is_set(xgcp.yfilter)) leaf_name_data.push_back(xgcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trustsec-sxp")
    {
        if(trustsec_sxp == nullptr)
        {
            trustsec_sxp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp>();
        }
        return trustsec_sxp;
    }

    if(child_yang_name == "vswitch")
    {
        if(vswitch == nullptr)
        {
            vswitch = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch>();
        }
        return vswitch;
    }

    if(child_yang_name == "trustsec-server")
    {
        if(trustsec_server == nullptr)
        {
            trustsec_server = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer>();
        }
        return trustsec_server;
    }

    if(child_yang_name == "trustsec")
    {
        if(trustsec == nullptr)
        {
            trustsec = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec>();
        }
        return trustsec;
    }

    if(child_yang_name == "trustsec-interface")
    {
        if(trustsec_interface == nullptr)
        {
            trustsec_interface = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface>();
        }
        return trustsec_interface;
    }

    if(child_yang_name == "trustsec-policy")
    {
        if(trustsec_policy == nullptr)
        {
            trustsec_policy = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy>();
        }
        return trustsec_policy;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "ike")
    {
        if(ike == nullptr)
        {
            ike = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ike>();
        }
        return ike;
    }

    if(child_yang_name == "alarms")
    {
        if(alarms == nullptr)
        {
            alarms = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Alarms>();
        }
        return alarms;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "auth-framework")
    {
        if(auth_framework == nullptr)
        {
            auth_framework = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework>();
        }
        return auth_framework;
    }

    if(child_yang_name == "bgp-conf")
    {
        if(bgp_conf == nullptr)
        {
            bgp_conf = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf>();
        }
        return bgp_conf;
    }

    if(child_yang_name == "bridge")
    {
        if(bridge == nullptr)
        {
            bridge = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Bridge>();
        }
        return bridge;
    }

    if(child_yang_name == "bulkstat")
    {
        if(bulkstat == nullptr)
        {
            bulkstat = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat>();
        }
        return bulkstat;
    }

    if(child_yang_name == "call-home")
    {
        if(call_home == nullptr)
        {
            call_home = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::CallHome>();
        }
        return call_home;
    }

    if(child_yang_name == "c6kxbar")
    {
        if(c6kxbar == nullptr)
        {
            c6kxbar = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::C6kxbar>();
        }
        return c6kxbar;
    }

    if(child_yang_name == "cef")
    {
        if(cef == nullptr)
        {
            cef = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Cef>();
        }
        return cef;
    }

    if(child_yang_name == "cpu")
    {
        if(cpu == nullptr)
        {
            cpu = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Cpu>();
        }
        return cpu;
    }

    if(child_yang_name == "csg")
    {
        if(csg == nullptr)
        {
            csg = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Csg>();
        }
        return csg;
    }

    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Dot1x>();
        }
        return dot1x;
    }

    if(child_yang_name == "dsp")
    {
        if(dsp == nullptr)
        {
            dsp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Dsp>();
        }
        return dsp;
    }

    if(child_yang_name == "energywise")
    {
        if(energywise == nullptr)
        {
            energywise = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Energywise>();
        }
        return energywise;
    }

    if(child_yang_name == "entity-diag")
    {
        if(entity_diag == nullptr)
        {
            entity_diag = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag>();
        }
        return entity_diag;
    }

    if(child_yang_name == "envmon")
    {
        if(envmon == nullptr)
        {
            envmon = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Envmon>();
        }
        return envmon;
    }

    if(child_yang_name == "errdisable")
    {
        if(errdisable == nullptr)
        {
            errdisable = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable>();
        }
        return errdisable;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "firewall")
    {
        if(firewall == nullptr)
        {
            firewall = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Firewall>();
        }
        return firewall;
    }

    if(child_yang_name == "flash")
    {
        if(flash == nullptr)
        {
            flash = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Flash>();
        }
        return flash;
    }

    if(child_yang_name == "flex-links")
    {
        if(flex_links == nullptr)
        {
            flex_links = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks>();
        }
        return flex_links;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay>();
        }
        return frame_relay;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp>();
        }
        return isakmp;
    }

    if(child_yang_name == "isdn")
    {
        if(isdn == nullptr)
        {
            isdn = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isdn>();
        }
        return isdn;
    }

    if(child_yang_name == "l2tc")
    {
        if(l2tc == nullptr)
        {
            l2tc = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::L2tc>();
        }
        return l2tc;
    }

    if(child_yang_name == "l2tun")
    {
        if(l2tun == nullptr)
        {
            l2tun = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::L2tun>();
        }
        return l2tun;
    }

    if(child_yang_name == "license")
    {
        if(license == nullptr)
        {
            license = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::License>();
        }
        return license;
    }

    if(child_yang_name == "mac-notification")
    {
        if(mac_notification == nullptr)
        {
            mac_notification = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification>();
        }
        return mac_notification;
    }

    if(child_yang_name == "mac-notification2")
    {
        if(mac_notification2 == nullptr)
        {
            mac_notification2 = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2>();
        }
        return mac_notification2;
    }

    if(child_yang_name == "memory")
    {
        if(memory == nullptr)
        {
            memory = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Memory>();
        }
        return memory;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "nhrp")
    {
        if(nhrp == nullptr)
        {
            nhrp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp>();
        }
        return nhrp;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "plogd")
    {
        if(plogd == nullptr)
        {
            plogd = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Plogd>();
        }
        return plogd;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "power-ethernet")
    {
        if(power_ethernet == nullptr)
        {
            power_ethernet = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet>();
        }
        return power_ethernet;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Pw>();
        }
        return pw;
    }

    if(child_yang_name == "slb")
    {
        if(slb == nullptr)
        {
            slb = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Slb>();
        }
        return slb;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "stackwise")
    {
        if(stackwise == nullptr)
        {
            stackwise = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise>();
        }
        return stackwise;
    }

    if(child_yang_name == "stpx")
    {
        if(stpx == nullptr)
        {
            stpx = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Stpx>();
        }
        return stpx;
    }

    if(child_yang_name == "transceiver")
    {
        if(transceiver == nullptr)
        {
            transceiver = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver>();
        }
        return transceiver;
    }

    if(child_yang_name == "udld")
    {
        if(udld == nullptr)
        {
            udld = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Udld>();
        }
        return udld;
    }

    if(child_yang_name == "vrfmib")
    {
        if(vrfmib == nullptr)
        {
            vrfmib = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib>();
        }
        return vrfmib;
    }

    if(child_yang_name == "vstack")
    {
        if(vstack == nullptr)
        {
            vstack = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Vstack>();
        }
        return vstack;
    }

    if(child_yang_name == "wireless")
    {
        if(wireless == nullptr)
        {
            wireless = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Wireless>();
        }
        return wireless;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trustsec_sxp != nullptr)
    {
        _children["trustsec-sxp"] = trustsec_sxp;
    }

    if(vswitch != nullptr)
    {
        _children["vswitch"] = vswitch;
    }

    if(trustsec_server != nullptr)
    {
        _children["trustsec-server"] = trustsec_server;
    }

    if(trustsec != nullptr)
    {
        _children["trustsec"] = trustsec;
    }

    if(trustsec_interface != nullptr)
    {
        _children["trustsec-interface"] = trustsec_interface;
    }

    if(trustsec_policy != nullptr)
    {
        _children["trustsec-policy"] = trustsec_policy;
    }

    if(ospfv3 != nullptr)
    {
        _children["ospfv3"] = ospfv3;
    }

    if(ike != nullptr)
    {
        _children["ike"] = ike;
    }

    if(alarms != nullptr)
    {
        _children["alarms"] = alarms;
    }

    if(atm != nullptr)
    {
        _children["atm"] = atm;
    }

    if(auth_framework != nullptr)
    {
        _children["auth-framework"] = auth_framework;
    }

    if(bgp_conf != nullptr)
    {
        _children["bgp-conf"] = bgp_conf;
    }

    if(bridge != nullptr)
    {
        _children["bridge"] = bridge;
    }

    if(bulkstat != nullptr)
    {
        _children["bulkstat"] = bulkstat;
    }

    if(call_home != nullptr)
    {
        _children["call-home"] = call_home;
    }

    if(c6kxbar != nullptr)
    {
        _children["c6kxbar"] = c6kxbar;
    }

    if(cef != nullptr)
    {
        _children["cef"] = cef;
    }

    if(cpu != nullptr)
    {
        _children["cpu"] = cpu;
    }

    if(csg != nullptr)
    {
        _children["csg"] = csg;
    }

    if(dot1x != nullptr)
    {
        _children["dot1x"] = dot1x;
    }

    if(dsp != nullptr)
    {
        _children["dsp"] = dsp;
    }

    if(energywise != nullptr)
    {
        _children["energywise"] = energywise;
    }

    if(entity_diag != nullptr)
    {
        _children["entity-diag"] = entity_diag;
    }

    if(envmon != nullptr)
    {
        _children["envmon"] = envmon;
    }

    if(errdisable != nullptr)
    {
        _children["errdisable"] = errdisable;
    }

    if(ethernet != nullptr)
    {
        _children["ethernet"] = ethernet;
    }

    if(firewall != nullptr)
    {
        _children["firewall"] = firewall;
    }

    if(flash != nullptr)
    {
        _children["flash"] = flash;
    }

    if(flex_links != nullptr)
    {
        _children["flex-links"] = flex_links;
    }

    if(frame_relay != nullptr)
    {
        _children["frame-relay"] = frame_relay;
    }

    if(ipsec != nullptr)
    {
        _children["ipsec"] = ipsec;
    }

    if(isakmp != nullptr)
    {
        _children["isakmp"] = isakmp;
    }

    if(isdn != nullptr)
    {
        _children["isdn"] = isdn;
    }

    if(l2tc != nullptr)
    {
        _children["l2tc"] = l2tc;
    }

    if(l2tun != nullptr)
    {
        _children["l2tun"] = l2tun;
    }

    if(license != nullptr)
    {
        _children["license"] = license;
    }

    if(mac_notification != nullptr)
    {
        _children["mac-notification"] = mac_notification;
    }

    if(mac_notification2 != nullptr)
    {
        _children["mac-notification2"] = mac_notification2;
    }

    if(memory != nullptr)
    {
        _children["memory"] = memory;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(nhrp != nullptr)
    {
        _children["nhrp"] = nhrp;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(pim != nullptr)
    {
        _children["pim"] = pim;
    }

    if(plogd != nullptr)
    {
        _children["plogd"] = plogd;
    }

    if(port_security != nullptr)
    {
        _children["port-security"] = port_security;
    }

    if(power_ethernet != nullptr)
    {
        _children["power-ethernet"] = power_ethernet;
    }

    if(pw != nullptr)
    {
        _children["pw"] = pw;
    }

    if(slb != nullptr)
    {
        _children["slb"] = slb;
    }

    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    if(stackwise != nullptr)
    {
        _children["stackwise"] = stackwise;
    }

    if(stpx != nullptr)
    {
        _children["stpx"] = stpx;
    }

    if(transceiver != nullptr)
    {
        _children["transceiver"] = transceiver;
    }

    if(udld != nullptr)
    {
        _children["udld"] = udld;
    }

    if(vrfmib != nullptr)
    {
        _children["vrfmib"] = vrfmib;
    }

    if(vstack != nullptr)
    {
        _children["vstack"] = vstack;
    }

    if(wireless != nullptr)
    {
        _children["wireless"] = wireless;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa_server")
    {
        aaa_server = value;
        aaa_server.value_namespace = name_space;
        aaa_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-auth")
    {
        local_auth = value;
        local_auth.value_namespace = name_space;
        local_auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authenticate-fail")
    {
        authenticate_fail = value;
        authenticate_fail.value_namespace = name_space;
        authenticate_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bstun")
    {
        bstun = value;
        bstun.value_namespace = name_space;
        bstun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "c2900")
    {
        c2900 = value;
        c2900.value_namespace = name_space;
        c2900.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casa")
    {
        casa = value;
        casa.value_namespace = name_space;
        casa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccme")
    {
        ccme = value;
        ccme.value_namespace = name_space;
        ccme.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis")
    {
        chassis = value;
        chassis.value_namespace = name_space;
        chassis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpd")
    {
        cnpd = value;
        cnpd.value_namespace = name_space;
        cnpd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "copy-config")
    {
        copy_config = value;
        copy_config.value_namespace = name_space;
        copy_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-copy")
    {
        config_copy = value;
        config_copy.value_namespace = name_space;
        config_copy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-ctid")
    {
        config_ctid = value;
        config_ctid.value_namespace = name_space;
        config_ctid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu_threshold")
    {
        cpu_threshold = value;
        cpu_threshold.value_namespace = name_space;
        cpu_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dial")
    {
        dial = value;
        dial.value_namespace = name_space;
        dial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "director")
    {
        director = value;
        director.value_namespace = name_space;
        director.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlsw")
    {
        dlsw = value;
        dlsw.value_namespace = name_space;
        dlsw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deauthenticate")
    {
        deauthenticate = value;
        deauthenticate.value_namespace = name_space;
        deauthenticate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disassociate")
    {
        disassociate = value;
        disassociate.value_namespace = name_space;
        disassociate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnis")
    {
        dnis = value;
        dnis.value_namespace = name_space;
        dnis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot11-qos")
    {
        dot11_qos = value;
        dot11_qos.value_namespace = name_space;
        dot11_qos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ds0-busyout")
    {
        ds0_busyout = value;
        ds0_busyout.value_namespace = name_space;
        ds0_busyout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ds1")
    {
        ds1 = value;
        ds1.value_namespace = name_space;
        ds1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ds1-loopback")
    {
        ds1_loopback = value;
        ds1_loopback.value_namespace = name_space;
        ds1_loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ds3")
    {
        ds3 = value;
        ds3.value_namespace = name_space;
        ds3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entity")
    {
        entity_ = value;
        entity_.value_namespace = name_space;
        entity_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ether-oam")
    {
        ether_oam = value;
        ether_oam.value_namespace = name_space;
        ether_oam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-manager")
    {
        event_manager = value;
        event_manager.value_namespace = name_space;
        event_manager.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowmon")
    {
        flowmon = value;
        flowmon.value_namespace = name_space;
        flowmon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fru-ctrl")
    {
        fru_ctrl = value;
        fru_ctrl.value_namespace = name_space;
        fru_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gatekeeper")
    {
        gatekeeper = value;
        gatekeeper.value_namespace = name_space;
        gatekeeper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hsrp")
    {
        hsrp = value;
        hsrp.value_namespace = name_space;
        hsrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icsudsu")
    {
        icsudsu = value;
        icsudsu.value_namespace = name_space;
        icsudsu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ima")
    {
        ima = value;
        ima.value_namespace = name_space;
        ima.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipmobile")
    {
        ipmobile = value;
        ipmobile.value_namespace = name_space;
        ipmobile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipmulticast")
    {
        ipmulticast = value;
        ipmulticast.value_namespace = name_space;
        ipmulticast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsla")
    {
        ipsla = value;
        ipsla.value_namespace = name_space;
        ipsla.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis")
    {
        isis = value;
        isis.value_namespace = name_space;
        isis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdp")
    {
        msdp = value;
        msdp.value_namespace = name_space;
        msdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn")
    {
        mvpn = value;
        mvpn.value_namespace = name_space;
        mvpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe")
    {
        pppoe = value;
        pppoe.value_namespace = name_space;
        pppoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rep")
    {
        rep = value;
        rep.value_namespace = name_space;
        rep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-policy")
    {
        resource_policy = value;
        resource_policy.value_namespace = name_space;
        resource_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rf")
    {
        rf = value;
        rf.value_namespace = name_space;
        rf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rogue-ap")
    {
        rogue_ap = value;
        rogue_ap.value_namespace = name_space;
        rogue_ap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp")
    {
        rsvp = value;
        rsvp.value_namespace = name_space;
        rsvp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr")
    {
        rtr = value;
        rtr.value_namespace = name_space;
        rtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet")
    {
        sonet = value;
        sonet.value_namespace = name_space;
        sonet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srst")
    {
        srst = value;
        srst.value_namespace = name_space;
        srst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srp")
    {
        srp = value;
        srp.value_namespace = name_space;
        srp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stun")
    {
        stun = value;
        stun.value_namespace = name_space;
        stun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-over")
    {
        switch_over = value;
        switch_over.value_namespace = name_space;
        switch_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tty")
    {
        tty = value;
        tty.value_namespace = name_space;
        tty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlancreate")
    {
        vlancreate = value;
        vlancreate.value_namespace = name_space;
        vlancreate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlandelete")
    {
        vlandelete = value;
        vlandelete.value_namespace = name_space;
        vlandelete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-mac-limit")
    {
        vlan_mac_limit = value;
        vlan_mac_limit.value_namespace = name_space;
        vlan_mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-membership")
    {
        vlan_membership = value;
        vlan_membership.value_namespace = name_space;
        vlan_membership.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voice")
    {
        voice = value;
        voice.value_namespace = name_space;
        voice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrrp")
    {
        vrrp = value;
        vrrp.value_namespace = name_space;
        vrrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vsimaster")
    {
        vsimaster = value;
        vsimaster.value_namespace = name_space;
        vsimaster.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlan-wep")
    {
        wlan_wep = value;
        wlan_wep.value_namespace = name_space;
        wlan_wep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xgcp")
    {
        xgcp = value;
        xgcp.value_namespace = name_space;
        xgcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa_server")
    {
        aaa_server.yfilter = yfilter;
    }
    if(value_path == "local-auth")
    {
        local_auth.yfilter = yfilter;
    }
    if(value_path == "authenticate-fail")
    {
        authenticate_fail.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
    if(value_path == "bstun")
    {
        bstun.yfilter = yfilter;
    }
    if(value_path == "c2900")
    {
        c2900.yfilter = yfilter;
    }
    if(value_path == "casa")
    {
        casa.yfilter = yfilter;
    }
    if(value_path == "ccme")
    {
        ccme.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
    if(value_path == "chassis")
    {
        chassis.yfilter = yfilter;
    }
    if(value_path == "cnpd")
    {
        cnpd.yfilter = yfilter;
    }
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
    if(value_path == "copy-config")
    {
        copy_config.yfilter = yfilter;
    }
    if(value_path == "config-copy")
    {
        config_copy.yfilter = yfilter;
    }
    if(value_path == "config-ctid")
    {
        config_ctid.yfilter = yfilter;
    }
    if(value_path == "cpu_threshold")
    {
        cpu_threshold.yfilter = yfilter;
    }
    if(value_path == "dial")
    {
        dial.yfilter = yfilter;
    }
    if(value_path == "director")
    {
        director.yfilter = yfilter;
    }
    if(value_path == "dlsw")
    {
        dlsw.yfilter = yfilter;
    }
    if(value_path == "deauthenticate")
    {
        deauthenticate.yfilter = yfilter;
    }
    if(value_path == "disassociate")
    {
        disassociate.yfilter = yfilter;
    }
    if(value_path == "dnis")
    {
        dnis.yfilter = yfilter;
    }
    if(value_path == "dot11-qos")
    {
        dot11_qos.yfilter = yfilter;
    }
    if(value_path == "ds0-busyout")
    {
        ds0_busyout.yfilter = yfilter;
    }
    if(value_path == "ds1")
    {
        ds1.yfilter = yfilter;
    }
    if(value_path == "ds1-loopback")
    {
        ds1_loopback.yfilter = yfilter;
    }
    if(value_path == "ds3")
    {
        ds3.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "entity")
    {
        entity_.yfilter = yfilter;
    }
    if(value_path == "ether-oam")
    {
        ether_oam.yfilter = yfilter;
    }
    if(value_path == "event-manager")
    {
        event_manager.yfilter = yfilter;
    }
    if(value_path == "flowmon")
    {
        flowmon.yfilter = yfilter;
    }
    if(value_path == "fru-ctrl")
    {
        fru_ctrl.yfilter = yfilter;
    }
    if(value_path == "gatekeeper")
    {
        gatekeeper.yfilter = yfilter;
    }
    if(value_path == "hsrp")
    {
        hsrp.yfilter = yfilter;
    }
    if(value_path == "icsudsu")
    {
        icsudsu.yfilter = yfilter;
    }
    if(value_path == "ima")
    {
        ima.yfilter = yfilter;
    }
    if(value_path == "ipmobile")
    {
        ipmobile.yfilter = yfilter;
    }
    if(value_path == "ipmulticast")
    {
        ipmulticast.yfilter = yfilter;
    }
    if(value_path == "ipsla")
    {
        ipsla.yfilter = yfilter;
    }
    if(value_path == "isis")
    {
        isis.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "msdp")
    {
        msdp.yfilter = yfilter;
    }
    if(value_path == "mvpn")
    {
        mvpn.yfilter = yfilter;
    }
    if(value_path == "pppoe")
    {
        pppoe.yfilter = yfilter;
    }
    if(value_path == "rep")
    {
        rep.yfilter = yfilter;
    }
    if(value_path == "resource-policy")
    {
        resource_policy.yfilter = yfilter;
    }
    if(value_path == "rf")
    {
        rf.yfilter = yfilter;
    }
    if(value_path == "rogue-ap")
    {
        rogue_ap.yfilter = yfilter;
    }
    if(value_path == "rsvp")
    {
        rsvp.yfilter = yfilter;
    }
    if(value_path == "rtr")
    {
        rtr.yfilter = yfilter;
    }
    if(value_path == "sonet")
    {
        sonet.yfilter = yfilter;
    }
    if(value_path == "srst")
    {
        srst.yfilter = yfilter;
    }
    if(value_path == "srp")
    {
        srp.yfilter = yfilter;
    }
    if(value_path == "stun")
    {
        stun.yfilter = yfilter;
    }
    if(value_path == "switch-over")
    {
        switch_over.yfilter = yfilter;
    }
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
    if(value_path == "tty")
    {
        tty.yfilter = yfilter;
    }
    if(value_path == "vlancreate")
    {
        vlancreate.yfilter = yfilter;
    }
    if(value_path == "vlandelete")
    {
        vlandelete.yfilter = yfilter;
    }
    if(value_path == "vlan-mac-limit")
    {
        vlan_mac_limit.yfilter = yfilter;
    }
    if(value_path == "vlan-membership")
    {
        vlan_membership.yfilter = yfilter;
    }
    if(value_path == "voice")
    {
        voice.yfilter = yfilter;
    }
    if(value_path == "vrrp")
    {
        vrrp.yfilter = yfilter;
    }
    if(value_path == "vsimaster")
    {
        vsimaster.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
    if(value_path == "wlan-wep")
    {
        wlan_wep.yfilter = yfilter;
    }
    if(value_path == "xgcp")
    {
        xgcp.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustsec-sxp" || name == "vswitch" || name == "trustsec-server" || name == "trustsec" || name == "trustsec-interface" || name == "trustsec-policy" || name == "ospfv3" || name == "ike" || name == "alarms" || name == "atm" || name == "auth-framework" || name == "bgp-conf" || name == "bridge" || name == "bulkstat" || name == "call-home" || name == "c6kxbar" || name == "cef" || name == "cpu" || name == "csg" || name == "dot1x" || name == "dsp" || name == "energywise" || name == "entity-diag" || name == "envmon" || name == "errdisable" || name == "ethernet" || name == "firewall" || name == "flash" || name == "flex-links" || name == "frame-relay" || name == "ipsec" || name == "isakmp" || name == "isdn" || name == "l2tc" || name == "l2tun" || name == "license" || name == "mac-notification" || name == "mac-notification2" || name == "memory" || name == "mpls" || name == "nhrp" || name == "ospf" || name == "pim" || name == "plogd" || name == "port-security" || name == "power-ethernet" || name == "pw" || name == "slb" || name == "snmp" || name == "stackwise" || name == "stpx" || name == "transceiver" || name == "udld" || name == "vrfmib" || name == "vstack" || name == "wireless" || name == "aaa_server" || name == "local-auth" || name == "authenticate-fail" || name == "bfd" || name == "bgp" || name == "bstun" || name == "c2900" || name == "casa" || name == "ccme" || name == "cluster" || name == "channel" || name == "chassis" || name == "cnpd" || name == "config" || name == "copy-config" || name == "config-copy" || name == "config-ctid" || name == "cpu_threshold" || name == "dial" || name == "director" || name == "dlsw" || name == "deauthenticate" || name == "disassociate" || name == "dnis" || name == "dot11-qos" || name == "ds0-busyout" || name == "ds1" || name == "ds1-loopback" || name == "ds3" || name == "dhcp" || name == "eigrp" || name == "entity" || name == "ether-oam" || name == "event-manager" || name == "flowmon" || name == "fru-ctrl" || name == "gatekeeper" || name == "hsrp" || name == "icsudsu" || name == "ima" || name == "ipmobile" || name == "ipmulticast" || name == "ipsla" || name == "isis" || name == "module" || name == "msdp" || name == "mvpn" || name == "pppoe" || name == "rep" || name == "resource-policy" || name == "rf" || name == "rogue-ap" || name == "rsvp" || name == "rtr" || name == "sonet" || name == "srst" || name == "srp" || name == "stun" || name == "switch-over" || name == "syslog" || name == "tty" || name == "vlancreate" || name == "vlandelete" || name == "vlan-mac-limit" || name == "vlan-membership" || name == "voice" || name == "vrrp" || name == "vsimaster" || name == "vtp" || name == "wlan-wep" || name == "xgcp")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::TrustsecSxp()
    :
    binding_conflict{YType::empty, "binding-conflict"},
    binding_err{YType::empty, "binding-err"},
    binding_expn_fail{YType::empty, "binding-expn-fail"},
    conn_config_err{YType::empty, "conn-config-err"},
    conn_down{YType::empty, "conn-down"},
    conn_srcaddr_err{YType::empty, "conn-srcaddr-err"},
    conn_up{YType::empty, "conn-up"},
    msg_parse_err{YType::empty, "msg-parse-err"},
    oper_nodeid_change{YType::empty, "oper-nodeid-change"}
{

    yang_name = "trustsec-sxp"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::~TrustsecSxp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::has_data() const
{
    if (is_presence_container) return true;
    return binding_conflict.is_set
	|| binding_err.is_set
	|| binding_expn_fail.is_set
	|| conn_config_err.is_set
	|| conn_down.is_set
	|| conn_srcaddr_err.is_set
	|| conn_up.is_set
	|| msg_parse_err.is_set
	|| oper_nodeid_change.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(binding_conflict.yfilter)
	|| ydk::is_set(binding_err.yfilter)
	|| ydk::is_set(binding_expn_fail.yfilter)
	|| ydk::is_set(conn_config_err.yfilter)
	|| ydk::is_set(conn_down.yfilter)
	|| ydk::is_set(conn_srcaddr_err.yfilter)
	|| ydk::is_set(conn_up.yfilter)
	|| ydk::is_set(msg_parse_err.yfilter)
	|| ydk::is_set(oper_nodeid_change.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustsec-sxp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_conflict.is_set || is_set(binding_conflict.yfilter)) leaf_name_data.push_back(binding_conflict.get_name_leafdata());
    if (binding_err.is_set || is_set(binding_err.yfilter)) leaf_name_data.push_back(binding_err.get_name_leafdata());
    if (binding_expn_fail.is_set || is_set(binding_expn_fail.yfilter)) leaf_name_data.push_back(binding_expn_fail.get_name_leafdata());
    if (conn_config_err.is_set || is_set(conn_config_err.yfilter)) leaf_name_data.push_back(conn_config_err.get_name_leafdata());
    if (conn_down.is_set || is_set(conn_down.yfilter)) leaf_name_data.push_back(conn_down.get_name_leafdata());
    if (conn_srcaddr_err.is_set || is_set(conn_srcaddr_err.yfilter)) leaf_name_data.push_back(conn_srcaddr_err.get_name_leafdata());
    if (conn_up.is_set || is_set(conn_up.yfilter)) leaf_name_data.push_back(conn_up.get_name_leafdata());
    if (msg_parse_err.is_set || is_set(msg_parse_err.yfilter)) leaf_name_data.push_back(msg_parse_err.get_name_leafdata());
    if (oper_nodeid_change.is_set || is_set(oper_nodeid_change.yfilter)) leaf_name_data.push_back(oper_nodeid_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "binding-conflict")
    {
        binding_conflict = value;
        binding_conflict.value_namespace = name_space;
        binding_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-err")
    {
        binding_err = value;
        binding_err.value_namespace = name_space;
        binding_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-expn-fail")
    {
        binding_expn_fail = value;
        binding_expn_fail.value_namespace = name_space;
        binding_expn_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-config-err")
    {
        conn_config_err = value;
        conn_config_err.value_namespace = name_space;
        conn_config_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-down")
    {
        conn_down = value;
        conn_down.value_namespace = name_space;
        conn_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-srcaddr-err")
    {
        conn_srcaddr_err = value;
        conn_srcaddr_err.value_namespace = name_space;
        conn_srcaddr_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-up")
    {
        conn_up = value;
        conn_up.value_namespace = name_space;
        conn_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-parse-err")
    {
        msg_parse_err = value;
        msg_parse_err.value_namespace = name_space;
        msg_parse_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-nodeid-change")
    {
        oper_nodeid_change = value;
        oper_nodeid_change.value_namespace = name_space;
        oper_nodeid_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "binding-conflict")
    {
        binding_conflict.yfilter = yfilter;
    }
    if(value_path == "binding-err")
    {
        binding_err.yfilter = yfilter;
    }
    if(value_path == "binding-expn-fail")
    {
        binding_expn_fail.yfilter = yfilter;
    }
    if(value_path == "conn-config-err")
    {
        conn_config_err.yfilter = yfilter;
    }
    if(value_path == "conn-down")
    {
        conn_down.yfilter = yfilter;
    }
    if(value_path == "conn-srcaddr-err")
    {
        conn_srcaddr_err.yfilter = yfilter;
    }
    if(value_path == "conn-up")
    {
        conn_up.yfilter = yfilter;
    }
    if(value_path == "msg-parse-err")
    {
        msg_parse_err.yfilter = yfilter;
    }
    if(value_path == "oper-nodeid-change")
    {
        oper_nodeid_change.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-conflict" || name == "binding-err" || name == "binding-expn-fail" || name == "conn-config-err" || name == "conn-down" || name == "conn-srcaddr-err" || name == "conn-up" || name == "msg-parse-err" || name == "oper-nodeid-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::Vswitch()
    :
    dual_active(nullptr) // presence node
{

    yang_name = "vswitch"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::~Vswitch()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::has_data() const
{
    if (is_presence_container) return true;
    return (dual_active !=  nullptr && dual_active->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::has_operation() const
{
    return is_set(yfilter)
	|| (dual_active !=  nullptr && dual_active->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vswitch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dual-active")
    {
        if(dual_active == nullptr)
        {
            dual_active = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive>();
        }
        return dual_active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dual_active != nullptr)
    {
        _children["dual-active"] = dual_active;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-active")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::DualActive()
    :
    vsl{YType::empty, "vsl"}
{

    yang_name = "dual-active"; yang_parent_name = "vswitch"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::~DualActive()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::has_data() const
{
    if (is_presence_container) return true;
    return vsl.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vsl.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/vswitch/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dual-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vsl.is_set || is_set(vsl.yfilter)) leaf_name_data.push_back(vsl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vsl")
    {
        vsl = value;
        vsl.value_namespace = name_space;
        vsl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vsl")
    {
        vsl.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsl")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::TrustsecServer()
    :
    radius_server(nullptr) // presence node
{

    yang_name = "trustsec-server"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::~TrustsecServer()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::has_data() const
{
    if (is_presence_container) return true;
    return (radius_server !=  nullptr && radius_server->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::has_operation() const
{
    return is_set(yfilter)
	|| (radius_server !=  nullptr && radius_server->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustsec-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radius-server")
    {
        if(radius_server == nullptr)
        {
            radius_server = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer>();
        }
        return radius_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(radius_server != nullptr)
    {
        _children["radius-server"] = radius_server;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius-server")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::RadiusServer()
    :
    provision_secret{YType::empty, "provision-secret"}
{

    yang_name = "radius-server"; yang_parent_name = "trustsec-server"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::~RadiusServer()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::has_data() const
{
    if (is_presence_container) return true;
    return provision_secret.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(provision_secret.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (provision_secret.is_set || is_set(provision_secret.yfilter)) leaf_name_data.push_back(provision_secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "provision-secret")
    {
        provision_secret = value;
        provision_secret.value_namespace = name_space;
        provision_secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "provision-secret")
    {
        provision_secret.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "provision-secret")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::Trustsec()
    :
    authz_file_error(nullptr) // presence node
{

    yang_name = "trustsec"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::~Trustsec()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::has_data() const
{
    if (is_presence_container) return true;
    return (authz_file_error !=  nullptr && authz_file_error->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::has_operation() const
{
    return is_set(yfilter)
	|| (authz_file_error !=  nullptr && authz_file_error->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authz-file-error")
    {
        if(authz_file_error == nullptr)
        {
            authz_file_error = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError>();
        }
        return authz_file_error;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authz_file_error != nullptr)
    {
        _children["authz-file-error"] = authz_file_error;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authz-file-error")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::AuthzFileError()
    :
    cache_file_error(nullptr) // presence node
{

    yang_name = "authz-file-error"; yang_parent_name = "trustsec"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::~AuthzFileError()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::has_data() const
{
    if (is_presence_container) return true;
    return (cache_file_error !=  nullptr && cache_file_error->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::has_operation() const
{
    return is_set(yfilter)
	|| (cache_file_error !=  nullptr && cache_file_error->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authz-file-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache-file-error")
    {
        if(cache_file_error == nullptr)
        {
            cache_file_error = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError>();
        }
        return cache_file_error;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cache_file_error != nullptr)
    {
        _children["cache-file-error"] = cache_file_error;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-file-error")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::CacheFileError()
    :
    keystore_file_error(nullptr) // presence node
{

    yang_name = "cache-file-error"; yang_parent_name = "authz-file-error"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::~CacheFileError()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::has_data() const
{
    if (is_presence_container) return true;
    return (keystore_file_error !=  nullptr && keystore_file_error->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::has_operation() const
{
    return is_set(yfilter)
	|| (keystore_file_error !=  nullptr && keystore_file_error->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec/authz-file-error/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache-file-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keystore-file-error")
    {
        if(keystore_file_error == nullptr)
        {
            keystore_file_error = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError>();
        }
        return keystore_file_error;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(keystore_file_error != nullptr)
    {
        _children["keystore-file-error"] = keystore_file_error;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keystore-file-error")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreFileError()
    :
    keystore_sync_fail(nullptr) // presence node
{

    yang_name = "keystore-file-error"; yang_parent_name = "cache-file-error"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::~KeystoreFileError()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::has_data() const
{
    if (is_presence_container) return true;
    return (keystore_sync_fail !=  nullptr && keystore_sync_fail->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::has_operation() const
{
    return is_set(yfilter)
	|| (keystore_sync_fail !=  nullptr && keystore_sync_fail->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec/authz-file-error/cache-file-error/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keystore-file-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keystore-sync-fail")
    {
        if(keystore_sync_fail == nullptr)
        {
            keystore_sync_fail = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail>();
        }
        return keystore_sync_fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(keystore_sync_fail != nullptr)
    {
        _children["keystore-sync-fail"] = keystore_sync_fail;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keystore-sync-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::KeystoreSyncFail()
    :
    random_number_fail(nullptr) // presence node
{

    yang_name = "keystore-sync-fail"; yang_parent_name = "keystore-file-error"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::~KeystoreSyncFail()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::has_data() const
{
    if (is_presence_container) return true;
    return (random_number_fail !=  nullptr && random_number_fail->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::has_operation() const
{
    return is_set(yfilter)
	|| (random_number_fail !=  nullptr && random_number_fail->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec/authz-file-error/cache-file-error/keystore-file-error/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keystore-sync-fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "random-number-fail")
    {
        if(random_number_fail == nullptr)
        {
            random_number_fail = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail>();
        }
        return random_number_fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(random_number_fail != nullptr)
    {
        _children["random-number-fail"] = random_number_fail;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "random-number-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::RandomNumberFail()
    :
    src_entropy_fail{YType::empty, "src-entropy-fail"}
{

    yang_name = "random-number-fail"; yang_parent_name = "keystore-sync-fail"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::~RandomNumberFail()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::has_data() const
{
    if (is_presence_container) return true;
    return src_entropy_fail.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_entropy_fail.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec/authz-file-error/cache-file-error/keystore-file-error/keystore-sync-fail/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "random-number-fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_entropy_fail.is_set || is_set(src_entropy_fail.yfilter)) leaf_name_data.push_back(src_entropy_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-entropy-fail")
    {
        src_entropy_fail = value;
        src_entropy_fail.value_namespace = name_space;
        src_entropy_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-entropy-fail")
    {
        src_entropy_fail.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-entropy-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::TrustsecInterface()
    :
    unauthorized(nullptr) // presence node
{

    yang_name = "trustsec-interface"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::~TrustsecInterface()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::has_data() const
{
    if (is_presence_container) return true;
    return (unauthorized !=  nullptr && unauthorized->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::has_operation() const
{
    return is_set(yfilter)
	|| (unauthorized !=  nullptr && unauthorized->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustsec-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unauthorized")
    {
        if(unauthorized == nullptr)
        {
            unauthorized = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized>();
        }
        return unauthorized;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(unauthorized != nullptr)
    {
        _children["unauthorized"] = unauthorized;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unauthorized")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::Unauthorized()
    :
    sap_fail(nullptr) // presence node
{

    yang_name = "unauthorized"; yang_parent_name = "trustsec-interface"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::~Unauthorized()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::has_data() const
{
    if (is_presence_container) return true;
    return (sap_fail !=  nullptr && sap_fail->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::has_operation() const
{
    return is_set(yfilter)
	|| (sap_fail !=  nullptr && sap_fail->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauthorized";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sap-fail")
    {
        if(sap_fail == nullptr)
        {
            sap_fail = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail>();
        }
        return sap_fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sap_fail != nullptr)
    {
        _children["sap-fail"] = sap_fail;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sap-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::SapFail()
    :
    authc_fail(nullptr) // presence node
{

    yang_name = "sap-fail"; yang_parent_name = "unauthorized"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::~SapFail()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::has_data() const
{
    if (is_presence_container) return true;
    return (authc_fail !=  nullptr && authc_fail->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::has_operation() const
{
    return is_set(yfilter)
	|| (authc_fail !=  nullptr && authc_fail->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec-interface/unauthorized/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sap-fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authc-fail")
    {
        if(authc_fail == nullptr)
        {
            authc_fail = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail>();
        }
        return authc_fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authc_fail != nullptr)
    {
        _children["authc-fail"] = authc_fail;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authc-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::AuthcFail()
    :
    supplicant_fail(nullptr) // presence node
{

    yang_name = "authc-fail"; yang_parent_name = "sap-fail"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::~AuthcFail()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::has_data() const
{
    if (is_presence_container) return true;
    return (supplicant_fail !=  nullptr && supplicant_fail->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::has_operation() const
{
    return is_set(yfilter)
	|| (supplicant_fail !=  nullptr && supplicant_fail->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec-interface/unauthorized/sap-fail/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authc-fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "supplicant-fail")
    {
        if(supplicant_fail == nullptr)
        {
            supplicant_fail = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail>();
        }
        return supplicant_fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(supplicant_fail != nullptr)
    {
        _children["supplicant-fail"] = supplicant_fail;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supplicant-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::SupplicantFail()
    :
    authz_fail{YType::empty, "authz-fail"}
{

    yang_name = "supplicant-fail"; yang_parent_name = "authc-fail"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::~SupplicantFail()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::has_data() const
{
    if (is_presence_container) return true;
    return authz_fail.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authz_fail.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec-interface/unauthorized/sap-fail/authc-fail/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supplicant-fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authz_fail.is_set || is_set(authz_fail.yfilter)) leaf_name_data.push_back(authz_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authz-fail")
    {
        authz_fail = value;
        authz_fail.value_namespace = name_space;
        authz_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authz-fail")
    {
        authz_fail.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authz-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::TrustsecPolicy()
    :
    peer_policy_updated(nullptr) // presence node
{

    yang_name = "trustsec-policy"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::~TrustsecPolicy()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::has_data() const
{
    if (is_presence_container) return true;
    return (peer_policy_updated !=  nullptr && peer_policy_updated->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::has_operation() const
{
    return is_set(yfilter)
	|| (peer_policy_updated !=  nullptr && peer_policy_updated->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustsec-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-policy-updated")
    {
        if(peer_policy_updated == nullptr)
        {
            peer_policy_updated = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated>();
        }
        return peer_policy_updated;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_policy_updated != nullptr)
    {
        _children["peer-policy-updated"] = peer_policy_updated;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy-updated")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::PeerPolicyUpdated()
    :
    authz_sgacl_fail{YType::empty, "authz-sgacl-fail"}
{

    yang_name = "peer-policy-updated"; yang_parent_name = "trustsec-policy"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::~PeerPolicyUpdated()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::has_data() const
{
    if (is_presence_container) return true;
    return authz_sgacl_fail.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authz_sgacl_fail.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-policy-updated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authz_sgacl_fail.is_set || is_set(authz_sgacl_fail.yfilter)) leaf_name_data.push_back(authz_sgacl_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authz-sgacl-fail")
    {
        authz_sgacl_fail = value;
        authz_sgacl_fail.value_namespace = name_space;
        authz_sgacl_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authz-sgacl-fail")
    {
        authz_sgacl_fail.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authz-sgacl-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::Ospfv3()
    :
    state_change{YType::empty, "state-change"},
    errors{YType::empty, "errors"}
{

    yang_name = "ospfv3"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::~Ospfv3()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::has_data() const
{
    if (is_presence_container) return true;
    return state_change.is_set
	|| errors.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state_change.yfilter)
	|| ydk::is_set(errors.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state_change.is_set || is_set(state_change.yfilter)) leaf_name_data.push_back(state_change.get_name_leafdata());
    if (errors.is_set || is_set(errors.yfilter)) leaf_name_data.push_back(errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state-change")
    {
        state_change = value;
        state_change.value_namespace = name_space;
        state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors")
    {
        errors = value;
        errors.value_namespace = name_space;
        errors.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state-change")
    {
        state_change.yfilter = yfilter;
    }
    if(value_path == "errors")
    {
        errors.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-change" || name == "errors")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Ike()
    :
    policy(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy>())
    , tunnel(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel>())
{
    policy->parent = this;
    tunnel->parent = this;

    yang_name = "ike"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ike::~Ike()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::has_data() const
{
    if (is_presence_container) return true;
    return (policy !=  nullptr && policy->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ike::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ike::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ike";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ike::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ike::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ike::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(tunnel != nullptr)
    {
        _children["tunnel"] = tunnel;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ike::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ike::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "tunnel")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::Policy()
    :
    add{YType::empty, "add"},
    delete_{YType::empty, "delete"}
{

    yang_name = "policy"; yang_parent_name = "ike"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::~Policy()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::has_data() const
{
    if (is_presence_container) return true;
    return add.is_set
	|| delete_.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(delete_.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ike/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "add" || name == "delete")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::Tunnel()
    :
    start{YType::empty, "start"},
    stop{YType::empty, "stop"}
{

    yang_name = "tunnel"; yang_parent_name = "ike"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::~Tunnel()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| stop.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(stop.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ike/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (stop.is_set || is_set(stop.yfilter)) leaf_name_data.push_back(stop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop")
    {
        stop = value;
        stop.value_namespace = name_space;
        stop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "stop")
    {
        stop.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "stop")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::Alarms()
    :
    alarm_type{YType::str, "alarm-type"}
{

    yang_name = "alarms"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::~Alarms()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::has_data() const
{
    if (is_presence_container) return true;
    return alarm_type.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm_type.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_type.is_set || is_set(alarm_type.yfilter)) leaf_name_data.push_back(alarm_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-type")
    {
        alarm_type = value;
        alarm_type.value_namespace = name_space;
        alarm_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-type")
    {
        alarm_type.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-type")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Atm()
    :
    pvc(nullptr) // presence node
    , subif(nullptr) // presence node
{

    yang_name = "atm"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::~Atm()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::has_data() const
{
    if (is_presence_container) return true;
    return (pvc !=  nullptr && pvc->has_data())
	|| (subif !=  nullptr && subif->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::has_operation() const
{
    return is_set(yfilter)
	|| (pvc !=  nullptr && pvc->has_operation())
	|| (subif !=  nullptr && subif->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvc")
    {
        if(pvc == nullptr)
        {
            pvc = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc>();
        }
        return pvc;
    }

    if(child_yang_name == "subif")
    {
        if(subif == nullptr)
        {
            subif = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif>();
        }
        return subif;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pvc != nullptr)
    {
        _children["pvc"] = pvc;
    }

    if(subif != nullptr)
    {
        _children["subif"] = subif;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pvc" || name == "subif")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Pvc()
    :
    interval{YType::uint16, "interval"},
    fail_interval{YType::uint16, "fail-interval"}
        ,
    extension(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension>())
{
    extension->parent = this;

    yang_name = "pvc"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::~Pvc()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| fail_interval.is_set
	|| (extension !=  nullptr && extension->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(fail_interval.yfilter)
	|| (extension !=  nullptr && extension->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/atm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (fail_interval.is_set || is_set(fail_interval.yfilter)) leaf_name_data.push_back(fail_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extension")
    {
        if(extension == nullptr)
        {
            extension = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension>();
        }
        return extension;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(extension != nullptr)
    {
        _children["extension"] = extension;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fail-interval")
    {
        fail_interval = value;
        fail_interval.value_namespace = name_space;
        fail_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "fail-interval")
    {
        fail_interval.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extension" || name == "interval" || name == "fail-interval")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Extension()
    :
    down{YType::empty, "down"},
    up{YType::empty, "up"},
    mibversion{YType::enumeration, "mibversion"}
        ,
    oam(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam>())
{
    oam->parent = this;

    yang_name = "extension"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::~Extension()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::has_data() const
{
    if (is_presence_container) return true;
    return down.is_set
	|| up.is_set
	|| mibversion.is_set
	|| (oam !=  nullptr && oam->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(mibversion.yfilter)
	|| (oam !=  nullptr && oam->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/atm/pvc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extension";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (mibversion.is_set || is_set(mibversion.yfilter)) leaf_name_data.push_back(mibversion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam")
    {
        if(oam == nullptr)
        {
            oam = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam>();
        }
        return oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oam != nullptr)
    {
        _children["oam"] = oam;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mibversion")
    {
        mibversion = value;
        mibversion.value_namespace = name_space;
        mibversion.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "mibversion")
    {
        mibversion.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oam" || name == "down" || name == "up" || name == "mibversion")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Oam()
    :
    failure(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure>())
{
    failure->parent = this;

    yang_name = "oam"; yang_parent_name = "extension"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::~Oam()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::has_data() const
{
    if (is_presence_container) return true;
    return (failure !=  nullptr && failure->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::has_operation() const
{
    return is_set(yfilter)
	|| (failure !=  nullptr && failure->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/atm/pvc/extension/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure>();
        }
        return failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(failure != nullptr)
    {
        _children["failure"] = failure;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::Failure()
    :
    loopback{YType::empty, "loopback"}
{

    yang_name = "failure"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::~Failure()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::has_data() const
{
    if (is_presence_container) return true;
    return loopback.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/atm/pvc/extension/oam/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loopback")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::Subif()
    :
    interval{YType::uint16, "interval"},
    count{YType::uint16, "count"}
{

    yang_name = "subif"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::~Subif()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| count.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(count.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/atm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subif";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "count")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::AuthFramework()
    :
    sec_violation{YType::empty, "sec-violation"}
{

    yang_name = "auth-framework"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::~AuthFramework()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::has_data() const
{
    if (is_presence_container) return true;
    return sec_violation.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sec_violation.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-framework";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sec_violation.is_set || is_set(sec_violation.yfilter)) leaf_name_data.push_back(sec_violation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sec-violation")
    {
        sec_violation = value;
        sec_violation.value_namespace = name_space;
        sec_violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sec-violation")
    {
        sec_violation.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sec-violation")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::BgpConf()
    :
    cbgp2{YType::empty, "cbgp2"}
{

    yang_name = "bgp-conf"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::~BgpConf()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::has_data() const
{
    if (is_presence_container) return true;
    return cbgp2.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbgp2.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgp2.is_set || is_set(cbgp2.yfilter)) leaf_name_data.push_back(cbgp2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbgp2")
    {
        cbgp2 = value;
        cbgp2.value_namespace = name_space;
        cbgp2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbgp2")
    {
        cbgp2.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgp2")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::Bridge()
    :
    newroot{YType::empty, "newroot"},
    topologychange{YType::empty, "topologychange"}
{

    yang_name = "bridge"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::~Bridge()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::has_data() const
{
    if (is_presence_container) return true;
    return newroot.is_set
	|| topologychange.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(newroot.yfilter)
	|| ydk::is_set(topologychange.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (newroot.is_set || is_set(newroot.yfilter)) leaf_name_data.push_back(newroot.get_name_leafdata());
    if (topologychange.is_set || is_set(topologychange.yfilter)) leaf_name_data.push_back(topologychange.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "newroot")
    {
        newroot = value;
        newroot.value_namespace = name_space;
        newroot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topologychange")
    {
        topologychange = value;
        topologychange.value_namespace = name_space;
        topologychange.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "newroot")
    {
        newroot.yfilter = yfilter;
    }
    if(value_path == "topologychange")
    {
        topologychange.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "newroot" || name == "topologychange")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::Bulkstat()
    :
    collection{YType::empty, "collection"},
    transfer{YType::empty, "transfer"}
{

    yang_name = "bulkstat"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::~Bulkstat()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::has_data() const
{
    if (is_presence_container) return true;
    return collection.is_set
	|| transfer.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(collection.yfilter)
	|| ydk::is_set(transfer.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulkstat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collection.is_set || is_set(collection.yfilter)) leaf_name_data.push_back(collection.get_name_leafdata());
    if (transfer.is_set || is_set(transfer.yfilter)) leaf_name_data.push_back(transfer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "collection")
    {
        collection = value;
        collection.value_namespace = name_space;
        collection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transfer")
    {
        transfer = value;
        transfer.value_namespace = name_space;
        transfer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "collection")
    {
        collection.yfilter = yfilter;
    }
    if(value_path == "transfer")
    {
        transfer.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collection" || name == "transfer")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::CallHome()
    :
    message_send_fail{YType::empty, "message-send-fail"},
    server_fail{YType::empty, "server-fail"}
{

    yang_name = "call-home"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::~CallHome()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::has_data() const
{
    if (is_presence_container) return true;
    return message_send_fail.is_set
	|| server_fail.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_send_fail.yfilter)
	|| ydk::is_set(server_fail.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "call-home";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_send_fail.is_set || is_set(message_send_fail.yfilter)) leaf_name_data.push_back(message_send_fail.get_name_leafdata());
    if (server_fail.is_set || is_set(server_fail.yfilter)) leaf_name_data.push_back(server_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-send-fail")
    {
        message_send_fail = value;
        message_send_fail.value_namespace = name_space;
        message_send_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-fail")
    {
        server_fail = value;
        server_fail.value_namespace = name_space;
        server_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-send-fail")
    {
        message_send_fail.yfilter = yfilter;
    }
    if(value_path == "server-fail")
    {
        server_fail.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-send-fail" || name == "server-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::C6kxbar::C6kxbar()
    :
    intbus_crcexcd{YType::empty, "intbus-crcexcd"},
    intbus_crcrcvrd{YType::empty, "intbus-crcrcvrd"},
    swbus{YType::empty, "swbus"}
{

    yang_name = "c6kxbar"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::C6kxbar::~C6kxbar()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::C6kxbar::has_data() const
{
    if (is_presence_container) return true;
    return intbus_crcexcd.is_set
	|| intbus_crcrcvrd.is_set
	|| swbus.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::C6kxbar::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intbus_crcexcd.yfilter)
	|| ydk::is_set(intbus_crcrcvrd.yfilter)
	|| ydk::is_set(swbus.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::C6kxbar::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::C6kxbar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "c6kxbar";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::C6kxbar::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intbus_crcexcd.is_set || is_set(intbus_crcexcd.yfilter)) leaf_name_data.push_back(intbus_crcexcd.get_name_leafdata());
    if (intbus_crcrcvrd.is_set || is_set(intbus_crcrcvrd.yfilter)) leaf_name_data.push_back(intbus_crcrcvrd.get_name_leafdata());
    if (swbus.is_set || is_set(swbus.yfilter)) leaf_name_data.push_back(swbus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::C6kxbar::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::C6kxbar::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::C6kxbar::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intbus-crcexcd")
    {
        intbus_crcexcd = value;
        intbus_crcexcd.value_namespace = name_space;
        intbus_crcexcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intbus-crcrcvrd")
    {
        intbus_crcrcvrd = value;
        intbus_crcrcvrd.value_namespace = name_space;
        intbus_crcrcvrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swbus")
    {
        swbus = value;
        swbus.value_namespace = name_space;
        swbus.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::C6kxbar::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intbus-crcexcd")
    {
        intbus_crcexcd.yfilter = yfilter;
    }
    if(value_path == "intbus-crcrcvrd")
    {
        intbus_crcrcvrd.yfilter = yfilter;
    }
    if(value_path == "swbus")
    {
        swbus.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::C6kxbar::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intbus-crcexcd" || name == "intbus-crcrcvrd" || name == "swbus")
        return true;
    return false;
}

const Enum::YLeaf Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::Enhanced::copy {0, "copy"};
const Enum::YLeaf Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::Enhanced::divert {1, "divert"};

const Enum::YLeaf Native::Performance::Monitor::Context::Profile::application_experience {0, "application-experience"};
const Enum::YLeaf Native::Performance::Monitor::Context::Profile::application_performance {1, "application-performance"};
const Enum::YLeaf Native::Performance::Monitor::Context::Profile::application_statistics {2, "application-statistics"};

const Enum::YLeaf Native::Performance::Monitor::Context::Default::Exporter::Transport::udp {0, "udp"};

const Enum::YLeaf Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime::CacheType::normal {0, "normal"};
const Enum::YLeaf Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime::CacheType::synchronized {1, "synchronized"};

const Enum::YLeaf Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats::CacheType::normal {0, "normal"};
const Enum::YLeaf Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats::CacheType::synchronized {1, "synchronized"};

const Enum::YLeaf Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats::CacheType::normal {0, "normal"};
const Enum::YLeaf Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats::CacheType::synchronized {1, "synchronized"};

const Enum::YLeaf Native::Performance::Monitor::Context::Exporter::Transport::udp {0, "udp"};

const Enum::YLeaf Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::CacheType::normal {0, "normal"};
const Enum::YLeaf Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::CacheType::synchronized {1, "synchronized"};

const Enum::YLeaf Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::CacheType::normal {0, "normal"};
const Enum::YLeaf Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::CacheType::synchronized {1, "synchronized"};

const Enum::YLeaf Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::CacheType::normal {0, "normal"};
const Enum::YLeaf Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::CacheType::synchronized {1, "synchronized"};

const Enum::YLeaf Native::Otv::Isis::Overlay::Authentication::Mode::md5 {0, "md5"};
const Enum::YLeaf Native::Otv::Isis::Overlay::Authentication::Mode::text {1, "text"};

const Enum::YLeaf Native::Otv::Isis::Overlay::Default::Authentication::Mode::md5 {0, "md5"};
const Enum::YLeaf Native::Otv::Isis::Overlay::Default::Authentication::Mode::text {1, "text"};

const Enum::YLeaf Native::Otv::Site::Default::Otv_::Isis::Authentication::Mode::md5 {0, "md5"};
const Enum::YLeaf Native::Otv::Site::Default::Otv_::Isis::Authentication::Mode::text {1, "text"};

const Enum::YLeaf Native::Otv::Site::Otv_::Isis::Authentication::Mode::md5 {0, "md5"};
const Enum::YLeaf Native::Otv::Site::Otv_::Isis::Authentication::Mode::text {1, "text"};

const Enum::YLeaf Native::Snmp::Mib::Persist::PersistEnum::cbqos {0, "cbqos"};
const Enum::YLeaf Native::Snmp::Mib::Persist::PersistEnum::circuit {1, "circuit"};
const Enum::YLeaf Native::Snmp::Mib::Persist::PersistEnum::v3mibs {2, "v3mibs"};

const Enum::YLeaf Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::AlarmType::critical {0, "critical"};
const Enum::YLeaf Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::AlarmType::informational {1, "informational"};
const Enum::YLeaf Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::AlarmType::major_ {2, "major"};
const Enum::YLeaf Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::AlarmType::minor {3, "minor"};

const Enum::YLeaf Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Mibversion::Y_1 {0, "1"};
const Enum::YLeaf Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Mibversion::Y_2 {1, "2"};


}
}

