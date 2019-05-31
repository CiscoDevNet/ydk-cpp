
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_ep_port_mode_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_ep_port_mode_cfg {

HwModuleEpPortMode::HwModuleEpPortMode()
    :
    ep_port_mode_configuration(this, {"active"})
{

    yang_name = "hw-module-ep-port-mode"; yang_parent_name = "Cisco-IOS-XR-asr9k-ep-port-mode-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

HwModuleEpPortMode::~HwModuleEpPortMode()
{
}

bool HwModuleEpPortMode::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ep_port_mode_configuration.len(); index++)
    {
        if(ep_port_mode_configuration[index]->has_data())
            return true;
    }
    return false;
}

bool HwModuleEpPortMode::has_operation() const
{
    for (std::size_t index=0; index<ep_port_mode_configuration.len(); index++)
    {
        if(ep_port_mode_configuration[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModuleEpPortMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-ep-port-mode-cfg:hw-module-ep-port-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleEpPortMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModuleEpPortMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ep-port-mode-configuration")
    {
        auto ent_ = std::make_shared<HwModuleEpPortMode::EpPortModeConfiguration>();
        ent_->parent = this;
        ep_port_mode_configuration.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModuleEpPortMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ep_port_mode_configuration.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void HwModuleEpPortMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleEpPortMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> HwModuleEpPortMode::clone_ptr() const
{
    return std::make_shared<HwModuleEpPortMode>();
}

std::string HwModuleEpPortMode::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HwModuleEpPortMode::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HwModuleEpPortMode::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HwModuleEpPortMode::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HwModuleEpPortMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ep-port-mode-configuration")
        return true;
    return false;
}

HwModuleEpPortMode::EpPortModeConfiguration::EpPortModeConfiguration()
    :
    active{YType::str, "active"}
        ,
    node(this, {"location"})
{

    yang_name = "ep-port-mode-configuration"; yang_parent_name = "hw-module-ep-port-mode"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModuleEpPortMode::EpPortModeConfiguration::~EpPortModeConfiguration()
{
}

bool HwModuleEpPortMode::EpPortModeConfiguration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return active.is_set;
}

bool HwModuleEpPortMode::EpPortModeConfiguration::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter);
}

std::string HwModuleEpPortMode::EpPortModeConfiguration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-ep-port-mode-cfg:hw-module-ep-port-mode/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleEpPortMode::EpPortModeConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ep-port-mode-configuration";
    ADD_KEY_TOKEN(active, "active");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleEpPortMode::EpPortModeConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModuleEpPortMode::EpPortModeConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<HwModuleEpPortMode::EpPortModeConfiguration::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModuleEpPortMode::EpPortModeConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void HwModuleEpPortMode::EpPortModeConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleEpPortMode::EpPortModeConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
}

bool HwModuleEpPortMode::EpPortModeConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "active")
        return true;
    return false;
}

HwModuleEpPortMode::EpPortModeConfiguration::Node::Node()
    :
    location{YType::str, "location"}
        ,
    bays(std::make_shared<HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays>())
{
    bays->parent = this;

    yang_name = "node"; yang_parent_name = "ep-port-mode-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModuleEpPortMode::EpPortModeConfiguration::Node::~Node()
{
}

bool HwModuleEpPortMode::EpPortModeConfiguration::Node::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (bays !=  nullptr && bays->has_data());
}

bool HwModuleEpPortMode::EpPortModeConfiguration::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (bays !=  nullptr && bays->has_operation());
}

std::string HwModuleEpPortMode::EpPortModeConfiguration::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleEpPortMode::EpPortModeConfiguration::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModuleEpPortMode::EpPortModeConfiguration::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bays")
    {
        if(bays == nullptr)
        {
            bays = std::make_shared<HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays>();
        }
        return bays;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModuleEpPortMode::EpPortModeConfiguration::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bays != nullptr)
    {
        _children["bays"] = bays;
    }

    return _children;
}

void HwModuleEpPortMode::EpPortModeConfiguration::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleEpPortMode::EpPortModeConfiguration::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool HwModuleEpPortMode::EpPortModeConfiguration::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bays" || name == "location")
        return true;
    return false;
}

HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bays()
    :
    bay(this, {"bay_number"})
{

    yang_name = "bays"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::~Bays()
{
}

bool HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bay.len(); index++)
    {
        if(bay[index]->has_data())
            return true;
    }
    return false;
}

bool HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::has_operation() const
{
    for (std::size_t index=0; index<bay.len(); index++)
    {
        if(bay[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bays";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bay")
    {
        auto ent_ = std::make_shared<HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay>();
        ent_->parent = this;
        bay.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bay.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bay")
        return true;
    return false;
}

HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Bay()
    :
    bay_number{YType::str, "bay-number"}
        ,
    ports(std::make_shared<HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports>())
{
    ports->parent = this;

    yang_name = "bay"; yang_parent_name = "bays"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::~Bay()
{
}

bool HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::has_data() const
{
    if (is_presence_container) return true;
    return bay_number.is_set
	|| (ports !=  nullptr && ports->has_data());
}

bool HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bay_number.yfilter)
	|| (ports !=  nullptr && ports->has_operation());
}

std::string HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bay";
    ADD_KEY_TOKEN(bay_number, "bay-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bay_number.is_set || is_set(bay_number.yfilter)) leaf_name_data.push_back(bay_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ports")
    {
        if(ports == nullptr)
        {
            ports = std::make_shared<HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports>();
        }
        return ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ports != nullptr)
    {
        _children["ports"] = ports;
    }

    return _children;
}

void HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bay-number")
    {
        bay_number = value;
        bay_number.value_namespace = name_space;
        bay_number.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bay-number")
    {
        bay_number.yfilter = yfilter;
    }
}

bool HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ports" || name == "bay-number")
        return true;
    return false;
}

HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::Ports()
    :
    port(this, {"port_number"})
{

    yang_name = "ports"; yang_parent_name = "bay"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::~Ports()
{
}

bool HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port.len(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    return false;
}

bool HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::has_operation() const
{
    for (std::size_t index=0; index<port.len(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        auto ent_ = std::make_shared<HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::Port>();
        ent_->parent = this;
        port.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::Port::Port()
    :
    port_number{YType::str, "port-number"},
    if_port_mode{YType::enumeration, "if-port-mode"}
{

    yang_name = "port"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::Port::~Port()
{
}

bool HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::Port::has_data() const
{
    if (is_presence_container) return true;
    return port_number.is_set
	|| if_port_mode.is_set;
}

bool HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(if_port_mode.yfilter);
}

std::string HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    ADD_KEY_TOKEN(port_number, "port-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (if_port_mode.is_set || is_set(if_port_mode.yfilter)) leaf_name_data.push_back(if_port_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-port-mode")
    {
        if_port_mode = value;
        if_port_mode.value_namespace = name_space;
        if_port_mode.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "if-port-mode")
    {
        if_port_mode.yfilter = yfilter;
    }
}

bool HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-number" || name == "if-port-mode")
        return true;
    return false;
}

const Enum::YLeaf HwModuleEpIfPortMode::Y_2xhundredgige_16qam {1, "2xhundredgige-16qam"};
const Enum::YLeaf HwModuleEpIfPortMode::Y_2xhundredgige_8qam {2, "2xhundredgige-8qam"};


}
}

