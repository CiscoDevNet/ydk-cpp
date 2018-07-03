
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_8.hpp"
#include "Cisco_NX_OS_device_9.hpp"
#include "Cisco_NX_OS_device_11.hpp"
#include "Cisco_NX_OS_device_10.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList>();
        c->parent = this;
        asseg_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asseg_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asn_items != nullptr)
    {
        children["asn-items"] = asn_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        c->parent = this;
        asitem_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asitem_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList>();
        c->parent = this;
        regcomm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : regcomm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::RtItems()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList>();
        c->parent = this;
        extcommrt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extcommrt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    attrtype{YType::enumeration, "attrType"},
    nodeattrflags{YType::str, "nodeAttrFlags"},
    lnkattrflags{YType::str, "lnkAttrFlags"},
    pfxattrflags{YType::str, "pfxAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return attrtype.is_set
	|| nodeattrflags.is_set
	|| lnkattrflags.is_set
	|| pfxattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attrtype.yfilter)
	|| ydk::is_set(nodeattrflags.yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(pfxattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attrtype.is_set || is_set(attrtype.yfilter)) leaf_name_data.push_back(attrtype.get_name_leafdata());
    if (nodeattrflags.is_set || is_set(nodeattrflags.yfilter)) leaf_name_data.push_back(nodeattrflags.get_name_leafdata());
    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (pfxattrflags.is_set || is_set(pfxattrflags.yfilter)) leaf_name_data.push_back(pfxattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attrType")
    {
        attrtype = value;
        attrtype.value_namespace = name_space;
        attrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags = value;
        nodeattrflags.value_namespace = name_space;
        nodeattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags = value;
        pfxattrflags.value_namespace = name_space;
        pfxattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attrType")
    {
        attrtype.yfilter = yfilter;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags.yfilter = yfilter;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "attrType" || name == "nodeAttrFlags" || name == "lnkAttrFlags" || name == "pfxAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        c->parent = this;
        lnkstattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lnkstattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        c->parent = this;
        pfxsidattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pfxsidattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LsrtItems()
    :
    lnkstroute_list(this, {"pfx"})
{

    yang_name = "lsrt-items"; yang_parent_name = "NextHopRoutes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::~LsrtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstroute_list.len(); index++)
    {
        if(lnkstroute_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstroute_list.len(); index++)
    {
        if(lnkstroute_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStRoute-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList>();
        c->parent = this;
        lnkstroute_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lnkstroute_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStRoute-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::LnkStRouteList()
    :
    pfx{YType::str, "pfx"},
    nlritype{YType::enumeration, "nlriType"},
    protoid{YType::enumeration, "protoId"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rtflags{YType::str, "rtFlags"},
    numpaths{YType::uint32, "numPaths"},
    bestpathid{YType::uint32, "bestPathId"}
        ,
    path_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems>())
{
    path_items->parent = this;

    yang_name = "LnkStRoute-list"; yang_parent_name = "lsrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::~LnkStRouteList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| nlritype.is_set
	|| protoid.is_set
	|| name.is_set
	|| ver.is_set
	|| rtflags.is_set
	|| numpaths.is_set
	|| bestpathid.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(nlritype.yfilter)
	|| ydk::is_set(protoid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rtflags.yfilter)
	|| ydk::is_set(numpaths.yfilter)
	|| ydk::is_set(bestpathid.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStRoute-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (nlritype.is_set || is_set(nlritype.yfilter)) leaf_name_data.push_back(nlritype.get_name_leafdata());
    if (protoid.is_set || is_set(protoid.yfilter)) leaf_name_data.push_back(protoid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rtflags.is_set || is_set(rtflags.yfilter)) leaf_name_data.push_back(rtflags.get_name_leafdata());
    if (numpaths.is_set || is_set(numpaths.yfilter)) leaf_name_data.push_back(numpaths.get_name_leafdata());
    if (bestpathid.is_set || is_set(bestpathid.yfilter)) leaf_name_data.push_back(bestpathid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_items != nullptr)
    {
        children["path-items"] = path_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlriType")
    {
        nlritype = value;
        nlritype.value_namespace = name_space;
        nlritype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protoId")
    {
        protoid = value;
        protoid.value_namespace = name_space;
        protoid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtFlags")
    {
        rtflags = value;
        rtflags.value_namespace = name_space;
        rtflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPaths")
    {
        numpaths = value;
        numpaths.value_namespace = name_space;
        numpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathId")
    {
        bestpathid = value;
        bestpathid.value_namespace = name_space;
        bestpathid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "nlriType")
    {
        nlritype.yfilter = yfilter;
    }
    if(value_path == "protoId")
    {
        protoid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rtFlags")
    {
        rtflags.yfilter = yfilter;
    }
    if(value_path == "numPaths")
    {
        numpaths.yfilter = yfilter;
    }
    if(value_path == "bestPathId")
    {
        bestpathid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "pfx" || name == "nlriType" || name == "protoId" || name == "name" || name == "ver" || name == "rtFlags" || name == "numPaths" || name == "bestPathId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathItems()
    :
    path_list(this, {"peer", "id", "nh", "importedrd", "origimportedrd"})
{

    yang_name = "path-items"; yang_parent_name = "LnkStRoute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::~PathItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList>();
        c->parent = this;
        path_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(seg_items != nullptr)
    {
        children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        children["pmsi-items"] = pmsi_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList>();
        c->parent = this;
        asseg_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asseg_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asn_items != nullptr)
    {
        children["asn-items"] = asn_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        c->parent = this;
        asitem_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asitem_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList>();
        c->parent = this;
        regcomm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : regcomm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::RtItems()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList>();
        c->parent = this;
        extcommrt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extcommrt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    attrtype{YType::enumeration, "attrType"},
    nodeattrflags{YType::str, "nodeAttrFlags"},
    lnkattrflags{YType::str, "lnkAttrFlags"},
    pfxattrflags{YType::str, "pfxAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return attrtype.is_set
	|| nodeattrflags.is_set
	|| lnkattrflags.is_set
	|| pfxattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attrtype.yfilter)
	|| ydk::is_set(nodeattrflags.yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(pfxattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attrtype.is_set || is_set(attrtype.yfilter)) leaf_name_data.push_back(attrtype.get_name_leafdata());
    if (nodeattrflags.is_set || is_set(nodeattrflags.yfilter)) leaf_name_data.push_back(nodeattrflags.get_name_leafdata());
    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (pfxattrflags.is_set || is_set(pfxattrflags.yfilter)) leaf_name_data.push_back(pfxattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attrType")
    {
        attrtype = value;
        attrtype.value_namespace = name_space;
        attrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags = value;
        nodeattrflags.value_namespace = name_space;
        nodeattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags = value;
        pfxattrflags.value_namespace = name_space;
        pfxattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attrType")
    {
        attrtype.yfilter = yfilter;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags.yfilter = yfilter;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "attrType" || name == "nodeAttrFlags" || name == "lnkAttrFlags" || name == "pfxAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        c->parent = this;
        lnkstattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lnkstattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        c->parent = this;
        pfxsidattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pfxsidattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnrtItems()
    :
    evpnroute_list(this, {"pfx", "rd"})
{

    yang_name = "evpnrt-items"; yang_parent_name = "NextHopRoutes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::~EvpnrtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evpnroute_list.len(); index++)
    {
        if(evpnroute_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::has_operation() const
{
    for (std::size_t index=0; index<evpnroute_list.len(); index++)
    {
        if(evpnroute_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EvpnRoute-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList>();
        c->parent = this;
        evpnroute_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : evpnroute_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EvpnRoute-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::EvpnRouteList()
    :
    pfx{YType::str, "pfx"},
    rd{YType::str, "rd"},
    rttype{YType::enumeration, "rtType"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rtflags{YType::str, "rtFlags"},
    numpaths{YType::uint32, "numPaths"},
    bestpathid{YType::uint32, "bestPathId"}
        ,
    path_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems>())
{
    path_items->parent = this;

    yang_name = "EvpnRoute-list"; yang_parent_name = "evpnrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::~EvpnRouteList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| rd.is_set
	|| rttype.is_set
	|| name.is_set
	|| ver.is_set
	|| rtflags.is_set
	|| numpaths.is_set
	|| bestpathid.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(rttype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rtflags.yfilter)
	|| ydk::is_set(numpaths.yfilter)
	|| ydk::is_set(bestpathid.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EvpnRoute-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    ADD_KEY_TOKEN(rd, "rd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (rttype.is_set || is_set(rttype.yfilter)) leaf_name_data.push_back(rttype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rtflags.is_set || is_set(rtflags.yfilter)) leaf_name_data.push_back(rtflags.get_name_leafdata());
    if (numpaths.is_set || is_set(numpaths.yfilter)) leaf_name_data.push_back(numpaths.get_name_leafdata());
    if (bestpathid.is_set || is_set(bestpathid.yfilter)) leaf_name_data.push_back(bestpathid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_items != nullptr)
    {
        children["path-items"] = path_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtType")
    {
        rttype = value;
        rttype.value_namespace = name_space;
        rttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtFlags")
    {
        rtflags = value;
        rtflags.value_namespace = name_space;
        rtflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPaths")
    {
        numpaths = value;
        numpaths.value_namespace = name_space;
        numpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathId")
    {
        bestpathid = value;
        bestpathid.value_namespace = name_space;
        bestpathid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "rtType")
    {
        rttype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rtFlags")
    {
        rtflags.yfilter = yfilter;
    }
    if(value_path == "numPaths")
    {
        numpaths.yfilter = yfilter;
    }
    if(value_path == "bestPathId")
    {
        bestpathid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "pfx" || name == "rd" || name == "rtType" || name == "name" || name == "ver" || name == "rtFlags" || name == "numPaths" || name == "bestPathId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathItems()
    :
    path_list(this, {"peer", "id", "nh", "importedrd", "origimportedrd"})
{

    yang_name = "path-items"; yang_parent_name = "EvpnRoute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::~PathItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList>();
        c->parent = this;
        path_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(seg_items != nullptr)
    {
        children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        children["pmsi-items"] = pmsi_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList>();
        c->parent = this;
        asseg_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asseg_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asn_items != nullptr)
    {
        children["asn-items"] = asn_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        c->parent = this;
        asitem_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asitem_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList>();
        c->parent = this;
        regcomm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : regcomm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::RtItems()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList>();
        c->parent = this;
        extcommrt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extcommrt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    attrtype{YType::enumeration, "attrType"},
    nodeattrflags{YType::str, "nodeAttrFlags"},
    lnkattrflags{YType::str, "lnkAttrFlags"},
    pfxattrflags{YType::str, "pfxAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return attrtype.is_set
	|| nodeattrflags.is_set
	|| lnkattrflags.is_set
	|| pfxattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attrtype.yfilter)
	|| ydk::is_set(nodeattrflags.yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(pfxattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attrtype.is_set || is_set(attrtype.yfilter)) leaf_name_data.push_back(attrtype.get_name_leafdata());
    if (nodeattrflags.is_set || is_set(nodeattrflags.yfilter)) leaf_name_data.push_back(nodeattrflags.get_name_leafdata());
    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (pfxattrflags.is_set || is_set(pfxattrflags.yfilter)) leaf_name_data.push_back(pfxattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attrType")
    {
        attrtype = value;
        attrtype.value_namespace = name_space;
        attrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags = value;
        nodeattrflags.value_namespace = name_space;
        nodeattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags = value;
        pfxattrflags.value_namespace = name_space;
        pfxattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attrType")
    {
        attrtype.yfilter = yfilter;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags.yfilter = yfilter;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "attrType" || name == "nodeAttrFlags" || name == "lnkAttrFlags" || name == "pfxAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        c->parent = this;
        lnkstattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lnkstattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        c->parent = this;
        pfxsidattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pfxsidattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnrtItems()
    :
    mvpnroute_list(this, {"pfx", "rd"})
{

    yang_name = "mvpnrt-items"; yang_parent_name = "NextHopRoutes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::~MvpnrtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mvpnroute_list.len(); index++)
    {
        if(mvpnroute_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::has_operation() const
{
    for (std::size_t index=0; index<mvpnroute_list.len(); index++)
    {
        if(mvpnroute_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpnrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MvpnRoute-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList>();
        c->parent = this;
        mvpnroute_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mvpnroute_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MvpnRoute-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::MvpnRouteList()
    :
    pfx{YType::str, "pfx"},
    rd{YType::str, "rd"},
    rttype{YType::enumeration, "rtType"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rtflags{YType::str, "rtFlags"},
    numpaths{YType::uint32, "numPaths"},
    bestpathid{YType::uint32, "bestPathId"}
        ,
    path_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems>())
{
    path_items->parent = this;

    yang_name = "MvpnRoute-list"; yang_parent_name = "mvpnrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::~MvpnRouteList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| rd.is_set
	|| rttype.is_set
	|| name.is_set
	|| ver.is_set
	|| rtflags.is_set
	|| numpaths.is_set
	|| bestpathid.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(rttype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rtflags.yfilter)
	|| ydk::is_set(numpaths.yfilter)
	|| ydk::is_set(bestpathid.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MvpnRoute-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    ADD_KEY_TOKEN(rd, "rd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (rttype.is_set || is_set(rttype.yfilter)) leaf_name_data.push_back(rttype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rtflags.is_set || is_set(rtflags.yfilter)) leaf_name_data.push_back(rtflags.get_name_leafdata());
    if (numpaths.is_set || is_set(numpaths.yfilter)) leaf_name_data.push_back(numpaths.get_name_leafdata());
    if (bestpathid.is_set || is_set(bestpathid.yfilter)) leaf_name_data.push_back(bestpathid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_items != nullptr)
    {
        children["path-items"] = path_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtType")
    {
        rttype = value;
        rttype.value_namespace = name_space;
        rttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtFlags")
    {
        rtflags = value;
        rtflags.value_namespace = name_space;
        rtflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPaths")
    {
        numpaths = value;
        numpaths.value_namespace = name_space;
        numpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathId")
    {
        bestpathid = value;
        bestpathid.value_namespace = name_space;
        bestpathid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "rtType")
    {
        rttype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rtFlags")
    {
        rtflags.yfilter = yfilter;
    }
    if(value_path == "numPaths")
    {
        numpaths.yfilter = yfilter;
    }
    if(value_path == "bestPathId")
    {
        bestpathid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "pfx" || name == "rd" || name == "rtType" || name == "name" || name == "ver" || name == "rtFlags" || name == "numPaths" || name == "bestPathId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathItems()
    :
    path_list(this, {"peer", "id", "nh", "importedrd", "origimportedrd"})
{

    yang_name = "path-items"; yang_parent_name = "MvpnRoute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::~PathItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList>();
        c->parent = this;
        path_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(seg_items != nullptr)
    {
        children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        children["pmsi-items"] = pmsi_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList>();
        c->parent = this;
        asseg_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asseg_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asn_items != nullptr)
    {
        children["asn-items"] = asn_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        c->parent = this;
        asitem_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asitem_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList>();
        c->parent = this;
        regcomm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : regcomm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::RtItems()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList>();
        c->parent = this;
        extcommrt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extcommrt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    attrtype{YType::enumeration, "attrType"},
    nodeattrflags{YType::str, "nodeAttrFlags"},
    lnkattrflags{YType::str, "lnkAttrFlags"},
    pfxattrflags{YType::str, "pfxAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return attrtype.is_set
	|| nodeattrflags.is_set
	|| lnkattrflags.is_set
	|| pfxattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attrtype.yfilter)
	|| ydk::is_set(nodeattrflags.yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(pfxattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attrtype.is_set || is_set(attrtype.yfilter)) leaf_name_data.push_back(attrtype.get_name_leafdata());
    if (nodeattrflags.is_set || is_set(nodeattrflags.yfilter)) leaf_name_data.push_back(nodeattrflags.get_name_leafdata());
    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (pfxattrflags.is_set || is_set(pfxattrflags.yfilter)) leaf_name_data.push_back(pfxattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attrType")
    {
        attrtype = value;
        attrtype.value_namespace = name_space;
        attrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags = value;
        nodeattrflags.value_namespace = name_space;
        nodeattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags = value;
        pfxattrflags.value_namespace = name_space;
        pfxattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attrType")
    {
        attrtype.yfilter = yfilter;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags.yfilter = yfilter;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "attrType" || name == "nodeAttrFlags" || name == "lnkAttrFlags" || name == "pfxAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        c->parent = this;
        lnkstattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lnkstattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        c->parent = this;
        pfxsidattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pfxsidattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::MrttypeItems()
    :
    mcastrttyperoutes_list(this, {"rttype"})
{

    yang_name = "mrttype-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::~MrttypeItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcastrttyperoutes_list.len(); index++)
    {
        if(mcastrttyperoutes_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::has_operation() const
{
    for (std::size_t index=0; index<mcastrttyperoutes_list.len(); index++)
    {
        if(mcastrttyperoutes_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrttype-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McastRtTypeRoutes-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList>();
        c->parent = this;
        mcastrttyperoutes_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mcastrttyperoutes_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McastRtTypeRoutes-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::McastRtTypeRoutesList()
    :
    rttype{YType::enumeration, "rtType"}
        ,
    mvpnrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems>())
{
    mvpnrt_items->parent = this;

    yang_name = "McastRtTypeRoutes-list"; yang_parent_name = "mrttype-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::~McastRtTypeRoutesList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::has_data() const
{
    if (is_presence_container) return true;
    return rttype.is_set
	|| (mvpnrt_items !=  nullptr && mvpnrt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttype.yfilter)
	|| (mvpnrt_items !=  nullptr && mvpnrt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McastRtTypeRoutes-list";
    ADD_KEY_TOKEN(rttype, "rtType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttype.is_set || is_set(rttype.yfilter)) leaf_name_data.push_back(rttype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mvpnrt-items")
    {
        if(mvpnrt_items == nullptr)
        {
            mvpnrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems>();
        }
        return mvpnrt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mvpnrt_items != nullptr)
    {
        children["mvpnrt-items"] = mvpnrt_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtType")
    {
        rttype = value;
        rttype.value_namespace = name_space;
        rttype.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtType")
    {
        rttype.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mvpnrt-items" || name == "rtType")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnrtItems()
    :
    mvpnroute_list(this, {"pfx", "rd"})
{

    yang_name = "mvpnrt-items"; yang_parent_name = "McastRtTypeRoutes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::~MvpnrtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mvpnroute_list.len(); index++)
    {
        if(mvpnroute_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::has_operation() const
{
    for (std::size_t index=0; index<mvpnroute_list.len(); index++)
    {
        if(mvpnroute_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpnrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MvpnRoute-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList>();
        c->parent = this;
        mvpnroute_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mvpnroute_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MvpnRoute-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::MvpnRouteList()
    :
    pfx{YType::str, "pfx"},
    rd{YType::str, "rd"},
    rttype{YType::enumeration, "rtType"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rtflags{YType::str, "rtFlags"},
    numpaths{YType::uint32, "numPaths"},
    bestpathid{YType::uint32, "bestPathId"}
        ,
    path_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems>())
{
    path_items->parent = this;

    yang_name = "MvpnRoute-list"; yang_parent_name = "mvpnrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::~MvpnRouteList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| rd.is_set
	|| rttype.is_set
	|| name.is_set
	|| ver.is_set
	|| rtflags.is_set
	|| numpaths.is_set
	|| bestpathid.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(rttype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rtflags.yfilter)
	|| ydk::is_set(numpaths.yfilter)
	|| ydk::is_set(bestpathid.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MvpnRoute-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    ADD_KEY_TOKEN(rd, "rd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (rttype.is_set || is_set(rttype.yfilter)) leaf_name_data.push_back(rttype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rtflags.is_set || is_set(rtflags.yfilter)) leaf_name_data.push_back(rtflags.get_name_leafdata());
    if (numpaths.is_set || is_set(numpaths.yfilter)) leaf_name_data.push_back(numpaths.get_name_leafdata());
    if (bestpathid.is_set || is_set(bestpathid.yfilter)) leaf_name_data.push_back(bestpathid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_items != nullptr)
    {
        children["path-items"] = path_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtType")
    {
        rttype = value;
        rttype.value_namespace = name_space;
        rttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtFlags")
    {
        rtflags = value;
        rtflags.value_namespace = name_space;
        rtflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPaths")
    {
        numpaths = value;
        numpaths.value_namespace = name_space;
        numpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathId")
    {
        bestpathid = value;
        bestpathid.value_namespace = name_space;
        bestpathid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "rtType")
    {
        rttype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rtFlags")
    {
        rtflags.yfilter = yfilter;
    }
    if(value_path == "numPaths")
    {
        numpaths.yfilter = yfilter;
    }
    if(value_path == "bestPathId")
    {
        bestpathid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "pfx" || name == "rd" || name == "rtType" || name == "name" || name == "ver" || name == "rtFlags" || name == "numPaths" || name == "bestPathId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathItems()
    :
    path_list(this, {"peer", "id", "nh", "importedrd", "origimportedrd"})
{

    yang_name = "path-items"; yang_parent_name = "MvpnRoute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::~PathItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList>();
        c->parent = this;
        path_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(seg_items != nullptr)
    {
        children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        children["pmsi-items"] = pmsi_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList>();
        c->parent = this;
        asseg_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asseg_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asn_items != nullptr)
    {
        children["asn-items"] = asn_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        c->parent = this;
        asitem_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asitem_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList>();
        c->parent = this;
        regcomm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : regcomm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::RtItems()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList>();
        c->parent = this;
        extcommrt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extcommrt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    attrtype{YType::enumeration, "attrType"},
    nodeattrflags{YType::str, "nodeAttrFlags"},
    lnkattrflags{YType::str, "lnkAttrFlags"},
    pfxattrflags{YType::str, "pfxAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return attrtype.is_set
	|| nodeattrflags.is_set
	|| lnkattrflags.is_set
	|| pfxattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attrtype.yfilter)
	|| ydk::is_set(nodeattrflags.yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(pfxattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attrtype.is_set || is_set(attrtype.yfilter)) leaf_name_data.push_back(attrtype.get_name_leafdata());
    if (nodeattrflags.is_set || is_set(nodeattrflags.yfilter)) leaf_name_data.push_back(nodeattrflags.get_name_leafdata());
    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (pfxattrflags.is_set || is_set(pfxattrflags.yfilter)) leaf_name_data.push_back(pfxattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attrType")
    {
        attrtype = value;
        attrtype.value_namespace = name_space;
        attrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags = value;
        nodeattrflags.value_namespace = name_space;
        nodeattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags = value;
        pfxattrflags.value_namespace = name_space;
        pfxattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attrType")
    {
        attrtype.yfilter = yfilter;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags.yfilter = yfilter;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "attrType" || name == "nodeAttrFlags" || name == "lnkAttrFlags" || name == "pfxAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        c->parent = this;
        lnkstattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lnkstattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        c->parent = this;
        pfxsidattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pfxsidattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DefrtleakItems::DefrtleakItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "defrtleak-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DefrtleakItems::~DefrtleakItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DefrtleakItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DefrtleakItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DefrtleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defrtleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DefrtleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DefrtleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DefrtleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DefrtleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DefrtleakItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DefrtleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "scope" || name == "rtMap")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterleakItems()
    :
    interleakp_list(this, {"proto", "inst"})
{

    yang_name = "interleak-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::~InterleakItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interleakp_list.len(); index++)
    {
        if(interleakp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::has_operation() const
{
    for (std::size_t index=0; index<interleakp_list.len(); index++)
    {
        if(interleakp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InterLeakP-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList>();
        c->parent = this;
        interleakp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interleakp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InterLeakP-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::InterLeakPList()
    :
    proto{YType::enumeration, "proto"},
    inst{YType::str, "inst"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"},
    asn{YType::str, "asn"}
{

    yang_name = "InterLeakP-list"; yang_parent_name = "interleak-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::~InterLeakPList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| inst.is_set
	|| name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(inst.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InterLeakP-list";
    ADD_KEY_TOKEN(proto, "proto");
    ADD_KEY_TOKEN(inst, "inst");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (inst.is_set || is_set(inst.yfilter)) leaf_name_data.push_back(inst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inst")
    {
        inst = value;
        inst.value_namespace = name_space;
        inst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "inst")
    {
        inst.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "inst" || name == "name" || name == "descr" || name == "scope" || name == "rtMap" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::InjnameItems()
    :
    injleakp_list(this, {"name", "rtmap"})
{

    yang_name = "injname-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::~InjnameItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<injleakp_list.len(); index++)
    {
        if(injleakp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::has_operation() const
{
    for (std::size_t index=0; index<injleakp_list.len(); index++)
    {
        if(injleakp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "injname-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InjLeakP-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::InjLeakPList>();
        c->parent = this;
        injleakp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : injleakp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InjLeakP-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::InjLeakPList::InjLeakPList()
    :
    name{YType::str, "name"},
    rtmap{YType::str, "rtMap"},
    copyattr{YType::enumeration, "copyAttr"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"}
{

    yang_name = "InjLeakP-list"; yang_parent_name = "injname-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::InjLeakPList::~InjLeakPList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::InjLeakPList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| rtmap.is_set
	|| copyattr.is_set
	|| descr.is_set
	|| scope.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::InjLeakPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(copyattr.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::InjLeakPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InjLeakP-list";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(rtmap, "rtMap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::InjLeakPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (copyattr.is_set || is_set(copyattr.yfilter)) leaf_name_data.push_back(copyattr.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::InjLeakPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::InjLeakPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::InjLeakPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "copyAttr")
    {
        copyattr = value;
        copyattr.value_namespace = name_space;
        copyattr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::InjLeakPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "copyAttr")
    {
        copyattr.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::InjLeakPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "rtMap" || name == "copyAttr" || name == "descr" || name == "scope")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttpItems()
    :
    rttp_list(this, {"type"})
{

    yang_name = "rttp-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::~RttpItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::has_operation() const
{
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttP-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList>();
        c->parent = this;
        rttp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttP-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::RttPList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    operrttauto{YType::str, "operRttAuto"}
        ,
    ent_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems>())
{
    ent_items->parent = this;

    yang_name = "RttP-list"; yang_parent_name = "rttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::~RttPList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| descr.is_set
	|| operrttauto.is_set
	|| (ent_items !=  nullptr && ent_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(operrttauto.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttP-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (operrttauto.is_set || is_set(operrttauto.yfilter)) leaf_name_data.push_back(operrttauto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems>();
        }
        return ent_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ent_items != nullptr)
    {
        children["ent-items"] = ent_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRttAuto")
    {
        operrttauto = value;
        operrttauto.value_namespace = name_space;
        operrttauto.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "operRttAuto")
    {
        operrttauto.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "type" || name == "name" || name == "descr" || name == "operRttAuto")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::EntItems()
    :
    rttentry_list(this, {"rtt"})
{

    yang_name = "ent-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::~EntItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::RttEntryList>();
        c->parent = this;
        rttentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::RttEntryList::RttEntryList()
    :
    rtt{YType::str, "rtt"},
    adminst{YType::enumeration, "adminSt"}
{

    yang_name = "RttEntry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::RttEntryList::~RttEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::RttEntryList::has_data() const
{
    if (is_presence_container) return true;
    return rtt.is_set
	|| adminst.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::RttEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(adminst.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::RttEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttEntry-list";
    ADD_KEY_TOKEN(rtt, "rtt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::RttEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::RttEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::RttEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::RttEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::RttEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttpItems::RttPList::EntItems::RttEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt" || name == "adminSt")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::BmpItems::BmpItems()
    :
    bmpsvr_list(this, {"id"})
{

    yang_name = "bmp-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::BmpItems::~BmpItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::BmpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bmpsvr_list.len(); index++)
    {
        if(bmpsvr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::BmpItems::has_operation() const
{
    for (std::size_t index=0; index<bmpsvr_list.len(); index++)
    {
        if(bmpsvr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::BmpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::BmpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::BmpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BmpSvr-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::BmpItems::BmpSvrList>();
        c->parent = this;
        bmpsvr_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::BmpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bmpsvr_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::BmpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::BmpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::BmpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BmpSvr-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::BmpItems::BmpSvrList::BmpSvrList()
    :
    id{YType::uint8, "id"},
    addr{YType::str, "addr"},
    port{YType::uint16, "port"},
    descr{YType::str, "descr"},
    refreshintvldelay{YType::uint16, "refreshIntvlDelay"},
    refreshintvlskip{YType::boolean, "refreshIntvlSkip"},
    delayintvl{YType::uint16, "delayIntvl"},
    statintvl{YType::uint16, "statIntvl"},
    adminst{YType::enumeration, "adminSt"},
    vrfname{YType::str, "vrfName"},
    srcif{YType::str, "srcIf"}
{

    yang_name = "BmpSvr-list"; yang_parent_name = "bmp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::BmpItems::BmpSvrList::~BmpSvrList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::BmpItems::BmpSvrList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| addr.is_set
	|| port.is_set
	|| descr.is_set
	|| refreshintvldelay.is_set
	|| refreshintvlskip.is_set
	|| delayintvl.is_set
	|| statintvl.is_set
	|| adminst.is_set
	|| vrfname.is_set
	|| srcif.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::BmpItems::BmpSvrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(refreshintvldelay.yfilter)
	|| ydk::is_set(refreshintvlskip.yfilter)
	|| ydk::is_set(delayintvl.yfilter)
	|| ydk::is_set(statintvl.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(srcif.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::BmpItems::BmpSvrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BmpSvr-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::BmpItems::BmpSvrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (refreshintvldelay.is_set || is_set(refreshintvldelay.yfilter)) leaf_name_data.push_back(refreshintvldelay.get_name_leafdata());
    if (refreshintvlskip.is_set || is_set(refreshintvlskip.yfilter)) leaf_name_data.push_back(refreshintvlskip.get_name_leafdata());
    if (delayintvl.is_set || is_set(delayintvl.yfilter)) leaf_name_data.push_back(delayintvl.get_name_leafdata());
    if (statintvl.is_set || is_set(statintvl.yfilter)) leaf_name_data.push_back(statintvl.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::BmpItems::BmpSvrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::BmpItems::BmpSvrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::BmpItems::BmpSvrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refreshIntvlDelay")
    {
        refreshintvldelay = value;
        refreshintvldelay.value_namespace = name_space;
        refreshintvldelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refreshIntvlSkip")
    {
        refreshintvlskip = value;
        refreshintvlskip.value_namespace = name_space;
        refreshintvlskip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delayIntvl")
    {
        delayintvl = value;
        delayintvl.value_namespace = name_space;
        delayintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statIntvl")
    {
        statintvl = value;
        statintvl.value_namespace = name_space;
        statintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::BmpItems::BmpSvrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "refreshIntvlDelay")
    {
        refreshintvldelay.yfilter = yfilter;
    }
    if(value_path == "refreshIntvlSkip")
    {
        refreshintvlskip.yfilter = yfilter;
    }
    if(value_path == "delayIntvl")
    {
        delayintvl.yfilter = yfilter;
    }
    if(value_path == "statIntvl")
    {
        statintvl.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::BmpItems::BmpSvrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "addr" || name == "port" || name == "descr" || name == "refreshIntvlDelay" || name == "refreshIntvlSkip" || name == "delayIntvl" || name == "statIntvl" || name == "adminSt" || name == "vrfName" || name == "srcIf")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BdeviItems()
    :
    bdevi_list(this, {"encap"})
{

    yang_name = "bdevi-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::BdeviItems::~BdeviItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::BdeviItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bdevi_list.len(); index++)
    {
        if(bdevi_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::BdeviItems::has_operation() const
{
    for (std::size_t index=0; index<bdevi_list.len(); index++)
    {
        if(bdevi_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::BdeviItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdevi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::BdeviItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::BdeviItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BDEvi-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList>();
        c->parent = this;
        bdevi_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::BdeviItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bdevi_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::BdeviItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::BdeviItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::BdeviItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BDEvi-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::BDEviList()
    :
    encap{YType::str, "encap"},
    name{YType::str, "name"},
    rd{YType::str, "rd"}
        ,
    rttp_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems>())
{
    rttp_items->parent = this;

    yang_name = "BDEvi-list"; yang_parent_name = "bdevi-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::~BDEviList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| name.is_set
	|| rd.is_set
	|| (rttp_items !=  nullptr && rttp_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (rttp_items !=  nullptr && rttp_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BDEvi-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttp-items")
    {
        if(rttp_items == nullptr)
        {
            rttp_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems>();
        }
        return rttp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rttp_items != nullptr)
    {
        children["rttp-items"] = rttp_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttp-items" || name == "encap" || name == "name" || name == "rd")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttpItems()
    :
    rttp_list(this, {"type"})
{

    yang_name = "rttp-items"; yang_parent_name = "BDEvi-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::~RttpItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::has_operation() const
{
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttP-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList>();
        c->parent = this;
        rttp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttP-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::RttPList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    operrttauto{YType::str, "operRttAuto"}
        ,
    ent_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems>())
{
    ent_items->parent = this;

    yang_name = "RttP-list"; yang_parent_name = "rttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::~RttPList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| descr.is_set
	|| operrttauto.is_set
	|| (ent_items !=  nullptr && ent_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(operrttauto.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttP-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (operrttauto.is_set || is_set(operrttauto.yfilter)) leaf_name_data.push_back(operrttauto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems>();
        }
        return ent_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ent_items != nullptr)
    {
        children["ent-items"] = ent_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRttAuto")
    {
        operrttauto = value;
        operrttauto.value_namespace = name_space;
        operrttauto.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "operRttAuto")
    {
        operrttauto.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "type" || name == "name" || name == "descr" || name == "operRttAuto")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::EntItems()
    :
    rttentry_list(this, {"rtt"})
{

    yang_name = "ent-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::~EntItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList>();
        c->parent = this;
        rttentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::RttEntryList()
    :
    rtt{YType::str, "rtt"},
    adminst{YType::enumeration, "adminSt"}
{

    yang_name = "RttEntry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::~RttEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::has_data() const
{
    if (is_presence_container) return true;
    return rtt.is_set
	|| adminst.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(adminst.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttEntry-list";
    ADD_KEY_TOKEN(rtt, "rtt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt" || name == "adminSt")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::GrItems::GrItems()
    :
    ctrl{YType::str, "ctrl"},
    restartintvl{YType::uint16, "restartIntvl"},
    staleintvl{YType::uint16, "staleIntvl"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "gr-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::GrItems::~GrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::GrItems::has_data() const
{
    if (is_presence_container) return true;
    return ctrl.is_set
	|| restartintvl.is_set
	|| staleintvl.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::GrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(restartintvl.yfilter)
	|| ydk::is_set(staleintvl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::GrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::GrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (restartintvl.is_set || is_set(restartintvl.yfilter)) leaf_name_data.push_back(restartintvl.get_name_leafdata());
    if (staleintvl.is_set || is_set(staleintvl.yfilter)) leaf_name_data.push_back(staleintvl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::GrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::GrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::GrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restartIntvl")
    {
        restartintvl = value;
        restartintvl.value_namespace = name_space;
        restartintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleIntvl")
    {
        staleintvl = value;
        staleintvl.value_namespace = name_space;
        staleintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::GrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "restartIntvl")
    {
        restartintvl.yfilter = yfilter;
    }
    if(value_path == "staleIntvl")
    {
        staleintvl.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::GrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ctrl" || name == "restartIntvl" || name == "staleIntvl" || name == "name" || name == "descr")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerItems()
    :
    peer_list(this, {"addr"})
{

    yang_name = "peer-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::~PeerItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_list.len(); index++)
    {
        if(peer_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::has_operation() const
{
    for (std::size_t index=0; index<peer_list.len(); index++)
    {
        if(peer_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Peer-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList>();
        c->parent = this;
        peer_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : peer_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Peer-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerList()
    :
    addr{YType::str, "addr"},
    adminst{YType::enumeration, "adminSt"},
    asn{YType::str, "asn"},
    lognbrchgs{YType::enumeration, "logNbrChgs"},
    peertype{YType::enumeration, "peerType"},
    dynrtmap{YType::str, "dynRtMap"},
    srcif{YType::str, "srcIf"},
    password{YType::str, "password"},
    ctrl{YType::str, "ctrl"},
    ttl{YType::uint16, "ttl"},
    kaintvl{YType::uint16, "kaIntvl"},
    holdintvl{YType::uint16, "holdIntvl"},
    connmode{YType::str, "connMode"},
    maxpeercnt{YType::uint32, "maxPeerCnt"},
    sessioncontimp{YType::str, "sessionContImp"},
    peerimp{YType::str, "peerImp"},
    privateasctrl{YType::enumeration, "privateASctrl"},
    epe{YType::enumeration, "epe"},
    epepeerset{YType::str, "epePeerSet"},
    lowmemexempt{YType::enumeration, "lowMemExempt"},
    capsuppr4byteasn{YType::enumeration, "capSuppr4ByteAsn"},
    affgrp{YType::uint16, "affGrp"},
    ttlscrtyhops{YType::uint16, "ttlScrtyHops"},
    bmpsrvid1st{YType::enumeration, "bmpSrvId1St"},
    bmpsrvid2st{YType::enumeration, "bmpSrvId2St"},
    maxpfxpeers{YType::uint64, "maxPfxPeers"},
    curpfxpeers{YType::uint64, "curPfxPeers"},
    activepfxpeers{YType::uint64, "activePfxPeers"},
    maxcurpeers{YType::uint64, "maxCurPeers"},
    totalpfxpeers{YType::uint64, "totalPfxPeers"},
    inheritcontpeerctrl{YType::str, "inheritContPeerCtrl"},
    name{YType::str, "name"}
        ,
    localasn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::LocalasnItems>())
    , ent_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems>())
    , epe_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems>())
    , af_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems>())
{
    localasn_items->parent = this;
    ent_items->parent = this;
    epe_items->parent = this;
    af_items->parent = this;

    yang_name = "Peer-list"; yang_parent_name = "peer-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::~PeerList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| adminst.is_set
	|| asn.is_set
	|| lognbrchgs.is_set
	|| peertype.is_set
	|| dynrtmap.is_set
	|| srcif.is_set
	|| password.is_set
	|| ctrl.is_set
	|| ttl.is_set
	|| kaintvl.is_set
	|| holdintvl.is_set
	|| connmode.is_set
	|| maxpeercnt.is_set
	|| sessioncontimp.is_set
	|| peerimp.is_set
	|| privateasctrl.is_set
	|| epe.is_set
	|| epepeerset.is_set
	|| lowmemexempt.is_set
	|| capsuppr4byteasn.is_set
	|| affgrp.is_set
	|| ttlscrtyhops.is_set
	|| bmpsrvid1st.is_set
	|| bmpsrvid2st.is_set
	|| maxpfxpeers.is_set
	|| curpfxpeers.is_set
	|| activepfxpeers.is_set
	|| maxcurpeers.is_set
	|| totalpfxpeers.is_set
	|| inheritcontpeerctrl.is_set
	|| name.is_set
	|| (localasn_items !=  nullptr && localasn_items->has_data())
	|| (ent_items !=  nullptr && ent_items->has_data())
	|| (epe_items !=  nullptr && epe_items->has_data())
	|| (af_items !=  nullptr && af_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(lognbrchgs.yfilter)
	|| ydk::is_set(peertype.yfilter)
	|| ydk::is_set(dynrtmap.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(kaintvl.yfilter)
	|| ydk::is_set(holdintvl.yfilter)
	|| ydk::is_set(connmode.yfilter)
	|| ydk::is_set(maxpeercnt.yfilter)
	|| ydk::is_set(sessioncontimp.yfilter)
	|| ydk::is_set(peerimp.yfilter)
	|| ydk::is_set(privateasctrl.yfilter)
	|| ydk::is_set(epe.yfilter)
	|| ydk::is_set(epepeerset.yfilter)
	|| ydk::is_set(lowmemexempt.yfilter)
	|| ydk::is_set(capsuppr4byteasn.yfilter)
	|| ydk::is_set(affgrp.yfilter)
	|| ydk::is_set(ttlscrtyhops.yfilter)
	|| ydk::is_set(bmpsrvid1st.yfilter)
	|| ydk::is_set(bmpsrvid2st.yfilter)
	|| ydk::is_set(maxpfxpeers.yfilter)
	|| ydk::is_set(curpfxpeers.yfilter)
	|| ydk::is_set(activepfxpeers.yfilter)
	|| ydk::is_set(maxcurpeers.yfilter)
	|| ydk::is_set(totalpfxpeers.yfilter)
	|| ydk::is_set(inheritcontpeerctrl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (localasn_items !=  nullptr && localasn_items->has_operation())
	|| (ent_items !=  nullptr && ent_items->has_operation())
	|| (epe_items !=  nullptr && epe_items->has_operation())
	|| (af_items !=  nullptr && af_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Peer-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (lognbrchgs.is_set || is_set(lognbrchgs.yfilter)) leaf_name_data.push_back(lognbrchgs.get_name_leafdata());
    if (peertype.is_set || is_set(peertype.yfilter)) leaf_name_data.push_back(peertype.get_name_leafdata());
    if (dynrtmap.is_set || is_set(dynrtmap.yfilter)) leaf_name_data.push_back(dynrtmap.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (kaintvl.is_set || is_set(kaintvl.yfilter)) leaf_name_data.push_back(kaintvl.get_name_leafdata());
    if (holdintvl.is_set || is_set(holdintvl.yfilter)) leaf_name_data.push_back(holdintvl.get_name_leafdata());
    if (connmode.is_set || is_set(connmode.yfilter)) leaf_name_data.push_back(connmode.get_name_leafdata());
    if (maxpeercnt.is_set || is_set(maxpeercnt.yfilter)) leaf_name_data.push_back(maxpeercnt.get_name_leafdata());
    if (sessioncontimp.is_set || is_set(sessioncontimp.yfilter)) leaf_name_data.push_back(sessioncontimp.get_name_leafdata());
    if (peerimp.is_set || is_set(peerimp.yfilter)) leaf_name_data.push_back(peerimp.get_name_leafdata());
    if (privateasctrl.is_set || is_set(privateasctrl.yfilter)) leaf_name_data.push_back(privateasctrl.get_name_leafdata());
    if (epe.is_set || is_set(epe.yfilter)) leaf_name_data.push_back(epe.get_name_leafdata());
    if (epepeerset.is_set || is_set(epepeerset.yfilter)) leaf_name_data.push_back(epepeerset.get_name_leafdata());
    if (lowmemexempt.is_set || is_set(lowmemexempt.yfilter)) leaf_name_data.push_back(lowmemexempt.get_name_leafdata());
    if (capsuppr4byteasn.is_set || is_set(capsuppr4byteasn.yfilter)) leaf_name_data.push_back(capsuppr4byteasn.get_name_leafdata());
    if (affgrp.is_set || is_set(affgrp.yfilter)) leaf_name_data.push_back(affgrp.get_name_leafdata());
    if (ttlscrtyhops.is_set || is_set(ttlscrtyhops.yfilter)) leaf_name_data.push_back(ttlscrtyhops.get_name_leafdata());
    if (bmpsrvid1st.is_set || is_set(bmpsrvid1st.yfilter)) leaf_name_data.push_back(bmpsrvid1st.get_name_leafdata());
    if (bmpsrvid2st.is_set || is_set(bmpsrvid2st.yfilter)) leaf_name_data.push_back(bmpsrvid2st.get_name_leafdata());
    if (maxpfxpeers.is_set || is_set(maxpfxpeers.yfilter)) leaf_name_data.push_back(maxpfxpeers.get_name_leafdata());
    if (curpfxpeers.is_set || is_set(curpfxpeers.yfilter)) leaf_name_data.push_back(curpfxpeers.get_name_leafdata());
    if (activepfxpeers.is_set || is_set(activepfxpeers.yfilter)) leaf_name_data.push_back(activepfxpeers.get_name_leafdata());
    if (maxcurpeers.is_set || is_set(maxcurpeers.yfilter)) leaf_name_data.push_back(maxcurpeers.get_name_leafdata());
    if (totalpfxpeers.is_set || is_set(totalpfxpeers.yfilter)) leaf_name_data.push_back(totalpfxpeers.get_name_leafdata());
    if (inheritcontpeerctrl.is_set || is_set(inheritcontpeerctrl.yfilter)) leaf_name_data.push_back(inheritcontpeerctrl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localasn-items")
    {
        if(localasn_items == nullptr)
        {
            localasn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::LocalasnItems>();
        }
        return localasn_items;
    }

    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems>();
        }
        return ent_items;
    }

    if(child_yang_name == "epe-items")
    {
        if(epe_items == nullptr)
        {
            epe_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems>();
        }
        return epe_items;
    }

    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems>();
        }
        return af_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(localasn_items != nullptr)
    {
        children["localasn-items"] = localasn_items;
    }

    if(ent_items != nullptr)
    {
        children["ent-items"] = ent_items;
    }

    if(epe_items != nullptr)
    {
        children["epe-items"] = epe_items;
    }

    if(af_items != nullptr)
    {
        children["af-items"] = af_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logNbrChgs")
    {
        lognbrchgs = value;
        lognbrchgs.value_namespace = name_space;
        lognbrchgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerType")
    {
        peertype = value;
        peertype.value_namespace = name_space;
        peertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynRtMap")
    {
        dynrtmap = value;
        dynrtmap.value_namespace = name_space;
        dynrtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kaIntvl")
    {
        kaintvl = value;
        kaintvl.value_namespace = name_space;
        kaintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl = value;
        holdintvl.value_namespace = name_space;
        holdintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connMode")
    {
        connmode = value;
        connmode.value_namespace = name_space;
        connmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxPeerCnt")
    {
        maxpeercnt = value;
        maxpeercnt.value_namespace = name_space;
        maxpeercnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessionContImp")
    {
        sessioncontimp = value;
        sessioncontimp.value_namespace = name_space;
        sessioncontimp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerImp")
    {
        peerimp = value;
        peerimp.value_namespace = name_space;
        peerimp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privateASctrl")
    {
        privateasctrl = value;
        privateasctrl.value_namespace = name_space;
        privateasctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epe")
    {
        epe = value;
        epe.value_namespace = name_space;
        epe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epePeerSet")
    {
        epepeerset = value;
        epepeerset.value_namespace = name_space;
        epepeerset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowMemExempt")
    {
        lowmemexempt = value;
        lowmemexempt.value_namespace = name_space;
        lowmemexempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capSuppr4ByteAsn")
    {
        capsuppr4byteasn = value;
        capsuppr4byteasn.value_namespace = name_space;
        capsuppr4byteasn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affGrp")
    {
        affgrp = value;
        affgrp.value_namespace = name_space;
        affgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttlScrtyHops")
    {
        ttlscrtyhops = value;
        ttlscrtyhops.value_namespace = name_space;
        ttlscrtyhops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmpSrvId1St")
    {
        bmpsrvid1st = value;
        bmpsrvid1st.value_namespace = name_space;
        bmpsrvid1st.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmpSrvId2St")
    {
        bmpsrvid2st = value;
        bmpsrvid2st.value_namespace = name_space;
        bmpsrvid2st.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxPfxPeers")
    {
        maxpfxpeers = value;
        maxpfxpeers.value_namespace = name_space;
        maxpfxpeers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curPfxPeers")
    {
        curpfxpeers = value;
        curpfxpeers.value_namespace = name_space;
        curpfxpeers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activePfxPeers")
    {
        activepfxpeers = value;
        activepfxpeers.value_namespace = name_space;
        activepfxpeers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxCurPeers")
    {
        maxcurpeers = value;
        maxcurpeers.value_namespace = name_space;
        maxcurpeers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalPfxPeers")
    {
        totalpfxpeers = value;
        totalpfxpeers.value_namespace = name_space;
        totalpfxpeers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inheritContPeerCtrl")
    {
        inheritcontpeerctrl = value;
        inheritcontpeerctrl.value_namespace = name_space;
        inheritcontpeerctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "logNbrChgs")
    {
        lognbrchgs.yfilter = yfilter;
    }
    if(value_path == "peerType")
    {
        peertype.yfilter = yfilter;
    }
    if(value_path == "dynRtMap")
    {
        dynrtmap.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "kaIntvl")
    {
        kaintvl.yfilter = yfilter;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl.yfilter = yfilter;
    }
    if(value_path == "connMode")
    {
        connmode.yfilter = yfilter;
    }
    if(value_path == "maxPeerCnt")
    {
        maxpeercnt.yfilter = yfilter;
    }
    if(value_path == "sessionContImp")
    {
        sessioncontimp.yfilter = yfilter;
    }
    if(value_path == "peerImp")
    {
        peerimp.yfilter = yfilter;
    }
    if(value_path == "privateASctrl")
    {
        privateasctrl.yfilter = yfilter;
    }
    if(value_path == "epe")
    {
        epe.yfilter = yfilter;
    }
    if(value_path == "epePeerSet")
    {
        epepeerset.yfilter = yfilter;
    }
    if(value_path == "lowMemExempt")
    {
        lowmemexempt.yfilter = yfilter;
    }
    if(value_path == "capSuppr4ByteAsn")
    {
        capsuppr4byteasn.yfilter = yfilter;
    }
    if(value_path == "affGrp")
    {
        affgrp.yfilter = yfilter;
    }
    if(value_path == "ttlScrtyHops")
    {
        ttlscrtyhops.yfilter = yfilter;
    }
    if(value_path == "bmpSrvId1St")
    {
        bmpsrvid1st.yfilter = yfilter;
    }
    if(value_path == "bmpSrvId2St")
    {
        bmpsrvid2st.yfilter = yfilter;
    }
    if(value_path == "maxPfxPeers")
    {
        maxpfxpeers.yfilter = yfilter;
    }
    if(value_path == "curPfxPeers")
    {
        curpfxpeers.yfilter = yfilter;
    }
    if(value_path == "activePfxPeers")
    {
        activepfxpeers.yfilter = yfilter;
    }
    if(value_path == "maxCurPeers")
    {
        maxcurpeers.yfilter = yfilter;
    }
    if(value_path == "totalPfxPeers")
    {
        totalpfxpeers.yfilter = yfilter;
    }
    if(value_path == "inheritContPeerCtrl")
    {
        inheritcontpeerctrl.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localasn-items" || name == "ent-items" || name == "epe-items" || name == "af-items" || name == "addr" || name == "adminSt" || name == "asn" || name == "logNbrChgs" || name == "peerType" || name == "dynRtMap" || name == "srcIf" || name == "password" || name == "ctrl" || name == "ttl" || name == "kaIntvl" || name == "holdIntvl" || name == "connMode" || name == "maxPeerCnt" || name == "sessionContImp" || name == "peerImp" || name == "privateASctrl" || name == "epe" || name == "epePeerSet" || name == "lowMemExempt" || name == "capSuppr4ByteAsn" || name == "affGrp" || name == "ttlScrtyHops" || name == "bmpSrvId1St" || name == "bmpSrvId2St" || name == "maxPfxPeers" || name == "curPfxPeers" || name == "activePfxPeers" || name == "maxCurPeers" || name == "totalPfxPeers" || name == "inheritContPeerCtrl" || name == "name")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::LocalasnItems::LocalasnItems()
    :
    localasn{YType::str, "localAsn"},
    asnpropagate{YType::enumeration, "asnPropagate"},
    name{YType::str, "name"}
{

    yang_name = "localasn-items"; yang_parent_name = "Peer-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::LocalasnItems::~LocalasnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::LocalasnItems::has_data() const
{
    if (is_presence_container) return true;
    return localasn.is_set
	|| asnpropagate.is_set
	|| name.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::LocalasnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localasn.yfilter)
	|| ydk::is_set(asnpropagate.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::LocalasnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localasn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::LocalasnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localasn.is_set || is_set(localasn.yfilter)) leaf_name_data.push_back(localasn.get_name_leafdata());
    if (asnpropagate.is_set || is_set(asnpropagate.yfilter)) leaf_name_data.push_back(asnpropagate.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::LocalasnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::LocalasnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::LocalasnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localAsn")
    {
        localasn = value;
        localasn.value_namespace = name_space;
        localasn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asnPropagate")
    {
        asnpropagate = value;
        asnpropagate.value_namespace = name_space;
        asnpropagate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::LocalasnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localAsn")
    {
        localasn.yfilter = yfilter;
    }
    if(value_path == "asnPropagate")
    {
        asnpropagate.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::LocalasnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localAsn" || name == "asnPropagate" || name == "name")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::EntItems()
    :
    peerentry_list(this, {"addr"})
{

    yang_name = "ent-items"; yang_parent_name = "Peer-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::~EntItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peerentry_list.len(); index++)
    {
        if(peerentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<peerentry_list.len(); index++)
    {
        if(peerentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PeerEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList>();
        c->parent = this;
        peerentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : peerentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PeerEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::PeerEntryList()
    :
    addr{YType::str, "addr"},
    type{YType::enumeration, "type"},
    rtrid{YType::str, "rtrId"},
    operst{YType::enumeration, "operSt"},
    prevoperst{YType::enumeration, "prevOperSt"},
    shutstqual{YType::enumeration, "shutStQual"},
    lastflapts{YType::str, "lastFlapTs"},
    maxconnretryintvl{YType::uint16, "maxConnRetryIntvl"},
    flags{YType::str, "flags"},
    advcap{YType::str, "advCap"},
    rcvcap{YType::str, "rcvCap"},
    connif{YType::str, "connIf"},
    holdintvl{YType::uint16, "holdIntvl"},
    kaintvl{YType::uint16, "kaIntvl"},
    localip{YType::str, "localIp"},
    localport{YType::uint16, "localPort"},
    remoteport{YType::uint16, "remotePort"},
    connest{YType::uint16, "connEst"},
    conndrop{YType::uint16, "connDrop"},
    updateelapsedts{YType::str, "updateElapsedTs"},
    fd{YType::uint32, "fd"},
    peeridx{YType::uint16, "peerIdx"},
    connattempts{YType::uint32, "connAttempts"},
    streason{YType::enumeration, "stReason"},
    passwdset{YType::enumeration, "passwdSet"},
    name{YType::str, "name"}
        ,
    gr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::GrItems>())
    , ev_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EvItems>())
    , epe_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems>())
    , af_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems>())
    , peerstats_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::PeerstatsItems>())
{
    gr_items->parent = this;
    ev_items->parent = this;
    epe_items->parent = this;
    af_items->parent = this;
    peerstats_items->parent = this;

    yang_name = "PeerEntry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::~PeerEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| type.is_set
	|| rtrid.is_set
	|| operst.is_set
	|| prevoperst.is_set
	|| shutstqual.is_set
	|| lastflapts.is_set
	|| maxconnretryintvl.is_set
	|| flags.is_set
	|| advcap.is_set
	|| rcvcap.is_set
	|| connif.is_set
	|| holdintvl.is_set
	|| kaintvl.is_set
	|| localip.is_set
	|| localport.is_set
	|| remoteport.is_set
	|| connest.is_set
	|| conndrop.is_set
	|| updateelapsedts.is_set
	|| fd.is_set
	|| peeridx.is_set
	|| connattempts.is_set
	|| streason.is_set
	|| passwdset.is_set
	|| name.is_set
	|| (gr_items !=  nullptr && gr_items->has_data())
	|| (ev_items !=  nullptr && ev_items->has_data())
	|| (epe_items !=  nullptr && epe_items->has_data())
	|| (af_items !=  nullptr && af_items->has_data())
	|| (peerstats_items !=  nullptr && peerstats_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rtrid.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(prevoperst.yfilter)
	|| ydk::is_set(shutstqual.yfilter)
	|| ydk::is_set(lastflapts.yfilter)
	|| ydk::is_set(maxconnretryintvl.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(advcap.yfilter)
	|| ydk::is_set(rcvcap.yfilter)
	|| ydk::is_set(connif.yfilter)
	|| ydk::is_set(holdintvl.yfilter)
	|| ydk::is_set(kaintvl.yfilter)
	|| ydk::is_set(localip.yfilter)
	|| ydk::is_set(localport.yfilter)
	|| ydk::is_set(remoteport.yfilter)
	|| ydk::is_set(connest.yfilter)
	|| ydk::is_set(conndrop.yfilter)
	|| ydk::is_set(updateelapsedts.yfilter)
	|| ydk::is_set(fd.yfilter)
	|| ydk::is_set(peeridx.yfilter)
	|| ydk::is_set(connattempts.yfilter)
	|| ydk::is_set(streason.yfilter)
	|| ydk::is_set(passwdset.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (gr_items !=  nullptr && gr_items->has_operation())
	|| (ev_items !=  nullptr && ev_items->has_operation())
	|| (epe_items !=  nullptr && epe_items->has_operation())
	|| (af_items !=  nullptr && af_items->has_operation())
	|| (peerstats_items !=  nullptr && peerstats_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PeerEntry-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rtrid.is_set || is_set(rtrid.yfilter)) leaf_name_data.push_back(rtrid.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (prevoperst.is_set || is_set(prevoperst.yfilter)) leaf_name_data.push_back(prevoperst.get_name_leafdata());
    if (shutstqual.is_set || is_set(shutstqual.yfilter)) leaf_name_data.push_back(shutstqual.get_name_leafdata());
    if (lastflapts.is_set || is_set(lastflapts.yfilter)) leaf_name_data.push_back(lastflapts.get_name_leafdata());
    if (maxconnretryintvl.is_set || is_set(maxconnretryintvl.yfilter)) leaf_name_data.push_back(maxconnretryintvl.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (advcap.is_set || is_set(advcap.yfilter)) leaf_name_data.push_back(advcap.get_name_leafdata());
    if (rcvcap.is_set || is_set(rcvcap.yfilter)) leaf_name_data.push_back(rcvcap.get_name_leafdata());
    if (connif.is_set || is_set(connif.yfilter)) leaf_name_data.push_back(connif.get_name_leafdata());
    if (holdintvl.is_set || is_set(holdintvl.yfilter)) leaf_name_data.push_back(holdintvl.get_name_leafdata());
    if (kaintvl.is_set || is_set(kaintvl.yfilter)) leaf_name_data.push_back(kaintvl.get_name_leafdata());
    if (localip.is_set || is_set(localip.yfilter)) leaf_name_data.push_back(localip.get_name_leafdata());
    if (localport.is_set || is_set(localport.yfilter)) leaf_name_data.push_back(localport.get_name_leafdata());
    if (remoteport.is_set || is_set(remoteport.yfilter)) leaf_name_data.push_back(remoteport.get_name_leafdata());
    if (connest.is_set || is_set(connest.yfilter)) leaf_name_data.push_back(connest.get_name_leafdata());
    if (conndrop.is_set || is_set(conndrop.yfilter)) leaf_name_data.push_back(conndrop.get_name_leafdata());
    if (updateelapsedts.is_set || is_set(updateelapsedts.yfilter)) leaf_name_data.push_back(updateelapsedts.get_name_leafdata());
    if (fd.is_set || is_set(fd.yfilter)) leaf_name_data.push_back(fd.get_name_leafdata());
    if (peeridx.is_set || is_set(peeridx.yfilter)) leaf_name_data.push_back(peeridx.get_name_leafdata());
    if (connattempts.is_set || is_set(connattempts.yfilter)) leaf_name_data.push_back(connattempts.get_name_leafdata());
    if (streason.is_set || is_set(streason.yfilter)) leaf_name_data.push_back(streason.get_name_leafdata());
    if (passwdset.is_set || is_set(passwdset.yfilter)) leaf_name_data.push_back(passwdset.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gr-items")
    {
        if(gr_items == nullptr)
        {
            gr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::GrItems>();
        }
        return gr_items;
    }

    if(child_yang_name == "ev-items")
    {
        if(ev_items == nullptr)
        {
            ev_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EvItems>();
        }
        return ev_items;
    }

    if(child_yang_name == "epe-items")
    {
        if(epe_items == nullptr)
        {
            epe_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems>();
        }
        return epe_items;
    }

    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems>();
        }
        return af_items;
    }

    if(child_yang_name == "peerstats-items")
    {
        if(peerstats_items == nullptr)
        {
            peerstats_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::PeerstatsItems>();
        }
        return peerstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gr_items != nullptr)
    {
        children["gr-items"] = gr_items;
    }

    if(ev_items != nullptr)
    {
        children["ev-items"] = ev_items;
    }

    if(epe_items != nullptr)
    {
        children["epe-items"] = epe_items;
    }

    if(af_items != nullptr)
    {
        children["af-items"] = af_items;
    }

    if(peerstats_items != nullptr)
    {
        children["peerstats-items"] = peerstats_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrId")
    {
        rtrid = value;
        rtrid.value_namespace = name_space;
        rtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevOperSt")
    {
        prevoperst = value;
        prevoperst.value_namespace = name_space;
        prevoperst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutStQual")
    {
        shutstqual = value;
        shutstqual.value_namespace = name_space;
        shutstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastFlapTs")
    {
        lastflapts = value;
        lastflapts.value_namespace = name_space;
        lastflapts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxConnRetryIntvl")
    {
        maxconnretryintvl = value;
        maxconnretryintvl.value_namespace = name_space;
        maxconnretryintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advCap")
    {
        advcap = value;
        advcap.value_namespace = name_space;
        advcap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvCap")
    {
        rcvcap = value;
        rcvcap.value_namespace = name_space;
        rcvcap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connIf")
    {
        connif = value;
        connif.value_namespace = name_space;
        connif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl = value;
        holdintvl.value_namespace = name_space;
        holdintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kaIntvl")
    {
        kaintvl = value;
        kaintvl.value_namespace = name_space;
        kaintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localIp")
    {
        localip = value;
        localip.value_namespace = name_space;
        localip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPort")
    {
        localport = value;
        localport.value_namespace = name_space;
        localport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remotePort")
    {
        remoteport = value;
        remoteport.value_namespace = name_space;
        remoteport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connEst")
    {
        connest = value;
        connest.value_namespace = name_space;
        connest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connDrop")
    {
        conndrop = value;
        conndrop.value_namespace = name_space;
        conndrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updateElapsedTs")
    {
        updateelapsedts = value;
        updateelapsedts.value_namespace = name_space;
        updateelapsedts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fd")
    {
        fd = value;
        fd.value_namespace = name_space;
        fd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerIdx")
    {
        peeridx = value;
        peeridx.value_namespace = name_space;
        peeridx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connAttempts")
    {
        connattempts = value;
        connattempts.value_namespace = name_space;
        connattempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stReason")
    {
        streason = value;
        streason.value_namespace = name_space;
        streason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passwdSet")
    {
        passwdset = value;
        passwdset.value_namespace = name_space;
        passwdset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rtrId")
    {
        rtrid.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "prevOperSt")
    {
        prevoperst.yfilter = yfilter;
    }
    if(value_path == "shutStQual")
    {
        shutstqual.yfilter = yfilter;
    }
    if(value_path == "lastFlapTs")
    {
        lastflapts.yfilter = yfilter;
    }
    if(value_path == "maxConnRetryIntvl")
    {
        maxconnretryintvl.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "advCap")
    {
        advcap.yfilter = yfilter;
    }
    if(value_path == "rcvCap")
    {
        rcvcap.yfilter = yfilter;
    }
    if(value_path == "connIf")
    {
        connif.yfilter = yfilter;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl.yfilter = yfilter;
    }
    if(value_path == "kaIntvl")
    {
        kaintvl.yfilter = yfilter;
    }
    if(value_path == "localIp")
    {
        localip.yfilter = yfilter;
    }
    if(value_path == "localPort")
    {
        localport.yfilter = yfilter;
    }
    if(value_path == "remotePort")
    {
        remoteport.yfilter = yfilter;
    }
    if(value_path == "connEst")
    {
        connest.yfilter = yfilter;
    }
    if(value_path == "connDrop")
    {
        conndrop.yfilter = yfilter;
    }
    if(value_path == "updateElapsedTs")
    {
        updateelapsedts.yfilter = yfilter;
    }
    if(value_path == "fd")
    {
        fd.yfilter = yfilter;
    }
    if(value_path == "peerIdx")
    {
        peeridx.yfilter = yfilter;
    }
    if(value_path == "connAttempts")
    {
        connattempts.yfilter = yfilter;
    }
    if(value_path == "stReason")
    {
        streason.yfilter = yfilter;
    }
    if(value_path == "passwdSet")
    {
        passwdset.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gr-items" || name == "ev-items" || name == "epe-items" || name == "af-items" || name == "peerstats-items" || name == "addr" || name == "type" || name == "rtrId" || name == "operSt" || name == "prevOperSt" || name == "shutStQual" || name == "lastFlapTs" || name == "maxConnRetryIntvl" || name == "flags" || name == "advCap" || name == "rcvCap" || name == "connIf" || name == "holdIntvl" || name == "kaIntvl" || name == "localIp" || name == "localPort" || name == "remotePort" || name == "connEst" || name == "connDrop" || name == "updateElapsedTs" || name == "fd" || name == "peerIdx" || name == "connAttempts" || name == "stReason" || name == "passwdSet" || name == "name")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::GrItems::GrItems()
    :
    operst{YType::enumeration, "operSt"},
    restartintvl{YType::uint16, "restartIntvl"},
    grts{YType::str, "grTs"}
{

    yang_name = "gr-items"; yang_parent_name = "PeerEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::GrItems::~GrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::GrItems::has_data() const
{
    if (is_presence_container) return true;
    return operst.is_set
	|| restartintvl.is_set
	|| grts.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::GrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(restartintvl.yfilter)
	|| ydk::is_set(grts.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::GrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::GrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (restartintvl.is_set || is_set(restartintvl.yfilter)) leaf_name_data.push_back(restartintvl.get_name_leafdata());
    if (grts.is_set || is_set(grts.yfilter)) leaf_name_data.push_back(grts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::GrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::GrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::GrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restartIntvl")
    {
        restartintvl = value;
        restartintvl.value_namespace = name_space;
        restartintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grTs")
    {
        grts = value;
        grts.value_namespace = name_space;
        grts.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::GrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "restartIntvl")
    {
        restartintvl.yfilter = yfilter;
    }
    if(value_path == "grTs")
    {
        grts.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::GrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operSt" || name == "restartIntvl" || name == "grTs")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EvItems::EvItems()
    :
    majerrrstsent{YType::enumeration, "majErrRstSent"},
    minerrrstsent{YType::enumeration, "minErrRstSent"},
    lasterrvalsent{YType::uint32, "lastErrValSent"},
    rstsentts{YType::str, "rstSentTs"},
    majerrrstrsvd{YType::enumeration, "majErrRstRsvd"},
    minerrrstrsvd{YType::enumeration, "minErrRstRsvd"},
    lasterrvalrsvd{YType::uint32, "lastErrValRsvd"},
    rstrsvdts{YType::str, "rstRsvdTs"},
    lasterrlenrsvd{YType::uint8, "lastErrLenRsvd"},
    lasterrlensent{YType::uint8, "lastErrLenSent"},
    lasterrdatarsvd{YType::str, "lastErrDataRsvd"},
    lasterrdatasent{YType::str, "lastErrDataSent"}
{

    yang_name = "ev-items"; yang_parent_name = "PeerEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EvItems::~EvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EvItems::has_data() const
{
    if (is_presence_container) return true;
    return majerrrstsent.is_set
	|| minerrrstsent.is_set
	|| lasterrvalsent.is_set
	|| rstsentts.is_set
	|| majerrrstrsvd.is_set
	|| minerrrstrsvd.is_set
	|| lasterrvalrsvd.is_set
	|| rstrsvdts.is_set
	|| lasterrlenrsvd.is_set
	|| lasterrlensent.is_set
	|| lasterrdatarsvd.is_set
	|| lasterrdatasent.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EvItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(majerrrstsent.yfilter)
	|| ydk::is_set(minerrrstsent.yfilter)
	|| ydk::is_set(lasterrvalsent.yfilter)
	|| ydk::is_set(rstsentts.yfilter)
	|| ydk::is_set(majerrrstrsvd.yfilter)
	|| ydk::is_set(minerrrstrsvd.yfilter)
	|| ydk::is_set(lasterrvalrsvd.yfilter)
	|| ydk::is_set(rstrsvdts.yfilter)
	|| ydk::is_set(lasterrlenrsvd.yfilter)
	|| ydk::is_set(lasterrlensent.yfilter)
	|| ydk::is_set(lasterrdatarsvd.yfilter)
	|| ydk::is_set(lasterrdatasent.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ev-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (majerrrstsent.is_set || is_set(majerrrstsent.yfilter)) leaf_name_data.push_back(majerrrstsent.get_name_leafdata());
    if (minerrrstsent.is_set || is_set(minerrrstsent.yfilter)) leaf_name_data.push_back(minerrrstsent.get_name_leafdata());
    if (lasterrvalsent.is_set || is_set(lasterrvalsent.yfilter)) leaf_name_data.push_back(lasterrvalsent.get_name_leafdata());
    if (rstsentts.is_set || is_set(rstsentts.yfilter)) leaf_name_data.push_back(rstsentts.get_name_leafdata());
    if (majerrrstrsvd.is_set || is_set(majerrrstrsvd.yfilter)) leaf_name_data.push_back(majerrrstrsvd.get_name_leafdata());
    if (minerrrstrsvd.is_set || is_set(minerrrstrsvd.yfilter)) leaf_name_data.push_back(minerrrstrsvd.get_name_leafdata());
    if (lasterrvalrsvd.is_set || is_set(lasterrvalrsvd.yfilter)) leaf_name_data.push_back(lasterrvalrsvd.get_name_leafdata());
    if (rstrsvdts.is_set || is_set(rstrsvdts.yfilter)) leaf_name_data.push_back(rstrsvdts.get_name_leafdata());
    if (lasterrlenrsvd.is_set || is_set(lasterrlenrsvd.yfilter)) leaf_name_data.push_back(lasterrlenrsvd.get_name_leafdata());
    if (lasterrlensent.is_set || is_set(lasterrlensent.yfilter)) leaf_name_data.push_back(lasterrlensent.get_name_leafdata());
    if (lasterrdatarsvd.is_set || is_set(lasterrdatarsvd.yfilter)) leaf_name_data.push_back(lasterrdatarsvd.get_name_leafdata());
    if (lasterrdatasent.is_set || is_set(lasterrdatasent.yfilter)) leaf_name_data.push_back(lasterrdatasent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "majErrRstSent")
    {
        majerrrstsent = value;
        majerrrstsent.value_namespace = name_space;
        majerrrstsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minErrRstSent")
    {
        minerrrstsent = value;
        minerrrstsent.value_namespace = name_space;
        minerrrstsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastErrValSent")
    {
        lasterrvalsent = value;
        lasterrvalsent.value_namespace = name_space;
        lasterrvalsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rstSentTs")
    {
        rstsentts = value;
        rstsentts.value_namespace = name_space;
        rstsentts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majErrRstRsvd")
    {
        majerrrstrsvd = value;
        majerrrstrsvd.value_namespace = name_space;
        majerrrstrsvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minErrRstRsvd")
    {
        minerrrstrsvd = value;
        minerrrstrsvd.value_namespace = name_space;
        minerrrstrsvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastErrValRsvd")
    {
        lasterrvalrsvd = value;
        lasterrvalrsvd.value_namespace = name_space;
        lasterrvalrsvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rstRsvdTs")
    {
        rstrsvdts = value;
        rstrsvdts.value_namespace = name_space;
        rstrsvdts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastErrLenRsvd")
    {
        lasterrlenrsvd = value;
        lasterrlenrsvd.value_namespace = name_space;
        lasterrlenrsvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastErrLenSent")
    {
        lasterrlensent = value;
        lasterrlensent.value_namespace = name_space;
        lasterrlensent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastErrDataRsvd")
    {
        lasterrdatarsvd = value;
        lasterrdatarsvd.value_namespace = name_space;
        lasterrdatarsvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastErrDataSent")
    {
        lasterrdatasent = value;
        lasterrdatasent.value_namespace = name_space;
        lasterrdatasent.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "majErrRstSent")
    {
        majerrrstsent.yfilter = yfilter;
    }
    if(value_path == "minErrRstSent")
    {
        minerrrstsent.yfilter = yfilter;
    }
    if(value_path == "lastErrValSent")
    {
        lasterrvalsent.yfilter = yfilter;
    }
    if(value_path == "rstSentTs")
    {
        rstsentts.yfilter = yfilter;
    }
    if(value_path == "majErrRstRsvd")
    {
        majerrrstrsvd.yfilter = yfilter;
    }
    if(value_path == "minErrRstRsvd")
    {
        minerrrstrsvd.yfilter = yfilter;
    }
    if(value_path == "lastErrValRsvd")
    {
        lasterrvalrsvd.yfilter = yfilter;
    }
    if(value_path == "rstRsvdTs")
    {
        rstrsvdts.yfilter = yfilter;
    }
    if(value_path == "lastErrLenRsvd")
    {
        lasterrlenrsvd.yfilter = yfilter;
    }
    if(value_path == "lastErrLenSent")
    {
        lasterrlensent.yfilter = yfilter;
    }
    if(value_path == "lastErrDataRsvd")
    {
        lasterrdatarsvd.yfilter = yfilter;
    }
    if(value_path == "lastErrDataSent")
    {
        lasterrdatasent.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "majErrRstSent" || name == "minErrRstSent" || name == "lastErrValSent" || name == "rstSentTs" || name == "majErrRstRsvd" || name == "minErrRstRsvd" || name == "lastErrValRsvd" || name == "rstRsvdTs" || name == "lastErrLenRsvd" || name == "lastErrLenSent" || name == "lastErrDataRsvd" || name == "lastErrDataSent")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeItems()
    :
    adminst{YType::enumeration, "adminSt"},
    sid{YType::uint32, "sid"},
    rpcsetid{YType::uint32, "rpcSetID"},
    peersetname{YType::str, "peerSetName"},
    peersetsid{YType::uint32, "peerSetSid"},
    peersetrpcsetid{YType::uint32, "peerSetRpcSetID"},
    name{YType::str, "name"}
        ,
    epeadj_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems>())
{
    epeadj_items->parent = this;

    yang_name = "epe-items"; yang_parent_name = "PeerEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::~EpeItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| sid.is_set
	|| rpcsetid.is_set
	|| peersetname.is_set
	|| peersetsid.is_set
	|| peersetrpcsetid.is_set
	|| name.is_set
	|| (epeadj_items !=  nullptr && epeadj_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(rpcsetid.yfilter)
	|| ydk::is_set(peersetname.yfilter)
	|| ydk::is_set(peersetsid.yfilter)
	|| ydk::is_set(peersetrpcsetid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (epeadj_items !=  nullptr && epeadj_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (rpcsetid.is_set || is_set(rpcsetid.yfilter)) leaf_name_data.push_back(rpcsetid.get_name_leafdata());
    if (peersetname.is_set || is_set(peersetname.yfilter)) leaf_name_data.push_back(peersetname.get_name_leafdata());
    if (peersetsid.is_set || is_set(peersetsid.yfilter)) leaf_name_data.push_back(peersetsid.get_name_leafdata());
    if (peersetrpcsetid.is_set || is_set(peersetrpcsetid.yfilter)) leaf_name_data.push_back(peersetrpcsetid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "epeadj-items")
    {
        if(epeadj_items == nullptr)
        {
            epeadj_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems>();
        }
        return epeadj_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(epeadj_items != nullptr)
    {
        children["epeadj-items"] = epeadj_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpcSetID")
    {
        rpcsetid = value;
        rpcsetid.value_namespace = name_space;
        rpcsetid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerSetName")
    {
        peersetname = value;
        peersetname.value_namespace = name_space;
        peersetname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerSetSid")
    {
        peersetsid = value;
        peersetsid.value_namespace = name_space;
        peersetsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerSetRpcSetID")
    {
        peersetrpcsetid = value;
        peersetrpcsetid.value_namespace = name_space;
        peersetrpcsetid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "rpcSetID")
    {
        rpcsetid.yfilter = yfilter;
    }
    if(value_path == "peerSetName")
    {
        peersetname.yfilter = yfilter;
    }
    if(value_path == "peerSetSid")
    {
        peersetsid.yfilter = yfilter;
    }
    if(value_path == "peerSetRpcSetID")
    {
        peersetrpcsetid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "epeadj-items" || name == "adminSt" || name == "sid" || name == "rpcSetID" || name == "peerSetName" || name == "peerSetSid" || name == "peerSetRpcSetID" || name == "name")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::EpeadjItems()
    :
    peerepeadj_list(this, {"rpcsetid"})
{

    yang_name = "epeadj-items"; yang_parent_name = "epe-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::~EpeadjItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peerepeadj_list.len(); index++)
    {
        if(peerepeadj_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::has_operation() const
{
    for (std::size_t index=0; index<peerepeadj_list.len(); index++)
    {
        if(peerepeadj_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epeadj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PeerEpeAdj-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::PeerEpeAdjList>();
        c->parent = this;
        peerepeadj_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : peerepeadj_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PeerEpeAdj-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::PeerEpeAdjList::PeerEpeAdjList()
    :
    rpcsetid{YType::uint32, "rpcSetID"},
    localaddr{YType::str, "localAddr"},
    remoteaddr{YType::str, "remoteAddr"},
    ifindex{YType::str, "ifIndex"},
    sid{YType::uint32, "sid"}
{

    yang_name = "PeerEpeAdj-list"; yang_parent_name = "epeadj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::PeerEpeAdjList::~PeerEpeAdjList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::PeerEpeAdjList::has_data() const
{
    if (is_presence_container) return true;
    return rpcsetid.is_set
	|| localaddr.is_set
	|| remoteaddr.is_set
	|| ifindex.is_set
	|| sid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::PeerEpeAdjList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rpcsetid.yfilter)
	|| ydk::is_set(localaddr.yfilter)
	|| ydk::is_set(remoteaddr.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::PeerEpeAdjList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PeerEpeAdj-list";
    ADD_KEY_TOKEN(rpcsetid, "rpcSetID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::PeerEpeAdjList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpcsetid.is_set || is_set(rpcsetid.yfilter)) leaf_name_data.push_back(rpcsetid.get_name_leafdata());
    if (localaddr.is_set || is_set(localaddr.yfilter)) leaf_name_data.push_back(localaddr.get_name_leafdata());
    if (remoteaddr.is_set || is_set(remoteaddr.yfilter)) leaf_name_data.push_back(remoteaddr.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::PeerEpeAdjList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::PeerEpeAdjList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::PeerEpeAdjList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rpcSetID")
    {
        rpcsetid = value;
        rpcsetid.value_namespace = name_space;
        rpcsetid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localAddr")
    {
        localaddr = value;
        localaddr.value_namespace = name_space;
        localaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteAddr")
    {
        remoteaddr = value;
        remoteaddr.value_namespace = name_space;
        remoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::PeerEpeAdjList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rpcSetID")
    {
        rpcsetid.yfilter = yfilter;
    }
    if(value_path == "localAddr")
    {
        localaddr.yfilter = yfilter;
    }
    if(value_path == "remoteAddr")
    {
        remoteaddr.yfilter = yfilter;
    }
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::PeerEpeAdjList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpcSetID" || name == "localAddr" || name == "remoteAddr" || name == "ifIndex" || name == "sid")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::AfItems()
    :
    peerafentry_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "PeerEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::~AfItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peerafentry_list.len(); index++)
    {
        if(peerafentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::has_operation() const
{
    for (std::size_t index=0; index<peerafentry_list.len(); index++)
    {
        if(peerafentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PeerAfEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::PeerAfEntryList>();
        c->parent = this;
        peerafentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : peerafentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PeerAfEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::PeerAfEntryList::PeerAfEntryList()
    :
    type{YType::enumeration, "type"},
    tblver{YType::uint32, "tblVer"},
    peertblver{YType::uint32, "peerTblVer"},
    tblst{YType::enumeration, "tblSt"},
    acceptedpaths{YType::uint32, "acceptedPaths"},
    deniedpaths{YType::uint32, "deniedPaths"},
    withdrawnpaths{YType::uint32, "withDrawnPaths"},
    memaccpaths{YType::uint32, "memAccPaths"},
    flags{YType::str, "flags"},
    pfxsent{YType::uint64, "pfxSent"},
    pfxsaved{YType::uint64, "pfxSaved"},
    pfxflushed{YType::uint64, "pfxFlushed"},
    lasteorrcvdts{YType::str, "lastEorRcvdTs"},
    firsteorrcvdts{YType::str, "firstEorRcvdTs"},
    name{YType::str, "name"}
{

    yang_name = "PeerAfEntry-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::PeerAfEntryList::~PeerAfEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::PeerAfEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| tblver.is_set
	|| peertblver.is_set
	|| tblst.is_set
	|| acceptedpaths.is_set
	|| deniedpaths.is_set
	|| withdrawnpaths.is_set
	|| memaccpaths.is_set
	|| flags.is_set
	|| pfxsent.is_set
	|| pfxsaved.is_set
	|| pfxflushed.is_set
	|| lasteorrcvdts.is_set
	|| firsteorrcvdts.is_set
	|| name.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::PeerAfEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(tblver.yfilter)
	|| ydk::is_set(peertblver.yfilter)
	|| ydk::is_set(tblst.yfilter)
	|| ydk::is_set(acceptedpaths.yfilter)
	|| ydk::is_set(deniedpaths.yfilter)
	|| ydk::is_set(withdrawnpaths.yfilter)
	|| ydk::is_set(memaccpaths.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(pfxsent.yfilter)
	|| ydk::is_set(pfxsaved.yfilter)
	|| ydk::is_set(pfxflushed.yfilter)
	|| ydk::is_set(lasteorrcvdts.yfilter)
	|| ydk::is_set(firsteorrcvdts.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::PeerAfEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PeerAfEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::PeerAfEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (tblver.is_set || is_set(tblver.yfilter)) leaf_name_data.push_back(tblver.get_name_leafdata());
    if (peertblver.is_set || is_set(peertblver.yfilter)) leaf_name_data.push_back(peertblver.get_name_leafdata());
    if (tblst.is_set || is_set(tblst.yfilter)) leaf_name_data.push_back(tblst.get_name_leafdata());
    if (acceptedpaths.is_set || is_set(acceptedpaths.yfilter)) leaf_name_data.push_back(acceptedpaths.get_name_leafdata());
    if (deniedpaths.is_set || is_set(deniedpaths.yfilter)) leaf_name_data.push_back(deniedpaths.get_name_leafdata());
    if (withdrawnpaths.is_set || is_set(withdrawnpaths.yfilter)) leaf_name_data.push_back(withdrawnpaths.get_name_leafdata());
    if (memaccpaths.is_set || is_set(memaccpaths.yfilter)) leaf_name_data.push_back(memaccpaths.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (pfxsent.is_set || is_set(pfxsent.yfilter)) leaf_name_data.push_back(pfxsent.get_name_leafdata());
    if (pfxsaved.is_set || is_set(pfxsaved.yfilter)) leaf_name_data.push_back(pfxsaved.get_name_leafdata());
    if (pfxflushed.is_set || is_set(pfxflushed.yfilter)) leaf_name_data.push_back(pfxflushed.get_name_leafdata());
    if (lasteorrcvdts.is_set || is_set(lasteorrcvdts.yfilter)) leaf_name_data.push_back(lasteorrcvdts.get_name_leafdata());
    if (firsteorrcvdts.is_set || is_set(firsteorrcvdts.yfilter)) leaf_name_data.push_back(firsteorrcvdts.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::PeerAfEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::PeerAfEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::PeerAfEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tblVer")
    {
        tblver = value;
        tblver.value_namespace = name_space;
        tblver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerTblVer")
    {
        peertblver = value;
        peertblver.value_namespace = name_space;
        peertblver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tblSt")
    {
        tblst = value;
        tblst.value_namespace = name_space;
        tblst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acceptedPaths")
    {
        acceptedpaths = value;
        acceptedpaths.value_namespace = name_space;
        acceptedpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deniedPaths")
    {
        deniedpaths = value;
        deniedpaths.value_namespace = name_space;
        deniedpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withDrawnPaths")
    {
        withdrawnpaths = value;
        withdrawnpaths.value_namespace = name_space;
        withdrawnpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memAccPaths")
    {
        memaccpaths = value;
        memaccpaths.value_namespace = name_space;
        memaccpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxSent")
    {
        pfxsent = value;
        pfxsent.value_namespace = name_space;
        pfxsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxSaved")
    {
        pfxsaved = value;
        pfxsaved.value_namespace = name_space;
        pfxsaved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxFlushed")
    {
        pfxflushed = value;
        pfxflushed.value_namespace = name_space;
        pfxflushed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastEorRcvdTs")
    {
        lasteorrcvdts = value;
        lasteorrcvdts.value_namespace = name_space;
        lasteorrcvdts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firstEorRcvdTs")
    {
        firsteorrcvdts = value;
        firsteorrcvdts.value_namespace = name_space;
        firsteorrcvdts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::PeerAfEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "tblVer")
    {
        tblver.yfilter = yfilter;
    }
    if(value_path == "peerTblVer")
    {
        peertblver.yfilter = yfilter;
    }
    if(value_path == "tblSt")
    {
        tblst.yfilter = yfilter;
    }
    if(value_path == "acceptedPaths")
    {
        acceptedpaths.yfilter = yfilter;
    }
    if(value_path == "deniedPaths")
    {
        deniedpaths.yfilter = yfilter;
    }
    if(value_path == "withDrawnPaths")
    {
        withdrawnpaths.yfilter = yfilter;
    }
    if(value_path == "memAccPaths")
    {
        memaccpaths.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "pfxSent")
    {
        pfxsent.yfilter = yfilter;
    }
    if(value_path == "pfxSaved")
    {
        pfxsaved.yfilter = yfilter;
    }
    if(value_path == "pfxFlushed")
    {
        pfxflushed.yfilter = yfilter;
    }
    if(value_path == "lastEorRcvdTs")
    {
        lasteorrcvdts.yfilter = yfilter;
    }
    if(value_path == "firstEorRcvdTs")
    {
        firsteorrcvdts.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::PeerAfEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "tblVer" || name == "peerTblVer" || name == "tblSt" || name == "acceptedPaths" || name == "deniedPaths" || name == "withDrawnPaths" || name == "memAccPaths" || name == "flags" || name == "pfxSent" || name == "pfxSaved" || name == "pfxFlushed" || name == "lastEorRcvdTs" || name == "firstEorRcvdTs" || name == "name")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::PeerstatsItems::PeerstatsItems()
    :
    opensent{YType::uint64, "openSent"},
    openrcvd{YType::uint64, "openRcvd"},
    updatesent{YType::uint64, "updateSent"},
    updatercvd{YType::uint64, "updateRcvd"},
    kasent{YType::uint64, "kaSent"},
    karcvd{YType::uint64, "kaRcvd"},
    routerefreshsent{YType::uint64, "routeRefreshSent"},
    routerefreshrcvd{YType::uint64, "routeRefreshRcvd"},
    capsent{YType::uint64, "capSent"},
    caprcvd{YType::uint64, "capRcvd"},
    notifsent{YType::uint64, "notifSent"},
    notifrcvd{YType::uint64, "notifRcvd"},
    msgsent{YType::uint64, "msgSent"},
    msgrcvd{YType::uint64, "msgRcvd"},
    bytesent{YType::uint64, "byteSent"},
    bytercvd{YType::uint64, "byteRcvd"},
    byteinsendq{YType::uint64, "byteInSendQ"},
    byteinrecvq{YType::uint64, "byteInRecvQ"},
    connectretryts{YType::str, "connectRetryTs"},
    kats{YType::str, "kaTs"}
{

    yang_name = "peerstats-items"; yang_parent_name = "PeerEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::PeerstatsItems::~PeerstatsItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::PeerstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return opensent.is_set
	|| openrcvd.is_set
	|| updatesent.is_set
	|| updatercvd.is_set
	|| kasent.is_set
	|| karcvd.is_set
	|| routerefreshsent.is_set
	|| routerefreshrcvd.is_set
	|| capsent.is_set
	|| caprcvd.is_set
	|| notifsent.is_set
	|| notifrcvd.is_set
	|| msgsent.is_set
	|| msgrcvd.is_set
	|| bytesent.is_set
	|| bytercvd.is_set
	|| byteinsendq.is_set
	|| byteinrecvq.is_set
	|| connectretryts.is_set
	|| kats.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::PeerstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opensent.yfilter)
	|| ydk::is_set(openrcvd.yfilter)
	|| ydk::is_set(updatesent.yfilter)
	|| ydk::is_set(updatercvd.yfilter)
	|| ydk::is_set(kasent.yfilter)
	|| ydk::is_set(karcvd.yfilter)
	|| ydk::is_set(routerefreshsent.yfilter)
	|| ydk::is_set(routerefreshrcvd.yfilter)
	|| ydk::is_set(capsent.yfilter)
	|| ydk::is_set(caprcvd.yfilter)
	|| ydk::is_set(notifsent.yfilter)
	|| ydk::is_set(notifrcvd.yfilter)
	|| ydk::is_set(msgsent.yfilter)
	|| ydk::is_set(msgrcvd.yfilter)
	|| ydk::is_set(bytesent.yfilter)
	|| ydk::is_set(bytercvd.yfilter)
	|| ydk::is_set(byteinsendq.yfilter)
	|| ydk::is_set(byteinrecvq.yfilter)
	|| ydk::is_set(connectretryts.yfilter)
	|| ydk::is_set(kats.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::PeerstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peerstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::PeerstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opensent.is_set || is_set(opensent.yfilter)) leaf_name_data.push_back(opensent.get_name_leafdata());
    if (openrcvd.is_set || is_set(openrcvd.yfilter)) leaf_name_data.push_back(openrcvd.get_name_leafdata());
    if (updatesent.is_set || is_set(updatesent.yfilter)) leaf_name_data.push_back(updatesent.get_name_leafdata());
    if (updatercvd.is_set || is_set(updatercvd.yfilter)) leaf_name_data.push_back(updatercvd.get_name_leafdata());
    if (kasent.is_set || is_set(kasent.yfilter)) leaf_name_data.push_back(kasent.get_name_leafdata());
    if (karcvd.is_set || is_set(karcvd.yfilter)) leaf_name_data.push_back(karcvd.get_name_leafdata());
    if (routerefreshsent.is_set || is_set(routerefreshsent.yfilter)) leaf_name_data.push_back(routerefreshsent.get_name_leafdata());
    if (routerefreshrcvd.is_set || is_set(routerefreshrcvd.yfilter)) leaf_name_data.push_back(routerefreshrcvd.get_name_leafdata());
    if (capsent.is_set || is_set(capsent.yfilter)) leaf_name_data.push_back(capsent.get_name_leafdata());
    if (caprcvd.is_set || is_set(caprcvd.yfilter)) leaf_name_data.push_back(caprcvd.get_name_leafdata());
    if (notifsent.is_set || is_set(notifsent.yfilter)) leaf_name_data.push_back(notifsent.get_name_leafdata());
    if (notifrcvd.is_set || is_set(notifrcvd.yfilter)) leaf_name_data.push_back(notifrcvd.get_name_leafdata());
    if (msgsent.is_set || is_set(msgsent.yfilter)) leaf_name_data.push_back(msgsent.get_name_leafdata());
    if (msgrcvd.is_set || is_set(msgrcvd.yfilter)) leaf_name_data.push_back(msgrcvd.get_name_leafdata());
    if (bytesent.is_set || is_set(bytesent.yfilter)) leaf_name_data.push_back(bytesent.get_name_leafdata());
    if (bytercvd.is_set || is_set(bytercvd.yfilter)) leaf_name_data.push_back(bytercvd.get_name_leafdata());
    if (byteinsendq.is_set || is_set(byteinsendq.yfilter)) leaf_name_data.push_back(byteinsendq.get_name_leafdata());
    if (byteinrecvq.is_set || is_set(byteinrecvq.yfilter)) leaf_name_data.push_back(byteinrecvq.get_name_leafdata());
    if (connectretryts.is_set || is_set(connectretryts.yfilter)) leaf_name_data.push_back(connectretryts.get_name_leafdata());
    if (kats.is_set || is_set(kats.yfilter)) leaf_name_data.push_back(kats.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::PeerstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::PeerstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::PeerstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "openSent")
    {
        opensent = value;
        opensent.value_namespace = name_space;
        opensent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openRcvd")
    {
        openrcvd = value;
        openrcvd.value_namespace = name_space;
        openrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updateSent")
    {
        updatesent = value;
        updatesent.value_namespace = name_space;
        updatesent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updateRcvd")
    {
        updatercvd = value;
        updatercvd.value_namespace = name_space;
        updatercvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kaSent")
    {
        kasent = value;
        kasent.value_namespace = name_space;
        kasent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kaRcvd")
    {
        karcvd = value;
        karcvd.value_namespace = name_space;
        karcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeRefreshSent")
    {
        routerefreshsent = value;
        routerefreshsent.value_namespace = name_space;
        routerefreshsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeRefreshRcvd")
    {
        routerefreshrcvd = value;
        routerefreshrcvd.value_namespace = name_space;
        routerefreshrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capSent")
    {
        capsent = value;
        capsent.value_namespace = name_space;
        capsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capRcvd")
    {
        caprcvd = value;
        caprcvd.value_namespace = name_space;
        caprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notifSent")
    {
        notifsent = value;
        notifsent.value_namespace = name_space;
        notifsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notifRcvd")
    {
        notifrcvd = value;
        notifrcvd.value_namespace = name_space;
        notifrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msgSent")
    {
        msgsent = value;
        msgsent.value_namespace = name_space;
        msgsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msgRcvd")
    {
        msgrcvd = value;
        msgrcvd.value_namespace = name_space;
        msgrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byteSent")
    {
        bytesent = value;
        bytesent.value_namespace = name_space;
        bytesent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byteRcvd")
    {
        bytercvd = value;
        bytercvd.value_namespace = name_space;
        bytercvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byteInSendQ")
    {
        byteinsendq = value;
        byteinsendq.value_namespace = name_space;
        byteinsendq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byteInRecvQ")
    {
        byteinrecvq = value;
        byteinrecvq.value_namespace = name_space;
        byteinrecvq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connectRetryTs")
    {
        connectretryts = value;
        connectretryts.value_namespace = name_space;
        connectretryts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kaTs")
    {
        kats = value;
        kats.value_namespace = name_space;
        kats.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::PeerstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "openSent")
    {
        opensent.yfilter = yfilter;
    }
    if(value_path == "openRcvd")
    {
        openrcvd.yfilter = yfilter;
    }
    if(value_path == "updateSent")
    {
        updatesent.yfilter = yfilter;
    }
    if(value_path == "updateRcvd")
    {
        updatercvd.yfilter = yfilter;
    }
    if(value_path == "kaSent")
    {
        kasent.yfilter = yfilter;
    }
    if(value_path == "kaRcvd")
    {
        karcvd.yfilter = yfilter;
    }
    if(value_path == "routeRefreshSent")
    {
        routerefreshsent.yfilter = yfilter;
    }
    if(value_path == "routeRefreshRcvd")
    {
        routerefreshrcvd.yfilter = yfilter;
    }
    if(value_path == "capSent")
    {
        capsent.yfilter = yfilter;
    }
    if(value_path == "capRcvd")
    {
        caprcvd.yfilter = yfilter;
    }
    if(value_path == "notifSent")
    {
        notifsent.yfilter = yfilter;
    }
    if(value_path == "notifRcvd")
    {
        notifrcvd.yfilter = yfilter;
    }
    if(value_path == "msgSent")
    {
        msgsent.yfilter = yfilter;
    }
    if(value_path == "msgRcvd")
    {
        msgrcvd.yfilter = yfilter;
    }
    if(value_path == "byteSent")
    {
        bytesent.yfilter = yfilter;
    }
    if(value_path == "byteRcvd")
    {
        bytercvd.yfilter = yfilter;
    }
    if(value_path == "byteInSendQ")
    {
        byteinsendq.yfilter = yfilter;
    }
    if(value_path == "byteInRecvQ")
    {
        byteinrecvq.yfilter = yfilter;
    }
    if(value_path == "connectRetryTs")
    {
        connectretryts.yfilter = yfilter;
    }
    if(value_path == "kaTs")
    {
        kats.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::PeerstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "openSent" || name == "openRcvd" || name == "updateSent" || name == "updateRcvd" || name == "kaSent" || name == "kaRcvd" || name == "routeRefreshSent" || name == "routeRefreshRcvd" || name == "capSent" || name == "capRcvd" || name == "notifSent" || name == "notifRcvd" || name == "msgSent" || name == "msgRcvd" || name == "byteSent" || name == "byteRcvd" || name == "byteInSendQ" || name == "byteInRecvQ" || name == "connectRetryTs" || name == "kaTs")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeItems()
    :
    adminst{YType::enumeration, "adminSt"},
    sid{YType::uint32, "sid"},
    rpcsetid{YType::uint32, "rpcSetID"},
    peersetname{YType::str, "peerSetName"},
    peersetsid{YType::uint32, "peerSetSid"},
    peersetrpcsetid{YType::uint32, "peerSetRpcSetID"},
    name{YType::str, "name"}
        ,
    epeadj_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems>())
{
    epeadj_items->parent = this;

    yang_name = "epe-items"; yang_parent_name = "Peer-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::~EpeItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| sid.is_set
	|| rpcsetid.is_set
	|| peersetname.is_set
	|| peersetsid.is_set
	|| peersetrpcsetid.is_set
	|| name.is_set
	|| (epeadj_items !=  nullptr && epeadj_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(rpcsetid.yfilter)
	|| ydk::is_set(peersetname.yfilter)
	|| ydk::is_set(peersetsid.yfilter)
	|| ydk::is_set(peersetrpcsetid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (epeadj_items !=  nullptr && epeadj_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (rpcsetid.is_set || is_set(rpcsetid.yfilter)) leaf_name_data.push_back(rpcsetid.get_name_leafdata());
    if (peersetname.is_set || is_set(peersetname.yfilter)) leaf_name_data.push_back(peersetname.get_name_leafdata());
    if (peersetsid.is_set || is_set(peersetsid.yfilter)) leaf_name_data.push_back(peersetsid.get_name_leafdata());
    if (peersetrpcsetid.is_set || is_set(peersetrpcsetid.yfilter)) leaf_name_data.push_back(peersetrpcsetid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "epeadj-items")
    {
        if(epeadj_items == nullptr)
        {
            epeadj_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems>();
        }
        return epeadj_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(epeadj_items != nullptr)
    {
        children["epeadj-items"] = epeadj_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpcSetID")
    {
        rpcsetid = value;
        rpcsetid.value_namespace = name_space;
        rpcsetid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerSetName")
    {
        peersetname = value;
        peersetname.value_namespace = name_space;
        peersetname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerSetSid")
    {
        peersetsid = value;
        peersetsid.value_namespace = name_space;
        peersetsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerSetRpcSetID")
    {
        peersetrpcsetid = value;
        peersetrpcsetid.value_namespace = name_space;
        peersetrpcsetid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "rpcSetID")
    {
        rpcsetid.yfilter = yfilter;
    }
    if(value_path == "peerSetName")
    {
        peersetname.yfilter = yfilter;
    }
    if(value_path == "peerSetSid")
    {
        peersetsid.yfilter = yfilter;
    }
    if(value_path == "peerSetRpcSetID")
    {
        peersetrpcsetid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "epeadj-items" || name == "adminSt" || name == "sid" || name == "rpcSetID" || name == "peerSetName" || name == "peerSetSid" || name == "peerSetRpcSetID" || name == "name")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::EpeadjItems()
    :
    peerepeadj_list(this, {"rpcsetid"})
{

    yang_name = "epeadj-items"; yang_parent_name = "epe-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::~EpeadjItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peerepeadj_list.len(); index++)
    {
        if(peerepeadj_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::has_operation() const
{
    for (std::size_t index=0; index<peerepeadj_list.len(); index++)
    {
        if(peerepeadj_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epeadj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PeerEpeAdj-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::PeerEpeAdjList>();
        c->parent = this;
        peerepeadj_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : peerepeadj_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PeerEpeAdj-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::PeerEpeAdjList::PeerEpeAdjList()
    :
    rpcsetid{YType::uint32, "rpcSetID"},
    localaddr{YType::str, "localAddr"},
    remoteaddr{YType::str, "remoteAddr"},
    ifindex{YType::str, "ifIndex"},
    sid{YType::uint32, "sid"}
{

    yang_name = "PeerEpeAdj-list"; yang_parent_name = "epeadj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::PeerEpeAdjList::~PeerEpeAdjList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::PeerEpeAdjList::has_data() const
{
    if (is_presence_container) return true;
    return rpcsetid.is_set
	|| localaddr.is_set
	|| remoteaddr.is_set
	|| ifindex.is_set
	|| sid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::PeerEpeAdjList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rpcsetid.yfilter)
	|| ydk::is_set(localaddr.yfilter)
	|| ydk::is_set(remoteaddr.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::PeerEpeAdjList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PeerEpeAdj-list";
    ADD_KEY_TOKEN(rpcsetid, "rpcSetID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::PeerEpeAdjList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpcsetid.is_set || is_set(rpcsetid.yfilter)) leaf_name_data.push_back(rpcsetid.get_name_leafdata());
    if (localaddr.is_set || is_set(localaddr.yfilter)) leaf_name_data.push_back(localaddr.get_name_leafdata());
    if (remoteaddr.is_set || is_set(remoteaddr.yfilter)) leaf_name_data.push_back(remoteaddr.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::PeerEpeAdjList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::PeerEpeAdjList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::PeerEpeAdjList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rpcSetID")
    {
        rpcsetid = value;
        rpcsetid.value_namespace = name_space;
        rpcsetid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localAddr")
    {
        localaddr = value;
        localaddr.value_namespace = name_space;
        localaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteAddr")
    {
        remoteaddr = value;
        remoteaddr.value_namespace = name_space;
        remoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::PeerEpeAdjList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rpcSetID")
    {
        rpcsetid.yfilter = yfilter;
    }
    if(value_path == "localAddr")
    {
        localaddr.yfilter = yfilter;
    }
    if(value_path == "remoteAddr")
    {
        remoteaddr.yfilter = yfilter;
    }
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::PeerEpeAdjList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpcSetID" || name == "localAddr" || name == "remoteAddr" || name == "ifIndex" || name == "sid")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::AfItems()
    :
    peeraf_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "Peer-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::~AfItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peeraf_list.len(); index++)
    {
        if(peeraf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::has_operation() const
{
    for (std::size_t index=0; index<peeraf_list.len(); index++)
    {
        if(peeraf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PeerAf-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList>();
        c->parent = this;
        peeraf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : peeraf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PeerAf-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::PeerAfList()
    :
    type{YType::enumeration, "type"},
    ctrl{YType::str, "ctrl"},
    allowedselfascnt{YType::uint8, "allowedSelfAsCnt"},
    softreconfigbackup{YType::enumeration, "softReconfigBackup"},
    advintvl{YType::uint16, "advIntvl"},
    deforg{YType::enumeration, "defOrg"},
    deforgrtmap{YType::str, "defOrgRtMap"},
    capaddlpaths{YType::str, "capAddlPaths"},
    unsupprmap{YType::str, "unSupprMap"},
    asoverride{YType::enumeration, "asOverride"},
    nhthirdparty{YType::enumeration, "nhThirdparty"},
    wght{YType::str, "wght"},
    soo{YType::str, "soo"},
    sendcomstd{YType::enumeration, "sendComStd"},
    sendcomext{YType::enumeration, "sendComExt"},
    encapmpls{YType::enumeration, "encapMpls"},
    rewritertasn{YType::enumeration, "rewriteRtAsn"},
    inheritcontpeerpolicyctrl{YType::str, "inheritContPeerPolicyCtrl"},
    name{YType::str, "name"}
        ,
    maxpfxp_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MaxpfxpItems>())
    , advtmap_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtmapItems>())
    , rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems>())
    , vpnrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems>())
    , lblrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::LblrtItems>())
    , lsrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::LsrtItems>())
    , evpnrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::EvpnrtItems>())
    , mvpnrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MvpnrtItems>())
    , advtdrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtdrtItems>())
    , rcvdrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RcvdrtItems>())
    , damppathsrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::DamppathsrtItems>())
    , rtctrl_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtctrlItems>())
    , defrtleak_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::DefrtleakItems>())
    , pfxctrl_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::PfxctrlItems>())
    , fltrctrl_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::FltrctrlItems>())
    , pol_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::PolItems>())
{
    maxpfxp_items->parent = this;
    advtmap_items->parent = this;
    rt_items->parent = this;
    vpnrt_items->parent = this;
    lblrt_items->parent = this;
    lsrt_items->parent = this;
    evpnrt_items->parent = this;
    mvpnrt_items->parent = this;
    advtdrt_items->parent = this;
    rcvdrt_items->parent = this;
    damppathsrt_items->parent = this;
    rtctrl_items->parent = this;
    defrtleak_items->parent = this;
    pfxctrl_items->parent = this;
    fltrctrl_items->parent = this;
    pol_items->parent = this;

    yang_name = "PeerAf-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::~PeerAfList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ctrl.is_set
	|| allowedselfascnt.is_set
	|| softreconfigbackup.is_set
	|| advintvl.is_set
	|| deforg.is_set
	|| deforgrtmap.is_set
	|| capaddlpaths.is_set
	|| unsupprmap.is_set
	|| asoverride.is_set
	|| nhthirdparty.is_set
	|| wght.is_set
	|| soo.is_set
	|| sendcomstd.is_set
	|| sendcomext.is_set
	|| encapmpls.is_set
	|| rewritertasn.is_set
	|| inheritcontpeerpolicyctrl.is_set
	|| name.is_set
	|| (maxpfxp_items !=  nullptr && maxpfxp_items->has_data())
	|| (advtmap_items !=  nullptr && advtmap_items->has_data())
	|| (rt_items !=  nullptr && rt_items->has_data())
	|| (vpnrt_items !=  nullptr && vpnrt_items->has_data())
	|| (lblrt_items !=  nullptr && lblrt_items->has_data())
	|| (lsrt_items !=  nullptr && lsrt_items->has_data())
	|| (evpnrt_items !=  nullptr && evpnrt_items->has_data())
	|| (mvpnrt_items !=  nullptr && mvpnrt_items->has_data())
	|| (advtdrt_items !=  nullptr && advtdrt_items->has_data())
	|| (rcvdrt_items !=  nullptr && rcvdrt_items->has_data())
	|| (damppathsrt_items !=  nullptr && damppathsrt_items->has_data())
	|| (rtctrl_items !=  nullptr && rtctrl_items->has_data())
	|| (defrtleak_items !=  nullptr && defrtleak_items->has_data())
	|| (pfxctrl_items !=  nullptr && pfxctrl_items->has_data())
	|| (fltrctrl_items !=  nullptr && fltrctrl_items->has_data())
	|| (pol_items !=  nullptr && pol_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(allowedselfascnt.yfilter)
	|| ydk::is_set(softreconfigbackup.yfilter)
	|| ydk::is_set(advintvl.yfilter)
	|| ydk::is_set(deforg.yfilter)
	|| ydk::is_set(deforgrtmap.yfilter)
	|| ydk::is_set(capaddlpaths.yfilter)
	|| ydk::is_set(unsupprmap.yfilter)
	|| ydk::is_set(asoverride.yfilter)
	|| ydk::is_set(nhthirdparty.yfilter)
	|| ydk::is_set(wght.yfilter)
	|| ydk::is_set(soo.yfilter)
	|| ydk::is_set(sendcomstd.yfilter)
	|| ydk::is_set(sendcomext.yfilter)
	|| ydk::is_set(encapmpls.yfilter)
	|| ydk::is_set(rewritertasn.yfilter)
	|| ydk::is_set(inheritcontpeerpolicyctrl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (maxpfxp_items !=  nullptr && maxpfxp_items->has_operation())
	|| (advtmap_items !=  nullptr && advtmap_items->has_operation())
	|| (rt_items !=  nullptr && rt_items->has_operation())
	|| (vpnrt_items !=  nullptr && vpnrt_items->has_operation())
	|| (lblrt_items !=  nullptr && lblrt_items->has_operation())
	|| (lsrt_items !=  nullptr && lsrt_items->has_operation())
	|| (evpnrt_items !=  nullptr && evpnrt_items->has_operation())
	|| (mvpnrt_items !=  nullptr && mvpnrt_items->has_operation())
	|| (advtdrt_items !=  nullptr && advtdrt_items->has_operation())
	|| (rcvdrt_items !=  nullptr && rcvdrt_items->has_operation())
	|| (damppathsrt_items !=  nullptr && damppathsrt_items->has_operation())
	|| (rtctrl_items !=  nullptr && rtctrl_items->has_operation())
	|| (defrtleak_items !=  nullptr && defrtleak_items->has_operation())
	|| (pfxctrl_items !=  nullptr && pfxctrl_items->has_operation())
	|| (fltrctrl_items !=  nullptr && fltrctrl_items->has_operation())
	|| (pol_items !=  nullptr && pol_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PeerAf-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (allowedselfascnt.is_set || is_set(allowedselfascnt.yfilter)) leaf_name_data.push_back(allowedselfascnt.get_name_leafdata());
    if (softreconfigbackup.is_set || is_set(softreconfigbackup.yfilter)) leaf_name_data.push_back(softreconfigbackup.get_name_leafdata());
    if (advintvl.is_set || is_set(advintvl.yfilter)) leaf_name_data.push_back(advintvl.get_name_leafdata());
    if (deforg.is_set || is_set(deforg.yfilter)) leaf_name_data.push_back(deforg.get_name_leafdata());
    if (deforgrtmap.is_set || is_set(deforgrtmap.yfilter)) leaf_name_data.push_back(deforgrtmap.get_name_leafdata());
    if (capaddlpaths.is_set || is_set(capaddlpaths.yfilter)) leaf_name_data.push_back(capaddlpaths.get_name_leafdata());
    if (unsupprmap.is_set || is_set(unsupprmap.yfilter)) leaf_name_data.push_back(unsupprmap.get_name_leafdata());
    if (asoverride.is_set || is_set(asoverride.yfilter)) leaf_name_data.push_back(asoverride.get_name_leafdata());
    if (nhthirdparty.is_set || is_set(nhthirdparty.yfilter)) leaf_name_data.push_back(nhthirdparty.get_name_leafdata());
    if (wght.is_set || is_set(wght.yfilter)) leaf_name_data.push_back(wght.get_name_leafdata());
    if (soo.is_set || is_set(soo.yfilter)) leaf_name_data.push_back(soo.get_name_leafdata());
    if (sendcomstd.is_set || is_set(sendcomstd.yfilter)) leaf_name_data.push_back(sendcomstd.get_name_leafdata());
    if (sendcomext.is_set || is_set(sendcomext.yfilter)) leaf_name_data.push_back(sendcomext.get_name_leafdata());
    if (encapmpls.is_set || is_set(encapmpls.yfilter)) leaf_name_data.push_back(encapmpls.get_name_leafdata());
    if (rewritertasn.is_set || is_set(rewritertasn.yfilter)) leaf_name_data.push_back(rewritertasn.get_name_leafdata());
    if (inheritcontpeerpolicyctrl.is_set || is_set(inheritcontpeerpolicyctrl.yfilter)) leaf_name_data.push_back(inheritcontpeerpolicyctrl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maxpfxp-items")
    {
        if(maxpfxp_items == nullptr)
        {
            maxpfxp_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MaxpfxpItems>();
        }
        return maxpfxp_items;
    }

    if(child_yang_name == "advtmap-items")
    {
        if(advtmap_items == nullptr)
        {
            advtmap_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtmapItems>();
        }
        return advtmap_items;
    }

    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems>();
        }
        return rt_items;
    }

    if(child_yang_name == "vpnrt-items")
    {
        if(vpnrt_items == nullptr)
        {
            vpnrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems>();
        }
        return vpnrt_items;
    }

    if(child_yang_name == "lblrt-items")
    {
        if(lblrt_items == nullptr)
        {
            lblrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::LblrtItems>();
        }
        return lblrt_items;
    }

    if(child_yang_name == "lsrt-items")
    {
        if(lsrt_items == nullptr)
        {
            lsrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::LsrtItems>();
        }
        return lsrt_items;
    }

    if(child_yang_name == "evpnrt-items")
    {
        if(evpnrt_items == nullptr)
        {
            evpnrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::EvpnrtItems>();
        }
        return evpnrt_items;
    }

    if(child_yang_name == "mvpnrt-items")
    {
        if(mvpnrt_items == nullptr)
        {
            mvpnrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MvpnrtItems>();
        }
        return mvpnrt_items;
    }

    if(child_yang_name == "advtdrt-items")
    {
        if(advtdrt_items == nullptr)
        {
            advtdrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtdrtItems>();
        }
        return advtdrt_items;
    }

    if(child_yang_name == "rcvdrt-items")
    {
        if(rcvdrt_items == nullptr)
        {
            rcvdrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RcvdrtItems>();
        }
        return rcvdrt_items;
    }

    if(child_yang_name == "damppathsrt-items")
    {
        if(damppathsrt_items == nullptr)
        {
            damppathsrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::DamppathsrtItems>();
        }
        return damppathsrt_items;
    }

    if(child_yang_name == "rtctrl-items")
    {
        if(rtctrl_items == nullptr)
        {
            rtctrl_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtctrlItems>();
        }
        return rtctrl_items;
    }

    if(child_yang_name == "defrtleak-items")
    {
        if(defrtleak_items == nullptr)
        {
            defrtleak_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::DefrtleakItems>();
        }
        return defrtleak_items;
    }

    if(child_yang_name == "pfxctrl-items")
    {
        if(pfxctrl_items == nullptr)
        {
            pfxctrl_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::PfxctrlItems>();
        }
        return pfxctrl_items;
    }

    if(child_yang_name == "fltrctrl-items")
    {
        if(fltrctrl_items == nullptr)
        {
            fltrctrl_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::FltrctrlItems>();
        }
        return fltrctrl_items;
    }

    if(child_yang_name == "pol-items")
    {
        if(pol_items == nullptr)
        {
            pol_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::PolItems>();
        }
        return pol_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(maxpfxp_items != nullptr)
    {
        children["maxpfxp-items"] = maxpfxp_items;
    }

    if(advtmap_items != nullptr)
    {
        children["advtmap-items"] = advtmap_items;
    }

    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    if(vpnrt_items != nullptr)
    {
        children["vpnrt-items"] = vpnrt_items;
    }

    if(lblrt_items != nullptr)
    {
        children["lblrt-items"] = lblrt_items;
    }

    if(lsrt_items != nullptr)
    {
        children["lsrt-items"] = lsrt_items;
    }

    if(evpnrt_items != nullptr)
    {
        children["evpnrt-items"] = evpnrt_items;
    }

    if(mvpnrt_items != nullptr)
    {
        children["mvpnrt-items"] = mvpnrt_items;
    }

    if(advtdrt_items != nullptr)
    {
        children["advtdrt-items"] = advtdrt_items;
    }

    if(rcvdrt_items != nullptr)
    {
        children["rcvdrt-items"] = rcvdrt_items;
    }

    if(damppathsrt_items != nullptr)
    {
        children["damppathsrt-items"] = damppathsrt_items;
    }

    if(rtctrl_items != nullptr)
    {
        children["rtctrl-items"] = rtctrl_items;
    }

    if(defrtleak_items != nullptr)
    {
        children["defrtleak-items"] = defrtleak_items;
    }

    if(pfxctrl_items != nullptr)
    {
        children["pfxctrl-items"] = pfxctrl_items;
    }

    if(fltrctrl_items != nullptr)
    {
        children["fltrctrl-items"] = fltrctrl_items;
    }

    if(pol_items != nullptr)
    {
        children["pol-items"] = pol_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedSelfAsCnt")
    {
        allowedselfascnt = value;
        allowedselfascnt.value_namespace = name_space;
        allowedselfascnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "softReconfigBackup")
    {
        softreconfigbackup = value;
        softreconfigbackup.value_namespace = name_space;
        softreconfigbackup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advIntvl")
    {
        advintvl = value;
        advintvl.value_namespace = name_space;
        advintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defOrg")
    {
        deforg = value;
        deforg.value_namespace = name_space;
        deforg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defOrgRtMap")
    {
        deforgrtmap = value;
        deforgrtmap.value_namespace = name_space;
        deforgrtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capAddlPaths")
    {
        capaddlpaths = value;
        capaddlpaths.value_namespace = name_space;
        capaddlpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unSupprMap")
    {
        unsupprmap = value;
        unsupprmap.value_namespace = name_space;
        unsupprmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asOverride")
    {
        asoverride = value;
        asoverride.value_namespace = name_space;
        asoverride.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhThirdparty")
    {
        nhthirdparty = value;
        nhthirdparty.value_namespace = name_space;
        nhthirdparty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wght")
    {
        wght = value;
        wght.value_namespace = name_space;
        wght.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soo")
    {
        soo = value;
        soo.value_namespace = name_space;
        soo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendComStd")
    {
        sendcomstd = value;
        sendcomstd.value_namespace = name_space;
        sendcomstd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendComExt")
    {
        sendcomext = value;
        sendcomext.value_namespace = name_space;
        sendcomext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapMpls")
    {
        encapmpls = value;
        encapmpls.value_namespace = name_space;
        encapmpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rewriteRtAsn")
    {
        rewritertasn = value;
        rewritertasn.value_namespace = name_space;
        rewritertasn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inheritContPeerPolicyCtrl")
    {
        inheritcontpeerpolicyctrl = value;
        inheritcontpeerpolicyctrl.value_namespace = name_space;
        inheritcontpeerpolicyctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "allowedSelfAsCnt")
    {
        allowedselfascnt.yfilter = yfilter;
    }
    if(value_path == "softReconfigBackup")
    {
        softreconfigbackup.yfilter = yfilter;
    }
    if(value_path == "advIntvl")
    {
        advintvl.yfilter = yfilter;
    }
    if(value_path == "defOrg")
    {
        deforg.yfilter = yfilter;
    }
    if(value_path == "defOrgRtMap")
    {
        deforgrtmap.yfilter = yfilter;
    }
    if(value_path == "capAddlPaths")
    {
        capaddlpaths.yfilter = yfilter;
    }
    if(value_path == "unSupprMap")
    {
        unsupprmap.yfilter = yfilter;
    }
    if(value_path == "asOverride")
    {
        asoverride.yfilter = yfilter;
    }
    if(value_path == "nhThirdparty")
    {
        nhthirdparty.yfilter = yfilter;
    }
    if(value_path == "wght")
    {
        wght.yfilter = yfilter;
    }
    if(value_path == "soo")
    {
        soo.yfilter = yfilter;
    }
    if(value_path == "sendComStd")
    {
        sendcomstd.yfilter = yfilter;
    }
    if(value_path == "sendComExt")
    {
        sendcomext.yfilter = yfilter;
    }
    if(value_path == "encapMpls")
    {
        encapmpls.yfilter = yfilter;
    }
    if(value_path == "rewriteRtAsn")
    {
        rewritertasn.yfilter = yfilter;
    }
    if(value_path == "inheritContPeerPolicyCtrl")
    {
        inheritcontpeerpolicyctrl.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxpfxp-items" || name == "advtmap-items" || name == "rt-items" || name == "vpnrt-items" || name == "lblrt-items" || name == "lsrt-items" || name == "evpnrt-items" || name == "mvpnrt-items" || name == "advtdrt-items" || name == "rcvdrt-items" || name == "damppathsrt-items" || name == "rtctrl-items" || name == "defrtleak-items" || name == "pfxctrl-items" || name == "fltrctrl-items" || name == "pol-items" || name == "type" || name == "ctrl" || name == "allowedSelfAsCnt" || name == "softReconfigBackup" || name == "advIntvl" || name == "defOrg" || name == "defOrgRtMap" || name == "capAddlPaths" || name == "unSupprMap" || name == "asOverride" || name == "nhThirdparty" || name == "wght" || name == "soo" || name == "sendComStd" || name == "sendComExt" || name == "encapMpls" || name == "rewriteRtAsn" || name == "inheritContPeerPolicyCtrl" || name == "name")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MaxpfxpItems::MaxpfxpItems()
    :
    maxpfx{YType::uint32, "maxPfx"},
    thresh{YType::uint8, "thresh"},
    action{YType::enumeration, "action"},
    restarttime{YType::uint16, "restartTime"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "maxpfxp-items"; yang_parent_name = "PeerAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MaxpfxpItems::~MaxpfxpItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MaxpfxpItems::has_data() const
{
    if (is_presence_container) return true;
    return maxpfx.is_set
	|| thresh.is_set
	|| action.is_set
	|| restarttime.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MaxpfxpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxpfx.yfilter)
	|| ydk::is_set(thresh.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(restarttime.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MaxpfxpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maxpfxp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MaxpfxpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxpfx.is_set || is_set(maxpfx.yfilter)) leaf_name_data.push_back(maxpfx.get_name_leafdata());
    if (thresh.is_set || is_set(thresh.yfilter)) leaf_name_data.push_back(thresh.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (restarttime.is_set || is_set(restarttime.yfilter)) leaf_name_data.push_back(restarttime.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MaxpfxpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MaxpfxpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MaxpfxpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxPfx")
    {
        maxpfx = value;
        maxpfx.value_namespace = name_space;
        maxpfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh")
    {
        thresh = value;
        thresh.value_namespace = name_space;
        thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restartTime")
    {
        restarttime = value;
        restarttime.value_namespace = name_space;
        restarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MaxpfxpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxPfx")
    {
        maxpfx.yfilter = yfilter;
    }
    if(value_path == "thresh")
    {
        thresh.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "restartTime")
    {
        restarttime.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MaxpfxpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxPfx" || name == "thresh" || name == "action" || name == "restartTime" || name == "name" || name == "descr")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtmapItems::AdvtmapItems()
    :
    rtmap{YType::str, "rtMap"},
    condition{YType::enumeration, "condition"},
    condmap{YType::str, "condMap"}
{

    yang_name = "advtmap-items"; yang_parent_name = "PeerAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtmapItems::~AdvtmapItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtmapItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| condition.is_set
	|| condmap.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(condition.yfilter)
	|| ydk::is_set(condmap.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advtmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (condition.is_set || is_set(condition.yfilter)) leaf_name_data.push_back(condition.get_name_leafdata());
    if (condmap.is_set || is_set(condmap.yfilter)) leaf_name_data.push_back(condmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condition")
    {
        condition = value;
        condition.value_namespace = name_space;
        condition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condMap")
    {
        condmap = value;
        condmap.value_namespace = name_space;
        condmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "condition")
    {
        condition.yfilter = yfilter;
    }
    if(value_path == "condMap")
    {
        condmap.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap" || name == "condition" || name == "condMap")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RtItems()
    :
    route_list(this, {"pfx"})
{

    yang_name = "rt-items"; yang_parent_name = "PeerAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList>();
        c->parent = this;
        route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::RouteList()
    :
    pfx{YType::str, "pfx"},
    rd{YType::str, "rd"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rtflags{YType::str, "rtFlags"},
    numpaths{YType::uint32, "numPaths"},
    bestpathid{YType::uint32, "bestPathId"}
        ,
    path_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems>())
{
    path_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::~RouteList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| rd.is_set
	|| name.is_set
	|| ver.is_set
	|| rtflags.is_set
	|| numpaths.is_set
	|| bestpathid.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rtflags.yfilter)
	|| ydk::is_set(numpaths.yfilter)
	|| ydk::is_set(bestpathid.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rtflags.is_set || is_set(rtflags.yfilter)) leaf_name_data.push_back(rtflags.get_name_leafdata());
    if (numpaths.is_set || is_set(numpaths.yfilter)) leaf_name_data.push_back(numpaths.get_name_leafdata());
    if (bestpathid.is_set || is_set(bestpathid.yfilter)) leaf_name_data.push_back(bestpathid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_items != nullptr)
    {
        children["path-items"] = path_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtFlags")
    {
        rtflags = value;
        rtflags.value_namespace = name_space;
        rtflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPaths")
    {
        numpaths = value;
        numpaths.value_namespace = name_space;
        numpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathId")
    {
        bestpathid = value;
        bestpathid.value_namespace = name_space;
        bestpathid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rtFlags")
    {
        rtflags.yfilter = yfilter;
    }
    if(value_path == "numPaths")
    {
        numpaths.yfilter = yfilter;
    }
    if(value_path == "bestPathId")
    {
        bestpathid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "pfx" || name == "rd" || name == "name" || name == "ver" || name == "rtFlags" || name == "numPaths" || name == "bestPathId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathItems()
    :
    path_list(this, {"peer", "id", "nh", "importedrd", "origimportedrd"})
{

    yang_name = "path-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::~PathItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList>();
        c->parent = this;
        path_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(seg_items != nullptr)
    {
        children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        children["pmsi-items"] = pmsi_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList>();
        c->parent = this;
        asseg_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asseg_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asn_items != nullptr)
    {
        children["asn-items"] = asn_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        c->parent = this;
        asitem_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asitem_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList>();
        c->parent = this;
        regcomm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : regcomm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::RtItems_()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::~RtItems_()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList>();
        c->parent = this;
        extcommrt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extcommrt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    attrtype{YType::enumeration, "attrType"},
    nodeattrflags{YType::str, "nodeAttrFlags"},
    lnkattrflags{YType::str, "lnkAttrFlags"},
    pfxattrflags{YType::str, "pfxAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return attrtype.is_set
	|| nodeattrflags.is_set
	|| lnkattrflags.is_set
	|| pfxattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attrtype.yfilter)
	|| ydk::is_set(nodeattrflags.yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(pfxattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attrtype.is_set || is_set(attrtype.yfilter)) leaf_name_data.push_back(attrtype.get_name_leafdata());
    if (nodeattrflags.is_set || is_set(nodeattrflags.yfilter)) leaf_name_data.push_back(nodeattrflags.get_name_leafdata());
    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (pfxattrflags.is_set || is_set(pfxattrflags.yfilter)) leaf_name_data.push_back(pfxattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attrType")
    {
        attrtype = value;
        attrtype.value_namespace = name_space;
        attrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags = value;
        nodeattrflags.value_namespace = name_space;
        nodeattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags = value;
        pfxattrflags.value_namespace = name_space;
        pfxattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attrType")
    {
        attrtype.yfilter = yfilter;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags.yfilter = yfilter;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "attrType" || name == "nodeAttrFlags" || name == "lnkAttrFlags" || name == "pfxAttrFlags" || name == "attrLen")
        return true;
    return false;
}


}
}

