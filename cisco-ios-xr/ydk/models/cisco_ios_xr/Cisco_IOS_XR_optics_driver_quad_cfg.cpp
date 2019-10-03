
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_optics_driver_quad_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_optics_driver_quad_cfg {

Node::Node()
    :
    acts(std::make_shared<Node::Acts>())
{
    acts->parent = this;

    yang_name = "node"; yang_parent_name = "Cisco-IOS-XR-optics-driver-quad-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Node::~Node()
{
}

bool Node::has_data() const
{
    if (is_presence_container) return true;
    return (acts !=  nullptr && acts->has_data());
}

bool Node::has_operation() const
{
    return is_set(yfilter)
	|| (acts !=  nullptr && acts->has_operation());
}

std::string Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-optics-driver-quad-cfg:node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acts")
    {
        if(acts == nullptr)
        {
            acts = std::make_shared<Node::Acts>();
        }
        return acts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acts != nullptr)
    {
        _children["acts"] = acts;
    }

    return _children;
}

void Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Node::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Node::clone_ptr() const
{
    return std::make_shared<Node>();
}

std::string Node::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Node::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Node::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Node::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acts")
        return true;
    return false;
}

Node::Acts::Acts()
    :
    act(this, {"node_name"})
{

    yang_name = "acts"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = false; 
}

Node::Acts::~Acts()
{
}

bool Node::Acts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<act.len(); index++)
    {
        if(act[index]->has_data())
            return true;
    }
    return false;
}

bool Node::Acts::has_operation() const
{
    for (std::size_t index=0; index<act.len(); index++)
    {
        if(act[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Node::Acts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-optics-driver-quad-cfg:node/" << get_segment_path();
    return path_buffer.str();
}

std::string Node::Acts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Node::Acts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Node::Acts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "act")
    {
        auto ent_ = std::make_shared<Node::Acts::Act>();
        ent_->parent = this;
        act.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Node::Acts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : act.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Node::Acts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Node::Acts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Node::Acts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "act")
        return true;
    return false;
}

Node::Acts::Act::Act()
    :
    node_name{YType::str, "node-name"}
        ,
    quad_configs(std::make_shared<Node::Acts::Act::QuadConfigs>())
{
    quad_configs->parent = this;

    yang_name = "act"; yang_parent_name = "acts"; is_top_level_class = false; has_list_ancestor = false; 
}

Node::Acts::Act::~Act()
{
}

bool Node::Acts::Act::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (quad_configs !=  nullptr && quad_configs->has_data());
}

bool Node::Acts::Act::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (quad_configs !=  nullptr && quad_configs->has_operation());
}

std::string Node::Acts::Act::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-optics-driver-quad-cfg:node/acts/" << get_segment_path();
    return path_buffer.str();
}

std::string Node::Acts::Act::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "act";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Node::Acts::Act::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Node::Acts::Act::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "quad-configs")
    {
        if(quad_configs == nullptr)
        {
            quad_configs = std::make_shared<Node::Acts::Act::QuadConfigs>();
        }
        return quad_configs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Node::Acts::Act::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(quad_configs != nullptr)
    {
        _children["quad-configs"] = quad_configs;
    }

    return _children;
}

void Node::Acts::Act::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Node::Acts::Act::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Node::Acts::Act::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quad-configs" || name == "node-name")
        return true;
    return false;
}

Node::Acts::Act::QuadConfigs::QuadConfigs()
    :
    quad_config(this, {"id1"})
{

    yang_name = "quad-configs"; yang_parent_name = "act"; is_top_level_class = false; has_list_ancestor = true; 
}

Node::Acts::Act::QuadConfigs::~QuadConfigs()
{
}

bool Node::Acts::Act::QuadConfigs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<quad_config.len(); index++)
    {
        if(quad_config[index]->has_data())
            return true;
    }
    return false;
}

bool Node::Acts::Act::QuadConfigs::has_operation() const
{
    for (std::size_t index=0; index<quad_config.len(); index++)
    {
        if(quad_config[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Node::Acts::Act::QuadConfigs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quad-configs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Node::Acts::Act::QuadConfigs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Node::Acts::Act::QuadConfigs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "quad-config")
    {
        auto ent_ = std::make_shared<Node::Acts::Act::QuadConfigs::QuadConfig>();
        ent_->parent = this;
        quad_config.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Node::Acts::Act::QuadConfigs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : quad_config.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Node::Acts::Act::QuadConfigs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Node::Acts::Act::QuadConfigs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Node::Acts::Act::QuadConfigs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quad-config")
        return true;
    return false;
}

Node::Acts::Act::QuadConfigs::QuadConfig::QuadConfig()
    :
    id1{YType::uint32, "id1"}
        ,
    mode(std::make_shared<Node::Acts::Act::QuadConfigs::QuadConfig::Mode>())
{
    mode->parent = this;

    yang_name = "quad-config"; yang_parent_name = "quad-configs"; is_top_level_class = false; has_list_ancestor = true; 
}

Node::Acts::Act::QuadConfigs::QuadConfig::~QuadConfig()
{
}

bool Node::Acts::Act::QuadConfigs::QuadConfig::has_data() const
{
    if (is_presence_container) return true;
    return id1.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Node::Acts::Act::QuadConfigs::QuadConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id1.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Node::Acts::Act::QuadConfigs::QuadConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quad-config";
    ADD_KEY_TOKEN(id1, "id1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Node::Acts::Act::QuadConfigs::QuadConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id1.is_set || is_set(id1.yfilter)) leaf_name_data.push_back(id1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Node::Acts::Act::QuadConfigs::QuadConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Node::Acts::Act::QuadConfigs::QuadConfig::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Node::Acts::Act::QuadConfigs::QuadConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Node::Acts::Act::QuadConfigs::QuadConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id1")
    {
        id1 = value;
        id1.value_namespace = name_space;
        id1.value_namespace_prefix = name_space_prefix;
    }
}

void Node::Acts::Act::QuadConfigs::QuadConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id1")
    {
        id1.yfilter = yfilter;
    }
}

bool Node::Acts::Act::QuadConfigs::QuadConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "id1")
        return true;
    return false;
}

Node::Acts::Act::QuadConfigs::QuadConfig::Mode::Mode()
    :
    speed{YType::str, "speed"}
{

    yang_name = "mode"; yang_parent_name = "quad-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Node::Acts::Act::QuadConfigs::QuadConfig::Mode::~Mode()
{
}

bool Node::Acts::Act::QuadConfigs::QuadConfig::Mode::has_data() const
{
    if (is_presence_container) return true;
    return speed.is_set;
}

bool Node::Acts::Act::QuadConfigs::QuadConfig::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string Node::Acts::Act::QuadConfigs::QuadConfig::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Node::Acts::Act::QuadConfigs::QuadConfig::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Node::Acts::Act::QuadConfigs::QuadConfig::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Node::Acts::Act::QuadConfigs::QuadConfig::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Node::Acts::Act::QuadConfigs::QuadConfig::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void Node::Acts::Act::QuadConfigs::QuadConfig::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Node::Acts::Act::QuadConfigs::QuadConfig::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "speed")
        return true;
    return false;
}


}
}

