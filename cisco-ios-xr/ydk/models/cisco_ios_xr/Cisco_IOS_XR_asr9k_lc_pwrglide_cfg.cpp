
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_lc_pwrglide_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_lc_pwrglide_cfg {

HardwareModulePortMode::HardwareModulePortMode()
{

    yang_name = "hardware-module-port-mode"; yang_parent_name = "Cisco-IOS-XR-asr9k-lc-pwrglide-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

HardwareModulePortMode::~HardwareModulePortMode()
{
}

bool HardwareModulePortMode::has_data() const
{
    for (std::size_t index=0; index<config_mode.size(); index++)
    {
        if(config_mode[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModulePortMode::has_operation() const
{
    for (std::size_t index=0; index<config_mode.size(); index++)
    {
        if(config_mode[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModulePortMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lc-pwrglide-cfg:hardware-module-port-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModulePortMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModulePortMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-mode")
    {
        for(auto const & c : config_mode)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<HardwareModulePortMode::ConfigMode>();
        c->parent = this;
        config_mode.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModulePortMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : config_mode)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HardwareModulePortMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModulePortMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> HardwareModulePortMode::clone_ptr() const
{
    return std::make_shared<HardwareModulePortMode>();
}

std::string HardwareModulePortMode::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModulePortMode::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModulePortMode::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HardwareModulePortMode::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HardwareModulePortMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-mode")
        return true;
    return false;
}

HardwareModulePortMode::ConfigMode::ConfigMode()
    :
    id1{YType::str, "id1"}
{

    yang_name = "config-mode"; yang_parent_name = "hardware-module-port-mode"; is_top_level_class = false; has_list_ancestor = false;
}

HardwareModulePortMode::ConfigMode::~ConfigMode()
{
}

bool HardwareModulePortMode::ConfigMode::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return id1.is_set;
}

bool HardwareModulePortMode::ConfigMode::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id1.yfilter);
}

std::string HardwareModulePortMode::ConfigMode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lc-pwrglide-cfg:hardware-module-port-mode/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModulePortMode::ConfigMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-mode" <<"[id1='" <<id1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModulePortMode::ConfigMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id1.is_set || is_set(id1.yfilter)) leaf_name_data.push_back(id1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModulePortMode::ConfigMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<HardwareModulePortMode::ConfigMode::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModulePortMode::ConfigMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HardwareModulePortMode::ConfigMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id1")
    {
        id1 = value;
        id1.value_namespace = name_space;
        id1.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModulePortMode::ConfigMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id1")
    {
        id1.yfilter = yfilter;
    }
}

bool HardwareModulePortMode::ConfigMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id1")
        return true;
    return false;
}

HardwareModulePortMode::ConfigMode::Node::Node()
    :
    id2{YType::str, "id2"}
    	,
    port_mode(std::make_shared<HardwareModulePortMode::ConfigMode::Node::PortMode>())
{
    port_mode->parent = this;

    yang_name = "node"; yang_parent_name = "config-mode"; is_top_level_class = false; has_list_ancestor = true;
}

HardwareModulePortMode::ConfigMode::Node::~Node()
{
}

bool HardwareModulePortMode::ConfigMode::Node::has_data() const
{
    return id2.is_set
	|| (port_mode !=  nullptr && port_mode->has_data());
}

bool HardwareModulePortMode::ConfigMode::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id2.yfilter)
	|| (port_mode !=  nullptr && port_mode->has_operation());
}

std::string HardwareModulePortMode::ConfigMode::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[id2='" <<id2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModulePortMode::ConfigMode::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id2.is_set || is_set(id2.yfilter)) leaf_name_data.push_back(id2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModulePortMode::ConfigMode::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-mode")
    {
        if(port_mode == nullptr)
        {
            port_mode = std::make_shared<HardwareModulePortMode::ConfigMode::Node::PortMode>();
        }
        return port_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModulePortMode::ConfigMode::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_mode != nullptr)
    {
        children["port-mode"] = port_mode;
    }

    return children;
}

void HardwareModulePortMode::ConfigMode::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id2")
    {
        id2 = value;
        id2.value_namespace = name_space;
        id2.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModulePortMode::ConfigMode::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id2")
    {
        id2.yfilter = yfilter;
    }
}

bool HardwareModulePortMode::ConfigMode::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-mode" || name == "id2")
        return true;
    return false;
}

HardwareModulePortMode::ConfigMode::Node::PortMode::PortMode()
    :
    if_port_mode{YType::str, "if-port-mode"}
{

    yang_name = "port-mode"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

HardwareModulePortMode::ConfigMode::Node::PortMode::~PortMode()
{
}

bool HardwareModulePortMode::ConfigMode::Node::PortMode::has_data() const
{
    return if_port_mode.is_set;
}

bool HardwareModulePortMode::ConfigMode::Node::PortMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_port_mode.yfilter);
}

std::string HardwareModulePortMode::ConfigMode::Node::PortMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModulePortMode::ConfigMode::Node::PortMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_port_mode.is_set || is_set(if_port_mode.yfilter)) leaf_name_data.push_back(if_port_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModulePortMode::ConfigMode::Node::PortMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModulePortMode::ConfigMode::Node::PortMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HardwareModulePortMode::ConfigMode::Node::PortMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-port-mode")
    {
        if_port_mode = value;
        if_port_mode.value_namespace = name_space;
        if_port_mode.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModulePortMode::ConfigMode::Node::PortMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-port-mode")
    {
        if_port_mode.yfilter = yfilter;
    }
}

bool HardwareModulePortMode::ConfigMode::Node::PortMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-port-mode")
        return true;
    return false;
}


}
}

