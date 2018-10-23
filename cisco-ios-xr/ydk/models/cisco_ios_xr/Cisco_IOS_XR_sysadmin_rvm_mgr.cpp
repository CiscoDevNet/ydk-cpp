
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_rvm_mgr.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_rvm_mgr {

RVM::RVM()
    :
    all_locations(this, {"location"})
{

    yang_name = "RVM"; yang_parent_name = "Cisco-IOS-XR-sysadmin-rvm-mgr"; is_top_level_class = true; has_list_ancestor = false; 
}

RVM::~RVM()
{
}

bool RVM::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_locations.len(); index++)
    {
        if(all_locations[index]->has_data())
            return true;
    }
    return false;
}

bool RVM::has_operation() const
{
    for (std::size_t index=0; index<all_locations.len(); index++)
    {
        if(all_locations[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RVM::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-rvm-mgr:RVM";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RVM::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RVM::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-locations")
    {
        auto ent_ = std::make_shared<RVM::AllLocations>();
        ent_->parent = this;
        all_locations.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RVM::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_locations.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RVM::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RVM::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> RVM::clone_ptr() const
{
    return std::make_shared<RVM>();
}

std::string RVM::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RVM::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RVM::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RVM::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RVM::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-locations")
        return true;
    return false;
}

RVM::AllLocations::AllLocations()
    :
    location{YType::str, "location"}
        ,
    objects(std::make_shared<RVM::AllLocations::Objects>())
    , node(std::make_shared<RVM::AllLocations::Node>())
    , card(std::make_shared<RVM::AllLocations::Card>())
{
    objects->parent = this;
    node->parent = this;
    card->parent = this;

    yang_name = "all-locations"; yang_parent_name = "RVM"; is_top_level_class = false; has_list_ancestor = false; 
}

RVM::AllLocations::~AllLocations()
{
}

bool RVM::AllLocations::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (objects !=  nullptr && objects->has_data())
	|| (node !=  nullptr && node->has_data())
	|| (card !=  nullptr && card->has_data());
}

bool RVM::AllLocations::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (objects !=  nullptr && objects->has_operation())
	|| (node !=  nullptr && node->has_operation())
	|| (card !=  nullptr && card->has_operation());
}

std::string RVM::AllLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-rvm-mgr:RVM/" << get_segment_path();
    return path_buffer.str();
}

std::string RVM::AllLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-locations";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RVM::AllLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RVM::AllLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "objects")
    {
        if(objects == nullptr)
        {
            objects = std::make_shared<RVM::AllLocations::Objects>();
        }
        return objects;
    }

    if(child_yang_name == "node")
    {
        if(node == nullptr)
        {
            node = std::make_shared<RVM::AllLocations::Node>();
        }
        return node;
    }

    if(child_yang_name == "card")
    {
        if(card == nullptr)
        {
            card = std::make_shared<RVM::AllLocations::Card>();
        }
        return card;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RVM::AllLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(objects != nullptr)
    {
        _children["objects"] = objects;
    }

    if(node != nullptr)
    {
        _children["node"] = node;
    }

    if(card != nullptr)
    {
        _children["card"] = card;
    }

    return _children;
}

void RVM::AllLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void RVM::AllLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool RVM::AllLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects" || name == "node" || name == "card" || name == "location")
        return true;
    return false;
}

RVM::AllLocations::Objects::Objects()
    :
    all_objs(this, {"index_"})
{

    yang_name = "objects"; yang_parent_name = "all-locations"; is_top_level_class = false; has_list_ancestor = true; 
}

RVM::AllLocations::Objects::~Objects()
{
}

bool RVM::AllLocations::Objects::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_objs.len(); index++)
    {
        if(all_objs[index]->has_data())
            return true;
    }
    return false;
}

bool RVM::AllLocations::Objects::has_operation() const
{
    for (std::size_t index=0; index<all_objs.len(); index++)
    {
        if(all_objs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RVM::AllLocations::Objects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RVM::AllLocations::Objects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RVM::AllLocations::Objects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-objs")
    {
        auto ent_ = std::make_shared<RVM::AllLocations::Objects::AllObjs>();
        ent_->parent = this;
        all_objs.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RVM::AllLocations::Objects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_objs.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RVM::AllLocations::Objects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RVM::AllLocations::Objects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RVM::AllLocations::Objects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-objs")
        return true;
    return false;
}

RVM::AllLocations::Objects::AllObjs::AllObjs()
    :
    index_{YType::uint32, "index"},
    num_allocated{YType::uint32, "num_allocated"},
    num_freed{YType::uint32, "num_freed"},
    num_objects{YType::uint32, "num_objects"}
{

    yang_name = "all-objs"; yang_parent_name = "objects"; is_top_level_class = false; has_list_ancestor = true; 
}

RVM::AllLocations::Objects::AllObjs::~AllObjs()
{
}

bool RVM::AllLocations::Objects::AllObjs::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| num_allocated.is_set
	|| num_freed.is_set
	|| num_objects.is_set;
}

bool RVM::AllLocations::Objects::AllObjs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(num_allocated.yfilter)
	|| ydk::is_set(num_freed.yfilter)
	|| ydk::is_set(num_objects.yfilter);
}

std::string RVM::AllLocations::Objects::AllObjs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-objs";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RVM::AllLocations::Objects::AllObjs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (num_allocated.is_set || is_set(num_allocated.yfilter)) leaf_name_data.push_back(num_allocated.get_name_leafdata());
    if (num_freed.is_set || is_set(num_freed.yfilter)) leaf_name_data.push_back(num_freed.get_name_leafdata());
    if (num_objects.is_set || is_set(num_objects.yfilter)) leaf_name_data.push_back(num_objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RVM::AllLocations::Objects::AllObjs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RVM::AllLocations::Objects::AllObjs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RVM::AllLocations::Objects::AllObjs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_allocated")
    {
        num_allocated = value;
        num_allocated.value_namespace = name_space;
        num_allocated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_freed")
    {
        num_freed = value;
        num_freed.value_namespace = name_space;
        num_freed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_objects")
    {
        num_objects = value;
        num_objects.value_namespace = name_space;
        num_objects.value_namespace_prefix = name_space_prefix;
    }
}

void RVM::AllLocations::Objects::AllObjs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "num_allocated")
    {
        num_allocated.yfilter = yfilter;
    }
    if(value_path == "num_freed")
    {
        num_freed.yfilter = yfilter;
    }
    if(value_path == "num_objects")
    {
        num_objects.yfilter = yfilter;
    }
}

bool RVM::AllLocations::Objects::AllObjs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "num_allocated" || name == "num_freed" || name == "num_objects")
        return true;
    return false;
}

RVM::AllLocations::Node::Node()
    :
    all_nodes(this, {"ipv4_addr"})
{

    yang_name = "node"; yang_parent_name = "all-locations"; is_top_level_class = false; has_list_ancestor = true; 
}

RVM::AllLocations::Node::~Node()
{
}

bool RVM::AllLocations::Node::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_nodes.len(); index++)
    {
        if(all_nodes[index]->has_data())
            return true;
    }
    return false;
}

bool RVM::AllLocations::Node::has_operation() const
{
    for (std::size_t index=0; index<all_nodes.len(); index++)
    {
        if(all_nodes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RVM::AllLocations::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RVM::AllLocations::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RVM::AllLocations::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-nodes")
    {
        auto ent_ = std::make_shared<RVM::AllLocations::Node::AllNodes>();
        ent_->parent = this;
        all_nodes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RVM::AllLocations::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_nodes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RVM::AllLocations::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RVM::AllLocations::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RVM::AllLocations::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-nodes")
        return true;
    return false;
}

RVM::AllLocations::Node::AllNodes::AllNodes()
    :
    ipv4_addr{YType::uint32, "ipv4_addr"},
    ipv4_addr_str{YType::str, "ipv4_addr_str"},
    node_info{YType::str, "node_info"},
    node_hb_info{YType::str, "node_hb_info"},
    node_card_info{YType::str, "node_card_info"}
{

    yang_name = "all-nodes"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

RVM::AllLocations::Node::AllNodes::~AllNodes()
{
}

bool RVM::AllLocations::Node::AllNodes::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_addr.is_set
	|| ipv4_addr_str.is_set
	|| node_info.is_set
	|| node_hb_info.is_set
	|| node_card_info.is_set;
}

bool RVM::AllLocations::Node::AllNodes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_addr_str.yfilter)
	|| ydk::is_set(node_info.yfilter)
	|| ydk::is_set(node_hb_info.yfilter)
	|| ydk::is_set(node_card_info.yfilter);
}

std::string RVM::AllLocations::Node::AllNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-nodes";
    ADD_KEY_TOKEN(ipv4_addr, "ipv4_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RVM::AllLocations::Node::AllNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_addr_str.is_set || is_set(ipv4_addr_str.yfilter)) leaf_name_data.push_back(ipv4_addr_str.get_name_leafdata());
    if (node_info.is_set || is_set(node_info.yfilter)) leaf_name_data.push_back(node_info.get_name_leafdata());
    if (node_hb_info.is_set || is_set(node_hb_info.yfilter)) leaf_name_data.push_back(node_hb_info.get_name_leafdata());
    if (node_card_info.is_set || is_set(node_card_info.yfilter)) leaf_name_data.push_back(node_card_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RVM::AllLocations::Node::AllNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RVM::AllLocations::Node::AllNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RVM::AllLocations::Node::AllNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4_addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4_addr_str")
    {
        ipv4_addr_str = value;
        ipv4_addr_str.value_namespace = name_space;
        ipv4_addr_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node_info")
    {
        node_info = value;
        node_info.value_namespace = name_space;
        node_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node_hb_info")
    {
        node_hb_info = value;
        node_hb_info.value_namespace = name_space;
        node_hb_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node_card_info")
    {
        node_card_info = value;
        node_card_info.value_namespace = name_space;
        node_card_info.value_namespace_prefix = name_space_prefix;
    }
}

void RVM::AllLocations::Node::AllNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4_addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "ipv4_addr_str")
    {
        ipv4_addr_str.yfilter = yfilter;
    }
    if(value_path == "node_info")
    {
        node_info.yfilter = yfilter;
    }
    if(value_path == "node_hb_info")
    {
        node_hb_info.yfilter = yfilter;
    }
    if(value_path == "node_card_info")
    {
        node_card_info.yfilter = yfilter;
    }
}

bool RVM::AllLocations::Node::AllNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4_addr" || name == "ipv4_addr_str" || name == "node_info" || name == "node_hb_info" || name == "node_card_info")
        return true;
    return false;
}

RVM::AllLocations::Card::Card()
    :
    all_cards(this, {"serial_num"})
{

    yang_name = "card"; yang_parent_name = "all-locations"; is_top_level_class = false; has_list_ancestor = true; 
}

RVM::AllLocations::Card::~Card()
{
}

bool RVM::AllLocations::Card::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_cards.len(); index++)
    {
        if(all_cards[index]->has_data())
            return true;
    }
    return false;
}

bool RVM::AllLocations::Card::has_operation() const
{
    for (std::size_t index=0; index<all_cards.len(); index++)
    {
        if(all_cards[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RVM::AllLocations::Card::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RVM::AllLocations::Card::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RVM::AllLocations::Card::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-cards")
    {
        auto ent_ = std::make_shared<RVM::AllLocations::Card::AllCards>();
        ent_->parent = this;
        all_cards.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RVM::AllLocations::Card::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_cards.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RVM::AllLocations::Card::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RVM::AllLocations::Card::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RVM::AllLocations::Card::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-cards")
        return true;
    return false;
}

RVM::AllLocations::Card::AllCards::AllCards()
    :
    serial_num{YType::str, "serial_num"},
    card_flag{YType::str, "card_flag"},
    card_info{YType::str, "card_info"},
    sysadmin_nodes{YType::str, "sysadmin_nodes"},
    xr_nodes{YType::str, "xr_nodes"}
{

    yang_name = "all-cards"; yang_parent_name = "card"; is_top_level_class = false; has_list_ancestor = true; 
}

RVM::AllLocations::Card::AllCards::~AllCards()
{
}

bool RVM::AllLocations::Card::AllCards::has_data() const
{
    if (is_presence_container) return true;
    return serial_num.is_set
	|| card_flag.is_set
	|| card_info.is_set
	|| sysadmin_nodes.is_set
	|| xr_nodes.is_set;
}

bool RVM::AllLocations::Card::AllCards::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(serial_num.yfilter)
	|| ydk::is_set(card_flag.yfilter)
	|| ydk::is_set(card_info.yfilter)
	|| ydk::is_set(sysadmin_nodes.yfilter)
	|| ydk::is_set(xr_nodes.yfilter);
}

std::string RVM::AllLocations::Card::AllCards::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-cards";
    ADD_KEY_TOKEN(serial_num, "serial_num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RVM::AllLocations::Card::AllCards::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (serial_num.is_set || is_set(serial_num.yfilter)) leaf_name_data.push_back(serial_num.get_name_leafdata());
    if (card_flag.is_set || is_set(card_flag.yfilter)) leaf_name_data.push_back(card_flag.get_name_leafdata());
    if (card_info.is_set || is_set(card_info.yfilter)) leaf_name_data.push_back(card_info.get_name_leafdata());
    if (sysadmin_nodes.is_set || is_set(sysadmin_nodes.yfilter)) leaf_name_data.push_back(sysadmin_nodes.get_name_leafdata());
    if (xr_nodes.is_set || is_set(xr_nodes.yfilter)) leaf_name_data.push_back(xr_nodes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RVM::AllLocations::Card::AllCards::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RVM::AllLocations::Card::AllCards::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RVM::AllLocations::Card::AllCards::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serial_num")
    {
        serial_num = value;
        serial_num.value_namespace = name_space;
        serial_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_flag")
    {
        card_flag = value;
        card_flag.value_namespace = name_space;
        card_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_info")
    {
        card_info = value;
        card_info.value_namespace = name_space;
        card_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysadmin_nodes")
    {
        sysadmin_nodes = value;
        sysadmin_nodes.value_namespace = name_space;
        sysadmin_nodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xr_nodes")
    {
        xr_nodes = value;
        xr_nodes.value_namespace = name_space;
        xr_nodes.value_namespace_prefix = name_space_prefix;
    }
}

void RVM::AllLocations::Card::AllCards::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serial_num")
    {
        serial_num.yfilter = yfilter;
    }
    if(value_path == "card_flag")
    {
        card_flag.yfilter = yfilter;
    }
    if(value_path == "card_info")
    {
        card_info.yfilter = yfilter;
    }
    if(value_path == "sysadmin_nodes")
    {
        sysadmin_nodes.yfilter = yfilter;
    }
    if(value_path == "xr_nodes")
    {
        xr_nodes.yfilter = yfilter;
    }
}

bool RVM::AllLocations::Card::AllCards::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serial_num" || name == "card_flag" || name == "card_info" || name == "sysadmin_nodes" || name == "xr_nodes")
        return true;
    return false;
}

const Enum::YLeaf NodetypeTd::sysadmin {1, "sysadmin"};
const Enum::YLeaf NodetypeTd::service {2, "service"};

const Enum::YLeaf FlagtypeTd::clear {0, "clear"};
const Enum::YLeaf FlagtypeTd::set {1, "set"};


}
}

