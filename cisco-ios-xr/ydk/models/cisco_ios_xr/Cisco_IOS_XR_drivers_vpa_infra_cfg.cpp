
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_drivers_vpa_infra_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_drivers_vpa_infra_cfg {

HardwareModule::HardwareModule()
    :
    logging(std::make_shared<HardwareModule::Logging>())
    , nodes(std::make_shared<HardwareModule::Nodes>())
{
    logging->parent = this;
    nodes->parent = this;

    yang_name = "hardware-module"; yang_parent_name = "Cisco-IOS-XR-drivers-vpa-infra-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

HardwareModule::~HardwareModule()
{
}

bool HardwareModule::has_data() const
{
    if (is_presence_container) return true;
    return (logging !=  nullptr && logging->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool HardwareModule::has_operation() const
{
    return is_set(yfilter)
	|| (logging !=  nullptr && logging->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string HardwareModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-drivers-vpa-infra-cfg:hardware-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<HardwareModule::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<HardwareModule::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void HardwareModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> HardwareModule::clone_ptr() const
{
    return std::make_shared<HardwareModule>();
}

std::string HardwareModule::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModule::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModule::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HardwareModule::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HardwareModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "nodes")
        return true;
    return false;
}

HardwareModule::Logging::Logging()
{

    yang_name = "logging"; yang_parent_name = "hardware-module"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModule::Logging::~Logging()
{
}

bool HardwareModule::Logging::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool HardwareModule::Logging::has_operation() const
{
    return is_set(yfilter);
}

std::string HardwareModule::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-drivers-vpa-infra-cfg:hardware-module/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModule::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModule::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModule::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModule::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModule::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

HardwareModule::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "hardware-module"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModule::Nodes::~Nodes()
{
}

bool HardwareModule::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModule::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModule::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-drivers-vpa-infra-cfg:hardware-module/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModule::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModule::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<HardwareModule::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModule::Nodes::get_children() const
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

void HardwareModule::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModule::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

HardwareModule::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"},
    card_type{YType::enumeration, "card-type"},
    mode{YType::enumeration, "mode"},
    shutdown{YType::enumeration, "shutdown"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModule::Nodes::Node::~Node()
{
}

bool HardwareModule::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| card_type.is_set
	|| mode.is_set
	|| shutdown.is_set;
}

bool HardwareModule::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string HardwareModule::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-drivers-vpa-infra-cfg:hardware-module/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModule::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModule::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModule::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModule::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "card-type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool HardwareModule::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "card-type" || name == "mode" || name == "shutdown")
        return true;
    return false;
}

const Enum::YLeaf HwModuleSpaPhysicalMode::cem {1, "cem"};

const Enum::YLeaf HwModuleSpaPhysicalInterface::t3 {1, "t3"};
const Enum::YLeaf HwModuleSpaPhysicalInterface::e3 {2, "e3"};
const Enum::YLeaf HwModuleSpaPhysicalInterface::t1 {3, "t1"};
const Enum::YLeaf HwModuleSpaPhysicalInterface::e1 {4, "e1"};
const Enum::YLeaf HwModuleSpaPhysicalInterface::sonet {5, "sonet"};
const Enum::YLeaf HwModuleSpaPhysicalInterface::sdh {6, "sdh"};

const Enum::YLeaf HwModuleShutdownPowerMode::unpowered {1, "unpowered"};
const Enum::YLeaf HwModuleShutdownPowerMode::powered {2, "powered"};


}
}

