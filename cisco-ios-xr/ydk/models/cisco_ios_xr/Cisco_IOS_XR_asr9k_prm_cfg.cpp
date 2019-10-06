
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_prm_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_prm_cfg {

HardwareModuleQosMode::HardwareModuleQosMode()
    :
    nodes(std::make_shared<HardwareModuleQosMode::Nodes>())
{
    nodes->parent = this;

    yang_name = "hardware-module-qos-mode"; yang_parent_name = "Cisco-IOS-XR-asr9k-prm-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

HardwareModuleQosMode::~HardwareModuleQosMode()
{
}

bool HardwareModuleQosMode::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool HardwareModuleQosMode::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string HardwareModuleQosMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-qos-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleQosMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleQosMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<HardwareModuleQosMode::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleQosMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void HardwareModuleQosMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleQosMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> HardwareModuleQosMode::clone_ptr() const
{
    return std::make_shared<HardwareModuleQosMode>();
}

std::string HardwareModuleQosMode::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModuleQosMode::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModuleQosMode::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HardwareModuleQosMode::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HardwareModuleQosMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

HardwareModuleQosMode::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "hardware-module-qos-mode"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModuleQosMode::Nodes::~Nodes()
{
}

bool HardwareModuleQosMode::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleQosMode::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModuleQosMode::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-qos-mode/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleQosMode::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleQosMode::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleQosMode::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<HardwareModuleQosMode::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleQosMode::Nodes::get_children() const
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

void HardwareModuleQosMode::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleQosMode::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModuleQosMode::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

HardwareModuleQosMode::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"},
    child_shaping_disable{YType::empty, "child-shaping-disable"},
    lowburst_enable{YType::empty, "lowburst-enable"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModuleQosMode::Nodes::Node::~Node()
{
}

bool HardwareModuleQosMode::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| child_shaping_disable.is_set
	|| lowburst_enable.is_set;
}

bool HardwareModuleQosMode::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(child_shaping_disable.yfilter)
	|| ydk::is_set(lowburst_enable.yfilter);
}

std::string HardwareModuleQosMode::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-qos-mode/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleQosMode::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleQosMode::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (child_shaping_disable.is_set || is_set(child_shaping_disable.yfilter)) leaf_name_data.push_back(child_shaping_disable.get_name_leafdata());
    if (lowburst_enable.is_set || is_set(lowburst_enable.yfilter)) leaf_name_data.push_back(lowburst_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleQosMode::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleQosMode::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModuleQosMode::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "child-shaping-disable")
    {
        child_shaping_disable = value;
        child_shaping_disable.value_namespace = name_space;
        child_shaping_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowburst-enable")
    {
        lowburst_enable = value;
        lowburst_enable.value_namespace = name_space;
        lowburst_enable.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleQosMode::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "child-shaping-disable")
    {
        child_shaping_disable.yfilter = yfilter;
    }
    if(value_path == "lowburst-enable")
    {
        lowburst_enable.yfilter = yfilter;
    }
}

bool HardwareModuleQosMode::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "child-shaping-disable" || name == "lowburst-enable")
        return true;
    return false;
}

HardwareModuleTcpMssAdjust::HardwareModuleTcpMssAdjust()
    :
    nodes(std::make_shared<HardwareModuleTcpMssAdjust::Nodes>())
{
    nodes->parent = this;

    yang_name = "hardware-module-tcp-mss-adjust"; yang_parent_name = "Cisco-IOS-XR-asr9k-prm-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

HardwareModuleTcpMssAdjust::~HardwareModuleTcpMssAdjust()
{
}

bool HardwareModuleTcpMssAdjust::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool HardwareModuleTcpMssAdjust::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string HardwareModuleTcpMssAdjust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcp-mss-adjust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleTcpMssAdjust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleTcpMssAdjust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<HardwareModuleTcpMssAdjust::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleTcpMssAdjust::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void HardwareModuleTcpMssAdjust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleTcpMssAdjust::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> HardwareModuleTcpMssAdjust::clone_ptr() const
{
    return std::make_shared<HardwareModuleTcpMssAdjust>();
}

std::string HardwareModuleTcpMssAdjust::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModuleTcpMssAdjust::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModuleTcpMssAdjust::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HardwareModuleTcpMssAdjust::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HardwareModuleTcpMssAdjust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

HardwareModuleTcpMssAdjust::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "hardware-module-tcp-mss-adjust"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModuleTcpMssAdjust::Nodes::~Nodes()
{
}

bool HardwareModuleTcpMssAdjust::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleTcpMssAdjust::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModuleTcpMssAdjust::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcp-mss-adjust/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleTcpMssAdjust::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleTcpMssAdjust::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleTcpMssAdjust::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<HardwareModuleTcpMssAdjust::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleTcpMssAdjust::Nodes::get_children() const
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

void HardwareModuleTcpMssAdjust::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleTcpMssAdjust::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModuleTcpMssAdjust::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

HardwareModuleTcpMssAdjust::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    nps(std::make_shared<HardwareModuleTcpMssAdjust::Nodes::Node::Nps>())
{
    nps->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModuleTcpMssAdjust::Nodes::Node::~Node()
{
}

bool HardwareModuleTcpMssAdjust::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (nps !=  nullptr && nps->has_data());
}

bool HardwareModuleTcpMssAdjust::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (nps !=  nullptr && nps->has_operation());
}

std::string HardwareModuleTcpMssAdjust::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcp-mss-adjust/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleTcpMssAdjust::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleTcpMssAdjust::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleTcpMssAdjust::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nps")
    {
        if(nps == nullptr)
        {
            nps = std::make_shared<HardwareModuleTcpMssAdjust::Nodes::Node::Nps>();
        }
        return nps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleTcpMssAdjust::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nps != nullptr)
    {
        _children["nps"] = nps;
    }

    return _children;
}

void HardwareModuleTcpMssAdjust::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleTcpMssAdjust::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool HardwareModuleTcpMssAdjust::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nps" || name == "node-name")
        return true;
    return false;
}

HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Nps()
    :
    np(this, {"np_id"})
{

    yang_name = "nps"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleTcpMssAdjust::Nodes::Node::Nps::~Nps()
{
}

bool HardwareModuleTcpMssAdjust::Nodes::Node::Nps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<np.len(); index++)
    {
        if(np[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleTcpMssAdjust::Nodes::Node::Nps::has_operation() const
{
    for (std::size_t index=0; index<np.len(); index++)
    {
        if(np[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModuleTcpMssAdjust::Nodes::Node::Nps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleTcpMssAdjust::Nodes::Node::Nps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleTcpMssAdjust::Nodes::Node::Nps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "np")
    {
        auto ent_ = std::make_shared<HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np>();
        ent_->parent = this;
        np.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleTcpMssAdjust::Nodes::Node::Nps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : np.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void HardwareModuleTcpMssAdjust::Nodes::Node::Nps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleTcpMssAdjust::Nodes::Node::Nps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModuleTcpMssAdjust::Nodes::Node::Nps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "np")
        return true;
    return false;
}

HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::Np()
    :
    np_id{YType::uint32, "np-id"},
    adjust_value{YType::uint32, "adjust-value"}
{

    yang_name = "np"; yang_parent_name = "nps"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::~Np()
{
}

bool HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::has_data() const
{
    if (is_presence_container) return true;
    return np_id.is_set
	|| adjust_value.is_set;
}

bool HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(np_id.yfilter)
	|| ydk::is_set(adjust_value.yfilter);
}

std::string HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np";
    ADD_KEY_TOKEN(np_id, "np-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (np_id.is_set || is_set(np_id.yfilter)) leaf_name_data.push_back(np_id.get_name_leafdata());
    if (adjust_value.is_set || is_set(adjust_value.yfilter)) leaf_name_data.push_back(adjust_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "np-id")
    {
        np_id = value;
        np_id.value_namespace = name_space;
        np_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjust-value")
    {
        adjust_value = value;
        adjust_value.value_namespace = name_space;
        adjust_value.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "np-id")
    {
        np_id.yfilter = yfilter;
    }
    if(value_path == "adjust-value")
    {
        adjust_value.yfilter = yfilter;
    }
}

bool HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "np-id" || name == "adjust-value")
        return true;
    return false;
}

HardwareModuleTcam::HardwareModuleTcam()
    :
    global_profile{YType::enumeration, "global-profile"}
        ,
    nodes(std::make_shared<HardwareModuleTcam::Nodes>())
{
    nodes->parent = this;

    yang_name = "hardware-module-tcam"; yang_parent_name = "Cisco-IOS-XR-asr9k-prm-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

HardwareModuleTcam::~HardwareModuleTcam()
{
}

bool HardwareModuleTcam::has_data() const
{
    if (is_presence_container) return true;
    return global_profile.is_set
	|| (nodes !=  nullptr && nodes->has_data());
}

bool HardwareModuleTcam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_profile.yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string HardwareModuleTcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleTcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_profile.is_set || is_set(global_profile.yfilter)) leaf_name_data.push_back(global_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleTcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<HardwareModuleTcam::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleTcam::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void HardwareModuleTcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-profile")
    {
        global_profile = value;
        global_profile.value_namespace = name_space;
        global_profile.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleTcam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-profile")
    {
        global_profile.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> HardwareModuleTcam::clone_ptr() const
{
    return std::make_shared<HardwareModuleTcam>();
}

std::string HardwareModuleTcam::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModuleTcam::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModuleTcam::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HardwareModuleTcam::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HardwareModuleTcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes" || name == "global-profile")
        return true;
    return false;
}

HardwareModuleTcam::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "hardware-module-tcam"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModuleTcam::Nodes::~Nodes()
{
}

bool HardwareModuleTcam::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleTcam::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModuleTcam::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcam/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleTcam::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleTcam::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleTcam::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<HardwareModuleTcam::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleTcam::Nodes::get_children() const
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

void HardwareModuleTcam::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleTcam::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModuleTcam::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

HardwareModuleTcam::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"},
    profile{YType::enumeration, "profile"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModuleTcam::Nodes::Node::~Node()
{
}

bool HardwareModuleTcam::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| profile.is_set;
}

bool HardwareModuleTcam::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string HardwareModuleTcam::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcam/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleTcam::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleTcam::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleTcam::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleTcam::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModuleTcam::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleTcam::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool HardwareModuleTcam::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "profile")
        return true;
    return false;
}

HardwareModuleEfd::HardwareModuleEfd()
    :
    node_all(std::make_shared<HardwareModuleEfd::NodeAll>())
    , nodes(std::make_shared<HardwareModuleEfd::Nodes>())
{
    node_all->parent = this;
    nodes->parent = this;

    yang_name = "hardware-module-efd"; yang_parent_name = "Cisco-IOS-XR-asr9k-prm-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

HardwareModuleEfd::~HardwareModuleEfd()
{
}

bool HardwareModuleEfd::has_data() const
{
    if (is_presence_container) return true;
    return (node_all !=  nullptr && node_all->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool HardwareModuleEfd::has_operation() const
{
    return is_set(yfilter)
	|| (node_all !=  nullptr && node_all->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string HardwareModuleEfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleEfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleEfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-all")
    {
        if(node_all == nullptr)
        {
            node_all = std::make_shared<HardwareModuleEfd::NodeAll>();
        }
        return node_all;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<HardwareModuleEfd::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleEfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_all != nullptr)
    {
        _children["node-all"] = node_all;
    }

    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void HardwareModuleEfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleEfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> HardwareModuleEfd::clone_ptr() const
{
    return std::make_shared<HardwareModuleEfd>();
}

std::string HardwareModuleEfd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModuleEfd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModuleEfd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HardwareModuleEfd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HardwareModuleEfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-all" || name == "nodes")
        return true;
    return false;
}

HardwareModuleEfd::NodeAll::NodeAll()
    :
    enable{YType::empty, "enable"},
    mode{YType::enumeration, "mode"}
        ,
    vlan_priority_mask(nullptr) // presence node
    , ip_precedence(nullptr) // presence node
    , vlan_cos(nullptr) // presence node
    , ip_priority_mask(nullptr) // presence node
    , mpls_priority_mask(nullptr) // presence node
    , mpls_exp(nullptr) // presence node
{

    yang_name = "node-all"; yang_parent_name = "hardware-module-efd"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModuleEfd::NodeAll::~NodeAll()
{
}

bool HardwareModuleEfd::NodeAll::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| mode.is_set
	|| (vlan_priority_mask !=  nullptr && vlan_priority_mask->has_data())
	|| (ip_precedence !=  nullptr && ip_precedence->has_data())
	|| (vlan_cos !=  nullptr && vlan_cos->has_data())
	|| (ip_priority_mask !=  nullptr && ip_priority_mask->has_data())
	|| (mpls_priority_mask !=  nullptr && mpls_priority_mask->has_data())
	|| (mpls_exp !=  nullptr && mpls_exp->has_data());
}

bool HardwareModuleEfd::NodeAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (vlan_priority_mask !=  nullptr && vlan_priority_mask->has_operation())
	|| (ip_precedence !=  nullptr && ip_precedence->has_operation())
	|| (vlan_cos !=  nullptr && vlan_cos->has_operation())
	|| (ip_priority_mask !=  nullptr && ip_priority_mask->has_operation())
	|| (mpls_priority_mask !=  nullptr && mpls_priority_mask->has_operation())
	|| (mpls_exp !=  nullptr && mpls_exp->has_operation());
}

std::string HardwareModuleEfd::NodeAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleEfd::NodeAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleEfd::NodeAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleEfd::NodeAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-priority-mask")
    {
        if(vlan_priority_mask == nullptr)
        {
            vlan_priority_mask = std::make_shared<HardwareModuleEfd::NodeAll::VlanPriorityMask>();
        }
        return vlan_priority_mask;
    }

    if(child_yang_name == "ip-precedence")
    {
        if(ip_precedence == nullptr)
        {
            ip_precedence = std::make_shared<HardwareModuleEfd::NodeAll::IpPrecedence>();
        }
        return ip_precedence;
    }

    if(child_yang_name == "vlan-cos")
    {
        if(vlan_cos == nullptr)
        {
            vlan_cos = std::make_shared<HardwareModuleEfd::NodeAll::VlanCos>();
        }
        return vlan_cos;
    }

    if(child_yang_name == "ip-priority-mask")
    {
        if(ip_priority_mask == nullptr)
        {
            ip_priority_mask = std::make_shared<HardwareModuleEfd::NodeAll::IpPriorityMask>();
        }
        return ip_priority_mask;
    }

    if(child_yang_name == "mpls-priority-mask")
    {
        if(mpls_priority_mask == nullptr)
        {
            mpls_priority_mask = std::make_shared<HardwareModuleEfd::NodeAll::MplsPriorityMask>();
        }
        return mpls_priority_mask;
    }

    if(child_yang_name == "mpls-exp")
    {
        if(mpls_exp == nullptr)
        {
            mpls_exp = std::make_shared<HardwareModuleEfd::NodeAll::MplsExp>();
        }
        return mpls_exp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleEfd::NodeAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan_priority_mask != nullptr)
    {
        _children["vlan-priority-mask"] = vlan_priority_mask;
    }

    if(ip_precedence != nullptr)
    {
        _children["ip-precedence"] = ip_precedence;
    }

    if(vlan_cos != nullptr)
    {
        _children["vlan-cos"] = vlan_cos;
    }

    if(ip_priority_mask != nullptr)
    {
        _children["ip-priority-mask"] = ip_priority_mask;
    }

    if(mpls_priority_mask != nullptr)
    {
        _children["mpls-priority-mask"] = mpls_priority_mask;
    }

    if(mpls_exp != nullptr)
    {
        _children["mpls-exp"] = mpls_exp;
    }

    return _children;
}

void HardwareModuleEfd::NodeAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleEfd::NodeAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool HardwareModuleEfd::NodeAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-priority-mask" || name == "ip-precedence" || name == "vlan-cos" || name == "ip-priority-mask" || name == "mpls-priority-mask" || name == "mpls-exp" || name == "enable" || name == "mode")
        return true;
    return false;
}

HardwareModuleEfd::NodeAll::VlanPriorityMask::VlanPriorityMask()
    :
    prec0{YType::uint32, "prec0"},
    prec1{YType::uint32, "prec1"},
    prec2{YType::uint32, "prec2"},
    prec3{YType::uint32, "prec3"},
    prec4{YType::uint32, "prec4"},
    prec5{YType::uint32, "prec5"},
    prec6{YType::uint32, "prec6"},
    prec7{YType::uint32, "prec7"}
{

    yang_name = "vlan-priority-mask"; yang_parent_name = "node-all"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

HardwareModuleEfd::NodeAll::VlanPriorityMask::~VlanPriorityMask()
{
}

bool HardwareModuleEfd::NodeAll::VlanPriorityMask::has_data() const
{
    if (is_presence_container) return true;
    return prec0.is_set
	|| prec1.is_set
	|| prec2.is_set
	|| prec3.is_set
	|| prec4.is_set
	|| prec5.is_set
	|| prec6.is_set
	|| prec7.is_set;
}

bool HardwareModuleEfd::NodeAll::VlanPriorityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prec0.yfilter)
	|| ydk::is_set(prec1.yfilter)
	|| ydk::is_set(prec2.yfilter)
	|| ydk::is_set(prec3.yfilter)
	|| ydk::is_set(prec4.yfilter)
	|| ydk::is_set(prec5.yfilter)
	|| ydk::is_set(prec6.yfilter)
	|| ydk::is_set(prec7.yfilter);
}

std::string HardwareModuleEfd::NodeAll::VlanPriorityMask::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd/node-all/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleEfd::NodeAll::VlanPriorityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-priority-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleEfd::NodeAll::VlanPriorityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prec0.is_set || is_set(prec0.yfilter)) leaf_name_data.push_back(prec0.get_name_leafdata());
    if (prec1.is_set || is_set(prec1.yfilter)) leaf_name_data.push_back(prec1.get_name_leafdata());
    if (prec2.is_set || is_set(prec2.yfilter)) leaf_name_data.push_back(prec2.get_name_leafdata());
    if (prec3.is_set || is_set(prec3.yfilter)) leaf_name_data.push_back(prec3.get_name_leafdata());
    if (prec4.is_set || is_set(prec4.yfilter)) leaf_name_data.push_back(prec4.get_name_leafdata());
    if (prec5.is_set || is_set(prec5.yfilter)) leaf_name_data.push_back(prec5.get_name_leafdata());
    if (prec6.is_set || is_set(prec6.yfilter)) leaf_name_data.push_back(prec6.get_name_leafdata());
    if (prec7.is_set || is_set(prec7.yfilter)) leaf_name_data.push_back(prec7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleEfd::NodeAll::VlanPriorityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleEfd::NodeAll::VlanPriorityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModuleEfd::NodeAll::VlanPriorityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prec0")
    {
        prec0 = value;
        prec0.value_namespace = name_space;
        prec0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec1")
    {
        prec1 = value;
        prec1.value_namespace = name_space;
        prec1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec2")
    {
        prec2 = value;
        prec2.value_namespace = name_space;
        prec2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec3")
    {
        prec3 = value;
        prec3.value_namespace = name_space;
        prec3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec4")
    {
        prec4 = value;
        prec4.value_namespace = name_space;
        prec4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec5")
    {
        prec5 = value;
        prec5.value_namespace = name_space;
        prec5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec6")
    {
        prec6 = value;
        prec6.value_namespace = name_space;
        prec6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec7")
    {
        prec7 = value;
        prec7.value_namespace = name_space;
        prec7.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleEfd::NodeAll::VlanPriorityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prec0")
    {
        prec0.yfilter = yfilter;
    }
    if(value_path == "prec1")
    {
        prec1.yfilter = yfilter;
    }
    if(value_path == "prec2")
    {
        prec2.yfilter = yfilter;
    }
    if(value_path == "prec3")
    {
        prec3.yfilter = yfilter;
    }
    if(value_path == "prec4")
    {
        prec4.yfilter = yfilter;
    }
    if(value_path == "prec5")
    {
        prec5.yfilter = yfilter;
    }
    if(value_path == "prec6")
    {
        prec6.yfilter = yfilter;
    }
    if(value_path == "prec7")
    {
        prec7.yfilter = yfilter;
    }
}

bool HardwareModuleEfd::NodeAll::VlanPriorityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prec0" || name == "prec1" || name == "prec2" || name == "prec3" || name == "prec4" || name == "prec5" || name == "prec6" || name == "prec7")
        return true;
    return false;
}

HardwareModuleEfd::NodeAll::IpPrecedence::IpPrecedence()
    :
    precedence{YType::uint32, "precedence"},
    operation_{YType::enumeration, "operation"}
{

    yang_name = "ip-precedence"; yang_parent_name = "node-all"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

HardwareModuleEfd::NodeAll::IpPrecedence::~IpPrecedence()
{
}

bool HardwareModuleEfd::NodeAll::IpPrecedence::has_data() const
{
    if (is_presence_container) return true;
    return precedence.is_set
	|| operation_.is_set;
}

bool HardwareModuleEfd::NodeAll::IpPrecedence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(operation_.yfilter);
}

std::string HardwareModuleEfd::NodeAll::IpPrecedence::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd/node-all/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleEfd::NodeAll::IpPrecedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-precedence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleEfd::NodeAll::IpPrecedence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleEfd::NodeAll::IpPrecedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleEfd::NodeAll::IpPrecedence::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModuleEfd::NodeAll::IpPrecedence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleEfd::NodeAll::IpPrecedence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
}

bool HardwareModuleEfd::NodeAll::IpPrecedence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "precedence" || name == "operation")
        return true;
    return false;
}

HardwareModuleEfd::NodeAll::VlanCos::VlanCos()
    :
    cos{YType::uint32, "cos"},
    operation_{YType::enumeration, "operation"}
{

    yang_name = "vlan-cos"; yang_parent_name = "node-all"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

HardwareModuleEfd::NodeAll::VlanCos::~VlanCos()
{
}

bool HardwareModuleEfd::NodeAll::VlanCos::has_data() const
{
    if (is_presence_container) return true;
    return cos.is_set
	|| operation_.is_set;
}

bool HardwareModuleEfd::NodeAll::VlanCos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(operation_.yfilter);
}

std::string HardwareModuleEfd::NodeAll::VlanCos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd/node-all/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleEfd::NodeAll::VlanCos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-cos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleEfd::NodeAll::VlanCos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleEfd::NodeAll::VlanCos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleEfd::NodeAll::VlanCos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModuleEfd::NodeAll::VlanCos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleEfd::NodeAll::VlanCos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
}

bool HardwareModuleEfd::NodeAll::VlanCos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos" || name == "operation")
        return true;
    return false;
}

HardwareModuleEfd::NodeAll::IpPriorityMask::IpPriorityMask()
    :
    prec0{YType::uint32, "prec0"},
    prec1{YType::uint32, "prec1"},
    prec2{YType::uint32, "prec2"},
    prec3{YType::uint32, "prec3"},
    prec4{YType::uint32, "prec4"},
    prec5{YType::uint32, "prec5"},
    prec6{YType::uint32, "prec6"},
    prec7{YType::uint32, "prec7"}
{

    yang_name = "ip-priority-mask"; yang_parent_name = "node-all"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

HardwareModuleEfd::NodeAll::IpPriorityMask::~IpPriorityMask()
{
}

bool HardwareModuleEfd::NodeAll::IpPriorityMask::has_data() const
{
    if (is_presence_container) return true;
    return prec0.is_set
	|| prec1.is_set
	|| prec2.is_set
	|| prec3.is_set
	|| prec4.is_set
	|| prec5.is_set
	|| prec6.is_set
	|| prec7.is_set;
}

bool HardwareModuleEfd::NodeAll::IpPriorityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prec0.yfilter)
	|| ydk::is_set(prec1.yfilter)
	|| ydk::is_set(prec2.yfilter)
	|| ydk::is_set(prec3.yfilter)
	|| ydk::is_set(prec4.yfilter)
	|| ydk::is_set(prec5.yfilter)
	|| ydk::is_set(prec6.yfilter)
	|| ydk::is_set(prec7.yfilter);
}

std::string HardwareModuleEfd::NodeAll::IpPriorityMask::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd/node-all/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleEfd::NodeAll::IpPriorityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-priority-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleEfd::NodeAll::IpPriorityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prec0.is_set || is_set(prec0.yfilter)) leaf_name_data.push_back(prec0.get_name_leafdata());
    if (prec1.is_set || is_set(prec1.yfilter)) leaf_name_data.push_back(prec1.get_name_leafdata());
    if (prec2.is_set || is_set(prec2.yfilter)) leaf_name_data.push_back(prec2.get_name_leafdata());
    if (prec3.is_set || is_set(prec3.yfilter)) leaf_name_data.push_back(prec3.get_name_leafdata());
    if (prec4.is_set || is_set(prec4.yfilter)) leaf_name_data.push_back(prec4.get_name_leafdata());
    if (prec5.is_set || is_set(prec5.yfilter)) leaf_name_data.push_back(prec5.get_name_leafdata());
    if (prec6.is_set || is_set(prec6.yfilter)) leaf_name_data.push_back(prec6.get_name_leafdata());
    if (prec7.is_set || is_set(prec7.yfilter)) leaf_name_data.push_back(prec7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleEfd::NodeAll::IpPriorityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleEfd::NodeAll::IpPriorityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModuleEfd::NodeAll::IpPriorityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prec0")
    {
        prec0 = value;
        prec0.value_namespace = name_space;
        prec0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec1")
    {
        prec1 = value;
        prec1.value_namespace = name_space;
        prec1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec2")
    {
        prec2 = value;
        prec2.value_namespace = name_space;
        prec2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec3")
    {
        prec3 = value;
        prec3.value_namespace = name_space;
        prec3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec4")
    {
        prec4 = value;
        prec4.value_namespace = name_space;
        prec4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec5")
    {
        prec5 = value;
        prec5.value_namespace = name_space;
        prec5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec6")
    {
        prec6 = value;
        prec6.value_namespace = name_space;
        prec6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec7")
    {
        prec7 = value;
        prec7.value_namespace = name_space;
        prec7.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleEfd::NodeAll::IpPriorityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prec0")
    {
        prec0.yfilter = yfilter;
    }
    if(value_path == "prec1")
    {
        prec1.yfilter = yfilter;
    }
    if(value_path == "prec2")
    {
        prec2.yfilter = yfilter;
    }
    if(value_path == "prec3")
    {
        prec3.yfilter = yfilter;
    }
    if(value_path == "prec4")
    {
        prec4.yfilter = yfilter;
    }
    if(value_path == "prec5")
    {
        prec5.yfilter = yfilter;
    }
    if(value_path == "prec6")
    {
        prec6.yfilter = yfilter;
    }
    if(value_path == "prec7")
    {
        prec7.yfilter = yfilter;
    }
}

bool HardwareModuleEfd::NodeAll::IpPriorityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prec0" || name == "prec1" || name == "prec2" || name == "prec3" || name == "prec4" || name == "prec5" || name == "prec6" || name == "prec7")
        return true;
    return false;
}

HardwareModuleEfd::NodeAll::MplsPriorityMask::MplsPriorityMask()
    :
    prec0{YType::uint32, "prec0"},
    prec1{YType::uint32, "prec1"},
    prec2{YType::uint32, "prec2"},
    prec3{YType::uint32, "prec3"},
    prec4{YType::uint32, "prec4"},
    prec5{YType::uint32, "prec5"},
    prec6{YType::uint32, "prec6"},
    prec7{YType::uint32, "prec7"}
{

    yang_name = "mpls-priority-mask"; yang_parent_name = "node-all"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

HardwareModuleEfd::NodeAll::MplsPriorityMask::~MplsPriorityMask()
{
}

bool HardwareModuleEfd::NodeAll::MplsPriorityMask::has_data() const
{
    if (is_presence_container) return true;
    return prec0.is_set
	|| prec1.is_set
	|| prec2.is_set
	|| prec3.is_set
	|| prec4.is_set
	|| prec5.is_set
	|| prec6.is_set
	|| prec7.is_set;
}

bool HardwareModuleEfd::NodeAll::MplsPriorityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prec0.yfilter)
	|| ydk::is_set(prec1.yfilter)
	|| ydk::is_set(prec2.yfilter)
	|| ydk::is_set(prec3.yfilter)
	|| ydk::is_set(prec4.yfilter)
	|| ydk::is_set(prec5.yfilter)
	|| ydk::is_set(prec6.yfilter)
	|| ydk::is_set(prec7.yfilter);
}

std::string HardwareModuleEfd::NodeAll::MplsPriorityMask::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd/node-all/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleEfd::NodeAll::MplsPriorityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-priority-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleEfd::NodeAll::MplsPriorityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prec0.is_set || is_set(prec0.yfilter)) leaf_name_data.push_back(prec0.get_name_leafdata());
    if (prec1.is_set || is_set(prec1.yfilter)) leaf_name_data.push_back(prec1.get_name_leafdata());
    if (prec2.is_set || is_set(prec2.yfilter)) leaf_name_data.push_back(prec2.get_name_leafdata());
    if (prec3.is_set || is_set(prec3.yfilter)) leaf_name_data.push_back(prec3.get_name_leafdata());
    if (prec4.is_set || is_set(prec4.yfilter)) leaf_name_data.push_back(prec4.get_name_leafdata());
    if (prec5.is_set || is_set(prec5.yfilter)) leaf_name_data.push_back(prec5.get_name_leafdata());
    if (prec6.is_set || is_set(prec6.yfilter)) leaf_name_data.push_back(prec6.get_name_leafdata());
    if (prec7.is_set || is_set(prec7.yfilter)) leaf_name_data.push_back(prec7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleEfd::NodeAll::MplsPriorityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleEfd::NodeAll::MplsPriorityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModuleEfd::NodeAll::MplsPriorityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prec0")
    {
        prec0 = value;
        prec0.value_namespace = name_space;
        prec0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec1")
    {
        prec1 = value;
        prec1.value_namespace = name_space;
        prec1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec2")
    {
        prec2 = value;
        prec2.value_namespace = name_space;
        prec2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec3")
    {
        prec3 = value;
        prec3.value_namespace = name_space;
        prec3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec4")
    {
        prec4 = value;
        prec4.value_namespace = name_space;
        prec4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec5")
    {
        prec5 = value;
        prec5.value_namespace = name_space;
        prec5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec6")
    {
        prec6 = value;
        prec6.value_namespace = name_space;
        prec6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec7")
    {
        prec7 = value;
        prec7.value_namespace = name_space;
        prec7.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleEfd::NodeAll::MplsPriorityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prec0")
    {
        prec0.yfilter = yfilter;
    }
    if(value_path == "prec1")
    {
        prec1.yfilter = yfilter;
    }
    if(value_path == "prec2")
    {
        prec2.yfilter = yfilter;
    }
    if(value_path == "prec3")
    {
        prec3.yfilter = yfilter;
    }
    if(value_path == "prec4")
    {
        prec4.yfilter = yfilter;
    }
    if(value_path == "prec5")
    {
        prec5.yfilter = yfilter;
    }
    if(value_path == "prec6")
    {
        prec6.yfilter = yfilter;
    }
    if(value_path == "prec7")
    {
        prec7.yfilter = yfilter;
    }
}

bool HardwareModuleEfd::NodeAll::MplsPriorityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prec0" || name == "prec1" || name == "prec2" || name == "prec3" || name == "prec4" || name == "prec5" || name == "prec6" || name == "prec7")
        return true;
    return false;
}

HardwareModuleEfd::NodeAll::MplsExp::MplsExp()
    :
    exp{YType::uint32, "exp"},
    operation_{YType::enumeration, "operation"}
{

    yang_name = "mpls-exp"; yang_parent_name = "node-all"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

HardwareModuleEfd::NodeAll::MplsExp::~MplsExp()
{
}

bool HardwareModuleEfd::NodeAll::MplsExp::has_data() const
{
    if (is_presence_container) return true;
    return exp.is_set
	|| operation_.is_set;
}

bool HardwareModuleEfd::NodeAll::MplsExp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp.yfilter)
	|| ydk::is_set(operation_.yfilter);
}

std::string HardwareModuleEfd::NodeAll::MplsExp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd/node-all/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleEfd::NodeAll::MplsExp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleEfd::NodeAll::MplsExp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp.is_set || is_set(exp.yfilter)) leaf_name_data.push_back(exp.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleEfd::NodeAll::MplsExp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleEfd::NodeAll::MplsExp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModuleEfd::NodeAll::MplsExp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp")
    {
        exp = value;
        exp.value_namespace = name_space;
        exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleEfd::NodeAll::MplsExp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp")
    {
        exp.yfilter = yfilter;
    }
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
}

bool HardwareModuleEfd::NodeAll::MplsExp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp" || name == "operation")
        return true;
    return false;
}

HardwareModuleEfd::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "hardware-module-efd"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModuleEfd::Nodes::~Nodes()
{
}

bool HardwareModuleEfd::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleEfd::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModuleEfd::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleEfd::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleEfd::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleEfd::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<HardwareModuleEfd::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleEfd::Nodes::get_children() const
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

void HardwareModuleEfd::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleEfd::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModuleEfd::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

HardwareModuleEfd::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"},
    enable{YType::empty, "enable"},
    mode{YType::enumeration, "mode"}
        ,
    vlan_priority_mask(nullptr) // presence node
    , ip_precedence(nullptr) // presence node
    , vlan_cos(nullptr) // presence node
    , ip_priority_mask(nullptr) // presence node
    , mpls_priority_mask(nullptr) // presence node
    , mpls_exp(nullptr) // presence node
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModuleEfd::Nodes::Node::~Node()
{
}

bool HardwareModuleEfd::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| enable.is_set
	|| mode.is_set
	|| (vlan_priority_mask !=  nullptr && vlan_priority_mask->has_data())
	|| (ip_precedence !=  nullptr && ip_precedence->has_data())
	|| (vlan_cos !=  nullptr && vlan_cos->has_data())
	|| (ip_priority_mask !=  nullptr && ip_priority_mask->has_data())
	|| (mpls_priority_mask !=  nullptr && mpls_priority_mask->has_data())
	|| (mpls_exp !=  nullptr && mpls_exp->has_data());
}

bool HardwareModuleEfd::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (vlan_priority_mask !=  nullptr && vlan_priority_mask->has_operation())
	|| (ip_precedence !=  nullptr && ip_precedence->has_operation())
	|| (vlan_cos !=  nullptr && vlan_cos->has_operation())
	|| (ip_priority_mask !=  nullptr && ip_priority_mask->has_operation())
	|| (mpls_priority_mask !=  nullptr && mpls_priority_mask->has_operation())
	|| (mpls_exp !=  nullptr && mpls_exp->has_operation());
}

std::string HardwareModuleEfd::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleEfd::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleEfd::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleEfd::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-priority-mask")
    {
        if(vlan_priority_mask == nullptr)
        {
            vlan_priority_mask = std::make_shared<HardwareModuleEfd::Nodes::Node::VlanPriorityMask>();
        }
        return vlan_priority_mask;
    }

    if(child_yang_name == "ip-precedence")
    {
        if(ip_precedence == nullptr)
        {
            ip_precedence = std::make_shared<HardwareModuleEfd::Nodes::Node::IpPrecedence>();
        }
        return ip_precedence;
    }

    if(child_yang_name == "vlan-cos")
    {
        if(vlan_cos == nullptr)
        {
            vlan_cos = std::make_shared<HardwareModuleEfd::Nodes::Node::VlanCos>();
        }
        return vlan_cos;
    }

    if(child_yang_name == "ip-priority-mask")
    {
        if(ip_priority_mask == nullptr)
        {
            ip_priority_mask = std::make_shared<HardwareModuleEfd::Nodes::Node::IpPriorityMask>();
        }
        return ip_priority_mask;
    }

    if(child_yang_name == "mpls-priority-mask")
    {
        if(mpls_priority_mask == nullptr)
        {
            mpls_priority_mask = std::make_shared<HardwareModuleEfd::Nodes::Node::MplsPriorityMask>();
        }
        return mpls_priority_mask;
    }

    if(child_yang_name == "mpls-exp")
    {
        if(mpls_exp == nullptr)
        {
            mpls_exp = std::make_shared<HardwareModuleEfd::Nodes::Node::MplsExp>();
        }
        return mpls_exp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleEfd::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan_priority_mask != nullptr)
    {
        _children["vlan-priority-mask"] = vlan_priority_mask;
    }

    if(ip_precedence != nullptr)
    {
        _children["ip-precedence"] = ip_precedence;
    }

    if(vlan_cos != nullptr)
    {
        _children["vlan-cos"] = vlan_cos;
    }

    if(ip_priority_mask != nullptr)
    {
        _children["ip-priority-mask"] = ip_priority_mask;
    }

    if(mpls_priority_mask != nullptr)
    {
        _children["mpls-priority-mask"] = mpls_priority_mask;
    }

    if(mpls_exp != nullptr)
    {
        _children["mpls-exp"] = mpls_exp;
    }

    return _children;
}

void HardwareModuleEfd::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleEfd::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool HardwareModuleEfd::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-priority-mask" || name == "ip-precedence" || name == "vlan-cos" || name == "ip-priority-mask" || name == "mpls-priority-mask" || name == "mpls-exp" || name == "node-name" || name == "enable" || name == "mode")
        return true;
    return false;
}

HardwareModuleEfd::Nodes::Node::VlanPriorityMask::VlanPriorityMask()
    :
    prec0{YType::uint32, "prec0"},
    prec1{YType::uint32, "prec1"},
    prec2{YType::uint32, "prec2"},
    prec3{YType::uint32, "prec3"},
    prec4{YType::uint32, "prec4"},
    prec5{YType::uint32, "prec5"},
    prec6{YType::uint32, "prec6"},
    prec7{YType::uint32, "prec7"}
{

    yang_name = "vlan-priority-mask"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

HardwareModuleEfd::Nodes::Node::VlanPriorityMask::~VlanPriorityMask()
{
}

bool HardwareModuleEfd::Nodes::Node::VlanPriorityMask::has_data() const
{
    if (is_presence_container) return true;
    return prec0.is_set
	|| prec1.is_set
	|| prec2.is_set
	|| prec3.is_set
	|| prec4.is_set
	|| prec5.is_set
	|| prec6.is_set
	|| prec7.is_set;
}

bool HardwareModuleEfd::Nodes::Node::VlanPriorityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prec0.yfilter)
	|| ydk::is_set(prec1.yfilter)
	|| ydk::is_set(prec2.yfilter)
	|| ydk::is_set(prec3.yfilter)
	|| ydk::is_set(prec4.yfilter)
	|| ydk::is_set(prec5.yfilter)
	|| ydk::is_set(prec6.yfilter)
	|| ydk::is_set(prec7.yfilter);
}

std::string HardwareModuleEfd::Nodes::Node::VlanPriorityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-priority-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleEfd::Nodes::Node::VlanPriorityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prec0.is_set || is_set(prec0.yfilter)) leaf_name_data.push_back(prec0.get_name_leafdata());
    if (prec1.is_set || is_set(prec1.yfilter)) leaf_name_data.push_back(prec1.get_name_leafdata());
    if (prec2.is_set || is_set(prec2.yfilter)) leaf_name_data.push_back(prec2.get_name_leafdata());
    if (prec3.is_set || is_set(prec3.yfilter)) leaf_name_data.push_back(prec3.get_name_leafdata());
    if (prec4.is_set || is_set(prec4.yfilter)) leaf_name_data.push_back(prec4.get_name_leafdata());
    if (prec5.is_set || is_set(prec5.yfilter)) leaf_name_data.push_back(prec5.get_name_leafdata());
    if (prec6.is_set || is_set(prec6.yfilter)) leaf_name_data.push_back(prec6.get_name_leafdata());
    if (prec7.is_set || is_set(prec7.yfilter)) leaf_name_data.push_back(prec7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleEfd::Nodes::Node::VlanPriorityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleEfd::Nodes::Node::VlanPriorityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModuleEfd::Nodes::Node::VlanPriorityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prec0")
    {
        prec0 = value;
        prec0.value_namespace = name_space;
        prec0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec1")
    {
        prec1 = value;
        prec1.value_namespace = name_space;
        prec1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec2")
    {
        prec2 = value;
        prec2.value_namespace = name_space;
        prec2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec3")
    {
        prec3 = value;
        prec3.value_namespace = name_space;
        prec3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec4")
    {
        prec4 = value;
        prec4.value_namespace = name_space;
        prec4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec5")
    {
        prec5 = value;
        prec5.value_namespace = name_space;
        prec5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec6")
    {
        prec6 = value;
        prec6.value_namespace = name_space;
        prec6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec7")
    {
        prec7 = value;
        prec7.value_namespace = name_space;
        prec7.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleEfd::Nodes::Node::VlanPriorityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prec0")
    {
        prec0.yfilter = yfilter;
    }
    if(value_path == "prec1")
    {
        prec1.yfilter = yfilter;
    }
    if(value_path == "prec2")
    {
        prec2.yfilter = yfilter;
    }
    if(value_path == "prec3")
    {
        prec3.yfilter = yfilter;
    }
    if(value_path == "prec4")
    {
        prec4.yfilter = yfilter;
    }
    if(value_path == "prec5")
    {
        prec5.yfilter = yfilter;
    }
    if(value_path == "prec6")
    {
        prec6.yfilter = yfilter;
    }
    if(value_path == "prec7")
    {
        prec7.yfilter = yfilter;
    }
}

bool HardwareModuleEfd::Nodes::Node::VlanPriorityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prec0" || name == "prec1" || name == "prec2" || name == "prec3" || name == "prec4" || name == "prec5" || name == "prec6" || name == "prec7")
        return true;
    return false;
}

HardwareModuleEfd::Nodes::Node::IpPrecedence::IpPrecedence()
    :
    precedence{YType::uint32, "precedence"},
    operation_{YType::enumeration, "operation"}
{

    yang_name = "ip-precedence"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

HardwareModuleEfd::Nodes::Node::IpPrecedence::~IpPrecedence()
{
}

bool HardwareModuleEfd::Nodes::Node::IpPrecedence::has_data() const
{
    if (is_presence_container) return true;
    return precedence.is_set
	|| operation_.is_set;
}

bool HardwareModuleEfd::Nodes::Node::IpPrecedence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(operation_.yfilter);
}

std::string HardwareModuleEfd::Nodes::Node::IpPrecedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-precedence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleEfd::Nodes::Node::IpPrecedence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleEfd::Nodes::Node::IpPrecedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleEfd::Nodes::Node::IpPrecedence::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModuleEfd::Nodes::Node::IpPrecedence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleEfd::Nodes::Node::IpPrecedence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
}

bool HardwareModuleEfd::Nodes::Node::IpPrecedence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "precedence" || name == "operation")
        return true;
    return false;
}

HardwareModuleEfd::Nodes::Node::VlanCos::VlanCos()
    :
    cos{YType::uint32, "cos"},
    operation_{YType::enumeration, "operation"}
{

    yang_name = "vlan-cos"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

HardwareModuleEfd::Nodes::Node::VlanCos::~VlanCos()
{
}

bool HardwareModuleEfd::Nodes::Node::VlanCos::has_data() const
{
    if (is_presence_container) return true;
    return cos.is_set
	|| operation_.is_set;
}

bool HardwareModuleEfd::Nodes::Node::VlanCos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(operation_.yfilter);
}

std::string HardwareModuleEfd::Nodes::Node::VlanCos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-cos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleEfd::Nodes::Node::VlanCos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleEfd::Nodes::Node::VlanCos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleEfd::Nodes::Node::VlanCos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModuleEfd::Nodes::Node::VlanCos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleEfd::Nodes::Node::VlanCos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
}

bool HardwareModuleEfd::Nodes::Node::VlanCos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos" || name == "operation")
        return true;
    return false;
}

HardwareModuleEfd::Nodes::Node::IpPriorityMask::IpPriorityMask()
    :
    prec0{YType::uint32, "prec0"},
    prec1{YType::uint32, "prec1"},
    prec2{YType::uint32, "prec2"},
    prec3{YType::uint32, "prec3"},
    prec4{YType::uint32, "prec4"},
    prec5{YType::uint32, "prec5"},
    prec6{YType::uint32, "prec6"},
    prec7{YType::uint32, "prec7"}
{

    yang_name = "ip-priority-mask"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

HardwareModuleEfd::Nodes::Node::IpPriorityMask::~IpPriorityMask()
{
}

bool HardwareModuleEfd::Nodes::Node::IpPriorityMask::has_data() const
{
    if (is_presence_container) return true;
    return prec0.is_set
	|| prec1.is_set
	|| prec2.is_set
	|| prec3.is_set
	|| prec4.is_set
	|| prec5.is_set
	|| prec6.is_set
	|| prec7.is_set;
}

bool HardwareModuleEfd::Nodes::Node::IpPriorityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prec0.yfilter)
	|| ydk::is_set(prec1.yfilter)
	|| ydk::is_set(prec2.yfilter)
	|| ydk::is_set(prec3.yfilter)
	|| ydk::is_set(prec4.yfilter)
	|| ydk::is_set(prec5.yfilter)
	|| ydk::is_set(prec6.yfilter)
	|| ydk::is_set(prec7.yfilter);
}

std::string HardwareModuleEfd::Nodes::Node::IpPriorityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-priority-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleEfd::Nodes::Node::IpPriorityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prec0.is_set || is_set(prec0.yfilter)) leaf_name_data.push_back(prec0.get_name_leafdata());
    if (prec1.is_set || is_set(prec1.yfilter)) leaf_name_data.push_back(prec1.get_name_leafdata());
    if (prec2.is_set || is_set(prec2.yfilter)) leaf_name_data.push_back(prec2.get_name_leafdata());
    if (prec3.is_set || is_set(prec3.yfilter)) leaf_name_data.push_back(prec3.get_name_leafdata());
    if (prec4.is_set || is_set(prec4.yfilter)) leaf_name_data.push_back(prec4.get_name_leafdata());
    if (prec5.is_set || is_set(prec5.yfilter)) leaf_name_data.push_back(prec5.get_name_leafdata());
    if (prec6.is_set || is_set(prec6.yfilter)) leaf_name_data.push_back(prec6.get_name_leafdata());
    if (prec7.is_set || is_set(prec7.yfilter)) leaf_name_data.push_back(prec7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleEfd::Nodes::Node::IpPriorityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleEfd::Nodes::Node::IpPriorityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModuleEfd::Nodes::Node::IpPriorityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prec0")
    {
        prec0 = value;
        prec0.value_namespace = name_space;
        prec0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec1")
    {
        prec1 = value;
        prec1.value_namespace = name_space;
        prec1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec2")
    {
        prec2 = value;
        prec2.value_namespace = name_space;
        prec2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec3")
    {
        prec3 = value;
        prec3.value_namespace = name_space;
        prec3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec4")
    {
        prec4 = value;
        prec4.value_namespace = name_space;
        prec4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec5")
    {
        prec5 = value;
        prec5.value_namespace = name_space;
        prec5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec6")
    {
        prec6 = value;
        prec6.value_namespace = name_space;
        prec6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec7")
    {
        prec7 = value;
        prec7.value_namespace = name_space;
        prec7.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleEfd::Nodes::Node::IpPriorityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prec0")
    {
        prec0.yfilter = yfilter;
    }
    if(value_path == "prec1")
    {
        prec1.yfilter = yfilter;
    }
    if(value_path == "prec2")
    {
        prec2.yfilter = yfilter;
    }
    if(value_path == "prec3")
    {
        prec3.yfilter = yfilter;
    }
    if(value_path == "prec4")
    {
        prec4.yfilter = yfilter;
    }
    if(value_path == "prec5")
    {
        prec5.yfilter = yfilter;
    }
    if(value_path == "prec6")
    {
        prec6.yfilter = yfilter;
    }
    if(value_path == "prec7")
    {
        prec7.yfilter = yfilter;
    }
}

bool HardwareModuleEfd::Nodes::Node::IpPriorityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prec0" || name == "prec1" || name == "prec2" || name == "prec3" || name == "prec4" || name == "prec5" || name == "prec6" || name == "prec7")
        return true;
    return false;
}

HardwareModuleEfd::Nodes::Node::MplsPriorityMask::MplsPriorityMask()
    :
    prec0{YType::uint32, "prec0"},
    prec1{YType::uint32, "prec1"},
    prec2{YType::uint32, "prec2"},
    prec3{YType::uint32, "prec3"},
    prec4{YType::uint32, "prec4"},
    prec5{YType::uint32, "prec5"},
    prec6{YType::uint32, "prec6"},
    prec7{YType::uint32, "prec7"}
{

    yang_name = "mpls-priority-mask"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

HardwareModuleEfd::Nodes::Node::MplsPriorityMask::~MplsPriorityMask()
{
}

bool HardwareModuleEfd::Nodes::Node::MplsPriorityMask::has_data() const
{
    if (is_presence_container) return true;
    return prec0.is_set
	|| prec1.is_set
	|| prec2.is_set
	|| prec3.is_set
	|| prec4.is_set
	|| prec5.is_set
	|| prec6.is_set
	|| prec7.is_set;
}

bool HardwareModuleEfd::Nodes::Node::MplsPriorityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prec0.yfilter)
	|| ydk::is_set(prec1.yfilter)
	|| ydk::is_set(prec2.yfilter)
	|| ydk::is_set(prec3.yfilter)
	|| ydk::is_set(prec4.yfilter)
	|| ydk::is_set(prec5.yfilter)
	|| ydk::is_set(prec6.yfilter)
	|| ydk::is_set(prec7.yfilter);
}

std::string HardwareModuleEfd::Nodes::Node::MplsPriorityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-priority-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleEfd::Nodes::Node::MplsPriorityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prec0.is_set || is_set(prec0.yfilter)) leaf_name_data.push_back(prec0.get_name_leafdata());
    if (prec1.is_set || is_set(prec1.yfilter)) leaf_name_data.push_back(prec1.get_name_leafdata());
    if (prec2.is_set || is_set(prec2.yfilter)) leaf_name_data.push_back(prec2.get_name_leafdata());
    if (prec3.is_set || is_set(prec3.yfilter)) leaf_name_data.push_back(prec3.get_name_leafdata());
    if (prec4.is_set || is_set(prec4.yfilter)) leaf_name_data.push_back(prec4.get_name_leafdata());
    if (prec5.is_set || is_set(prec5.yfilter)) leaf_name_data.push_back(prec5.get_name_leafdata());
    if (prec6.is_set || is_set(prec6.yfilter)) leaf_name_data.push_back(prec6.get_name_leafdata());
    if (prec7.is_set || is_set(prec7.yfilter)) leaf_name_data.push_back(prec7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleEfd::Nodes::Node::MplsPriorityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleEfd::Nodes::Node::MplsPriorityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModuleEfd::Nodes::Node::MplsPriorityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prec0")
    {
        prec0 = value;
        prec0.value_namespace = name_space;
        prec0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec1")
    {
        prec1 = value;
        prec1.value_namespace = name_space;
        prec1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec2")
    {
        prec2 = value;
        prec2.value_namespace = name_space;
        prec2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec3")
    {
        prec3 = value;
        prec3.value_namespace = name_space;
        prec3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec4")
    {
        prec4 = value;
        prec4.value_namespace = name_space;
        prec4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec5")
    {
        prec5 = value;
        prec5.value_namespace = name_space;
        prec5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec6")
    {
        prec6 = value;
        prec6.value_namespace = name_space;
        prec6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec7")
    {
        prec7 = value;
        prec7.value_namespace = name_space;
        prec7.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleEfd::Nodes::Node::MplsPriorityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prec0")
    {
        prec0.yfilter = yfilter;
    }
    if(value_path == "prec1")
    {
        prec1.yfilter = yfilter;
    }
    if(value_path == "prec2")
    {
        prec2.yfilter = yfilter;
    }
    if(value_path == "prec3")
    {
        prec3.yfilter = yfilter;
    }
    if(value_path == "prec4")
    {
        prec4.yfilter = yfilter;
    }
    if(value_path == "prec5")
    {
        prec5.yfilter = yfilter;
    }
    if(value_path == "prec6")
    {
        prec6.yfilter = yfilter;
    }
    if(value_path == "prec7")
    {
        prec7.yfilter = yfilter;
    }
}

bool HardwareModuleEfd::Nodes::Node::MplsPriorityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prec0" || name == "prec1" || name == "prec2" || name == "prec3" || name == "prec4" || name == "prec5" || name == "prec6" || name == "prec7")
        return true;
    return false;
}

HardwareModuleEfd::Nodes::Node::MplsExp::MplsExp()
    :
    exp{YType::uint32, "exp"},
    operation_{YType::enumeration, "operation"}
{

    yang_name = "mpls-exp"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

HardwareModuleEfd::Nodes::Node::MplsExp::~MplsExp()
{
}

bool HardwareModuleEfd::Nodes::Node::MplsExp::has_data() const
{
    if (is_presence_container) return true;
    return exp.is_set
	|| operation_.is_set;
}

bool HardwareModuleEfd::Nodes::Node::MplsExp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp.yfilter)
	|| ydk::is_set(operation_.yfilter);
}

std::string HardwareModuleEfd::Nodes::Node::MplsExp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleEfd::Nodes::Node::MplsExp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp.is_set || is_set(exp.yfilter)) leaf_name_data.push_back(exp.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleEfd::Nodes::Node::MplsExp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleEfd::Nodes::Node::MplsExp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModuleEfd::Nodes::Node::MplsExp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp")
    {
        exp = value;
        exp.value_namespace = name_space;
        exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleEfd::Nodes::Node::MplsExp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp")
    {
        exp.yfilter = yfilter;
    }
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
}

bool HardwareModuleEfd::Nodes::Node::MplsExp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp" || name == "operation")
        return true;
    return false;
}

HardwareModuleAllQosMode::HardwareModuleAllQosMode()
    :
    per_priority_buffer_limit{YType::empty, "per-priority-buffer-limit"},
    ingress_queue{YType::empty, "ingress-queue"},
    aggregate_bundle_mode{YType::empty, "aggregate-bundle-mode"},
    bundle_aggregate_policer_mode{YType::empty, "bundle-aggregate-policer-mode"},
    wred_buffer_mode{YType::empty, "wred-buffer-mode"}
{

    yang_name = "hardware-module-all-qos-mode"; yang_parent_name = "Cisco-IOS-XR-asr9k-prm-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

HardwareModuleAllQosMode::~HardwareModuleAllQosMode()
{
}

bool HardwareModuleAllQosMode::has_data() const
{
    if (is_presence_container) return true;
    return per_priority_buffer_limit.is_set
	|| ingress_queue.is_set
	|| aggregate_bundle_mode.is_set
	|| bundle_aggregate_policer_mode.is_set
	|| wred_buffer_mode.is_set;
}

bool HardwareModuleAllQosMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_priority_buffer_limit.yfilter)
	|| ydk::is_set(ingress_queue.yfilter)
	|| ydk::is_set(aggregate_bundle_mode.yfilter)
	|| ydk::is_set(bundle_aggregate_policer_mode.yfilter)
	|| ydk::is_set(wred_buffer_mode.yfilter);
}

std::string HardwareModuleAllQosMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-all-qos-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleAllQosMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_priority_buffer_limit.is_set || is_set(per_priority_buffer_limit.yfilter)) leaf_name_data.push_back(per_priority_buffer_limit.get_name_leafdata());
    if (ingress_queue.is_set || is_set(ingress_queue.yfilter)) leaf_name_data.push_back(ingress_queue.get_name_leafdata());
    if (aggregate_bundle_mode.is_set || is_set(aggregate_bundle_mode.yfilter)) leaf_name_data.push_back(aggregate_bundle_mode.get_name_leafdata());
    if (bundle_aggregate_policer_mode.is_set || is_set(bundle_aggregate_policer_mode.yfilter)) leaf_name_data.push_back(bundle_aggregate_policer_mode.get_name_leafdata());
    if (wred_buffer_mode.is_set || is_set(wred_buffer_mode.yfilter)) leaf_name_data.push_back(wred_buffer_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleAllQosMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleAllQosMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModuleAllQosMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-priority-buffer-limit")
    {
        per_priority_buffer_limit = value;
        per_priority_buffer_limit.value_namespace = name_space;
        per_priority_buffer_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-queue")
    {
        ingress_queue = value;
        ingress_queue.value_namespace = name_space;
        ingress_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-bundle-mode")
    {
        aggregate_bundle_mode = value;
        aggregate_bundle_mode.value_namespace = name_space;
        aggregate_bundle_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-aggregate-policer-mode")
    {
        bundle_aggregate_policer_mode = value;
        bundle_aggregate_policer_mode.value_namespace = name_space;
        bundle_aggregate_policer_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-buffer-mode")
    {
        wred_buffer_mode = value;
        wred_buffer_mode.value_namespace = name_space;
        wred_buffer_mode.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleAllQosMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-priority-buffer-limit")
    {
        per_priority_buffer_limit.yfilter = yfilter;
    }
    if(value_path == "ingress-queue")
    {
        ingress_queue.yfilter = yfilter;
    }
    if(value_path == "aggregate-bundle-mode")
    {
        aggregate_bundle_mode.yfilter = yfilter;
    }
    if(value_path == "bundle-aggregate-policer-mode")
    {
        bundle_aggregate_policer_mode.yfilter = yfilter;
    }
    if(value_path == "wred-buffer-mode")
    {
        wred_buffer_mode.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> HardwareModuleAllQosMode::clone_ptr() const
{
    return std::make_shared<HardwareModuleAllQosMode>();
}

std::string HardwareModuleAllQosMode::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModuleAllQosMode::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModuleAllQosMode::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HardwareModuleAllQosMode::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HardwareModuleAllQosMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-priority-buffer-limit" || name == "ingress-queue" || name == "aggregate-bundle-mode" || name == "bundle-aggregate-policer-mode" || name == "wred-buffer-mode")
        return true;
    return false;
}

const Enum::YLeaf Asr9kEfdMode::only_outer_encap {0, "only-outer-encap"};
const Enum::YLeaf Asr9kEfdMode::include_inner_encap {1, "include-inner-encap"};

const Enum::YLeaf Asr9kEfdOperation::less_than {2, "less-than"};
const Enum::YLeaf Asr9kEfdOperation::greater_than_or_equal {3, "greater-than-or-equal"};

const Enum::YLeaf PrmTcamProfile::profile0 {0, "profile0"};
const Enum::YLeaf PrmTcamProfile::profile1 {1, "profile1"};
const Enum::YLeaf PrmTcamProfile::profile2 {2, "profile2"};


}
}

