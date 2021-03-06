
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pbr_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pbr_oper {

Pbr::Pbr()
    :
    nodes(std::make_shared<Pbr::Nodes>())
{
    nodes->parent = this;

    yang_name = "pbr"; yang_parent_name = "Cisco-IOS-XR-pbr-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Pbr::~Pbr()
{
}

bool Pbr::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool Pbr::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Pbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-oper:pbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Pbr::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pbr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void Pbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pbr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Pbr::clone_ptr() const
{
    return std::make_shared<Pbr>();
}

std::string Pbr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Pbr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Pbr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Pbr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Pbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Pbr::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "pbr"; is_top_level_class = false; has_list_ancestor = false; 
}

Pbr::Nodes::~Nodes()
{
}

bool Pbr::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Pbr::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pbr::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-oper:pbr/" << get_segment_path();
    return path_buffer.str();
}

std::string Pbr::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pbr::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pbr::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<Pbr::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pbr::Nodes::get_children() const
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

void Pbr::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pbr::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pbr::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Pbr::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    policy_map(std::make_shared<Pbr::Nodes::Node::PolicyMap>())
{
    policy_map->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Pbr::Nodes::Node::~Node()
{
}

bool Pbr::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (policy_map !=  nullptr && policy_map->has_data());
}

bool Pbr::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (policy_map !=  nullptr && policy_map->has_operation());
}

std::string Pbr::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-oper:pbr/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Pbr::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pbr::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pbr::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map")
    {
        if(policy_map == nullptr)
        {
            policy_map = std::make_shared<Pbr::Nodes::Node::PolicyMap>();
        }
        return policy_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pbr::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_map != nullptr)
    {
        _children["policy-map"] = policy_map;
    }

    return _children;
}

void Pbr::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pbr::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Pbr::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map" || name == "node-name")
        return true;
    return false;
}

Pbr::Nodes::Node::PolicyMap::PolicyMap()
    :
    interfaces(std::make_shared<Pbr::Nodes::Node::PolicyMap::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "policy-map"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Pbr::Nodes::Node::PolicyMap::~PolicyMap()
{
}

bool Pbr::Nodes::Node::PolicyMap::has_data() const
{
    if (is_presence_container) return true;
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool Pbr::Nodes::Node::PolicyMap::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Pbr::Nodes::Node::PolicyMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pbr::Nodes::Node::PolicyMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pbr::Nodes::Node::PolicyMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Pbr::Nodes::Node::PolicyMap::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pbr::Nodes::Node::PolicyMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void Pbr::Nodes::Node::PolicyMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pbr::Nodes::Node::PolicyMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pbr::Nodes::Node::PolicyMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces")
        return true;
    return false;
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "policy-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Pbr::Nodes::Node::PolicyMap::Interfaces::~Interfaces()
{
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pbr::Nodes::Node::PolicyMap::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pbr::Nodes::Node::PolicyMap::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pbr::Nodes::Node::PolicyMap::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pbr::Nodes::Node::PolicyMap::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    direction(std::make_shared<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction>())
{
    direction->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::~Interface()
{
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (direction !=  nullptr && direction->has_data());
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (direction !=  nullptr && direction->has_operation());
}

std::string Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "direction")
    {
        if(direction == nullptr)
        {
            direction = std::make_shared<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction>();
        }
        return direction;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(direction != nullptr)
    {
        _children["direction"] = direction;
    }

    return _children;
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "interface-name")
        return true;
    return false;
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Direction()
    :
    input(std::make_shared<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input>())
{
    input->parent = this;

    yang_name = "direction"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::~Direction()
{
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::Input()
    :
    node_name{YType::str, "node-name"},
    policy_name{YType::str, "policy-name"},
    state{YType::enumeration, "state"},
    state_description{YType::str, "state-description"}
        ,
    class_stat(this, {})
{

    yang_name = "input"; yang_parent_name = "direction"; is_top_level_class = false; has_list_ancestor = true; 
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::~Input()
{
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_stat.len(); index++)
    {
        if(class_stat[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| policy_name.is_set
	|| state.is_set
	|| state_description.is_set;
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::has_operation() const
{
    for (std::size_t index=0; index<class_stat.len(); index++)
    {
        if(class_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(state_description.yfilter);
}

std::string Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_description.is_set || is_set(state_description.yfilter)) leaf_name_data.push_back(state_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-stat")
    {
        auto ent_ = std::make_shared<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat>();
        ent_->parent = this;
        class_stat.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : class_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-description")
    {
        state_description = value;
        state_description.value_namespace = name_space;
        state_description.value_namespace_prefix = name_space_prefix;
    }
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "state-description")
    {
        state_description.yfilter = yfilter;
    }
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-stat" || name == "node-name" || name == "policy-name" || name == "state" || name == "state-description")
        return true;
    return false;
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::ClassStat()
    :
    counter_validity_bitmask{YType::uint64, "counter-validity-bitmask"},
    class_name{YType::str, "class-name"},
    class_id{YType::uint32, "class-id"}
        ,
    general_stats(std::make_shared<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats>())
    , httpr_stats(std::make_shared<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats>())
    , http_enrich_stats(std::make_shared<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttpEnrichStats>())
{
    general_stats->parent = this;
    httpr_stats->parent = this;
    http_enrich_stats->parent = this;

    yang_name = "class-stat"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true; 
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::~ClassStat()
{
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::has_data() const
{
    if (is_presence_container) return true;
    return counter_validity_bitmask.is_set
	|| class_name.is_set
	|| class_id.is_set
	|| (general_stats !=  nullptr && general_stats->has_data())
	|| (httpr_stats !=  nullptr && httpr_stats->has_data())
	|| (http_enrich_stats !=  nullptr && http_enrich_stats->has_data());
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter_validity_bitmask.yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(class_id.yfilter)
	|| (general_stats !=  nullptr && general_stats->has_operation())
	|| (httpr_stats !=  nullptr && httpr_stats->has_operation())
	|| (http_enrich_stats !=  nullptr && http_enrich_stats->has_operation());
}

std::string Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-stat";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter_validity_bitmask.is_set || is_set(counter_validity_bitmask.yfilter)) leaf_name_data.push_back(counter_validity_bitmask.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (class_id.is_set || is_set(class_id.yfilter)) leaf_name_data.push_back(class_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "general-stats")
    {
        if(general_stats == nullptr)
        {
            general_stats = std::make_shared<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats>();
        }
        return general_stats;
    }

    if(child_yang_name == "httpr-stats")
    {
        if(httpr_stats == nullptr)
        {
            httpr_stats = std::make_shared<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats>();
        }
        return httpr_stats;
    }

    if(child_yang_name == "http-enrich-stats")
    {
        if(http_enrich_stats == nullptr)
        {
            http_enrich_stats = std::make_shared<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttpEnrichStats>();
        }
        return http_enrich_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(general_stats != nullptr)
    {
        _children["general-stats"] = general_stats;
    }

    if(httpr_stats != nullptr)
    {
        _children["httpr-stats"] = httpr_stats;
    }

    if(http_enrich_stats != nullptr)
    {
        _children["http-enrich-stats"] = http_enrich_stats;
    }

    return _children;
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter-validity-bitmask")
    {
        counter_validity_bitmask = value;
        counter_validity_bitmask.value_namespace = name_space;
        counter_validity_bitmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-id")
    {
        class_id = value;
        class_id.value_namespace = name_space;
        class_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter-validity-bitmask")
    {
        counter_validity_bitmask.yfilter = yfilter;
    }
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "class-id")
    {
        class_id.yfilter = yfilter;
    }
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "general-stats" || name == "httpr-stats" || name == "http-enrich-stats" || name == "counter-validity-bitmask" || name == "class-name" || name == "class-id")
        return true;
    return false;
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::GeneralStats()
    :
    transmit_packets{YType::uint64, "transmit-packets"},
    transmit_bytes{YType::uint64, "transmit-bytes"},
    total_drop_packets{YType::uint64, "total-drop-packets"},
    total_drop_bytes{YType::uint64, "total-drop-bytes"},
    total_drop_rate{YType::uint32, "total-drop-rate"},
    match_data_rate{YType::uint32, "match-data-rate"},
    total_transmit_rate{YType::uint32, "total-transmit-rate"},
    pre_policy_matched_packets{YType::uint64, "pre-policy-matched-packets"},
    pre_policy_matched_bytes{YType::uint64, "pre-policy-matched-bytes"}
{

    yang_name = "general-stats"; yang_parent_name = "class-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::~GeneralStats()
{
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::has_data() const
{
    if (is_presence_container) return true;
    return transmit_packets.is_set
	|| transmit_bytes.is_set
	|| total_drop_packets.is_set
	|| total_drop_bytes.is_set
	|| total_drop_rate.is_set
	|| match_data_rate.is_set
	|| total_transmit_rate.is_set
	|| pre_policy_matched_packets.is_set
	|| pre_policy_matched_bytes.is_set;
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit_packets.yfilter)
	|| ydk::is_set(transmit_bytes.yfilter)
	|| ydk::is_set(total_drop_packets.yfilter)
	|| ydk::is_set(total_drop_bytes.yfilter)
	|| ydk::is_set(total_drop_rate.yfilter)
	|| ydk::is_set(match_data_rate.yfilter)
	|| ydk::is_set(total_transmit_rate.yfilter)
	|| ydk::is_set(pre_policy_matched_packets.yfilter)
	|| ydk::is_set(pre_policy_matched_bytes.yfilter);
}

std::string Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit_packets.is_set || is_set(transmit_packets.yfilter)) leaf_name_data.push_back(transmit_packets.get_name_leafdata());
    if (transmit_bytes.is_set || is_set(transmit_bytes.yfilter)) leaf_name_data.push_back(transmit_bytes.get_name_leafdata());
    if (total_drop_packets.is_set || is_set(total_drop_packets.yfilter)) leaf_name_data.push_back(total_drop_packets.get_name_leafdata());
    if (total_drop_bytes.is_set || is_set(total_drop_bytes.yfilter)) leaf_name_data.push_back(total_drop_bytes.get_name_leafdata());
    if (total_drop_rate.is_set || is_set(total_drop_rate.yfilter)) leaf_name_data.push_back(total_drop_rate.get_name_leafdata());
    if (match_data_rate.is_set || is_set(match_data_rate.yfilter)) leaf_name_data.push_back(match_data_rate.get_name_leafdata());
    if (total_transmit_rate.is_set || is_set(total_transmit_rate.yfilter)) leaf_name_data.push_back(total_transmit_rate.get_name_leafdata());
    if (pre_policy_matched_packets.is_set || is_set(pre_policy_matched_packets.yfilter)) leaf_name_data.push_back(pre_policy_matched_packets.get_name_leafdata());
    if (pre_policy_matched_bytes.is_set || is_set(pre_policy_matched_bytes.yfilter)) leaf_name_data.push_back(pre_policy_matched_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit-packets")
    {
        transmit_packets = value;
        transmit_packets.value_namespace = name_space;
        transmit_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-bytes")
    {
        transmit_bytes = value;
        transmit_bytes.value_namespace = name_space;
        transmit_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-drop-packets")
    {
        total_drop_packets = value;
        total_drop_packets.value_namespace = name_space;
        total_drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-drop-bytes")
    {
        total_drop_bytes = value;
        total_drop_bytes.value_namespace = name_space;
        total_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-drop-rate")
    {
        total_drop_rate = value;
        total_drop_rate.value_namespace = name_space;
        total_drop_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-data-rate")
    {
        match_data_rate = value;
        match_data_rate.value_namespace = name_space;
        match_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-transmit-rate")
    {
        total_transmit_rate = value;
        total_transmit_rate.value_namespace = name_space;
        total_transmit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-policy-matched-packets")
    {
        pre_policy_matched_packets = value;
        pre_policy_matched_packets.value_namespace = name_space;
        pre_policy_matched_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-policy-matched-bytes")
    {
        pre_policy_matched_bytes = value;
        pre_policy_matched_bytes.value_namespace = name_space;
        pre_policy_matched_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit-packets")
    {
        transmit_packets.yfilter = yfilter;
    }
    if(value_path == "transmit-bytes")
    {
        transmit_bytes.yfilter = yfilter;
    }
    if(value_path == "total-drop-packets")
    {
        total_drop_packets.yfilter = yfilter;
    }
    if(value_path == "total-drop-bytes")
    {
        total_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "total-drop-rate")
    {
        total_drop_rate.yfilter = yfilter;
    }
    if(value_path == "match-data-rate")
    {
        match_data_rate.yfilter = yfilter;
    }
    if(value_path == "total-transmit-rate")
    {
        total_transmit_rate.yfilter = yfilter;
    }
    if(value_path == "pre-policy-matched-packets")
    {
        pre_policy_matched_packets.yfilter = yfilter;
    }
    if(value_path == "pre-policy-matched-bytes")
    {
        pre_policy_matched_bytes.yfilter = yfilter;
    }
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit-packets" || name == "transmit-bytes" || name == "total-drop-packets" || name == "total-drop-bytes" || name == "total-drop-rate" || name == "match-data-rate" || name == "total-transmit-rate" || name == "pre-policy-matched-packets" || name == "pre-policy-matched-bytes")
        return true;
    return false;
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::HttprStats()
    :
    rqst_rcvd_packets{YType::uint64, "rqst-rcvd-packets"},
    rqst_rcvd_bytes{YType::uint64, "rqst-rcvd-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    drop_bytes{YType::uint64, "drop-bytes"},
    resp_sent_packets{YType::uint64, "resp-sent-packets"},
    resp_sent_bytes{YType::uint64, "resp-sent-bytes"}
{

    yang_name = "httpr-stats"; yang_parent_name = "class-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::~HttprStats()
{
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::has_data() const
{
    if (is_presence_container) return true;
    return rqst_rcvd_packets.is_set
	|| rqst_rcvd_bytes.is_set
	|| drop_packets.is_set
	|| drop_bytes.is_set
	|| resp_sent_packets.is_set
	|| resp_sent_bytes.is_set;
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rqst_rcvd_packets.yfilter)
	|| ydk::is_set(rqst_rcvd_bytes.yfilter)
	|| ydk::is_set(drop_packets.yfilter)
	|| ydk::is_set(drop_bytes.yfilter)
	|| ydk::is_set(resp_sent_packets.yfilter)
	|| ydk::is_set(resp_sent_bytes.yfilter);
}

std::string Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "httpr-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rqst_rcvd_packets.is_set || is_set(rqst_rcvd_packets.yfilter)) leaf_name_data.push_back(rqst_rcvd_packets.get_name_leafdata());
    if (rqst_rcvd_bytes.is_set || is_set(rqst_rcvd_bytes.yfilter)) leaf_name_data.push_back(rqst_rcvd_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.yfilter)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.yfilter)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (resp_sent_packets.is_set || is_set(resp_sent_packets.yfilter)) leaf_name_data.push_back(resp_sent_packets.get_name_leafdata());
    if (resp_sent_bytes.is_set || is_set(resp_sent_bytes.yfilter)) leaf_name_data.push_back(resp_sent_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rqst-rcvd-packets")
    {
        rqst_rcvd_packets = value;
        rqst_rcvd_packets.value_namespace = name_space;
        rqst_rcvd_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rqst-rcvd-bytes")
    {
        rqst_rcvd_bytes = value;
        rqst_rcvd_bytes.value_namespace = name_space;
        rqst_rcvd_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
        drop_packets.value_namespace = name_space;
        drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
        drop_bytes.value_namespace = name_space;
        drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resp-sent-packets")
    {
        resp_sent_packets = value;
        resp_sent_packets.value_namespace = name_space;
        resp_sent_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resp-sent-bytes")
    {
        resp_sent_bytes = value;
        resp_sent_bytes.value_namespace = name_space;
        resp_sent_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rqst-rcvd-packets")
    {
        rqst_rcvd_packets.yfilter = yfilter;
    }
    if(value_path == "rqst-rcvd-bytes")
    {
        rqst_rcvd_bytes.yfilter = yfilter;
    }
    if(value_path == "drop-packets")
    {
        drop_packets.yfilter = yfilter;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes.yfilter = yfilter;
    }
    if(value_path == "resp-sent-packets")
    {
        resp_sent_packets.yfilter = yfilter;
    }
    if(value_path == "resp-sent-bytes")
    {
        resp_sent_bytes.yfilter = yfilter;
    }
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rqst-rcvd-packets" || name == "rqst-rcvd-bytes" || name == "drop-packets" || name == "drop-bytes" || name == "resp-sent-packets" || name == "resp-sent-bytes")
        return true;
    return false;
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttpEnrichStats::HttpEnrichStats()
    :
    rqst_rcvd_packets{YType::uint64, "rqst-rcvd-packets"},
    rqst_rcvd_bytes{YType::uint64, "rqst-rcvd-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    drop_bytes{YType::uint64, "drop-bytes"},
    resp_sent_packets{YType::uint64, "resp-sent-packets"},
    resp_sent_bytes{YType::uint64, "resp-sent-bytes"},
    req_sent_packets{YType::uint64, "req-sent-packets"},
    tcp_sent_packets{YType::uint64, "tcp-sent-packets"}
{

    yang_name = "http-enrich-stats"; yang_parent_name = "class-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttpEnrichStats::~HttpEnrichStats()
{
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttpEnrichStats::has_data() const
{
    if (is_presence_container) return true;
    return rqst_rcvd_packets.is_set
	|| rqst_rcvd_bytes.is_set
	|| drop_packets.is_set
	|| drop_bytes.is_set
	|| resp_sent_packets.is_set
	|| resp_sent_bytes.is_set
	|| req_sent_packets.is_set
	|| tcp_sent_packets.is_set;
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttpEnrichStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rqst_rcvd_packets.yfilter)
	|| ydk::is_set(rqst_rcvd_bytes.yfilter)
	|| ydk::is_set(drop_packets.yfilter)
	|| ydk::is_set(drop_bytes.yfilter)
	|| ydk::is_set(resp_sent_packets.yfilter)
	|| ydk::is_set(resp_sent_bytes.yfilter)
	|| ydk::is_set(req_sent_packets.yfilter)
	|| ydk::is_set(tcp_sent_packets.yfilter);
}

std::string Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttpEnrichStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http-enrich-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttpEnrichStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rqst_rcvd_packets.is_set || is_set(rqst_rcvd_packets.yfilter)) leaf_name_data.push_back(rqst_rcvd_packets.get_name_leafdata());
    if (rqst_rcvd_bytes.is_set || is_set(rqst_rcvd_bytes.yfilter)) leaf_name_data.push_back(rqst_rcvd_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.yfilter)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.yfilter)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (resp_sent_packets.is_set || is_set(resp_sent_packets.yfilter)) leaf_name_data.push_back(resp_sent_packets.get_name_leafdata());
    if (resp_sent_bytes.is_set || is_set(resp_sent_bytes.yfilter)) leaf_name_data.push_back(resp_sent_bytes.get_name_leafdata());
    if (req_sent_packets.is_set || is_set(req_sent_packets.yfilter)) leaf_name_data.push_back(req_sent_packets.get_name_leafdata());
    if (tcp_sent_packets.is_set || is_set(tcp_sent_packets.yfilter)) leaf_name_data.push_back(tcp_sent_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttpEnrichStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttpEnrichStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttpEnrichStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rqst-rcvd-packets")
    {
        rqst_rcvd_packets = value;
        rqst_rcvd_packets.value_namespace = name_space;
        rqst_rcvd_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rqst-rcvd-bytes")
    {
        rqst_rcvd_bytes = value;
        rqst_rcvd_bytes.value_namespace = name_space;
        rqst_rcvd_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
        drop_packets.value_namespace = name_space;
        drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
        drop_bytes.value_namespace = name_space;
        drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resp-sent-packets")
    {
        resp_sent_packets = value;
        resp_sent_packets.value_namespace = name_space;
        resp_sent_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resp-sent-bytes")
    {
        resp_sent_bytes = value;
        resp_sent_bytes.value_namespace = name_space;
        resp_sent_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-sent-packets")
    {
        req_sent_packets = value;
        req_sent_packets.value_namespace = name_space;
        req_sent_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-sent-packets")
    {
        tcp_sent_packets = value;
        tcp_sent_packets.value_namespace = name_space;
        tcp_sent_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttpEnrichStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rqst-rcvd-packets")
    {
        rqst_rcvd_packets.yfilter = yfilter;
    }
    if(value_path == "rqst-rcvd-bytes")
    {
        rqst_rcvd_bytes.yfilter = yfilter;
    }
    if(value_path == "drop-packets")
    {
        drop_packets.yfilter = yfilter;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes.yfilter = yfilter;
    }
    if(value_path == "resp-sent-packets")
    {
        resp_sent_packets.yfilter = yfilter;
    }
    if(value_path == "resp-sent-bytes")
    {
        resp_sent_bytes.yfilter = yfilter;
    }
    if(value_path == "req-sent-packets")
    {
        req_sent_packets.yfilter = yfilter;
    }
    if(value_path == "tcp-sent-packets")
    {
        tcp_sent_packets.yfilter = yfilter;
    }
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttpEnrichStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rqst-rcvd-packets" || name == "rqst-rcvd-bytes" || name == "drop-packets" || name == "drop-bytes" || name == "resp-sent-packets" || name == "resp-sent-bytes" || name == "req-sent-packets" || name == "tcp-sent-packets")
        return true;
    return false;
}

const Enum::YLeaf PolicyState::active {0, "active"};
const Enum::YLeaf PolicyState::suspended {1, "suspended"};


}
}

