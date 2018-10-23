
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs5500_coherent_portmode_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs5500_coherent_portmode_oper {

ControllerPortMode::ControllerPortMode()
    :
    optics_name(this, {"interface_name"})
{

    yang_name = "controller-port-mode"; yang_parent_name = "Cisco-IOS-XR-ncs5500-coherent-portmode-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

ControllerPortMode::~ControllerPortMode()
{
}

bool ControllerPortMode::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<optics_name.len(); index++)
    {
        if(optics_name[index]->has_data())
            return true;
    }
    return false;
}

bool ControllerPortMode::has_operation() const
{
    for (std::size_t index=0; index<optics_name.len(); index++)
    {
        if(optics_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControllerPortMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs5500-coherent-portmode-oper:controller-port-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControllerPortMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ControllerPortMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-name")
    {
        auto ent_ = std::make_shared<ControllerPortMode::OpticsName>();
        ent_->parent = this;
        optics_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ControllerPortMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : optics_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ControllerPortMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControllerPortMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ControllerPortMode::clone_ptr() const
{
    return std::make_shared<ControllerPortMode>();
}

std::string ControllerPortMode::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ControllerPortMode::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ControllerPortMode::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ControllerPortMode::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ControllerPortMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-name")
        return true;
    return false;
}

ControllerPortMode::OpticsName::OpticsName()
    :
    interface_name{YType::str, "interface-name"}
        ,
    port_mode_info(std::make_shared<ControllerPortMode::OpticsName::PortModeInfo>())
{
    port_mode_info->parent = this;

    yang_name = "optics-name"; yang_parent_name = "controller-port-mode"; is_top_level_class = false; has_list_ancestor = false; 
}

ControllerPortMode::OpticsName::~OpticsName()
{
}

bool ControllerPortMode::OpticsName::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (port_mode_info !=  nullptr && port_mode_info->has_data());
}

bool ControllerPortMode::OpticsName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (port_mode_info !=  nullptr && port_mode_info->has_operation());
}

std::string ControllerPortMode::OpticsName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs5500-coherent-portmode-oper:controller-port-mode/" << get_segment_path();
    return path_buffer.str();
}

std::string ControllerPortMode::OpticsName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-name";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControllerPortMode::OpticsName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ControllerPortMode::OpticsName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-mode-info")
    {
        if(port_mode_info == nullptr)
        {
            port_mode_info = std::make_shared<ControllerPortMode::OpticsName::PortModeInfo>();
        }
        return port_mode_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ControllerPortMode::OpticsName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port_mode_info != nullptr)
    {
        _children["port-mode-info"] = port_mode_info;
    }

    return _children;
}

void ControllerPortMode::OpticsName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ControllerPortMode::OpticsName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ControllerPortMode::OpticsName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-mode-info" || name == "interface-name")
        return true;
    return false;
}

ControllerPortMode::OpticsName::PortModeInfo::PortModeInfo()
    :
    intf_name{YType::str, "intf-name"},
    speed{YType::str, "speed"},
    fec{YType::str, "fec"},
    diff{YType::str, "diff"},
    modulation{YType::str, "modulation"}
{

    yang_name = "port-mode-info"; yang_parent_name = "optics-name"; is_top_level_class = false; has_list_ancestor = true; 
}

ControllerPortMode::OpticsName::PortModeInfo::~PortModeInfo()
{
}

bool ControllerPortMode::OpticsName::PortModeInfo::has_data() const
{
    if (is_presence_container) return true;
    return intf_name.is_set
	|| speed.is_set
	|| fec.is_set
	|| diff.is_set
	|| modulation.is_set;
}

bool ControllerPortMode::OpticsName::PortModeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intf_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(fec.yfilter)
	|| ydk::is_set(diff.yfilter)
	|| ydk::is_set(modulation.yfilter);
}

std::string ControllerPortMode::OpticsName::PortModeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-mode-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControllerPortMode::OpticsName::PortModeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intf_name.is_set || is_set(intf_name.yfilter)) leaf_name_data.push_back(intf_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (fec.is_set || is_set(fec.yfilter)) leaf_name_data.push_back(fec.get_name_leafdata());
    if (diff.is_set || is_set(diff.yfilter)) leaf_name_data.push_back(diff.get_name_leafdata());
    if (modulation.is_set || is_set(modulation.yfilter)) leaf_name_data.push_back(modulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ControllerPortMode::OpticsName::PortModeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ControllerPortMode::OpticsName::PortModeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ControllerPortMode::OpticsName::PortModeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intf-name")
    {
        intf_name = value;
        intf_name.value_namespace = name_space;
        intf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec")
    {
        fec = value;
        fec.value_namespace = name_space;
        fec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diff")
    {
        diff = value;
        diff.value_namespace = name_space;
        diff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modulation")
    {
        modulation = value;
        modulation.value_namespace = name_space;
        modulation.value_namespace_prefix = name_space_prefix;
    }
}

void ControllerPortMode::OpticsName::PortModeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intf-name")
    {
        intf_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "fec")
    {
        fec.yfilter = yfilter;
    }
    if(value_path == "diff")
    {
        diff.yfilter = yfilter;
    }
    if(value_path == "modulation")
    {
        modulation.yfilter = yfilter;
    }
}

bool ControllerPortMode::OpticsName::PortModeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-name" || name == "speed" || name == "fec" || name == "diff" || name == "modulation")
        return true;
    return false;
}


}
}

