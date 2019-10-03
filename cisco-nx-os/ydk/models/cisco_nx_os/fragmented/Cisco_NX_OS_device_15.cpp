
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_15.hpp"
#include "Cisco_NX_OS_device_16.hpp"
#include "Cisco_NX_OS_device_17.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::BgpItems::InstItems::EvthistItems::EvtHistList::EvtHistList()
    :
    type{YType::enumeration, "type"},
    size{YType::uint32, "size"}
{

    yang_name = "EvtHist-list"; yang_parent_name = "evthist-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BgpItems::InstItems::EvthistItems::EvtHistList::~EvtHistList()
{
}

bool System::BgpItems::InstItems::EvthistItems::EvtHistList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| size.is_set;
}

bool System::BgpItems::InstItems::EvthistItems::EvtHistList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string System::BgpItems::InstItems::EvthistItems::EvtHistList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bgp-items/inst-items/evthist-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BgpItems::InstItems::EvthistItems::EvtHistList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EvtHist-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::EvthistItems::EvtHistList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::EvthistItems::EvtHistList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::EvthistItems::EvtHistList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::EvthistItems::EvtHistList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::EvthistItems::EvtHistList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::EvthistItems::EvtHistList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "size")
        return true;
    return false;
}

System::BgpItems::InstItems::OperItems::OperItems()
    :
    l2_items(std::make_shared<System::BgpItems::InstItems::OperItems::L2Items>())
    , l3_items(std::make_shared<System::BgpItems::InstItems::OperItems::L3Items>())
{
    l2_items->parent = this;
    l3_items->parent = this;

    yang_name = "oper-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BgpItems::InstItems::OperItems::~OperItems()
{
}

bool System::BgpItems::InstItems::OperItems::has_data() const
{
    if (is_presence_container) return true;
    return (l2_items !=  nullptr && l2_items->has_data())
	|| (l3_items !=  nullptr && l3_items->has_data());
}

bool System::BgpItems::InstItems::OperItems::has_operation() const
{
    return is_set(yfilter)
	|| (l2_items !=  nullptr && l2_items->has_operation())
	|| (l3_items !=  nullptr && l3_items->has_operation());
}

std::string System::BgpItems::InstItems::OperItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bgp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BgpItems::InstItems::OperItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::OperItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::OperItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2-items")
    {
        if(l2_items == nullptr)
        {
            l2_items = std::make_shared<System::BgpItems::InstItems::OperItems::L2Items>();
        }
        return l2_items;
    }

    if(child_yang_name == "l3-items")
    {
        if(l3_items == nullptr)
        {
            l3_items = std::make_shared<System::BgpItems::InstItems::OperItems::L3Items>();
        }
        return l3_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::OperItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2_items != nullptr)
    {
        _children["l2-items"] = l2_items;
    }

    if(l3_items != nullptr)
    {
        _children["l3-items"] = l3_items;
    }

    return _children;
}

void System::BgpItems::InstItems::OperItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::OperItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::OperItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2-items" || name == "l3-items")
        return true;
    return false;
}

System::BgpItems::InstItems::OperItems::L2Items::L2Items()
    :
    operrtctrll2_list(this, {"encap"})
{

    yang_name = "l2-items"; yang_parent_name = "oper-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BgpItems::InstItems::OperItems::L2Items::~L2Items()
{
}

bool System::BgpItems::InstItems::OperItems::L2Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<operrtctrll2_list.len(); index++)
    {
        if(operrtctrll2_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::OperItems::L2Items::has_operation() const
{
    for (std::size_t index=0; index<operrtctrll2_list.len(); index++)
    {
        if(operrtctrll2_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::OperItems::L2Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bgp-items/inst-items/oper-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BgpItems::InstItems::OperItems::L2Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::OperItems::L2Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::OperItems::L2Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OperRtctrlL2-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List>();
        ent_->parent = this;
        operrtctrll2_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::OperItems::L2Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : operrtctrll2_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::OperItems::L2Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::OperItems::L2Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::OperItems::L2Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OperRtctrlL2-list")
        return true;
    return false;
}

System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::OperRtctrlL2List()
    :
    encap{YType::str, "encap"},
    name{YType::str, "name"},
    rd{YType::str, "rd"}
        ,
    rttp_items(std::make_shared<System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems>())
{
    rttp_items->parent = this;

    yang_name = "OperRtctrlL2-list"; yang_parent_name = "l2-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::~OperRtctrlL2List()
{
}

bool System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| name.is_set
	|| rd.is_set
	|| (rttp_items !=  nullptr && rttp_items->has_data());
}

bool System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (rttp_items !=  nullptr && rttp_items->has_operation());
}

std::string System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bgp-items/inst-items/oper-items/l2-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OperRtctrlL2-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttp-items")
    {
        if(rttp_items == nullptr)
        {
            rttp_items = std::make_shared<System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems>();
        }
        return rttp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rttp_items != nullptr)
    {
        _children["rttp-items"] = rttp_items;
    }

    return _children;
}

void System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttp-items" || name == "encap" || name == "name" || name == "rd")
        return true;
    return false;
}

System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::RttpItems()
    :
    operrttp_list(this, {"type"})
{

    yang_name = "rttp-items"; yang_parent_name = "OperRtctrlL2-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::~RttpItems()
{
}

bool System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<operrttp_list.len(); index++)
    {
        if(operrttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::has_operation() const
{
    for (std::size_t index=0; index<operrttp_list.len(); index++)
    {
        if(operrttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OperRttP-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList>();
        ent_->parent = this;
        operrttp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : operrttp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OperRttP-list")
        return true;
    return false;
}

System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::OperRttPList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    entry_items(std::make_shared<System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems>())
{
    entry_items->parent = this;

    yang_name = "OperRttP-list"; yang_parent_name = "rttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::~OperRttPList()
{
}

bool System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| descr.is_set
	|| (entry_items !=  nullptr && entry_items->has_data());
}

bool System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (entry_items !=  nullptr && entry_items->has_operation());
}

std::string System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OperRttP-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry-items")
    {
        if(entry_items == nullptr)
        {
            entry_items = std::make_shared<System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems>();
        }
        return entry_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(entry_items != nullptr)
    {
        _children["entry-items"] = entry_items;
    }

    return _children;
}

void System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry-items" || name == "type" || name == "name" || name == "descr")
        return true;
    return false;
}

System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::EntryItems()
    :
    operrttentry_list(this, {"rtt"})
{

    yang_name = "entry-items"; yang_parent_name = "OperRttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::~EntryItems()
{
}

bool System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<operrttentry_list.len(); index++)
    {
        if(operrttentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::has_operation() const
{
    for (std::size_t index=0; index<operrttentry_list.len(); index++)
    {
        if(operrttentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OperRttEntry-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::OperRttEntryList>();
        ent_->parent = this;
        operrttentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : operrttentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OperRttEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::OperRttEntryList::OperRttEntryList()
    :
    rtt{YType::str, "rtt"}
{

    yang_name = "OperRttEntry-list"; yang_parent_name = "entry-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::OperRttEntryList::~OperRttEntryList()
{
}

bool System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::OperRttEntryList::has_data() const
{
    if (is_presence_container) return true;
    return rtt.is_set;
}

bool System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::OperRttEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt.yfilter);
}

std::string System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::OperRttEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OperRttEntry-list";
    ADD_KEY_TOKEN(rtt, "rtt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::OperRttEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::OperRttEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::OperRttEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::OperRttEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::OperRttEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::OperRttEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt")
        return true;
    return false;
}

System::BgpItems::InstItems::OperItems::L3Items::L3Items()
    :
    operrtctrll3_list(this, {"encap"})
{

    yang_name = "l3-items"; yang_parent_name = "oper-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BgpItems::InstItems::OperItems::L3Items::~L3Items()
{
}

bool System::BgpItems::InstItems::OperItems::L3Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<operrtctrll3_list.len(); index++)
    {
        if(operrtctrll3_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::OperItems::L3Items::has_operation() const
{
    for (std::size_t index=0; index<operrtctrll3_list.len(); index++)
    {
        if(operrtctrll3_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::OperItems::L3Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bgp-items/inst-items/oper-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BgpItems::InstItems::OperItems::L3Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::OperItems::L3Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::OperItems::L3Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OperRtctrlL3-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List>();
        ent_->parent = this;
        operrtctrll3_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::OperItems::L3Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : operrtctrll3_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::OperItems::L3Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::OperItems::L3Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::OperItems::L3Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OperRtctrlL3-list")
        return true;
    return false;
}

System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::OperRtctrlL3List()
    :
    encap{YType::str, "encap"},
    name{YType::str, "name"},
    rd{YType::str, "rd"}
        ,
    af_items(std::make_shared<System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems>())
{
    af_items->parent = this;

    yang_name = "OperRtctrlL3-list"; yang_parent_name = "l3-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::~OperRtctrlL3List()
{
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| name.is_set
	|| rd.is_set
	|| (af_items !=  nullptr && af_items->has_data());
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (af_items !=  nullptr && af_items->has_operation());
}

std::string System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bgp-items/inst-items/oper-items/l3-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OperRtctrlL3-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems>();
        }
        return af_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(af_items != nullptr)
    {
        _children["af-items"] = af_items;
    }

    return _children;
}

void System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-items" || name == "encap" || name == "name" || name == "rd")
        return true;
    return false;
}

System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::AfItems()
    :
    operdomaf_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "OperRtctrlL3-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::~AfItems()
{
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<operdomaf_list.len(); index++)
    {
        if(operdomaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::has_operation() const
{
    for (std::size_t index=0; index<operdomaf_list.len(); index++)
    {
        if(operdomaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OperDomAf-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList>();
        ent_->parent = this;
        operdomaf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : operdomaf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OperDomAf-list")
        return true;
    return false;
}

System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::OperDomAfList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ctrl_items(std::make_shared<System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems>())
{
    ctrl_items->parent = this;

    yang_name = "OperDomAf-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::~OperDomAfList()
{
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ctrl_items !=  nullptr && ctrl_items->has_data());
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ctrl_items !=  nullptr && ctrl_items->has_operation());
}

std::string System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OperDomAf-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ctrl-items")
    {
        if(ctrl_items == nullptr)
        {
            ctrl_items = std::make_shared<System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems>();
        }
        return ctrl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ctrl_items != nullptr)
    {
        _children["ctrl-items"] = ctrl_items;
    }

    return _children;
}

void System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ctrl-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::CtrlItems()
    :
    operafctrl_list(this, {"type"})
{

    yang_name = "ctrl-items"; yang_parent_name = "OperDomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::~CtrlItems()
{
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<operafctrl_list.len(); index++)
    {
        if(operafctrl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::has_operation() const
{
    for (std::size_t index=0; index<operafctrl_list.len(); index++)
    {
        if(operafctrl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OperAfCtrl-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList>();
        ent_->parent = this;
        operafctrl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : operafctrl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OperAfCtrl-list")
        return true;
    return false;
}

System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::OperAfCtrlList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    rttp_items(std::make_shared<System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems>())
{
    rttp_items->parent = this;

    yang_name = "OperAfCtrl-list"; yang_parent_name = "ctrl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::~OperAfCtrlList()
{
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (rttp_items !=  nullptr && rttp_items->has_data());
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rttp_items !=  nullptr && rttp_items->has_operation());
}

std::string System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OperAfCtrl-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttp-items")
    {
        if(rttp_items == nullptr)
        {
            rttp_items = std::make_shared<System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems>();
        }
        return rttp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rttp_items != nullptr)
    {
        _children["rttp-items"] = rttp_items;
    }

    return _children;
}

void System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttp-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::RttpItems()
    :
    operrttp_list(this, {"type"})
{

    yang_name = "rttp-items"; yang_parent_name = "OperAfCtrl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::~RttpItems()
{
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<operrttp_list.len(); index++)
    {
        if(operrttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::has_operation() const
{
    for (std::size_t index=0; index<operrttp_list.len(); index++)
    {
        if(operrttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OperRttP-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList>();
        ent_->parent = this;
        operrttp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : operrttp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OperRttP-list")
        return true;
    return false;
}

System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::OperRttPList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    entry_items(std::make_shared<System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems>())
{
    entry_items->parent = this;

    yang_name = "OperRttP-list"; yang_parent_name = "rttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::~OperRttPList()
{
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| descr.is_set
	|| (entry_items !=  nullptr && entry_items->has_data());
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (entry_items !=  nullptr && entry_items->has_operation());
}

std::string System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OperRttP-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry-items")
    {
        if(entry_items == nullptr)
        {
            entry_items = std::make_shared<System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems>();
        }
        return entry_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(entry_items != nullptr)
    {
        _children["entry-items"] = entry_items;
    }

    return _children;
}

void System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry-items" || name == "type" || name == "name" || name == "descr")
        return true;
    return false;
}

System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::EntryItems()
    :
    operrttentry_list(this, {"rtt"})
{

    yang_name = "entry-items"; yang_parent_name = "OperRttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::~EntryItems()
{
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<operrttentry_list.len(); index++)
    {
        if(operrttentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::has_operation() const
{
    for (std::size_t index=0; index<operrttentry_list.len(); index++)
    {
        if(operrttentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OperRttEntry-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::OperRttEntryList>();
        ent_->parent = this;
        operrttentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : operrttentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OperRttEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::OperRttEntryList::OperRttEntryList()
    :
    rtt{YType::str, "rtt"}
{

    yang_name = "OperRttEntry-list"; yang_parent_name = "entry-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::OperRttEntryList::~OperRttEntryList()
{
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::OperRttEntryList::has_data() const
{
    if (is_presence_container) return true;
    return rtt.is_set;
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::OperRttEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt.yfilter);
}

std::string System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::OperRttEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OperRttEntry-list";
    ADD_KEY_TOKEN(rtt, "rtt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::OperRttEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::OperRttEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::OperRttEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::OperRttEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::OperRttEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::OperRttEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt")
        return true;
    return false;
}

System::CallhomeItems::CallhomeItems()
    :
    inst_items(std::make_shared<System::CallhomeItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "callhome-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CallhomeItems::~CallhomeItems()
{
}

bool System::CallhomeItems::has_data() const
{
    if (is_presence_container) return true;
    return (inst_items !=  nullptr && inst_items->has_data());
}

bool System::CallhomeItems::has_operation() const
{
    return is_set(yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::CallhomeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CallhomeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callhome-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::CallhomeItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::CallhomeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CallhomeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CallhomeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items")
        return true;
    return false;
}

System::CallhomeItems::InstItems::InstItems()
    :
    callhomeenable{YType::enumeration, "callhomeEnable"},
    dupmsgthrottle{YType::enumeration, "dupMsgThrottle"},
    contractid{YType::str, "contractId"},
    customerid{YType::str, "customerId"},
    emailid{YType::str, "emailId"},
    phonecontact{YType::str, "phoneContact"},
    siteid{YType::str, "siteId"},
    streetaddress{YType::str, "streetAddress"},
    switchpri{YType::uint16, "switchPri"},
    periodicinvnotif{YType::enumeration, "periodicInvNotif"},
    periodinvnotifinterval{YType::uint32, "periodInvNotifInterval"},
    periodinvnotiftimeofdayhour{YType::uint32, "periodInvNotifTimeOfDayHour"},
    periodinvnotiftimeofdayminute{YType::uint32, "periodInvNotifTimeOfDayMinute"}
        ,
    alertgroup_items(std::make_shared<System::CallhomeItems::InstItems::AlertgroupItems>())
    , destprof_items(std::make_shared<System::CallhomeItems::InstItems::DestprofItems>())
    , transport_items(std::make_shared<System::CallhomeItems::InstItems::TransportItems>())
{
    alertgroup_items->parent = this;
    destprof_items->parent = this;
    transport_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "callhome-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CallhomeItems::InstItems::~InstItems()
{
}

bool System::CallhomeItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return callhomeenable.is_set
	|| dupmsgthrottle.is_set
	|| contractid.is_set
	|| customerid.is_set
	|| emailid.is_set
	|| phonecontact.is_set
	|| siteid.is_set
	|| streetaddress.is_set
	|| switchpri.is_set
	|| periodicinvnotif.is_set
	|| periodinvnotifinterval.is_set
	|| periodinvnotiftimeofdayhour.is_set
	|| periodinvnotiftimeofdayminute.is_set
	|| (alertgroup_items !=  nullptr && alertgroup_items->has_data())
	|| (destprof_items !=  nullptr && destprof_items->has_data())
	|| (transport_items !=  nullptr && transport_items->has_data());
}

bool System::CallhomeItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(callhomeenable.yfilter)
	|| ydk::is_set(dupmsgthrottle.yfilter)
	|| ydk::is_set(contractid.yfilter)
	|| ydk::is_set(customerid.yfilter)
	|| ydk::is_set(emailid.yfilter)
	|| ydk::is_set(phonecontact.yfilter)
	|| ydk::is_set(siteid.yfilter)
	|| ydk::is_set(streetaddress.yfilter)
	|| ydk::is_set(switchpri.yfilter)
	|| ydk::is_set(periodicinvnotif.yfilter)
	|| ydk::is_set(periodinvnotifinterval.yfilter)
	|| ydk::is_set(periodinvnotiftimeofdayhour.yfilter)
	|| ydk::is_set(periodinvnotiftimeofdayminute.yfilter)
	|| (alertgroup_items !=  nullptr && alertgroup_items->has_operation())
	|| (destprof_items !=  nullptr && destprof_items->has_operation())
	|| (transport_items !=  nullptr && transport_items->has_operation());
}

std::string System::CallhomeItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/callhome-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CallhomeItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (callhomeenable.is_set || is_set(callhomeenable.yfilter)) leaf_name_data.push_back(callhomeenable.get_name_leafdata());
    if (dupmsgthrottle.is_set || is_set(dupmsgthrottle.yfilter)) leaf_name_data.push_back(dupmsgthrottle.get_name_leafdata());
    if (contractid.is_set || is_set(contractid.yfilter)) leaf_name_data.push_back(contractid.get_name_leafdata());
    if (customerid.is_set || is_set(customerid.yfilter)) leaf_name_data.push_back(customerid.get_name_leafdata());
    if (emailid.is_set || is_set(emailid.yfilter)) leaf_name_data.push_back(emailid.get_name_leafdata());
    if (phonecontact.is_set || is_set(phonecontact.yfilter)) leaf_name_data.push_back(phonecontact.get_name_leafdata());
    if (siteid.is_set || is_set(siteid.yfilter)) leaf_name_data.push_back(siteid.get_name_leafdata());
    if (streetaddress.is_set || is_set(streetaddress.yfilter)) leaf_name_data.push_back(streetaddress.get_name_leafdata());
    if (switchpri.is_set || is_set(switchpri.yfilter)) leaf_name_data.push_back(switchpri.get_name_leafdata());
    if (periodicinvnotif.is_set || is_set(periodicinvnotif.yfilter)) leaf_name_data.push_back(periodicinvnotif.get_name_leafdata());
    if (periodinvnotifinterval.is_set || is_set(periodinvnotifinterval.yfilter)) leaf_name_data.push_back(periodinvnotifinterval.get_name_leafdata());
    if (periodinvnotiftimeofdayhour.is_set || is_set(periodinvnotiftimeofdayhour.yfilter)) leaf_name_data.push_back(periodinvnotiftimeofdayhour.get_name_leafdata());
    if (periodinvnotiftimeofdayminute.is_set || is_set(periodinvnotiftimeofdayminute.yfilter)) leaf_name_data.push_back(periodinvnotiftimeofdayminute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alertgroup-items")
    {
        if(alertgroup_items == nullptr)
        {
            alertgroup_items = std::make_shared<System::CallhomeItems::InstItems::AlertgroupItems>();
        }
        return alertgroup_items;
    }

    if(child_yang_name == "destprof-items")
    {
        if(destprof_items == nullptr)
        {
            destprof_items = std::make_shared<System::CallhomeItems::InstItems::DestprofItems>();
        }
        return destprof_items;
    }

    if(child_yang_name == "transport-items")
    {
        if(transport_items == nullptr)
        {
            transport_items = std::make_shared<System::CallhomeItems::InstItems::TransportItems>();
        }
        return transport_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(alertgroup_items != nullptr)
    {
        _children["alertgroup-items"] = alertgroup_items;
    }

    if(destprof_items != nullptr)
    {
        _children["destprof-items"] = destprof_items;
    }

    if(transport_items != nullptr)
    {
        _children["transport-items"] = transport_items;
    }

    return _children;
}

void System::CallhomeItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "callhomeEnable")
    {
        callhomeenable = value;
        callhomeenable.value_namespace = name_space;
        callhomeenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupMsgThrottle")
    {
        dupmsgthrottle = value;
        dupmsgthrottle.value_namespace = name_space;
        dupmsgthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "contractId")
    {
        contractid = value;
        contractid.value_namespace = name_space;
        contractid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "customerId")
    {
        customerid = value;
        customerid.value_namespace = name_space;
        customerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "emailId")
    {
        emailid = value;
        emailid.value_namespace = name_space;
        emailid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phoneContact")
    {
        phonecontact = value;
        phonecontact.value_namespace = name_space;
        phonecontact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "siteId")
    {
        siteid = value;
        siteid.value_namespace = name_space;
        siteid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "streetAddress")
    {
        streetaddress = value;
        streetaddress.value_namespace = name_space;
        streetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchPri")
    {
        switchpri = value;
        switchpri.value_namespace = name_space;
        switchpri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodicInvNotif")
    {
        periodicinvnotif = value;
        periodicinvnotif.value_namespace = name_space;
        periodicinvnotif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodInvNotifInterval")
    {
        periodinvnotifinterval = value;
        periodinvnotifinterval.value_namespace = name_space;
        periodinvnotifinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodInvNotifTimeOfDayHour")
    {
        periodinvnotiftimeofdayhour = value;
        periodinvnotiftimeofdayhour.value_namespace = name_space;
        periodinvnotiftimeofdayhour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodInvNotifTimeOfDayMinute")
    {
        periodinvnotiftimeofdayminute = value;
        periodinvnotiftimeofdayminute.value_namespace = name_space;
        periodinvnotiftimeofdayminute.value_namespace_prefix = name_space_prefix;
    }
}

void System::CallhomeItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "callhomeEnable")
    {
        callhomeenable.yfilter = yfilter;
    }
    if(value_path == "dupMsgThrottle")
    {
        dupmsgthrottle.yfilter = yfilter;
    }
    if(value_path == "contractId")
    {
        contractid.yfilter = yfilter;
    }
    if(value_path == "customerId")
    {
        customerid.yfilter = yfilter;
    }
    if(value_path == "emailId")
    {
        emailid.yfilter = yfilter;
    }
    if(value_path == "phoneContact")
    {
        phonecontact.yfilter = yfilter;
    }
    if(value_path == "siteId")
    {
        siteid.yfilter = yfilter;
    }
    if(value_path == "streetAddress")
    {
        streetaddress.yfilter = yfilter;
    }
    if(value_path == "switchPri")
    {
        switchpri.yfilter = yfilter;
    }
    if(value_path == "periodicInvNotif")
    {
        periodicinvnotif.yfilter = yfilter;
    }
    if(value_path == "periodInvNotifInterval")
    {
        periodinvnotifinterval.yfilter = yfilter;
    }
    if(value_path == "periodInvNotifTimeOfDayHour")
    {
        periodinvnotiftimeofdayhour.yfilter = yfilter;
    }
    if(value_path == "periodInvNotifTimeOfDayMinute")
    {
        periodinvnotiftimeofdayminute.yfilter = yfilter;
    }
}

bool System::CallhomeItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alertgroup-items" || name == "destprof-items" || name == "transport-items" || name == "callhomeEnable" || name == "dupMsgThrottle" || name == "contractId" || name == "customerId" || name == "emailId" || name == "phoneContact" || name == "siteId" || name == "streetAddress" || name == "switchPri" || name == "periodicInvNotif" || name == "periodInvNotifInterval" || name == "periodInvNotifTimeOfDayHour" || name == "periodInvNotifTimeOfDayMinute")
        return true;
    return false;
}

System::CallhomeItems::InstItems::AlertgroupItems::AlertgroupItems()
    :
    alertgroup_list(this, {"alertgroup", "seqnum"})
{

    yang_name = "alertgroup-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CallhomeItems::InstItems::AlertgroupItems::~AlertgroupItems()
{
}

bool System::CallhomeItems::InstItems::AlertgroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alertgroup_list.len(); index++)
    {
        if(alertgroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CallhomeItems::InstItems::AlertgroupItems::has_operation() const
{
    for (std::size_t index=0; index<alertgroup_list.len(); index++)
    {
        if(alertgroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CallhomeItems::InstItems::AlertgroupItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/callhome-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CallhomeItems::InstItems::AlertgroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alertgroup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::AlertgroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::AlertgroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AlertGroup-list")
    {
        auto ent_ = std::make_shared<System::CallhomeItems::InstItems::AlertgroupItems::AlertGroupList>();
        ent_->parent = this;
        alertgroup_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::AlertgroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : alertgroup_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CallhomeItems::InstItems::AlertgroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CallhomeItems::InstItems::AlertgroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CallhomeItems::InstItems::AlertgroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AlertGroup-list")
        return true;
    return false;
}

System::CallhomeItems::InstItems::AlertgroupItems::AlertGroupList::AlertGroupList()
    :
    alertgroup{YType::enumeration, "alertGroup"},
    seqnum{YType::uint32, "seqNum"},
    userdefcmd{YType::str, "userDefCmd"}
{

    yang_name = "AlertGroup-list"; yang_parent_name = "alertgroup-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CallhomeItems::InstItems::AlertgroupItems::AlertGroupList::~AlertGroupList()
{
}

bool System::CallhomeItems::InstItems::AlertgroupItems::AlertGroupList::has_data() const
{
    if (is_presence_container) return true;
    return alertgroup.is_set
	|| seqnum.is_set
	|| userdefcmd.is_set;
}

bool System::CallhomeItems::InstItems::AlertgroupItems::AlertGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alertgroup.yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(userdefcmd.yfilter);
}

std::string System::CallhomeItems::InstItems::AlertgroupItems::AlertGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/callhome-items/inst-items/alertgroup-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CallhomeItems::InstItems::AlertgroupItems::AlertGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AlertGroup-list";
    ADD_KEY_TOKEN(alertgroup, "alertGroup");
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::AlertgroupItems::AlertGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alertgroup.is_set || is_set(alertgroup.yfilter)) leaf_name_data.push_back(alertgroup.get_name_leafdata());
    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (userdefcmd.is_set || is_set(userdefcmd.yfilter)) leaf_name_data.push_back(userdefcmd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::AlertgroupItems::AlertGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::AlertgroupItems::AlertGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CallhomeItems::InstItems::AlertgroupItems::AlertGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alertGroup")
    {
        alertgroup = value;
        alertgroup.value_namespace = name_space;
        alertgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userDefCmd")
    {
        userdefcmd = value;
        userdefcmd.value_namespace = name_space;
        userdefcmd.value_namespace_prefix = name_space_prefix;
    }
}

void System::CallhomeItems::InstItems::AlertgroupItems::AlertGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alertGroup")
    {
        alertgroup.yfilter = yfilter;
    }
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "userDefCmd")
    {
        userdefcmd.yfilter = yfilter;
    }
}

bool System::CallhomeItems::InstItems::AlertgroupItems::AlertGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alertGroup" || name == "seqNum" || name == "userDefCmd")
        return true;
    return false;
}

System::CallhomeItems::InstItems::DestprofItems::DestprofItems()
    :
    predefprofile_items(std::make_shared<System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems>())
    , custprof_items(std::make_shared<System::CallhomeItems::InstItems::DestprofItems::CustprofItems>())
{
    predefprofile_items->parent = this;
    custprof_items->parent = this;

    yang_name = "destprof-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CallhomeItems::InstItems::DestprofItems::~DestprofItems()
{
}

bool System::CallhomeItems::InstItems::DestprofItems::has_data() const
{
    if (is_presence_container) return true;
    return (predefprofile_items !=  nullptr && predefprofile_items->has_data())
	|| (custprof_items !=  nullptr && custprof_items->has_data());
}

bool System::CallhomeItems::InstItems::DestprofItems::has_operation() const
{
    return is_set(yfilter)
	|| (predefprofile_items !=  nullptr && predefprofile_items->has_operation())
	|| (custprof_items !=  nullptr && custprof_items->has_operation());
}

std::string System::CallhomeItems::InstItems::DestprofItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/callhome-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CallhomeItems::InstItems::DestprofItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destprof-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::DestprofItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::DestprofItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "predefprofile-items")
    {
        if(predefprofile_items == nullptr)
        {
            predefprofile_items = std::make_shared<System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems>();
        }
        return predefprofile_items;
    }

    if(child_yang_name == "custprof-items")
    {
        if(custprof_items == nullptr)
        {
            custprof_items = std::make_shared<System::CallhomeItems::InstItems::DestprofItems::CustprofItems>();
        }
        return custprof_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::DestprofItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(predefprofile_items != nullptr)
    {
        _children["predefprofile-items"] = predefprofile_items;
    }

    if(custprof_items != nullptr)
    {
        _children["custprof-items"] = custprof_items;
    }

    return _children;
}

void System::CallhomeItems::InstItems::DestprofItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CallhomeItems::InstItems::DestprofItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CallhomeItems::InstItems::DestprofItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "predefprofile-items" || name == "custprof-items")
        return true;
    return false;
}

System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefprofileItems()
    :
    predefinedprofile_list(this, {"predefprofile"})
{

    yang_name = "predefprofile-items"; yang_parent_name = "destprof-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::~PredefprofileItems()
{
}

bool System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<predefinedprofile_list.len(); index++)
    {
        if(predefinedprofile_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::has_operation() const
{
    for (std::size_t index=0; index<predefinedprofile_list.len(); index++)
    {
        if(predefinedprofile_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/callhome-items/inst-items/destprof-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "predefprofile-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PredefinedProfile-list")
    {
        auto ent_ = std::make_shared<System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList>();
        ent_->parent = this;
        predefinedprofile_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : predefinedprofile_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PredefinedProfile-list")
        return true;
    return false;
}

System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PredefinedProfileList()
    :
    predefprofile{YType::enumeration, "predefProfile"},
    transportmethodemail{YType::enumeration, "transportMethodEmail"},
    transportmethodhttp{YType::enumeration, "transportMethodHttp"},
    messagelevel{YType::uint32, "messageLevel"},
    messagesize{YType::uint32, "messageSize"},
    format{YType::enumeration, "format"},
    alertgrpciscotac1{YType::enumeration, "alertGrpCiscoTac1"},
    alertgrpconfiguration{YType::enumeration, "alertGrpConfiguration"},
    alertgrpdiagnostic{YType::enumeration, "alertGrpDiagnostic"},
    alertgrpeem{YType::enumeration, "alertGrpEEM"},
    alertgrpenvironmental{YType::enumeration, "alertGrpEnvironmental"},
    alertgrpinventory{YType::enumeration, "alertGrpInventory"},
    alertgrplinecard{YType::enumeration, "alertGrpLinecard"},
    alertgrpsupervisor{YType::enumeration, "alertGrpSupervisor"},
    alertgrpsyslogport{YType::enumeration, "alertGrpSyslogPort"},
    alertgrpsystem{YType::enumeration, "alertGrpSystem"},
    alertgrptest{YType::enumeration, "alertGrpTest"},
    alertgrplicense{YType::enumeration, "alertGrpLicense"},
    alertgrpall{YType::enumeration, "alertGrpAll"}
        ,
    pdprofemail_items(std::make_shared<System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems>())
    , pdprofhttp_items(std::make_shared<System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems>())
{
    pdprofemail_items->parent = this;
    pdprofhttp_items->parent = this;

    yang_name = "PredefinedProfile-list"; yang_parent_name = "predefprofile-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::~PredefinedProfileList()
{
}

bool System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::has_data() const
{
    if (is_presence_container) return true;
    return predefprofile.is_set
	|| transportmethodemail.is_set
	|| transportmethodhttp.is_set
	|| messagelevel.is_set
	|| messagesize.is_set
	|| format.is_set
	|| alertgrpciscotac1.is_set
	|| alertgrpconfiguration.is_set
	|| alertgrpdiagnostic.is_set
	|| alertgrpeem.is_set
	|| alertgrpenvironmental.is_set
	|| alertgrpinventory.is_set
	|| alertgrplinecard.is_set
	|| alertgrpsupervisor.is_set
	|| alertgrpsyslogport.is_set
	|| alertgrpsystem.is_set
	|| alertgrptest.is_set
	|| alertgrplicense.is_set
	|| alertgrpall.is_set
	|| (pdprofemail_items !=  nullptr && pdprofemail_items->has_data())
	|| (pdprofhttp_items !=  nullptr && pdprofhttp_items->has_data());
}

bool System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(predefprofile.yfilter)
	|| ydk::is_set(transportmethodemail.yfilter)
	|| ydk::is_set(transportmethodhttp.yfilter)
	|| ydk::is_set(messagelevel.yfilter)
	|| ydk::is_set(messagesize.yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(alertgrpciscotac1.yfilter)
	|| ydk::is_set(alertgrpconfiguration.yfilter)
	|| ydk::is_set(alertgrpdiagnostic.yfilter)
	|| ydk::is_set(alertgrpeem.yfilter)
	|| ydk::is_set(alertgrpenvironmental.yfilter)
	|| ydk::is_set(alertgrpinventory.yfilter)
	|| ydk::is_set(alertgrplinecard.yfilter)
	|| ydk::is_set(alertgrpsupervisor.yfilter)
	|| ydk::is_set(alertgrpsyslogport.yfilter)
	|| ydk::is_set(alertgrpsystem.yfilter)
	|| ydk::is_set(alertgrptest.yfilter)
	|| ydk::is_set(alertgrplicense.yfilter)
	|| ydk::is_set(alertgrpall.yfilter)
	|| (pdprofemail_items !=  nullptr && pdprofemail_items->has_operation())
	|| (pdprofhttp_items !=  nullptr && pdprofhttp_items->has_operation());
}

std::string System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/callhome-items/inst-items/destprof-items/predefprofile-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PredefinedProfile-list";
    ADD_KEY_TOKEN(predefprofile, "predefProfile");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (predefprofile.is_set || is_set(predefprofile.yfilter)) leaf_name_data.push_back(predefprofile.get_name_leafdata());
    if (transportmethodemail.is_set || is_set(transportmethodemail.yfilter)) leaf_name_data.push_back(transportmethodemail.get_name_leafdata());
    if (transportmethodhttp.is_set || is_set(transportmethodhttp.yfilter)) leaf_name_data.push_back(transportmethodhttp.get_name_leafdata());
    if (messagelevel.is_set || is_set(messagelevel.yfilter)) leaf_name_data.push_back(messagelevel.get_name_leafdata());
    if (messagesize.is_set || is_set(messagesize.yfilter)) leaf_name_data.push_back(messagesize.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (alertgrpciscotac1.is_set || is_set(alertgrpciscotac1.yfilter)) leaf_name_data.push_back(alertgrpciscotac1.get_name_leafdata());
    if (alertgrpconfiguration.is_set || is_set(alertgrpconfiguration.yfilter)) leaf_name_data.push_back(alertgrpconfiguration.get_name_leafdata());
    if (alertgrpdiagnostic.is_set || is_set(alertgrpdiagnostic.yfilter)) leaf_name_data.push_back(alertgrpdiagnostic.get_name_leafdata());
    if (alertgrpeem.is_set || is_set(alertgrpeem.yfilter)) leaf_name_data.push_back(alertgrpeem.get_name_leafdata());
    if (alertgrpenvironmental.is_set || is_set(alertgrpenvironmental.yfilter)) leaf_name_data.push_back(alertgrpenvironmental.get_name_leafdata());
    if (alertgrpinventory.is_set || is_set(alertgrpinventory.yfilter)) leaf_name_data.push_back(alertgrpinventory.get_name_leafdata());
    if (alertgrplinecard.is_set || is_set(alertgrplinecard.yfilter)) leaf_name_data.push_back(alertgrplinecard.get_name_leafdata());
    if (alertgrpsupervisor.is_set || is_set(alertgrpsupervisor.yfilter)) leaf_name_data.push_back(alertgrpsupervisor.get_name_leafdata());
    if (alertgrpsyslogport.is_set || is_set(alertgrpsyslogport.yfilter)) leaf_name_data.push_back(alertgrpsyslogport.get_name_leafdata());
    if (alertgrpsystem.is_set || is_set(alertgrpsystem.yfilter)) leaf_name_data.push_back(alertgrpsystem.get_name_leafdata());
    if (alertgrptest.is_set || is_set(alertgrptest.yfilter)) leaf_name_data.push_back(alertgrptest.get_name_leafdata());
    if (alertgrplicense.is_set || is_set(alertgrplicense.yfilter)) leaf_name_data.push_back(alertgrplicense.get_name_leafdata());
    if (alertgrpall.is_set || is_set(alertgrpall.yfilter)) leaf_name_data.push_back(alertgrpall.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pdprofemail-items")
    {
        if(pdprofemail_items == nullptr)
        {
            pdprofemail_items = std::make_shared<System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems>();
        }
        return pdprofemail_items;
    }

    if(child_yang_name == "pdprofhttp-items")
    {
        if(pdprofhttp_items == nullptr)
        {
            pdprofhttp_items = std::make_shared<System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems>();
        }
        return pdprofhttp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pdprofemail_items != nullptr)
    {
        _children["pdprofemail-items"] = pdprofemail_items;
    }

    if(pdprofhttp_items != nullptr)
    {
        _children["pdprofhttp-items"] = pdprofhttp_items;
    }

    return _children;
}

void System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "predefProfile")
    {
        predefprofile = value;
        predefprofile.value_namespace = name_space;
        predefprofile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transportMethodEmail")
    {
        transportmethodemail = value;
        transportmethodemail.value_namespace = name_space;
        transportmethodemail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transportMethodHttp")
    {
        transportmethodhttp = value;
        transportmethodhttp.value_namespace = name_space;
        transportmethodhttp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messageLevel")
    {
        messagelevel = value;
        messagelevel.value_namespace = name_space;
        messagelevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messageSize")
    {
        messagesize = value;
        messagesize.value_namespace = name_space;
        messagesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpCiscoTac1")
    {
        alertgrpciscotac1 = value;
        alertgrpciscotac1.value_namespace = name_space;
        alertgrpciscotac1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpConfiguration")
    {
        alertgrpconfiguration = value;
        alertgrpconfiguration.value_namespace = name_space;
        alertgrpconfiguration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpDiagnostic")
    {
        alertgrpdiagnostic = value;
        alertgrpdiagnostic.value_namespace = name_space;
        alertgrpdiagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpEEM")
    {
        alertgrpeem = value;
        alertgrpeem.value_namespace = name_space;
        alertgrpeem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpEnvironmental")
    {
        alertgrpenvironmental = value;
        alertgrpenvironmental.value_namespace = name_space;
        alertgrpenvironmental.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpInventory")
    {
        alertgrpinventory = value;
        alertgrpinventory.value_namespace = name_space;
        alertgrpinventory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpLinecard")
    {
        alertgrplinecard = value;
        alertgrplinecard.value_namespace = name_space;
        alertgrplinecard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpSupervisor")
    {
        alertgrpsupervisor = value;
        alertgrpsupervisor.value_namespace = name_space;
        alertgrpsupervisor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpSyslogPort")
    {
        alertgrpsyslogport = value;
        alertgrpsyslogport.value_namespace = name_space;
        alertgrpsyslogport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpSystem")
    {
        alertgrpsystem = value;
        alertgrpsystem.value_namespace = name_space;
        alertgrpsystem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpTest")
    {
        alertgrptest = value;
        alertgrptest.value_namespace = name_space;
        alertgrptest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpLicense")
    {
        alertgrplicense = value;
        alertgrplicense.value_namespace = name_space;
        alertgrplicense.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpAll")
    {
        alertgrpall = value;
        alertgrpall.value_namespace = name_space;
        alertgrpall.value_namespace_prefix = name_space_prefix;
    }
}

void System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "predefProfile")
    {
        predefprofile.yfilter = yfilter;
    }
    if(value_path == "transportMethodEmail")
    {
        transportmethodemail.yfilter = yfilter;
    }
    if(value_path == "transportMethodHttp")
    {
        transportmethodhttp.yfilter = yfilter;
    }
    if(value_path == "messageLevel")
    {
        messagelevel.yfilter = yfilter;
    }
    if(value_path == "messageSize")
    {
        messagesize.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "alertGrpCiscoTac1")
    {
        alertgrpciscotac1.yfilter = yfilter;
    }
    if(value_path == "alertGrpConfiguration")
    {
        alertgrpconfiguration.yfilter = yfilter;
    }
    if(value_path == "alertGrpDiagnostic")
    {
        alertgrpdiagnostic.yfilter = yfilter;
    }
    if(value_path == "alertGrpEEM")
    {
        alertgrpeem.yfilter = yfilter;
    }
    if(value_path == "alertGrpEnvironmental")
    {
        alertgrpenvironmental.yfilter = yfilter;
    }
    if(value_path == "alertGrpInventory")
    {
        alertgrpinventory.yfilter = yfilter;
    }
    if(value_path == "alertGrpLinecard")
    {
        alertgrplinecard.yfilter = yfilter;
    }
    if(value_path == "alertGrpSupervisor")
    {
        alertgrpsupervisor.yfilter = yfilter;
    }
    if(value_path == "alertGrpSyslogPort")
    {
        alertgrpsyslogport.yfilter = yfilter;
    }
    if(value_path == "alertGrpSystem")
    {
        alertgrpsystem.yfilter = yfilter;
    }
    if(value_path == "alertGrpTest")
    {
        alertgrptest.yfilter = yfilter;
    }
    if(value_path == "alertGrpLicense")
    {
        alertgrplicense.yfilter = yfilter;
    }
    if(value_path == "alertGrpAll")
    {
        alertgrpall.yfilter = yfilter;
    }
}

bool System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdprofemail-items" || name == "pdprofhttp-items" || name == "predefProfile" || name == "transportMethodEmail" || name == "transportMethodHttp" || name == "messageLevel" || name == "messageSize" || name == "format" || name == "alertGrpCiscoTac1" || name == "alertGrpConfiguration" || name == "alertGrpDiagnostic" || name == "alertGrpEEM" || name == "alertGrpEnvironmental" || name == "alertGrpInventory" || name == "alertGrpLinecard" || name == "alertGrpSupervisor" || name == "alertGrpSyslogPort" || name == "alertGrpSystem" || name == "alertGrpTest" || name == "alertGrpLicense" || name == "alertGrpAll")
        return true;
    return false;
}

System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::PdprofemailItems()
    :
    predefprofemail_list(this, {"seqnum"})
{

    yang_name = "pdprofemail-items"; yang_parent_name = "PredefinedProfile-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::~PdprofemailItems()
{
}

bool System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<predefprofemail_list.len(); index++)
    {
        if(predefprofemail_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::has_operation() const
{
    for (std::size_t index=0; index<predefprofemail_list.len(); index++)
    {
        if(predefprofemail_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdprofemail-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PredefProfEmail-list")
    {
        auto ent_ = std::make_shared<System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::PredefProfEmailList>();
        ent_->parent = this;
        predefprofemail_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : predefprofemail_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PredefProfEmail-list")
        return true;
    return false;
}

System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::PredefProfEmailList::PredefProfEmailList()
    :
    seqnum{YType::uint32, "seqNum"},
    emailaddr{YType::str, "emailAddr"}
{

    yang_name = "PredefProfEmail-list"; yang_parent_name = "pdprofemail-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::PredefProfEmailList::~PredefProfEmailList()
{
}

bool System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::PredefProfEmailList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| emailaddr.is_set;
}

bool System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::PredefProfEmailList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(emailaddr.yfilter);
}

std::string System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::PredefProfEmailList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PredefProfEmail-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::PredefProfEmailList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (emailaddr.is_set || is_set(emailaddr.yfilter)) leaf_name_data.push_back(emailaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::PredefProfEmailList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::PredefProfEmailList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::PredefProfEmailList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "emailAddr")
    {
        emailaddr = value;
        emailaddr.value_namespace = name_space;
        emailaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::PredefProfEmailList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "emailAddr")
    {
        emailaddr.yfilter = yfilter;
    }
}

bool System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::PredefProfEmailList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "emailAddr")
        return true;
    return false;
}

System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::PdprofhttpItems()
    :
    predefprofhttp_list(this, {"seqnum"})
{

    yang_name = "pdprofhttp-items"; yang_parent_name = "PredefinedProfile-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::~PdprofhttpItems()
{
}

bool System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<predefprofhttp_list.len(); index++)
    {
        if(predefprofhttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::has_operation() const
{
    for (std::size_t index=0; index<predefprofhttp_list.len(); index++)
    {
        if(predefprofhttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdprofhttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PredefProfHttp-list")
    {
        auto ent_ = std::make_shared<System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::PredefProfHttpList>();
        ent_->parent = this;
        predefprofhttp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : predefprofhttp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PredefProfHttp-list")
        return true;
    return false;
}

System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::PredefProfHttpList::PredefProfHttpList()
    :
    seqnum{YType::uint32, "seqNum"},
    http{YType::str, "http"}
{

    yang_name = "PredefProfHttp-list"; yang_parent_name = "pdprofhttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::PredefProfHttpList::~PredefProfHttpList()
{
}

bool System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::PredefProfHttpList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| http.is_set;
}

bool System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::PredefProfHttpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(http.yfilter);
}

std::string System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::PredefProfHttpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PredefProfHttp-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::PredefProfHttpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (http.is_set || is_set(http.yfilter)) leaf_name_data.push_back(http.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::PredefProfHttpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::PredefProfHttpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::PredefProfHttpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "http")
    {
        http = value;
        http.value_namespace = name_space;
        http.value_namespace_prefix = name_space_prefix;
    }
}

void System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::PredefProfHttpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "http")
    {
        http.yfilter = yfilter;
    }
}

bool System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::PredefProfHttpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "http")
        return true;
    return false;
}

System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustprofItems()
    :
    customprofile_list(this, {"profilename"})
{

    yang_name = "custprof-items"; yang_parent_name = "destprof-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CallhomeItems::InstItems::DestprofItems::CustprofItems::~CustprofItems()
{
}

bool System::CallhomeItems::InstItems::DestprofItems::CustprofItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<customprofile_list.len(); index++)
    {
        if(customprofile_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CallhomeItems::InstItems::DestprofItems::CustprofItems::has_operation() const
{
    for (std::size_t index=0; index<customprofile_list.len(); index++)
    {
        if(customprofile_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CallhomeItems::InstItems::DestprofItems::CustprofItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/callhome-items/inst-items/destprof-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CallhomeItems::InstItems::DestprofItems::CustprofItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custprof-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::DestprofItems::CustprofItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::DestprofItems::CustprofItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CustomProfile-list")
    {
        auto ent_ = std::make_shared<System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList>();
        ent_->parent = this;
        customprofile_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::DestprofItems::CustprofItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : customprofile_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CallhomeItems::InstItems::DestprofItems::CustprofItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CallhomeItems::InstItems::DestprofItems::CustprofItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CallhomeItems::InstItems::DestprofItems::CustprofItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CustomProfile-list")
        return true;
    return false;
}

System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustomProfileList()
    :
    profilename{YType::str, "profileName"},
    transportmethodemail{YType::enumeration, "transportMethodEmail"},
    transportmethodhttp{YType::enumeration, "transportMethodHttp"},
    messagelevel{YType::uint32, "messageLevel"},
    messagesize{YType::uint32, "messageSize"},
    format{YType::enumeration, "format"},
    alertgrpciscotac1{YType::enumeration, "alertGrpCiscoTac1"},
    alertgrpconfiguration{YType::enumeration, "alertGrpConfiguration"},
    alertgrpdiagnostic{YType::enumeration, "alertGrpDiagnostic"},
    alertgrpeem{YType::enumeration, "alertGrpEEM"},
    alertgrpenvironmental{YType::enumeration, "alertGrpEnvironmental"},
    alertgrpinventory{YType::enumeration, "alertGrpInventory"},
    alertgrplinecard{YType::enumeration, "alertGrpLinecard"},
    alertgrpsupervisor{YType::enumeration, "alertGrpSupervisor"},
    alertgrpsyslogport{YType::enumeration, "alertGrpSyslogPort"},
    alertgrpsystem{YType::enumeration, "alertGrpSystem"},
    alertgrptest{YType::enumeration, "alertGrpTest"},
    alertgrplicense{YType::enumeration, "alertGrpLicense"},
    alertgrpall{YType::enumeration, "alertGrpAll"}
        ,
    custemail_items(std::make_shared<System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems>())
    , custhttp_items(std::make_shared<System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems>())
{
    custemail_items->parent = this;
    custhttp_items->parent = this;

    yang_name = "CustomProfile-list"; yang_parent_name = "custprof-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::~CustomProfileList()
{
}

bool System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::has_data() const
{
    if (is_presence_container) return true;
    return profilename.is_set
	|| transportmethodemail.is_set
	|| transportmethodhttp.is_set
	|| messagelevel.is_set
	|| messagesize.is_set
	|| format.is_set
	|| alertgrpciscotac1.is_set
	|| alertgrpconfiguration.is_set
	|| alertgrpdiagnostic.is_set
	|| alertgrpeem.is_set
	|| alertgrpenvironmental.is_set
	|| alertgrpinventory.is_set
	|| alertgrplinecard.is_set
	|| alertgrpsupervisor.is_set
	|| alertgrpsyslogport.is_set
	|| alertgrpsystem.is_set
	|| alertgrptest.is_set
	|| alertgrplicense.is_set
	|| alertgrpall.is_set
	|| (custemail_items !=  nullptr && custemail_items->has_data())
	|| (custhttp_items !=  nullptr && custhttp_items->has_data());
}

bool System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profilename.yfilter)
	|| ydk::is_set(transportmethodemail.yfilter)
	|| ydk::is_set(transportmethodhttp.yfilter)
	|| ydk::is_set(messagelevel.yfilter)
	|| ydk::is_set(messagesize.yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(alertgrpciscotac1.yfilter)
	|| ydk::is_set(alertgrpconfiguration.yfilter)
	|| ydk::is_set(alertgrpdiagnostic.yfilter)
	|| ydk::is_set(alertgrpeem.yfilter)
	|| ydk::is_set(alertgrpenvironmental.yfilter)
	|| ydk::is_set(alertgrpinventory.yfilter)
	|| ydk::is_set(alertgrplinecard.yfilter)
	|| ydk::is_set(alertgrpsupervisor.yfilter)
	|| ydk::is_set(alertgrpsyslogport.yfilter)
	|| ydk::is_set(alertgrpsystem.yfilter)
	|| ydk::is_set(alertgrptest.yfilter)
	|| ydk::is_set(alertgrplicense.yfilter)
	|| ydk::is_set(alertgrpall.yfilter)
	|| (custemail_items !=  nullptr && custemail_items->has_operation())
	|| (custhttp_items !=  nullptr && custhttp_items->has_operation());
}

std::string System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/callhome-items/inst-items/destprof-items/custprof-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CustomProfile-list";
    ADD_KEY_TOKEN(profilename, "profileName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profilename.is_set || is_set(profilename.yfilter)) leaf_name_data.push_back(profilename.get_name_leafdata());
    if (transportmethodemail.is_set || is_set(transportmethodemail.yfilter)) leaf_name_data.push_back(transportmethodemail.get_name_leafdata());
    if (transportmethodhttp.is_set || is_set(transportmethodhttp.yfilter)) leaf_name_data.push_back(transportmethodhttp.get_name_leafdata());
    if (messagelevel.is_set || is_set(messagelevel.yfilter)) leaf_name_data.push_back(messagelevel.get_name_leafdata());
    if (messagesize.is_set || is_set(messagesize.yfilter)) leaf_name_data.push_back(messagesize.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (alertgrpciscotac1.is_set || is_set(alertgrpciscotac1.yfilter)) leaf_name_data.push_back(alertgrpciscotac1.get_name_leafdata());
    if (alertgrpconfiguration.is_set || is_set(alertgrpconfiguration.yfilter)) leaf_name_data.push_back(alertgrpconfiguration.get_name_leafdata());
    if (alertgrpdiagnostic.is_set || is_set(alertgrpdiagnostic.yfilter)) leaf_name_data.push_back(alertgrpdiagnostic.get_name_leafdata());
    if (alertgrpeem.is_set || is_set(alertgrpeem.yfilter)) leaf_name_data.push_back(alertgrpeem.get_name_leafdata());
    if (alertgrpenvironmental.is_set || is_set(alertgrpenvironmental.yfilter)) leaf_name_data.push_back(alertgrpenvironmental.get_name_leafdata());
    if (alertgrpinventory.is_set || is_set(alertgrpinventory.yfilter)) leaf_name_data.push_back(alertgrpinventory.get_name_leafdata());
    if (alertgrplinecard.is_set || is_set(alertgrplinecard.yfilter)) leaf_name_data.push_back(alertgrplinecard.get_name_leafdata());
    if (alertgrpsupervisor.is_set || is_set(alertgrpsupervisor.yfilter)) leaf_name_data.push_back(alertgrpsupervisor.get_name_leafdata());
    if (alertgrpsyslogport.is_set || is_set(alertgrpsyslogport.yfilter)) leaf_name_data.push_back(alertgrpsyslogport.get_name_leafdata());
    if (alertgrpsystem.is_set || is_set(alertgrpsystem.yfilter)) leaf_name_data.push_back(alertgrpsystem.get_name_leafdata());
    if (alertgrptest.is_set || is_set(alertgrptest.yfilter)) leaf_name_data.push_back(alertgrptest.get_name_leafdata());
    if (alertgrplicense.is_set || is_set(alertgrplicense.yfilter)) leaf_name_data.push_back(alertgrplicense.get_name_leafdata());
    if (alertgrpall.is_set || is_set(alertgrpall.yfilter)) leaf_name_data.push_back(alertgrpall.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custemail-items")
    {
        if(custemail_items == nullptr)
        {
            custemail_items = std::make_shared<System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems>();
        }
        return custemail_items;
    }

    if(child_yang_name == "custhttp-items")
    {
        if(custhttp_items == nullptr)
        {
            custhttp_items = std::make_shared<System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems>();
        }
        return custhttp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(custemail_items != nullptr)
    {
        _children["custemail-items"] = custemail_items;
    }

    if(custhttp_items != nullptr)
    {
        _children["custhttp-items"] = custhttp_items;
    }

    return _children;
}

void System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profileName")
    {
        profilename = value;
        profilename.value_namespace = name_space;
        profilename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transportMethodEmail")
    {
        transportmethodemail = value;
        transportmethodemail.value_namespace = name_space;
        transportmethodemail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transportMethodHttp")
    {
        transportmethodhttp = value;
        transportmethodhttp.value_namespace = name_space;
        transportmethodhttp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messageLevel")
    {
        messagelevel = value;
        messagelevel.value_namespace = name_space;
        messagelevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messageSize")
    {
        messagesize = value;
        messagesize.value_namespace = name_space;
        messagesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpCiscoTac1")
    {
        alertgrpciscotac1 = value;
        alertgrpciscotac1.value_namespace = name_space;
        alertgrpciscotac1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpConfiguration")
    {
        alertgrpconfiguration = value;
        alertgrpconfiguration.value_namespace = name_space;
        alertgrpconfiguration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpDiagnostic")
    {
        alertgrpdiagnostic = value;
        alertgrpdiagnostic.value_namespace = name_space;
        alertgrpdiagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpEEM")
    {
        alertgrpeem = value;
        alertgrpeem.value_namespace = name_space;
        alertgrpeem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpEnvironmental")
    {
        alertgrpenvironmental = value;
        alertgrpenvironmental.value_namespace = name_space;
        alertgrpenvironmental.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpInventory")
    {
        alertgrpinventory = value;
        alertgrpinventory.value_namespace = name_space;
        alertgrpinventory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpLinecard")
    {
        alertgrplinecard = value;
        alertgrplinecard.value_namespace = name_space;
        alertgrplinecard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpSupervisor")
    {
        alertgrpsupervisor = value;
        alertgrpsupervisor.value_namespace = name_space;
        alertgrpsupervisor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpSyslogPort")
    {
        alertgrpsyslogport = value;
        alertgrpsyslogport.value_namespace = name_space;
        alertgrpsyslogport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpSystem")
    {
        alertgrpsystem = value;
        alertgrpsystem.value_namespace = name_space;
        alertgrpsystem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpTest")
    {
        alertgrptest = value;
        alertgrptest.value_namespace = name_space;
        alertgrptest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpLicense")
    {
        alertgrplicense = value;
        alertgrplicense.value_namespace = name_space;
        alertgrplicense.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alertGrpAll")
    {
        alertgrpall = value;
        alertgrpall.value_namespace = name_space;
        alertgrpall.value_namespace_prefix = name_space_prefix;
    }
}

void System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profileName")
    {
        profilename.yfilter = yfilter;
    }
    if(value_path == "transportMethodEmail")
    {
        transportmethodemail.yfilter = yfilter;
    }
    if(value_path == "transportMethodHttp")
    {
        transportmethodhttp.yfilter = yfilter;
    }
    if(value_path == "messageLevel")
    {
        messagelevel.yfilter = yfilter;
    }
    if(value_path == "messageSize")
    {
        messagesize.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "alertGrpCiscoTac1")
    {
        alertgrpciscotac1.yfilter = yfilter;
    }
    if(value_path == "alertGrpConfiguration")
    {
        alertgrpconfiguration.yfilter = yfilter;
    }
    if(value_path == "alertGrpDiagnostic")
    {
        alertgrpdiagnostic.yfilter = yfilter;
    }
    if(value_path == "alertGrpEEM")
    {
        alertgrpeem.yfilter = yfilter;
    }
    if(value_path == "alertGrpEnvironmental")
    {
        alertgrpenvironmental.yfilter = yfilter;
    }
    if(value_path == "alertGrpInventory")
    {
        alertgrpinventory.yfilter = yfilter;
    }
    if(value_path == "alertGrpLinecard")
    {
        alertgrplinecard.yfilter = yfilter;
    }
    if(value_path == "alertGrpSupervisor")
    {
        alertgrpsupervisor.yfilter = yfilter;
    }
    if(value_path == "alertGrpSyslogPort")
    {
        alertgrpsyslogport.yfilter = yfilter;
    }
    if(value_path == "alertGrpSystem")
    {
        alertgrpsystem.yfilter = yfilter;
    }
    if(value_path == "alertGrpTest")
    {
        alertgrptest.yfilter = yfilter;
    }
    if(value_path == "alertGrpLicense")
    {
        alertgrplicense.yfilter = yfilter;
    }
    if(value_path == "alertGrpAll")
    {
        alertgrpall.yfilter = yfilter;
    }
}

bool System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "custemail-items" || name == "custhttp-items" || name == "profileName" || name == "transportMethodEmail" || name == "transportMethodHttp" || name == "messageLevel" || name == "messageSize" || name == "format" || name == "alertGrpCiscoTac1" || name == "alertGrpConfiguration" || name == "alertGrpDiagnostic" || name == "alertGrpEEM" || name == "alertGrpEnvironmental" || name == "alertGrpInventory" || name == "alertGrpLinecard" || name == "alertGrpSupervisor" || name == "alertGrpSyslogPort" || name == "alertGrpSystem" || name == "alertGrpTest" || name == "alertGrpLicense" || name == "alertGrpAll")
        return true;
    return false;
}

System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::CustemailItems()
    :
    customemail_list(this, {"seqnum"})
{

    yang_name = "custemail-items"; yang_parent_name = "CustomProfile-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::~CustemailItems()
{
}

bool System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<customemail_list.len(); index++)
    {
        if(customemail_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::has_operation() const
{
    for (std::size_t index=0; index<customemail_list.len(); index++)
    {
        if(customemail_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custemail-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CustomEmail-list")
    {
        auto ent_ = std::make_shared<System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::CustomEmailList>();
        ent_->parent = this;
        customemail_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : customemail_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CustomEmail-list")
        return true;
    return false;
}

System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::CustomEmailList::CustomEmailList()
    :
    seqnum{YType::uint32, "seqNum"},
    emailaddr{YType::str, "emailAddr"}
{

    yang_name = "CustomEmail-list"; yang_parent_name = "custemail-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::CustomEmailList::~CustomEmailList()
{
}

bool System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::CustomEmailList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| emailaddr.is_set;
}

bool System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::CustomEmailList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(emailaddr.yfilter);
}

std::string System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::CustomEmailList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CustomEmail-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::CustomEmailList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (emailaddr.is_set || is_set(emailaddr.yfilter)) leaf_name_data.push_back(emailaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::CustomEmailList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::CustomEmailList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::CustomEmailList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "emailAddr")
    {
        emailaddr = value;
        emailaddr.value_namespace = name_space;
        emailaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::CustomEmailList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "emailAddr")
    {
        emailaddr.yfilter = yfilter;
    }
}

bool System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::CustomEmailList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "emailAddr")
        return true;
    return false;
}

System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::CusthttpItems()
    :
    customhttp_list(this, {"seqnum"})
{

    yang_name = "custhttp-items"; yang_parent_name = "CustomProfile-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::~CusthttpItems()
{
}

bool System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<customhttp_list.len(); index++)
    {
        if(customhttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::has_operation() const
{
    for (std::size_t index=0; index<customhttp_list.len(); index++)
    {
        if(customhttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custhttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CustomHttp-list")
    {
        auto ent_ = std::make_shared<System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::CustomHttpList>();
        ent_->parent = this;
        customhttp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : customhttp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CustomHttp-list")
        return true;
    return false;
}

System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::CustomHttpList::CustomHttpList()
    :
    seqnum{YType::uint32, "seqNum"},
    http{YType::str, "http"}
{

    yang_name = "CustomHttp-list"; yang_parent_name = "custhttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::CustomHttpList::~CustomHttpList()
{
}

bool System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::CustomHttpList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| http.is_set;
}

bool System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::CustomHttpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(http.yfilter);
}

std::string System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::CustomHttpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CustomHttp-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::CustomHttpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (http.is_set || is_set(http.yfilter)) leaf_name_data.push_back(http.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::CustomHttpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::CustomHttpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::CustomHttpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "http")
    {
        http = value;
        http.value_namespace = name_space;
        http.value_namespace_prefix = name_space_prefix;
    }
}

void System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::CustomHttpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "http")
    {
        http.yfilter = yfilter;
    }
}

bool System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::CustomHttpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "http")
        return true;
    return false;
}

System::CallhomeItems::InstItems::TransportItems::TransportItems()
    :
    httpproxyenable{YType::enumeration, "httpProxyEnable"},
    proxyserver{YType::str, "proxyServer"},
    proxyserverport{YType::uint32, "proxyServerPort"},
    httpusevrf{YType::str, "httpUseVrf"},
    emailfrom{YType::str, "emailFrom"},
    emailreplyto{YType::str, "emailReplyTo"}
        ,
    emailserver_items(std::make_shared<System::CallhomeItems::InstItems::TransportItems::EmailserverItems>())
{
    emailserver_items->parent = this;

    yang_name = "transport-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CallhomeItems::InstItems::TransportItems::~TransportItems()
{
}

bool System::CallhomeItems::InstItems::TransportItems::has_data() const
{
    if (is_presence_container) return true;
    return httpproxyenable.is_set
	|| proxyserver.is_set
	|| proxyserverport.is_set
	|| httpusevrf.is_set
	|| emailfrom.is_set
	|| emailreplyto.is_set
	|| (emailserver_items !=  nullptr && emailserver_items->has_data());
}

bool System::CallhomeItems::InstItems::TransportItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(httpproxyenable.yfilter)
	|| ydk::is_set(proxyserver.yfilter)
	|| ydk::is_set(proxyserverport.yfilter)
	|| ydk::is_set(httpusevrf.yfilter)
	|| ydk::is_set(emailfrom.yfilter)
	|| ydk::is_set(emailreplyto.yfilter)
	|| (emailserver_items !=  nullptr && emailserver_items->has_operation());
}

std::string System::CallhomeItems::InstItems::TransportItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/callhome-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CallhomeItems::InstItems::TransportItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::TransportItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (httpproxyenable.is_set || is_set(httpproxyenable.yfilter)) leaf_name_data.push_back(httpproxyenable.get_name_leafdata());
    if (proxyserver.is_set || is_set(proxyserver.yfilter)) leaf_name_data.push_back(proxyserver.get_name_leafdata());
    if (proxyserverport.is_set || is_set(proxyserverport.yfilter)) leaf_name_data.push_back(proxyserverport.get_name_leafdata());
    if (httpusevrf.is_set || is_set(httpusevrf.yfilter)) leaf_name_data.push_back(httpusevrf.get_name_leafdata());
    if (emailfrom.is_set || is_set(emailfrom.yfilter)) leaf_name_data.push_back(emailfrom.get_name_leafdata());
    if (emailreplyto.is_set || is_set(emailreplyto.yfilter)) leaf_name_data.push_back(emailreplyto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::TransportItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "emailserver-items")
    {
        if(emailserver_items == nullptr)
        {
            emailserver_items = std::make_shared<System::CallhomeItems::InstItems::TransportItems::EmailserverItems>();
        }
        return emailserver_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::TransportItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(emailserver_items != nullptr)
    {
        _children["emailserver-items"] = emailserver_items;
    }

    return _children;
}

void System::CallhomeItems::InstItems::TransportItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "httpProxyEnable")
    {
        httpproxyenable = value;
        httpproxyenable.value_namespace = name_space;
        httpproxyenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxyServer")
    {
        proxyserver = value;
        proxyserver.value_namespace = name_space;
        proxyserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxyServerPort")
    {
        proxyserverport = value;
        proxyserverport.value_namespace = name_space;
        proxyserverport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "httpUseVrf")
    {
        httpusevrf = value;
        httpusevrf.value_namespace = name_space;
        httpusevrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "emailFrom")
    {
        emailfrom = value;
        emailfrom.value_namespace = name_space;
        emailfrom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "emailReplyTo")
    {
        emailreplyto = value;
        emailreplyto.value_namespace = name_space;
        emailreplyto.value_namespace_prefix = name_space_prefix;
    }
}

void System::CallhomeItems::InstItems::TransportItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "httpProxyEnable")
    {
        httpproxyenable.yfilter = yfilter;
    }
    if(value_path == "proxyServer")
    {
        proxyserver.yfilter = yfilter;
    }
    if(value_path == "proxyServerPort")
    {
        proxyserverport.yfilter = yfilter;
    }
    if(value_path == "httpUseVrf")
    {
        httpusevrf.yfilter = yfilter;
    }
    if(value_path == "emailFrom")
    {
        emailfrom.yfilter = yfilter;
    }
    if(value_path == "emailReplyTo")
    {
        emailreplyto.yfilter = yfilter;
    }
}

bool System::CallhomeItems::InstItems::TransportItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "emailserver-items" || name == "httpProxyEnable" || name == "proxyServer" || name == "proxyServerPort" || name == "httpUseVrf" || name == "emailFrom" || name == "emailReplyTo")
        return true;
    return false;
}

System::CallhomeItems::InstItems::TransportItems::EmailserverItems::EmailserverItems()
    :
    emailserver_list(this, {"emailserver"})
{

    yang_name = "emailserver-items"; yang_parent_name = "transport-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CallhomeItems::InstItems::TransportItems::EmailserverItems::~EmailserverItems()
{
}

bool System::CallhomeItems::InstItems::TransportItems::EmailserverItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<emailserver_list.len(); index++)
    {
        if(emailserver_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CallhomeItems::InstItems::TransportItems::EmailserverItems::has_operation() const
{
    for (std::size_t index=0; index<emailserver_list.len(); index++)
    {
        if(emailserver_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CallhomeItems::InstItems::TransportItems::EmailserverItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/callhome-items/inst-items/transport-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CallhomeItems::InstItems::TransportItems::EmailserverItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "emailserver-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::TransportItems::EmailserverItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::TransportItems::EmailserverItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EmailServer-list")
    {
        auto ent_ = std::make_shared<System::CallhomeItems::InstItems::TransportItems::EmailserverItems::EmailServerList>();
        ent_->parent = this;
        emailserver_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::TransportItems::EmailserverItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : emailserver_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CallhomeItems::InstItems::TransportItems::EmailserverItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CallhomeItems::InstItems::TransportItems::EmailserverItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CallhomeItems::InstItems::TransportItems::EmailserverItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EmailServer-list")
        return true;
    return false;
}

System::CallhomeItems::InstItems::TransportItems::EmailserverItems::EmailServerList::EmailServerList()
    :
    emailserver{YType::str, "emailServer"},
    mailserverport{YType::uint32, "mailServerPort"},
    mailserverpriority{YType::uint32, "mailServerPriority"},
    mailserverusevrf{YType::str, "mailServerUseVrf"}
{

    yang_name = "EmailServer-list"; yang_parent_name = "emailserver-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CallhomeItems::InstItems::TransportItems::EmailserverItems::EmailServerList::~EmailServerList()
{
}

bool System::CallhomeItems::InstItems::TransportItems::EmailserverItems::EmailServerList::has_data() const
{
    if (is_presence_container) return true;
    return emailserver.is_set
	|| mailserverport.is_set
	|| mailserverpriority.is_set
	|| mailserverusevrf.is_set;
}

bool System::CallhomeItems::InstItems::TransportItems::EmailserverItems::EmailServerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(emailserver.yfilter)
	|| ydk::is_set(mailserverport.yfilter)
	|| ydk::is_set(mailserverpriority.yfilter)
	|| ydk::is_set(mailserverusevrf.yfilter);
}

std::string System::CallhomeItems::InstItems::TransportItems::EmailserverItems::EmailServerList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/callhome-items/inst-items/transport-items/emailserver-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CallhomeItems::InstItems::TransportItems::EmailserverItems::EmailServerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EmailServer-list";
    ADD_KEY_TOKEN(emailserver, "emailServer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CallhomeItems::InstItems::TransportItems::EmailserverItems::EmailServerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (emailserver.is_set || is_set(emailserver.yfilter)) leaf_name_data.push_back(emailserver.get_name_leafdata());
    if (mailserverport.is_set || is_set(mailserverport.yfilter)) leaf_name_data.push_back(mailserverport.get_name_leafdata());
    if (mailserverpriority.is_set || is_set(mailserverpriority.yfilter)) leaf_name_data.push_back(mailserverpriority.get_name_leafdata());
    if (mailserverusevrf.is_set || is_set(mailserverusevrf.yfilter)) leaf_name_data.push_back(mailserverusevrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CallhomeItems::InstItems::TransportItems::EmailserverItems::EmailServerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CallhomeItems::InstItems::TransportItems::EmailserverItems::EmailServerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CallhomeItems::InstItems::TransportItems::EmailserverItems::EmailServerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "emailServer")
    {
        emailserver = value;
        emailserver.value_namespace = name_space;
        emailserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mailServerPort")
    {
        mailserverport = value;
        mailserverport.value_namespace = name_space;
        mailserverport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mailServerPriority")
    {
        mailserverpriority = value;
        mailserverpriority.value_namespace = name_space;
        mailserverpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mailServerUseVrf")
    {
        mailserverusevrf = value;
        mailserverusevrf.value_namespace = name_space;
        mailserverusevrf.value_namespace_prefix = name_space_prefix;
    }
}

void System::CallhomeItems::InstItems::TransportItems::EmailserverItems::EmailServerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "emailServer")
    {
        emailserver.yfilter = yfilter;
    }
    if(value_path == "mailServerPort")
    {
        mailserverport.yfilter = yfilter;
    }
    if(value_path == "mailServerPriority")
    {
        mailserverpriority.yfilter = yfilter;
    }
    if(value_path == "mailServerUseVrf")
    {
        mailserverusevrf.yfilter = yfilter;
    }
}

bool System::CallhomeItems::InstItems::TransportItems::EmailserverItems::EmailServerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "emailServer" || name == "mailServerPort" || name == "mailServerPriority" || name == "mailServerUseVrf")
        return true;
    return false;
}

System::CaploglevelItems::CaploglevelItems()
    :
    logginglevel{YType::uint16, "loggingLevel"},
    loggingtype{YType::enumeration, "loggingType"}
{

    yang_name = "caploglevel-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CaploglevelItems::~CaploglevelItems()
{
}

bool System::CaploglevelItems::has_data() const
{
    if (is_presence_container) return true;
    return logginglevel.is_set
	|| loggingtype.is_set;
}

bool System::CaploglevelItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(loggingtype.yfilter);
}

std::string System::CaploglevelItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CaploglevelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caploglevel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaploglevelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (loggingtype.is_set || is_set(loggingtype.yfilter)) leaf_name_data.push_back(loggingtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaploglevelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaploglevelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CaploglevelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loggingType")
    {
        loggingtype = value;
        loggingtype.value_namespace = name_space;
        loggingtype.value_namespace_prefix = name_space_prefix;
    }
}

void System::CaploglevelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
    }
    if(value_path == "loggingType")
    {
        loggingtype.yfilter = yfilter;
    }
}

bool System::CaploglevelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loggingLevel" || name == "loggingType")
        return true;
    return false;
}

System::SfwItems::SfwItems()
    :
    suppfw_list(this, {"name"})
{

    yang_name = "sfw-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SfwItems::~SfwItems()
{
}

bool System::SfwItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<suppfw_list.len(); index++)
    {
        if(suppfw_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SfwItems::has_operation() const
{
    for (std::size_t index=0; index<suppfw_list.len(); index++)
    {
        if(suppfw_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SfwItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SfwItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfw-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SfwItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SfwItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SuppFw-list")
    {
        auto ent_ = std::make_shared<System::SfwItems::SuppFwList>();
        ent_->parent = this;
        suppfw_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SfwItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : suppfw_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SfwItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SfwItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SfwItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SuppFw-list")
        return true;
    return false;
}

System::SfwItems::SuppFwList::SuppFwList()
    :
    name{YType::str, "name"},
    version{YType::str, "version"}
{

    yang_name = "SuppFw-list"; yang_parent_name = "sfw-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SfwItems::SuppFwList::~SuppFwList()
{
}

bool System::SfwItems::SuppFwList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| version.is_set;
}

bool System::SfwItems::SuppFwList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string System::SfwItems::SuppFwList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sfw-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SfwItems::SuppFwList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SuppFw-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SfwItems::SuppFwList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SfwItems::SuppFwList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SfwItems::SuppFwList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SfwItems::SuppFwList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void System::SfwItems::SuppFwList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool System::SfwItems::SuppFwList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "version")
        return true;
    return false;
}

System::CapabilitiesItems::CapabilitiesItems()
    :
    actrlcaprule_items(std::make_shared<System::CapabilitiesItems::ActrlcapruleItems>())
    , l1caprule_items(std::make_shared<System::CapabilitiesItems::L1capruleItems>())
    , l2caprule_items(std::make_shared<System::CapabilitiesItems::L2capruleItems>())
    , l3caprule_items(std::make_shared<System::CapabilitiesItems::L3capruleItems>())
    , card_items(std::make_shared<System::CapabilitiesItems::CardItems>())
    , port_items(std::make_shared<System::CapabilitiesItems::PortItems>())
    , psu_items(std::make_shared<System::CapabilitiesItems::PsuItems>())
    , fan_items(std::make_shared<System::CapabilitiesItems::FanItems>())
    , sfp_items(std::make_shared<System::CapabilitiesItems::SfpItems>())
{
    actrlcaprule_items->parent = this;
    l1caprule_items->parent = this;
    l2caprule_items->parent = this;
    l3caprule_items->parent = this;
    card_items->parent = this;
    port_items->parent = this;
    psu_items->parent = this;
    fan_items->parent = this;
    sfp_items->parent = this;

    yang_name = "capabilities-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::~CapabilitiesItems()
{
}

bool System::CapabilitiesItems::has_data() const
{
    if (is_presence_container) return true;
    return (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_data())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_data())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_data())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_data())
	|| (card_items !=  nullptr && card_items->has_data())
	|| (port_items !=  nullptr && port_items->has_data())
	|| (psu_items !=  nullptr && psu_items->has_data())
	|| (fan_items !=  nullptr && fan_items->has_data())
	|| (sfp_items !=  nullptr && sfp_items->has_data());
}

bool System::CapabilitiesItems::has_operation() const
{
    return is_set(yfilter)
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_operation())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_operation())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_operation())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_operation())
	|| (card_items !=  nullptr && card_items->has_operation())
	|| (port_items !=  nullptr && port_items->has_operation())
	|| (psu_items !=  nullptr && psu_items->has_operation())
	|| (fan_items !=  nullptr && fan_items->has_operation())
	|| (sfp_items !=  nullptr && sfp_items->has_operation());
}

std::string System::CapabilitiesItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actrlcaprule-items")
    {
        if(actrlcaprule_items == nullptr)
        {
            actrlcaprule_items = std::make_shared<System::CapabilitiesItems::ActrlcapruleItems>();
        }
        return actrlcaprule_items;
    }

    if(child_yang_name == "l1caprule-items")
    {
        if(l1caprule_items == nullptr)
        {
            l1caprule_items = std::make_shared<System::CapabilitiesItems::L1capruleItems>();
        }
        return l1caprule_items;
    }

    if(child_yang_name == "l2caprule-items")
    {
        if(l2caprule_items == nullptr)
        {
            l2caprule_items = std::make_shared<System::CapabilitiesItems::L2capruleItems>();
        }
        return l2caprule_items;
    }

    if(child_yang_name == "l3caprule-items")
    {
        if(l3caprule_items == nullptr)
        {
            l3caprule_items = std::make_shared<System::CapabilitiesItems::L3capruleItems>();
        }
        return l3caprule_items;
    }

    if(child_yang_name == "card-items")
    {
        if(card_items == nullptr)
        {
            card_items = std::make_shared<System::CapabilitiesItems::CardItems>();
        }
        return card_items;
    }

    if(child_yang_name == "port-items")
    {
        if(port_items == nullptr)
        {
            port_items = std::make_shared<System::CapabilitiesItems::PortItems>();
        }
        return port_items;
    }

    if(child_yang_name == "psu-items")
    {
        if(psu_items == nullptr)
        {
            psu_items = std::make_shared<System::CapabilitiesItems::PsuItems>();
        }
        return psu_items;
    }

    if(child_yang_name == "fan-items")
    {
        if(fan_items == nullptr)
        {
            fan_items = std::make_shared<System::CapabilitiesItems::FanItems>();
        }
        return fan_items;
    }

    if(child_yang_name == "sfp-items")
    {
        if(sfp_items == nullptr)
        {
            sfp_items = std::make_shared<System::CapabilitiesItems::SfpItems>();
        }
        return sfp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(actrlcaprule_items != nullptr)
    {
        _children["actrlcaprule-items"] = actrlcaprule_items;
    }

    if(l1caprule_items != nullptr)
    {
        _children["l1caprule-items"] = l1caprule_items;
    }

    if(l2caprule_items != nullptr)
    {
        _children["l2caprule-items"] = l2caprule_items;
    }

    if(l3caprule_items != nullptr)
    {
        _children["l3caprule-items"] = l3caprule_items;
    }

    if(card_items != nullptr)
    {
        _children["card-items"] = card_items;
    }

    if(port_items != nullptr)
    {
        _children["port-items"] = port_items;
    }

    if(psu_items != nullptr)
    {
        _children["psu-items"] = psu_items;
    }

    if(fan_items != nullptr)
    {
        _children["fan-items"] = fan_items;
    }

    if(sfp_items != nullptr)
    {
        _children["sfp-items"] = sfp_items;
    }

    return _children;
}

void System::CapabilitiesItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actrlcaprule-items" || name == "l1caprule-items" || name == "l2caprule-items" || name == "l3caprule-items" || name == "card-items" || name == "port-items" || name == "psu-items" || name == "fan-items" || name == "sfp-items")
        return true;
    return false;
}

System::CapabilitiesItems::ActrlcapruleItems::ActrlcapruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "actrlcaprule-items"; yang_parent_name = "capabilities-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::ActrlcapruleItems::~ActrlcapruleItems()
{
}

bool System::CapabilitiesItems::ActrlcapruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::ActrlcapruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::ActrlcapruleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::ActrlcapruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actrlcaprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::ActrlcapruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::ActrlcapruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::ActrlcapruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::ActrlcapruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::ActrlcapruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::ActrlcapruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::ActrlcapruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::ActrlcapruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "actrlcaprule-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::ActrlcapruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::ActrlcapruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::ActrlcapruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::ActrlcapruleItems::RuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/actrlcaprule-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::ActrlcapruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::ActrlcapruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::ActrlcapruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::ActrlcapruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::ActrlcapruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::ActrlcapruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::ActrlcapruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::L1capruleItems::L1capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l1caprule-items"; yang_parent_name = "capabilities-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::L1capruleItems::~L1capruleItems()
{
}

bool System::CapabilitiesItems::L1capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::L1capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::L1capruleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::L1capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l1caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::L1capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::L1capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::L1capruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::L1capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::L1capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::L1capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::L1capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::L1capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l1caprule-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::L1capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::L1capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::L1capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::L1capruleItems::RuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/l1caprule-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::L1capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::L1capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::L1capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::L1capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::L1capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::L1capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::L1capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::L2capruleItems::L2capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l2caprule-items"; yang_parent_name = "capabilities-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::L2capruleItems::~L2capruleItems()
{
}

bool System::CapabilitiesItems::L2capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::L2capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::L2capruleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::L2capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::L2capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::L2capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::L2capruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::L2capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::L2capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::L2capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::L2capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::L2capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l2caprule-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::L2capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::L2capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::L2capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::L2capruleItems::RuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/l2caprule-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::L2capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::L2capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::L2capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::L2capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::L2capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::L2capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::L2capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::L3capruleItems::L3capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l3caprule-items"; yang_parent_name = "capabilities-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::L3capruleItems::~L3capruleItems()
{
}

bool System::CapabilitiesItems::L3capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::L3capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::L3capruleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::L3capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::L3capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::L3capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::L3capruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::L3capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::L3capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::L3capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::L3capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::L3capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l3caprule-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::L3capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::L3capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::L3capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::L3capruleItems::RuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/l3caprule-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::L3capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::L3capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::L3capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::L3capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::L3capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::L3capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::L3capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardItems()
    :
    card_list(this, {"vendor", "model", "version"})
{

    yang_name = "card-items"; yang_parent_name = "capabilities-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::CardItems::~CardItems()
{
}

bool System::CapabilitiesItems::CardItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<card_list.len(); index++)
    {
        if(card_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::CardItems::has_operation() const
{
    for (std::size_t index=0; index<card_list.len(); index++)
    {
        if(card_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::CardItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::CardItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::CardItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Card-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::CardItems::CardList>();
        ent_->parent = this;
        card_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::CardItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : card_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::CardItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::CardItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::CardItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Card-list")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::CardList()
    :
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    version{YType::str, "version"}
        ,
    actrlcaprule_items(std::make_shared<System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems>())
    , l1caprule_items(std::make_shared<System::CapabilitiesItems::CardItems::CardList::L1capruleItems>())
    , l2caprule_items(std::make_shared<System::CapabilitiesItems::CardItems::CardList::L2capruleItems>())
    , l3caprule_items(std::make_shared<System::CapabilitiesItems::CardItems::CardList::L3capruleItems>())
    , mfg_items(std::make_shared<System::CapabilitiesItems::CardItems::CardList::MfgItems>())
    , phys_items(std::make_shared<System::CapabilitiesItems::CardItems::CardList::PhysItems>())
{
    actrlcaprule_items->parent = this;
    l1caprule_items->parent = this;
    l2caprule_items->parent = this;
    l3caprule_items->parent = this;
    mfg_items->parent = this;
    phys_items->parent = this;

    yang_name = "Card-list"; yang_parent_name = "card-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::CardItems::CardList::~CardList()
{
}

bool System::CapabilitiesItems::CardItems::CardList::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| model.is_set
	|| version.is_set
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_data())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_data())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_data())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_data())
	|| (mfg_items !=  nullptr && mfg_items->has_data())
	|| (phys_items !=  nullptr && phys_items->has_data());
}

bool System::CapabilitiesItems::CardItems::CardList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_operation())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_operation())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_operation())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_operation())
	|| (mfg_items !=  nullptr && mfg_items->has_operation())
	|| (phys_items !=  nullptr && phys_items->has_operation());
}

std::string System::CapabilitiesItems::CardItems::CardList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/card-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::CardItems::CardList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Card-list";
    ADD_KEY_TOKEN(vendor, "vendor");
    ADD_KEY_TOKEN(model, "model");
    ADD_KEY_TOKEN(version, "version");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::CardItems::CardList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actrlcaprule-items")
    {
        if(actrlcaprule_items == nullptr)
        {
            actrlcaprule_items = std::make_shared<System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems>();
        }
        return actrlcaprule_items;
    }

    if(child_yang_name == "l1caprule-items")
    {
        if(l1caprule_items == nullptr)
        {
            l1caprule_items = std::make_shared<System::CapabilitiesItems::CardItems::CardList::L1capruleItems>();
        }
        return l1caprule_items;
    }

    if(child_yang_name == "l2caprule-items")
    {
        if(l2caprule_items == nullptr)
        {
            l2caprule_items = std::make_shared<System::CapabilitiesItems::CardItems::CardList::L2capruleItems>();
        }
        return l2caprule_items;
    }

    if(child_yang_name == "l3caprule-items")
    {
        if(l3caprule_items == nullptr)
        {
            l3caprule_items = std::make_shared<System::CapabilitiesItems::CardItems::CardList::L3capruleItems>();
        }
        return l3caprule_items;
    }

    if(child_yang_name == "mfg-items")
    {
        if(mfg_items == nullptr)
        {
            mfg_items = std::make_shared<System::CapabilitiesItems::CardItems::CardList::MfgItems>();
        }
        return mfg_items;
    }

    if(child_yang_name == "phys-items")
    {
        if(phys_items == nullptr)
        {
            phys_items = std::make_shared<System::CapabilitiesItems::CardItems::CardList::PhysItems>();
        }
        return phys_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::CardItems::CardList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(actrlcaprule_items != nullptr)
    {
        _children["actrlcaprule-items"] = actrlcaprule_items;
    }

    if(l1caprule_items != nullptr)
    {
        _children["l1caprule-items"] = l1caprule_items;
    }

    if(l2caprule_items != nullptr)
    {
        _children["l2caprule-items"] = l2caprule_items;
    }

    if(l3caprule_items != nullptr)
    {
        _children["l3caprule-items"] = l3caprule_items;
    }

    if(mfg_items != nullptr)
    {
        _children["mfg-items"] = mfg_items;
    }

    if(phys_items != nullptr)
    {
        _children["phys-items"] = phys_items;
    }

    return _children;
}

void System::CapabilitiesItems::CardItems::CardList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::CardItems::CardList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::CardItems::CardList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actrlcaprule-items" || name == "l1caprule-items" || name == "l2caprule-items" || name == "l3caprule-items" || name == "mfg-items" || name == "phys-items" || name == "vendor" || name == "model" || name == "version")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::ActrlcapruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "actrlcaprule-items"; yang_parent_name = "Card-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::~ActrlcapruleItems()
{
}

bool System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actrlcaprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "actrlcaprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::L1capruleItems::L1capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l1caprule-items"; yang_parent_name = "Card-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::L1capruleItems::~L1capruleItems()
{
}

bool System::CapabilitiesItems::CardItems::CardList::L1capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::CardItems::CardList::L1capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::L1capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l1caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::L1capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::CardItems::CardList::L1capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::CardItems::CardList::L1capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::CardItems::CardList::L1capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::CardItems::CardList::L1capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::CardItems::CardList::L1capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l1caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::L2capruleItems::L2capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l2caprule-items"; yang_parent_name = "Card-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::L2capruleItems::~L2capruleItems()
{
}

bool System::CapabilitiesItems::CardItems::CardList::L2capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::CardItems::CardList::L2capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::L2capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::L2capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::CardItems::CardList::L2capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::CardItems::CardList::L2capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::CardItems::CardList::L2capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::CardItems::CardList::L2capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::CardItems::CardList::L2capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l2caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::L3capruleItems::L3capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l3caprule-items"; yang_parent_name = "Card-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::L3capruleItems::~L3capruleItems()
{
}

bool System::CapabilitiesItems::CardItems::CardList::L3capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::CardItems::CardList::L3capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::L3capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::L3capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::CardItems::CardList::L3capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::CardItems::CardList::L3capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::CardItems::CardList::L3capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::CardItems::CardList::L3capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::CardItems::CardList::L3capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l3caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::MfgItems::MfgItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    partnumber{YType::str, "partNumber"}
{

    yang_name = "mfg-items"; yang_parent_name = "Card-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::MfgItems::~MfgItems()
{
}

bool System::CapabilitiesItems::CardItems::CardList::MfgItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| partnumber.is_set;
}

bool System::CapabilitiesItems::CardItems::CardList::MfgItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(partnumber.yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::MfgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mfg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::MfgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::CardItems::CardList::MfgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::CardItems::CardList::MfgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::CardItems::CardList::MfgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::CardItems::CardList::MfgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::CardItems::CardList::MfgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "partNumber")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::PhysItems::PhysItems()
    :
    height{YType::str, "height"},
    width{YType::str, "width"},
    depth{YType::str, "depth"},
    weight{YType::str, "weight"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "phys-items"; yang_parent_name = "Card-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::PhysItems::~PhysItems()
{
}

bool System::CapabilitiesItems::CardItems::CardList::PhysItems::has_data() const
{
    if (is_presence_container) return true;
    return height.is_set
	|| width.is_set
	|| depth.is_set
	|| weight.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::CardItems::CardList::PhysItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(height.yfilter)
	|| ydk::is_set(width.yfilter)
	|| ydk::is_set(depth.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::PhysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::PhysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (height.is_set || is_set(height.yfilter)) leaf_name_data.push_back(height.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());
    if (depth.is_set || is_set(depth.yfilter)) leaf_name_data.push_back(depth.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::CardItems::CardList::PhysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::CardItems::CardList::PhysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::CardItems::CardList::PhysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "height")
    {
        height = value;
        height.value_namespace = name_space;
        height.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "depth")
    {
        depth = value;
        depth.value_namespace = name_space;
        depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::CardItems::CardList::PhysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "height")
    {
        height.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
    if(value_path == "depth")
    {
        depth.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::CardItems::CardList::PhysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "height" || name == "width" || name == "depth" || name == "weight" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortItems()
    :
    port_list(this, {"vendor", "model", "version"})
{

    yang_name = "port-items"; yang_parent_name = "capabilities-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::PortItems::~PortItems()
{
}

bool System::CapabilitiesItems::PortItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_list.len(); index++)
    {
        if(port_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PortItems::has_operation() const
{
    for (std::size_t index=0; index<port_list.len(); index++)
    {
        if(port_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PortItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::PortItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PortItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Port-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::PortItems::PortList>();
        ent_->parent = this;
        port_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PortItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::PortItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PortItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PortItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-list")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::PortList()
    :
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    version{YType::str, "version"}
        ,
    actrlcaprule_items(std::make_shared<System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems>())
    , l1caprule_items(std::make_shared<System::CapabilitiesItems::PortItems::PortList::L1capruleItems>())
    , l2caprule_items(std::make_shared<System::CapabilitiesItems::PortItems::PortList::L2capruleItems>())
    , l3caprule_items(std::make_shared<System::CapabilitiesItems::PortItems::PortList::L3capruleItems>())
    , mfg_items(std::make_shared<System::CapabilitiesItems::PortItems::PortList::MfgItems>())
    , phys_items(std::make_shared<System::CapabilitiesItems::PortItems::PortList::PhysItems>())
{
    actrlcaprule_items->parent = this;
    l1caprule_items->parent = this;
    l2caprule_items->parent = this;
    l3caprule_items->parent = this;
    mfg_items->parent = this;
    phys_items->parent = this;

    yang_name = "Port-list"; yang_parent_name = "port-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::PortItems::PortList::~PortList()
{
}

bool System::CapabilitiesItems::PortItems::PortList::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| model.is_set
	|| version.is_set
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_data())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_data())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_data())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_data())
	|| (mfg_items !=  nullptr && mfg_items->has_data())
	|| (phys_items !=  nullptr && phys_items->has_data());
}

bool System::CapabilitiesItems::PortItems::PortList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_operation())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_operation())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_operation())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_operation())
	|| (mfg_items !=  nullptr && mfg_items->has_operation())
	|| (phys_items !=  nullptr && phys_items->has_operation());
}

std::string System::CapabilitiesItems::PortItems::PortList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/port-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::PortItems::PortList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-list";
    ADD_KEY_TOKEN(vendor, "vendor");
    ADD_KEY_TOKEN(model, "model");
    ADD_KEY_TOKEN(version, "version");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PortItems::PortList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actrlcaprule-items")
    {
        if(actrlcaprule_items == nullptr)
        {
            actrlcaprule_items = std::make_shared<System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems>();
        }
        return actrlcaprule_items;
    }

    if(child_yang_name == "l1caprule-items")
    {
        if(l1caprule_items == nullptr)
        {
            l1caprule_items = std::make_shared<System::CapabilitiesItems::PortItems::PortList::L1capruleItems>();
        }
        return l1caprule_items;
    }

    if(child_yang_name == "l2caprule-items")
    {
        if(l2caprule_items == nullptr)
        {
            l2caprule_items = std::make_shared<System::CapabilitiesItems::PortItems::PortList::L2capruleItems>();
        }
        return l2caprule_items;
    }

    if(child_yang_name == "l3caprule-items")
    {
        if(l3caprule_items == nullptr)
        {
            l3caprule_items = std::make_shared<System::CapabilitiesItems::PortItems::PortList::L3capruleItems>();
        }
        return l3caprule_items;
    }

    if(child_yang_name == "mfg-items")
    {
        if(mfg_items == nullptr)
        {
            mfg_items = std::make_shared<System::CapabilitiesItems::PortItems::PortList::MfgItems>();
        }
        return mfg_items;
    }

    if(child_yang_name == "phys-items")
    {
        if(phys_items == nullptr)
        {
            phys_items = std::make_shared<System::CapabilitiesItems::PortItems::PortList::PhysItems>();
        }
        return phys_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PortItems::PortList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(actrlcaprule_items != nullptr)
    {
        _children["actrlcaprule-items"] = actrlcaprule_items;
    }

    if(l1caprule_items != nullptr)
    {
        _children["l1caprule-items"] = l1caprule_items;
    }

    if(l2caprule_items != nullptr)
    {
        _children["l2caprule-items"] = l2caprule_items;
    }

    if(l3caprule_items != nullptr)
    {
        _children["l3caprule-items"] = l3caprule_items;
    }

    if(mfg_items != nullptr)
    {
        _children["mfg-items"] = mfg_items;
    }

    if(phys_items != nullptr)
    {
        _children["phys-items"] = phys_items;
    }

    return _children;
}

void System::CapabilitiesItems::PortItems::PortList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PortItems::PortList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PortItems::PortList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actrlcaprule-items" || name == "l1caprule-items" || name == "l2caprule-items" || name == "l3caprule-items" || name == "mfg-items" || name == "phys-items" || name == "vendor" || name == "model" || name == "version")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::ActrlcapruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "actrlcaprule-items"; yang_parent_name = "Port-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::~ActrlcapruleItems()
{
}

bool System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actrlcaprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "actrlcaprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::L1capruleItems::L1capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l1caprule-items"; yang_parent_name = "Port-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::L1capruleItems::~L1capruleItems()
{
}

bool System::CapabilitiesItems::PortItems::PortList::L1capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PortItems::PortList::L1capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::L1capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l1caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::L1capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PortItems::PortList::L1capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PortItems::PortList::L1capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::PortItems::PortList::L1capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PortItems::PortList::L1capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PortItems::PortList::L1capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l1caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::L2capruleItems::L2capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l2caprule-items"; yang_parent_name = "Port-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::L2capruleItems::~L2capruleItems()
{
}

bool System::CapabilitiesItems::PortItems::PortList::L2capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PortItems::PortList::L2capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::L2capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::L2capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PortItems::PortList::L2capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PortItems::PortList::L2capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::PortItems::PortList::L2capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PortItems::PortList::L2capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PortItems::PortList::L2capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l2caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::L3capruleItems::L3capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l3caprule-items"; yang_parent_name = "Port-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::L3capruleItems::~L3capruleItems()
{
}

bool System::CapabilitiesItems::PortItems::PortList::L3capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PortItems::PortList::L3capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::L3capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::L3capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PortItems::PortList::L3capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PortItems::PortList::L3capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::PortItems::PortList::L3capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PortItems::PortList::L3capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PortItems::PortList::L3capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l3caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::MfgItems::MfgItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    partnumber{YType::str, "partNumber"}
{

    yang_name = "mfg-items"; yang_parent_name = "Port-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::MfgItems::~MfgItems()
{
}

bool System::CapabilitiesItems::PortItems::PortList::MfgItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| partnumber.is_set;
}

bool System::CapabilitiesItems::PortItems::PortList::MfgItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(partnumber.yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::MfgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mfg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::MfgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PortItems::PortList::MfgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PortItems::PortList::MfgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::PortItems::PortList::MfgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PortItems::PortList::MfgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PortItems::PortList::MfgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "partNumber")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::PhysItems::PhysItems()
    :
    height{YType::str, "height"},
    width{YType::str, "width"},
    depth{YType::str, "depth"},
    weight{YType::str, "weight"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "phys-items"; yang_parent_name = "Port-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::PhysItems::~PhysItems()
{
}

bool System::CapabilitiesItems::PortItems::PortList::PhysItems::has_data() const
{
    if (is_presence_container) return true;
    return height.is_set
	|| width.is_set
	|| depth.is_set
	|| weight.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PortItems::PortList::PhysItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(height.yfilter)
	|| ydk::is_set(width.yfilter)
	|| ydk::is_set(depth.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::PhysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::PhysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (height.is_set || is_set(height.yfilter)) leaf_name_data.push_back(height.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());
    if (depth.is_set || is_set(depth.yfilter)) leaf_name_data.push_back(depth.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PortItems::PortList::PhysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PortItems::PortList::PhysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::PortItems::PortList::PhysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "height")
    {
        height = value;
        height.value_namespace = name_space;
        height.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "depth")
    {
        depth = value;
        depth.value_namespace = name_space;
        depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PortItems::PortList::PhysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "height")
    {
        height.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
    if(value_path == "depth")
    {
        depth.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PortItems::PortList::PhysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "height" || name == "width" || name == "depth" || name == "weight" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuItems()
    :
    psu_list(this, {"vendor", "model", "version"})
{

    yang_name = "psu-items"; yang_parent_name = "capabilities-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::PsuItems::~PsuItems()
{
}

bool System::CapabilitiesItems::PsuItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<psu_list.len(); index++)
    {
        if(psu_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PsuItems::has_operation() const
{
    for (std::size_t index=0; index<psu_list.len(); index++)
    {
        if(psu_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PsuItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::PsuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PsuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Psu-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList>();
        ent_->parent = this;
        psu_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PsuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : psu_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::PsuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PsuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PsuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Psu-list")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::PsuList()
    :
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    version{YType::str, "version"}
        ,
    actrlcaprule_items(std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems>())
    , l1caprule_items(std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems>())
    , l2caprule_items(std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems>())
    , l3caprule_items(std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems>())
    , mfg_items(std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::MfgItems>())
    , phys_items(std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::PhysItems>())
{
    actrlcaprule_items->parent = this;
    l1caprule_items->parent = this;
    l2caprule_items->parent = this;
    l3caprule_items->parent = this;
    mfg_items->parent = this;
    phys_items->parent = this;

    yang_name = "Psu-list"; yang_parent_name = "psu-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::PsuItems::PsuList::~PsuList()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| model.is_set
	|| version.is_set
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_data())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_data())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_data())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_data())
	|| (mfg_items !=  nullptr && mfg_items->has_data())
	|| (phys_items !=  nullptr && phys_items->has_data());
}

bool System::CapabilitiesItems::PsuItems::PsuList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_operation())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_operation())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_operation())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_operation())
	|| (mfg_items !=  nullptr && mfg_items->has_operation())
	|| (phys_items !=  nullptr && phys_items->has_operation());
}

std::string System::CapabilitiesItems::PsuItems::PsuList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/psu-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::PsuItems::PsuList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Psu-list";
    ADD_KEY_TOKEN(vendor, "vendor");
    ADD_KEY_TOKEN(model, "model");
    ADD_KEY_TOKEN(version, "version");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PsuItems::PsuList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actrlcaprule-items")
    {
        if(actrlcaprule_items == nullptr)
        {
            actrlcaprule_items = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems>();
        }
        return actrlcaprule_items;
    }

    if(child_yang_name == "l1caprule-items")
    {
        if(l1caprule_items == nullptr)
        {
            l1caprule_items = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems>();
        }
        return l1caprule_items;
    }

    if(child_yang_name == "l2caprule-items")
    {
        if(l2caprule_items == nullptr)
        {
            l2caprule_items = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems>();
        }
        return l2caprule_items;
    }

    if(child_yang_name == "l3caprule-items")
    {
        if(l3caprule_items == nullptr)
        {
            l3caprule_items = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems>();
        }
        return l3caprule_items;
    }

    if(child_yang_name == "mfg-items")
    {
        if(mfg_items == nullptr)
        {
            mfg_items = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::MfgItems>();
        }
        return mfg_items;
    }

    if(child_yang_name == "phys-items")
    {
        if(phys_items == nullptr)
        {
            phys_items = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::PhysItems>();
        }
        return phys_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PsuItems::PsuList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(actrlcaprule_items != nullptr)
    {
        _children["actrlcaprule-items"] = actrlcaprule_items;
    }

    if(l1caprule_items != nullptr)
    {
        _children["l1caprule-items"] = l1caprule_items;
    }

    if(l2caprule_items != nullptr)
    {
        _children["l2caprule-items"] = l2caprule_items;
    }

    if(l3caprule_items != nullptr)
    {
        _children["l3caprule-items"] = l3caprule_items;
    }

    if(mfg_items != nullptr)
    {
        _children["mfg-items"] = mfg_items;
    }

    if(phys_items != nullptr)
    {
        _children["phys-items"] = phys_items;
    }

    return _children;
}

void System::CapabilitiesItems::PsuItems::PsuList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PsuItems::PsuList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PsuItems::PsuList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actrlcaprule-items" || name == "l1caprule-items" || name == "l2caprule-items" || name == "l3caprule-items" || name == "mfg-items" || name == "phys-items" || name == "vendor" || name == "model" || name == "version")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::ActrlcapruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "actrlcaprule-items"; yang_parent_name = "Psu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::~ActrlcapruleItems()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actrlcaprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "actrlcaprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::L1capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l1caprule-items"; yang_parent_name = "Psu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::~L1capruleItems()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l1caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l1caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::L2capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l2caprule-items"; yang_parent_name = "Psu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::~L2capruleItems()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l2caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::L3capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l3caprule-items"; yang_parent_name = "Psu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::~L3capruleItems()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l3caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::MfgItems::MfgItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    partnumber{YType::str, "partNumber"}
{

    yang_name = "mfg-items"; yang_parent_name = "Psu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::MfgItems::~MfgItems()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::MfgItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| partnumber.is_set;
}

bool System::CapabilitiesItems::PsuItems::PsuList::MfgItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(partnumber.yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::MfgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mfg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::MfgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PsuItems::PsuList::MfgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PsuItems::PsuList::MfgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::PsuItems::PsuList::MfgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PsuItems::PsuList::MfgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PsuItems::PsuList::MfgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "partNumber")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::PhysItems::PhysItems()
    :
    height{YType::str, "height"},
    width{YType::str, "width"},
    depth{YType::str, "depth"},
    weight{YType::str, "weight"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "phys-items"; yang_parent_name = "Psu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::PhysItems::~PhysItems()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::PhysItems::has_data() const
{
    if (is_presence_container) return true;
    return height.is_set
	|| width.is_set
	|| depth.is_set
	|| weight.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PsuItems::PsuList::PhysItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(height.yfilter)
	|| ydk::is_set(width.yfilter)
	|| ydk::is_set(depth.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::PhysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::PhysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (height.is_set || is_set(height.yfilter)) leaf_name_data.push_back(height.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());
    if (depth.is_set || is_set(depth.yfilter)) leaf_name_data.push_back(depth.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::PsuItems::PsuList::PhysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::PsuItems::PsuList::PhysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::PsuItems::PsuList::PhysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "height")
    {
        height = value;
        height.value_namespace = name_space;
        height.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "depth")
    {
        depth = value;
        depth.value_namespace = name_space;
        depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PsuItems::PsuList::PhysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "height")
    {
        height.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
    if(value_path == "depth")
    {
        depth.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PsuItems::PsuList::PhysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "height" || name == "width" || name == "depth" || name == "weight" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanItems()
    :
    fan_list(this, {"vendor", "model", "version"})
{

    yang_name = "fan-items"; yang_parent_name = "capabilities-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::FanItems::~FanItems()
{
}

bool System::CapabilitiesItems::FanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fan_list.len(); index++)
    {
        if(fan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::FanItems::has_operation() const
{
    for (std::size_t index=0; index<fan_list.len(); index++)
    {
        if(fan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::FanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::FanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::FanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Fan-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::FanItems::FanList>();
        ent_->parent = this;
        fan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::FanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::FanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::FanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::FanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Fan-list")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::FanList()
    :
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    version{YType::str, "version"}
        ,
    actrlcaprule_items(std::make_shared<System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems>())
    , l1caprule_items(std::make_shared<System::CapabilitiesItems::FanItems::FanList::L1capruleItems>())
    , l2caprule_items(std::make_shared<System::CapabilitiesItems::FanItems::FanList::L2capruleItems>())
    , l3caprule_items(std::make_shared<System::CapabilitiesItems::FanItems::FanList::L3capruleItems>())
    , mfg_items(std::make_shared<System::CapabilitiesItems::FanItems::FanList::MfgItems>())
    , phys_items(std::make_shared<System::CapabilitiesItems::FanItems::FanList::PhysItems>())
{
    actrlcaprule_items->parent = this;
    l1caprule_items->parent = this;
    l2caprule_items->parent = this;
    l3caprule_items->parent = this;
    mfg_items->parent = this;
    phys_items->parent = this;

    yang_name = "Fan-list"; yang_parent_name = "fan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::FanItems::FanList::~FanList()
{
}

bool System::CapabilitiesItems::FanItems::FanList::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| model.is_set
	|| version.is_set
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_data())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_data())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_data())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_data())
	|| (mfg_items !=  nullptr && mfg_items->has_data())
	|| (phys_items !=  nullptr && phys_items->has_data());
}

bool System::CapabilitiesItems::FanItems::FanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_operation())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_operation())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_operation())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_operation())
	|| (mfg_items !=  nullptr && mfg_items->has_operation())
	|| (phys_items !=  nullptr && phys_items->has_operation());
}

std::string System::CapabilitiesItems::FanItems::FanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/fan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::FanItems::FanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Fan-list";
    ADD_KEY_TOKEN(vendor, "vendor");
    ADD_KEY_TOKEN(model, "model");
    ADD_KEY_TOKEN(version, "version");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::FanItems::FanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actrlcaprule-items")
    {
        if(actrlcaprule_items == nullptr)
        {
            actrlcaprule_items = std::make_shared<System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems>();
        }
        return actrlcaprule_items;
    }

    if(child_yang_name == "l1caprule-items")
    {
        if(l1caprule_items == nullptr)
        {
            l1caprule_items = std::make_shared<System::CapabilitiesItems::FanItems::FanList::L1capruleItems>();
        }
        return l1caprule_items;
    }

    if(child_yang_name == "l2caprule-items")
    {
        if(l2caprule_items == nullptr)
        {
            l2caprule_items = std::make_shared<System::CapabilitiesItems::FanItems::FanList::L2capruleItems>();
        }
        return l2caprule_items;
    }

    if(child_yang_name == "l3caprule-items")
    {
        if(l3caprule_items == nullptr)
        {
            l3caprule_items = std::make_shared<System::CapabilitiesItems::FanItems::FanList::L3capruleItems>();
        }
        return l3caprule_items;
    }

    if(child_yang_name == "mfg-items")
    {
        if(mfg_items == nullptr)
        {
            mfg_items = std::make_shared<System::CapabilitiesItems::FanItems::FanList::MfgItems>();
        }
        return mfg_items;
    }

    if(child_yang_name == "phys-items")
    {
        if(phys_items == nullptr)
        {
            phys_items = std::make_shared<System::CapabilitiesItems::FanItems::FanList::PhysItems>();
        }
        return phys_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::FanItems::FanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(actrlcaprule_items != nullptr)
    {
        _children["actrlcaprule-items"] = actrlcaprule_items;
    }

    if(l1caprule_items != nullptr)
    {
        _children["l1caprule-items"] = l1caprule_items;
    }

    if(l2caprule_items != nullptr)
    {
        _children["l2caprule-items"] = l2caprule_items;
    }

    if(l3caprule_items != nullptr)
    {
        _children["l3caprule-items"] = l3caprule_items;
    }

    if(mfg_items != nullptr)
    {
        _children["mfg-items"] = mfg_items;
    }

    if(phys_items != nullptr)
    {
        _children["phys-items"] = phys_items;
    }

    return _children;
}

void System::CapabilitiesItems::FanItems::FanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::FanItems::FanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::FanItems::FanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actrlcaprule-items" || name == "l1caprule-items" || name == "l2caprule-items" || name == "l3caprule-items" || name == "mfg-items" || name == "phys-items" || name == "vendor" || name == "model" || name == "version")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::ActrlcapruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "actrlcaprule-items"; yang_parent_name = "Fan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::~ActrlcapruleItems()
{
}

bool System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actrlcaprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "actrlcaprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::L1capruleItems::L1capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l1caprule-items"; yang_parent_name = "Fan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::L1capruleItems::~L1capruleItems()
{
}

bool System::CapabilitiesItems::FanItems::FanList::L1capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::FanItems::FanList::L1capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::L1capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l1caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::L1capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::FanItems::FanList::L1capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::FanItems::FanList::L1capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::FanItems::FanList::L1capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::FanItems::FanList::L1capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::FanItems::FanList::L1capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l1caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::L2capruleItems::L2capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l2caprule-items"; yang_parent_name = "Fan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::L2capruleItems::~L2capruleItems()
{
}

bool System::CapabilitiesItems::FanItems::FanList::L2capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::FanItems::FanList::L2capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::L2capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::L2capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::FanItems::FanList::L2capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::FanItems::FanList::L2capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::FanItems::FanList::L2capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::FanItems::FanList::L2capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::FanItems::FanList::L2capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l2caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::L3capruleItems::L3capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l3caprule-items"; yang_parent_name = "Fan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::L3capruleItems::~L3capruleItems()
{
}

bool System::CapabilitiesItems::FanItems::FanList::L3capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::FanItems::FanList::L3capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::L3capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::L3capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::FanItems::FanList::L3capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::FanItems::FanList::L3capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::FanItems::FanList::L3capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::FanItems::FanList::L3capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::FanItems::FanList::L3capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l3caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::MfgItems::MfgItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    partnumber{YType::str, "partNumber"}
{

    yang_name = "mfg-items"; yang_parent_name = "Fan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::MfgItems::~MfgItems()
{
}

bool System::CapabilitiesItems::FanItems::FanList::MfgItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| partnumber.is_set;
}

bool System::CapabilitiesItems::FanItems::FanList::MfgItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(partnumber.yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::MfgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mfg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::MfgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::FanItems::FanList::MfgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::FanItems::FanList::MfgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::FanItems::FanList::MfgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::FanItems::FanList::MfgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::FanItems::FanList::MfgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "partNumber")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::PhysItems::PhysItems()
    :
    height{YType::str, "height"},
    width{YType::str, "width"},
    depth{YType::str, "depth"},
    weight{YType::str, "weight"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "phys-items"; yang_parent_name = "Fan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::PhysItems::~PhysItems()
{
}

bool System::CapabilitiesItems::FanItems::FanList::PhysItems::has_data() const
{
    if (is_presence_container) return true;
    return height.is_set
	|| width.is_set
	|| depth.is_set
	|| weight.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::FanItems::FanList::PhysItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(height.yfilter)
	|| ydk::is_set(width.yfilter)
	|| ydk::is_set(depth.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::PhysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::PhysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (height.is_set || is_set(height.yfilter)) leaf_name_data.push_back(height.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());
    if (depth.is_set || is_set(depth.yfilter)) leaf_name_data.push_back(depth.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::FanItems::FanList::PhysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::FanItems::FanList::PhysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::FanItems::FanList::PhysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "height")
    {
        height = value;
        height.value_namespace = name_space;
        height.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "depth")
    {
        depth = value;
        depth.value_namespace = name_space;
        depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::FanItems::FanList::PhysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "height")
    {
        height.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
    if(value_path == "depth")
    {
        depth.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::FanItems::FanList::PhysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "height" || name == "width" || name == "depth" || name == "weight" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpItems()
    :
    sfp_list(this, {"vendor", "model", "version"})
{

    yang_name = "sfp-items"; yang_parent_name = "capabilities-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::SfpItems::~SfpItems()
{
}

bool System::CapabilitiesItems::SfpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sfp_list.len(); index++)
    {
        if(sfp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::SfpItems::has_operation() const
{
    for (std::size_t index=0; index<sfp_list.len(); index++)
    {
        if(sfp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::SfpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::SfpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::SfpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sfp-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList>();
        ent_->parent = this;
        sfp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::SfpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sfp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::SfpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::SfpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::SfpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Sfp-list")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::SfpList()
    :
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    version{YType::str, "version"}
        ,
    mfg_items(std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::MfgItems>())
    , actrlcaprule_items(std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems>())
    , l1caprule_items(std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems>())
    , l2caprule_items(std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems>())
    , l3caprule_items(std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems>())
    , phys_items(std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::PhysItems>())
{
    mfg_items->parent = this;
    actrlcaprule_items->parent = this;
    l1caprule_items->parent = this;
    l2caprule_items->parent = this;
    l3caprule_items->parent = this;
    phys_items->parent = this;

    yang_name = "Sfp-list"; yang_parent_name = "sfp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::SfpItems::SfpList::~SfpList()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| model.is_set
	|| version.is_set
	|| (mfg_items !=  nullptr && mfg_items->has_data())
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_data())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_data())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_data())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_data())
	|| (phys_items !=  nullptr && phys_items->has_data());
}

bool System::CapabilitiesItems::SfpItems::SfpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (mfg_items !=  nullptr && mfg_items->has_operation())
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_operation())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_operation())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_operation())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_operation())
	|| (phys_items !=  nullptr && phys_items->has_operation());
}

std::string System::CapabilitiesItems::SfpItems::SfpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/sfp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::SfpItems::SfpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Sfp-list";
    ADD_KEY_TOKEN(vendor, "vendor");
    ADD_KEY_TOKEN(model, "model");
    ADD_KEY_TOKEN(version, "version");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::SfpItems::SfpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mfg-items")
    {
        if(mfg_items == nullptr)
        {
            mfg_items = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::MfgItems>();
        }
        return mfg_items;
    }

    if(child_yang_name == "actrlcaprule-items")
    {
        if(actrlcaprule_items == nullptr)
        {
            actrlcaprule_items = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems>();
        }
        return actrlcaprule_items;
    }

    if(child_yang_name == "l1caprule-items")
    {
        if(l1caprule_items == nullptr)
        {
            l1caprule_items = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems>();
        }
        return l1caprule_items;
    }

    if(child_yang_name == "l2caprule-items")
    {
        if(l2caprule_items == nullptr)
        {
            l2caprule_items = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems>();
        }
        return l2caprule_items;
    }

    if(child_yang_name == "l3caprule-items")
    {
        if(l3caprule_items == nullptr)
        {
            l3caprule_items = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems>();
        }
        return l3caprule_items;
    }

    if(child_yang_name == "phys-items")
    {
        if(phys_items == nullptr)
        {
            phys_items = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::PhysItems>();
        }
        return phys_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::SfpItems::SfpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mfg_items != nullptr)
    {
        _children["mfg-items"] = mfg_items;
    }

    if(actrlcaprule_items != nullptr)
    {
        _children["actrlcaprule-items"] = actrlcaprule_items;
    }

    if(l1caprule_items != nullptr)
    {
        _children["l1caprule-items"] = l1caprule_items;
    }

    if(l2caprule_items != nullptr)
    {
        _children["l2caprule-items"] = l2caprule_items;
    }

    if(l3caprule_items != nullptr)
    {
        _children["l3caprule-items"] = l3caprule_items;
    }

    if(phys_items != nullptr)
    {
        _children["phys-items"] = phys_items;
    }

    return _children;
}

void System::CapabilitiesItems::SfpItems::SfpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::SfpItems::SfpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::SfpItems::SfpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mfg-items" || name == "actrlcaprule-items" || name == "l1caprule-items" || name == "l2caprule-items" || name == "l3caprule-items" || name == "phys-items" || name == "vendor" || name == "model" || name == "version")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::MfgItems::MfgItems()
    :
    sfpmfgdef_list(this, {"partnumber"})
{

    yang_name = "mfg-items"; yang_parent_name = "Sfp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::MfgItems::~MfgItems()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::MfgItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sfpmfgdef_list.len(); index++)
    {
        if(sfpmfgdef_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::SfpItems::SfpList::MfgItems::has_operation() const
{
    for (std::size_t index=0; index<sfpmfgdef_list.len(); index++)
    {
        if(sfpmfgdef_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::MfgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mfg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::MfgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::SfpItems::SfpList::MfgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SfpMfgDef-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList>();
        ent_->parent = this;
        sfpmfgdef_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::SfpItems::SfpList::MfgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sfpmfgdef_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::SfpItems::SfpList::MfgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::SfpItems::SfpList::MfgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::MfgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SfpMfgDef-list")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::SfpMfgDefList()
    :
    partnumber{YType::str, "partNumber"},
    pnpattern{YType::str, "pnPattern"},
    intvendorid{YType::uint8, "intVendorId"},
    magickey{YType::str, "magicKey"},
    xcvr{YType::enumeration, "xcvr"},
    connector{YType::enumeration, "connector"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "SfpMfgDef-list"; yang_parent_name = "mfg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::~SfpMfgDefList()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::has_data() const
{
    if (is_presence_container) return true;
    return partnumber.is_set
	|| pnpattern.is_set
	|| intvendorid.is_set
	|| magickey.is_set
	|| xcvr.is_set
	|| connector.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(pnpattern.yfilter)
	|| ydk::is_set(intvendorid.yfilter)
	|| ydk::is_set(magickey.yfilter)
	|| ydk::is_set(xcvr.yfilter)
	|| ydk::is_set(connector.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SfpMfgDef-list";
    ADD_KEY_TOKEN(partnumber, "partNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (pnpattern.is_set || is_set(pnpattern.yfilter)) leaf_name_data.push_back(pnpattern.get_name_leafdata());
    if (intvendorid.is_set || is_set(intvendorid.yfilter)) leaf_name_data.push_back(intvendorid.get_name_leafdata());
    if (magickey.is_set || is_set(magickey.yfilter)) leaf_name_data.push_back(magickey.get_name_leafdata());
    if (xcvr.is_set || is_set(xcvr.yfilter)) leaf_name_data.push_back(xcvr.get_name_leafdata());
    if (connector.is_set || is_set(connector.yfilter)) leaf_name_data.push_back(connector.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pnPattern")
    {
        pnpattern = value;
        pnpattern.value_namespace = name_space;
        pnpattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intVendorId")
    {
        intvendorid = value;
        intvendorid.value_namespace = name_space;
        intvendorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "magicKey")
    {
        magickey = value;
        magickey.value_namespace = name_space;
        magickey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcvr")
    {
        xcvr = value;
        xcvr.value_namespace = name_space;
        xcvr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector")
    {
        connector = value;
        connector.value_namespace = name_space;
        connector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
    if(value_path == "pnPattern")
    {
        pnpattern.yfilter = yfilter;
    }
    if(value_path == "intVendorId")
    {
        intvendorid.yfilter = yfilter;
    }
    if(value_path == "magicKey")
    {
        magickey.yfilter = yfilter;
    }
    if(value_path == "xcvr")
    {
        xcvr.yfilter = yfilter;
    }
    if(value_path == "connector")
    {
        connector.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "partNumber" || name == "pnPattern" || name == "intVendorId" || name == "magicKey" || name == "xcvr" || name == "connector" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::ActrlcapruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "actrlcaprule-items"; yang_parent_name = "Sfp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::~ActrlcapruleItems()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actrlcaprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "actrlcaprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::L1capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l1caprule-items"; yang_parent_name = "Sfp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::~L1capruleItems()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l1caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l1caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::L2capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l2caprule-items"; yang_parent_name = "Sfp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::~L2capruleItems()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l2caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::L3capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l3caprule-items"; yang_parent_name = "Sfp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::~L3capruleItems()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l3caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::PhysItems::PhysItems()
    :
    height{YType::str, "height"},
    width{YType::str, "width"},
    depth{YType::str, "depth"},
    weight{YType::str, "weight"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "phys-items"; yang_parent_name = "Sfp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::PhysItems::~PhysItems()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::PhysItems::has_data() const
{
    if (is_presence_container) return true;
    return height.is_set
	|| width.is_set
	|| depth.is_set
	|| weight.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::SfpItems::SfpList::PhysItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(height.yfilter)
	|| ydk::is_set(width.yfilter)
	|| ydk::is_set(depth.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::PhysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::PhysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (height.is_set || is_set(height.yfilter)) leaf_name_data.push_back(height.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());
    if (depth.is_set || is_set(depth.yfilter)) leaf_name_data.push_back(depth.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CapabilitiesItems::SfpItems::SfpList::PhysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CapabilitiesItems::SfpItems::SfpList::PhysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CapabilitiesItems::SfpItems::SfpList::PhysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "height")
    {
        height = value;
        height.value_namespace = name_space;
        height.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "depth")
    {
        depth = value;
        depth.value_namespace = name_space;
        depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::SfpItems::SfpList::PhysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "height")
    {
        height.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
    if(value_path == "depth")
    {
        depth.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::SfpItems::SfpList::PhysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "height" || name == "width" || name == "depth" || name == "weight" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::ClockItems::ClockItems()
    :
    protocol{YType::enumeration, "protocol"},
    vdcid{YType::uint16, "vdcId"},
    format{YType::enumeration, "format"},
    logginglevel{YType::enumeration, "loggingLevel"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    authst{YType::enumeration, "authSt"}
        ,
    set_items(std::make_shared<System::ClockItems::SetItems>())
    , timezone_items(std::make_shared<System::ClockItems::TimezoneItems>())
    , summertime_items(std::make_shared<System::ClockItems::SummertimeItems>())
{
    set_items->parent = this;
    timezone_items->parent = this;
    summertime_items->parent = this;

    yang_name = "clock-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ClockItems::~ClockItems()
{
}

bool System::ClockItems::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| vdcid.is_set
	|| format.is_set
	|| logginglevel.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| adminst.is_set
	|| authst.is_set
	|| (set_items !=  nullptr && set_items->has_data())
	|| (timezone_items !=  nullptr && timezone_items->has_data())
	|| (summertime_items !=  nullptr && summertime_items->has_data());
}

bool System::ClockItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vdcid.yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(authst.yfilter)
	|| (set_items !=  nullptr && set_items->has_operation())
	|| (timezone_items !=  nullptr && timezone_items->has_operation())
	|| (summertime_items !=  nullptr && summertime_items->has_operation());
}

std::string System::ClockItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ClockItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ClockItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vdcid.is_set || is_set(vdcid.yfilter)) leaf_name_data.push_back(vdcid.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (authst.is_set || is_set(authst.yfilter)) leaf_name_data.push_back(authst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ClockItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set-items")
    {
        if(set_items == nullptr)
        {
            set_items = std::make_shared<System::ClockItems::SetItems>();
        }
        return set_items;
    }

    if(child_yang_name == "timezone-items")
    {
        if(timezone_items == nullptr)
        {
            timezone_items = std::make_shared<System::ClockItems::TimezoneItems>();
        }
        return timezone_items;
    }

    if(child_yang_name == "summertime-items")
    {
        if(summertime_items == nullptr)
        {
            summertime_items = std::make_shared<System::ClockItems::SummertimeItems>();
        }
        return summertime_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ClockItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(set_items != nullptr)
    {
        _children["set-items"] = set_items;
    }

    if(timezone_items != nullptr)
    {
        _children["timezone-items"] = timezone_items;
    }

    if(summertime_items != nullptr)
    {
        _children["summertime-items"] = summertime_items;
    }

    return _children;
}

void System::ClockItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdcId")
    {
        vdcid = value;
        vdcid.value_namespace = name_space;
        vdcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authSt")
    {
        authst = value;
        authst.value_namespace = name_space;
        authst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ClockItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vdcId")
    {
        vdcid.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "authSt")
    {
        authst.yfilter = yfilter;
    }
}

bool System::ClockItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-items" || name == "timezone-items" || name == "summertime-items" || name == "protocol" || name == "vdcId" || name == "format" || name == "loggingLevel" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "adminSt" || name == "authSt")
        return true;
    return false;
}

System::ClockItems::SetItems::SetItems()
    :
    time{YType::str, "time"},
    date{YType::uint16, "date"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "year"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "set-items"; yang_parent_name = "clock-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ClockItems::SetItems::~SetItems()
{
}

bool System::ClockItems::SetItems::has_data() const
{
    if (is_presence_container) return true;
    return time.is_set
	|| date.is_set
	|| month.is_set
	|| year.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::ClockItems::SetItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(date.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ClockItems::SetItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/clock-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ClockItems::SetItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ClockItems::SetItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ClockItems::SetItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ClockItems::SetItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ClockItems::SetItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
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

void System::ClockItems::SetItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
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

bool System::ClockItems::SetItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "date" || name == "month" || name == "year" || name == "name" || name == "descr")
        return true;
    return false;
}

System::ClockItems::TimezoneItems::TimezoneItems()
    :
    hours{YType::int16, "hours"},
    minutes{YType::uint16, "minutes"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    namet{YType::str, "nameT"}
{

    yang_name = "timezone-items"; yang_parent_name = "clock-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ClockItems::TimezoneItems::~TimezoneItems()
{
}

bool System::ClockItems::TimezoneItems::has_data() const
{
    if (is_presence_container) return true;
    return hours.is_set
	|| minutes.is_set
	|| name.is_set
	|| descr.is_set
	|| namet.is_set;
}

bool System::ClockItems::TimezoneItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(namet.yfilter);
}

std::string System::ClockItems::TimezoneItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/clock-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ClockItems::TimezoneItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timezone-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ClockItems::TimezoneItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (namet.is_set || is_set(namet.yfilter)) leaf_name_data.push_back(namet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ClockItems::TimezoneItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ClockItems::TimezoneItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ClockItems::TimezoneItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "nameT")
    {
        namet = value;
        namet.value_namespace = name_space;
        namet.value_namespace_prefix = name_space_prefix;
    }
}

void System::ClockItems::TimezoneItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "nameT")
    {
        namet.yfilter = yfilter;
    }
}

bool System::ClockItems::TimezoneItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hours" || name == "minutes" || name == "name" || name == "descr" || name == "nameT")
        return true;
    return false;
}

System::ClockItems::SummertimeItems::SummertimeItems()
    :
    startweek{YType::uint16, "startWeek"},
    startday{YType::str, "startDay"},
    startmon{YType::str, "startMon"},
    starttime{YType::str, "startTime"},
    endweek{YType::uint16, "endWeek"},
    endday{YType::str, "endDay"},
    endmon{YType::str, "endMon"},
    endtime{YType::str, "endTime"},
    offsetmin{YType::uint16, "offsetMin"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    namet{YType::str, "nameT"}
{

    yang_name = "summertime-items"; yang_parent_name = "clock-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ClockItems::SummertimeItems::~SummertimeItems()
{
}

bool System::ClockItems::SummertimeItems::has_data() const
{
    if (is_presence_container) return true;
    return startweek.is_set
	|| startday.is_set
	|| startmon.is_set
	|| starttime.is_set
	|| endweek.is_set
	|| endday.is_set
	|| endmon.is_set
	|| endtime.is_set
	|| offsetmin.is_set
	|| name.is_set
	|| descr.is_set
	|| namet.is_set;
}

bool System::ClockItems::SummertimeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(startweek.yfilter)
	|| ydk::is_set(startday.yfilter)
	|| ydk::is_set(startmon.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(endweek.yfilter)
	|| ydk::is_set(endday.yfilter)
	|| ydk::is_set(endmon.yfilter)
	|| ydk::is_set(endtime.yfilter)
	|| ydk::is_set(offsetmin.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(namet.yfilter);
}

std::string System::ClockItems::SummertimeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/clock-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ClockItems::SummertimeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summertime-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ClockItems::SummertimeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (startweek.is_set || is_set(startweek.yfilter)) leaf_name_data.push_back(startweek.get_name_leafdata());
    if (startday.is_set || is_set(startday.yfilter)) leaf_name_data.push_back(startday.get_name_leafdata());
    if (startmon.is_set || is_set(startmon.yfilter)) leaf_name_data.push_back(startmon.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (endweek.is_set || is_set(endweek.yfilter)) leaf_name_data.push_back(endweek.get_name_leafdata());
    if (endday.is_set || is_set(endday.yfilter)) leaf_name_data.push_back(endday.get_name_leafdata());
    if (endmon.is_set || is_set(endmon.yfilter)) leaf_name_data.push_back(endmon.get_name_leafdata());
    if (endtime.is_set || is_set(endtime.yfilter)) leaf_name_data.push_back(endtime.get_name_leafdata());
    if (offsetmin.is_set || is_set(offsetmin.yfilter)) leaf_name_data.push_back(offsetmin.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (namet.is_set || is_set(namet.yfilter)) leaf_name_data.push_back(namet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ClockItems::SummertimeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ClockItems::SummertimeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ClockItems::SummertimeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "startWeek")
    {
        startweek = value;
        startweek.value_namespace = name_space;
        startweek.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startDay")
    {
        startday = value;
        startday.value_namespace = name_space;
        startday.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startMon")
    {
        startmon = value;
        startmon.value_namespace = name_space;
        startmon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTime")
    {
        starttime = value;
        starttime.value_namespace = name_space;
        starttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endWeek")
    {
        endweek = value;
        endweek.value_namespace = name_space;
        endweek.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endDay")
    {
        endday = value;
        endday.value_namespace = name_space;
        endday.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endMon")
    {
        endmon = value;
        endmon.value_namespace = name_space;
        endmon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTime")
    {
        endtime = value;
        endtime.value_namespace = name_space;
        endtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offsetMin")
    {
        offsetmin = value;
        offsetmin.value_namespace = name_space;
        offsetmin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "nameT")
    {
        namet = value;
        namet.value_namespace = name_space;
        namet.value_namespace_prefix = name_space_prefix;
    }
}

void System::ClockItems::SummertimeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "startWeek")
    {
        startweek.yfilter = yfilter;
    }
    if(value_path == "startDay")
    {
        startday.yfilter = yfilter;
    }
    if(value_path == "startMon")
    {
        startmon.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "endWeek")
    {
        endweek.yfilter = yfilter;
    }
    if(value_path == "endDay")
    {
        endday.yfilter = yfilter;
    }
    if(value_path == "endMon")
    {
        endmon.yfilter = yfilter;
    }
    if(value_path == "endTime")
    {
        endtime.yfilter = yfilter;
    }
    if(value_path == "offsetMin")
    {
        offsetmin.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "nameT")
    {
        namet.yfilter = yfilter;
    }
}

bool System::ClockItems::SummertimeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "startWeek" || name == "startDay" || name == "startMon" || name == "startTime" || name == "endWeek" || name == "endDay" || name == "endMon" || name == "endTime" || name == "offsetMin" || name == "name" || name == "descr" || name == "nameT")
        return true;
    return false;
}

System::TimeItems::TimeItems()
    :
    flags{YType::str, "flags"},
    leap{YType::uint8, "leap"},
    stratum{YType::uint8, "stratum"},
    precision{YType::int32, "precision"},
    rootdelay{YType::int32, "rootDelay"},
    rootdispersion{YType::uint32, "rootDispersion"},
    refid{YType::str, "refId"},
    reftime{YType::str, "refTime"},
    reftimeraw{YType::uint64, "refTimeRaw"},
    poll{YType::int32, "poll"},
    peer{YType::uint32, "peer"},
    clock_{YType::str, "clock"},
    clockraw{YType::uint64, "clockRaw"},
    srvstatus{YType::enumeration, "srvStatus"},
    logging{YType::enumeration, "logging"},
    logginglevel{YType::enumeration, "loggingLevel"},
    master{YType::enumeration, "master"},
    masterstratum{YType::uint8, "masterStratum"},
    passive{YType::enumeration, "passive"},
    allowprivate{YType::enumeration, "allowPrivate"},
    allowcontrol{YType::enumeration, "allowControl"},
    ratelimit{YType::uint32, "rateLimit"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    authst{YType::enumeration, "authSt"}
        ,
    auth_items(std::make_shared<System::TimeItems::AuthItems>())
    , prov_items(std::make_shared<System::TimeItems::ProvItems>())
    , accessgroup_items(std::make_shared<System::TimeItems::AccessgroupItems>())
    , srcip_items(std::make_shared<System::TimeItems::SrcIpItems>())
    , srcif_items(std::make_shared<System::TimeItems::SrcIfItems>())
{
    auth_items->parent = this;
    prov_items->parent = this;
    accessgroup_items->parent = this;
    srcip_items->parent = this;
    srcif_items->parent = this;

    yang_name = "time-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TimeItems::~TimeItems()
{
}

bool System::TimeItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| leap.is_set
	|| stratum.is_set
	|| precision.is_set
	|| rootdelay.is_set
	|| rootdispersion.is_set
	|| refid.is_set
	|| reftime.is_set
	|| reftimeraw.is_set
	|| poll.is_set
	|| peer.is_set
	|| clock_.is_set
	|| clockraw.is_set
	|| srvstatus.is_set
	|| logging.is_set
	|| logginglevel.is_set
	|| master.is_set
	|| masterstratum.is_set
	|| passive.is_set
	|| allowprivate.is_set
	|| allowcontrol.is_set
	|| ratelimit.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| adminst.is_set
	|| authst.is_set
	|| (auth_items !=  nullptr && auth_items->has_data())
	|| (prov_items !=  nullptr && prov_items->has_data())
	|| (accessgroup_items !=  nullptr && accessgroup_items->has_data())
	|| (srcip_items !=  nullptr && srcip_items->has_data())
	|| (srcif_items !=  nullptr && srcif_items->has_data());
}

bool System::TimeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(leap.yfilter)
	|| ydk::is_set(stratum.yfilter)
	|| ydk::is_set(precision.yfilter)
	|| ydk::is_set(rootdelay.yfilter)
	|| ydk::is_set(rootdispersion.yfilter)
	|| ydk::is_set(refid.yfilter)
	|| ydk::is_set(reftime.yfilter)
	|| ydk::is_set(reftimeraw.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(clock_.yfilter)
	|| ydk::is_set(clockraw.yfilter)
	|| ydk::is_set(srvstatus.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(master.yfilter)
	|| ydk::is_set(masterstratum.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(allowprivate.yfilter)
	|| ydk::is_set(allowcontrol.yfilter)
	|| ydk::is_set(ratelimit.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(authst.yfilter)
	|| (auth_items !=  nullptr && auth_items->has_operation())
	|| (prov_items !=  nullptr && prov_items->has_operation())
	|| (accessgroup_items !=  nullptr && accessgroup_items->has_operation())
	|| (srcip_items !=  nullptr && srcip_items->has_operation())
	|| (srcif_items !=  nullptr && srcif_items->has_operation());
}

std::string System::TimeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TimeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (leap.is_set || is_set(leap.yfilter)) leaf_name_data.push_back(leap.get_name_leafdata());
    if (stratum.is_set || is_set(stratum.yfilter)) leaf_name_data.push_back(stratum.get_name_leafdata());
    if (precision.is_set || is_set(precision.yfilter)) leaf_name_data.push_back(precision.get_name_leafdata());
    if (rootdelay.is_set || is_set(rootdelay.yfilter)) leaf_name_data.push_back(rootdelay.get_name_leafdata());
    if (rootdispersion.is_set || is_set(rootdispersion.yfilter)) leaf_name_data.push_back(rootdispersion.get_name_leafdata());
    if (refid.is_set || is_set(refid.yfilter)) leaf_name_data.push_back(refid.get_name_leafdata());
    if (reftime.is_set || is_set(reftime.yfilter)) leaf_name_data.push_back(reftime.get_name_leafdata());
    if (reftimeraw.is_set || is_set(reftimeraw.yfilter)) leaf_name_data.push_back(reftimeraw.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());
    if (clockraw.is_set || is_set(clockraw.yfilter)) leaf_name_data.push_back(clockraw.get_name_leafdata());
    if (srvstatus.is_set || is_set(srvstatus.yfilter)) leaf_name_data.push_back(srvstatus.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (master.is_set || is_set(master.yfilter)) leaf_name_data.push_back(master.get_name_leafdata());
    if (masterstratum.is_set || is_set(masterstratum.yfilter)) leaf_name_data.push_back(masterstratum.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (allowprivate.is_set || is_set(allowprivate.yfilter)) leaf_name_data.push_back(allowprivate.get_name_leafdata());
    if (allowcontrol.is_set || is_set(allowcontrol.yfilter)) leaf_name_data.push_back(allowcontrol.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.yfilter)) leaf_name_data.push_back(ratelimit.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (authst.is_set || is_set(authst.yfilter)) leaf_name_data.push_back(authst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TimeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-items")
    {
        if(auth_items == nullptr)
        {
            auth_items = std::make_shared<System::TimeItems::AuthItems>();
        }
        return auth_items;
    }

    if(child_yang_name == "prov-items")
    {
        if(prov_items == nullptr)
        {
            prov_items = std::make_shared<System::TimeItems::ProvItems>();
        }
        return prov_items;
    }

    if(child_yang_name == "accessgroup-items")
    {
        if(accessgroup_items == nullptr)
        {
            accessgroup_items = std::make_shared<System::TimeItems::AccessgroupItems>();
        }
        return accessgroup_items;
    }

    if(child_yang_name == "srcIp-items")
    {
        if(srcip_items == nullptr)
        {
            srcip_items = std::make_shared<System::TimeItems::SrcIpItems>();
        }
        return srcip_items;
    }

    if(child_yang_name == "srcIf-items")
    {
        if(srcif_items == nullptr)
        {
            srcif_items = std::make_shared<System::TimeItems::SrcIfItems>();
        }
        return srcif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TimeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auth_items != nullptr)
    {
        _children["auth-items"] = auth_items;
    }

    if(prov_items != nullptr)
    {
        _children["prov-items"] = prov_items;
    }

    if(accessgroup_items != nullptr)
    {
        _children["accessgroup-items"] = accessgroup_items;
    }

    if(srcip_items != nullptr)
    {
        _children["srcIp-items"] = srcip_items;
    }

    if(srcif_items != nullptr)
    {
        _children["srcIf-items"] = srcif_items;
    }

    return _children;
}

void System::TimeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap")
    {
        leap = value;
        leap.value_namespace = name_space;
        leap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stratum")
    {
        stratum = value;
        stratum.value_namespace = name_space;
        stratum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precision")
    {
        precision = value;
        precision.value_namespace = name_space;
        precision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootDelay")
    {
        rootdelay = value;
        rootdelay.value_namespace = name_space;
        rootdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootDispersion")
    {
        rootdispersion = value;
        rootdispersion.value_namespace = name_space;
        rootdispersion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refId")
    {
        refid = value;
        refid.value_namespace = name_space;
        refid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refTime")
    {
        reftime = value;
        reftime.value_namespace = name_space;
        reftime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refTimeRaw")
    {
        reftimeraw = value;
        reftimeraw.value_namespace = name_space;
        reftimeraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clockRaw")
    {
        clockraw = value;
        clockraw.value_namespace = name_space;
        clockraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srvStatus")
    {
        srvstatus = value;
        srvstatus.value_namespace = name_space;
        srvstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master")
    {
        master = value;
        master.value_namespace = name_space;
        master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "masterStratum")
    {
        masterstratum = value;
        masterstratum.value_namespace = name_space;
        masterstratum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowPrivate")
    {
        allowprivate = value;
        allowprivate.value_namespace = name_space;
        allowprivate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowControl")
    {
        allowcontrol = value;
        allowcontrol.value_namespace = name_space;
        allowcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rateLimit")
    {
        ratelimit = value;
        ratelimit.value_namespace = name_space;
        ratelimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authSt")
    {
        authst = value;
        authst.value_namespace = name_space;
        authst.value_namespace_prefix = name_space_prefix;
    }
}

void System::TimeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "leap")
    {
        leap.yfilter = yfilter;
    }
    if(value_path == "stratum")
    {
        stratum.yfilter = yfilter;
    }
    if(value_path == "precision")
    {
        precision.yfilter = yfilter;
    }
    if(value_path == "rootDelay")
    {
        rootdelay.yfilter = yfilter;
    }
    if(value_path == "rootDispersion")
    {
        rootdispersion.yfilter = yfilter;
    }
    if(value_path == "refId")
    {
        refid.yfilter = yfilter;
    }
    if(value_path == "refTime")
    {
        reftime.yfilter = yfilter;
    }
    if(value_path == "refTimeRaw")
    {
        reftimeraw.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
    if(value_path == "clockRaw")
    {
        clockraw.yfilter = yfilter;
    }
    if(value_path == "srvStatus")
    {
        srvstatus.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
    }
    if(value_path == "master")
    {
        master.yfilter = yfilter;
    }
    if(value_path == "masterStratum")
    {
        masterstratum.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "allowPrivate")
    {
        allowprivate.yfilter = yfilter;
    }
    if(value_path == "allowControl")
    {
        allowcontrol.yfilter = yfilter;
    }
    if(value_path == "rateLimit")
    {
        ratelimit.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "authSt")
    {
        authst.yfilter = yfilter;
    }
}

bool System::TimeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-items" || name == "prov-items" || name == "accessgroup-items" || name == "srcIp-items" || name == "srcIf-items" || name == "flags" || name == "leap" || name == "stratum" || name == "precision" || name == "rootDelay" || name == "rootDispersion" || name == "refId" || name == "refTime" || name == "refTimeRaw" || name == "poll" || name == "peer" || name == "clock" || name == "clockRaw" || name == "srvStatus" || name == "logging" || name == "loggingLevel" || name == "master" || name == "masterStratum" || name == "passive" || name == "allowPrivate" || name == "allowControl" || name == "rateLimit" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "adminSt" || name == "authSt")
        return true;
    return false;
}

System::TimeItems::AuthItems::AuthItems()
    :
    ntpauth_list(this, {"id"})
{

    yang_name = "auth-items"; yang_parent_name = "time-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TimeItems::AuthItems::~AuthItems()
{
}

bool System::TimeItems::AuthItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ntpauth_list.len(); index++)
    {
        if(ntpauth_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TimeItems::AuthItems::has_operation() const
{
    for (std::size_t index=0; index<ntpauth_list.len(); index++)
    {
        if(ntpauth_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TimeItems::AuthItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/time-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TimeItems::AuthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::AuthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TimeItems::AuthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NtpAuth-list")
    {
        auto ent_ = std::make_shared<System::TimeItems::AuthItems::NtpAuthList>();
        ent_->parent = this;
        ntpauth_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TimeItems::AuthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ntpauth_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TimeItems::AuthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TimeItems::AuthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TimeItems::AuthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NtpAuth-list")
        return true;
    return false;
}

System::TimeItems::AuthItems::NtpAuthList::NtpAuthList()
    :
    id{YType::uint16, "id"},
    encryptedkey{YType::str, "encryptedKey"},
    isencrypt{YType::boolean, "isEncrypt"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    key{YType::str, "key"},
    trusted{YType::boolean, "trusted"}
{

    yang_name = "NtpAuth-list"; yang_parent_name = "auth-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TimeItems::AuthItems::NtpAuthList::~NtpAuthList()
{
}

bool System::TimeItems::AuthItems::NtpAuthList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| encryptedkey.is_set
	|| isencrypt.is_set
	|| name.is_set
	|| descr.is_set
	|| key.is_set
	|| trusted.is_set;
}

bool System::TimeItems::AuthItems::NtpAuthList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(encryptedkey.yfilter)
	|| ydk::is_set(isencrypt.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(trusted.yfilter);
}

std::string System::TimeItems::AuthItems::NtpAuthList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/time-items/auth-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TimeItems::AuthItems::NtpAuthList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NtpAuth-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::AuthItems::NtpAuthList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (encryptedkey.is_set || is_set(encryptedkey.yfilter)) leaf_name_data.push_back(encryptedkey.get_name_leafdata());
    if (isencrypt.is_set || is_set(isencrypt.yfilter)) leaf_name_data.push_back(isencrypt.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TimeItems::AuthItems::NtpAuthList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TimeItems::AuthItems::NtpAuthList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TimeItems::AuthItems::NtpAuthList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryptedKey")
    {
        encryptedkey = value;
        encryptedkey.value_namespace = name_space;
        encryptedkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isEncrypt")
    {
        isencrypt = value;
        isencrypt.value_namespace = name_space;
        isencrypt.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trusted")
    {
        trusted = value;
        trusted.value_namespace = name_space;
        trusted.value_namespace_prefix = name_space_prefix;
    }
}

void System::TimeItems::AuthItems::NtpAuthList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "encryptedKey")
    {
        encryptedkey.yfilter = yfilter;
    }
    if(value_path == "isEncrypt")
    {
        isencrypt.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "trusted")
    {
        trusted.yfilter = yfilter;
    }
}

bool System::TimeItems::AuthItems::NtpAuthList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "encryptedKey" || name == "isEncrypt" || name == "name" || name == "descr" || name == "key" || name == "trusted")
        return true;
    return false;
}

System::TimeItems::ProvItems::ProvItems()
    :
    ntpprovider_list(this, {"name"})
{

    yang_name = "prov-items"; yang_parent_name = "time-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TimeItems::ProvItems::~ProvItems()
{
}

bool System::TimeItems::ProvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ntpprovider_list.len(); index++)
    {
        if(ntpprovider_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TimeItems::ProvItems::has_operation() const
{
    for (std::size_t index=0; index<ntpprovider_list.len(); index++)
    {
        if(ntpprovider_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TimeItems::ProvItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/time-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TimeItems::ProvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prov-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::ProvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TimeItems::ProvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NtpProvider-list")
    {
        auto ent_ = std::make_shared<System::TimeItems::ProvItems::NtpProviderList>();
        ent_->parent = this;
        ntpprovider_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TimeItems::ProvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ntpprovider_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TimeItems::ProvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TimeItems::ProvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TimeItems::ProvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NtpProvider-list")
        return true;
    return false;
}

System::TimeItems::ProvItems::NtpProviderList::NtpProviderList()
    :
    name{YType::str, "name"},
    provt{YType::enumeration, "provT"},
    vrf{YType::str, "vrf"},
    descr{YType::str, "descr"},
    preferred{YType::boolean, "preferred"},
    minpoll{YType::uint8, "minPoll"},
    maxpoll{YType::uint8, "maxPoll"},
    keyid{YType::uint16, "keyId"}
        ,
    status_items(std::make_shared<System::TimeItems::ProvItems::NtpProviderList::StatusItems>())
    , rsntpprovidertontpauth_items(std::make_shared<System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems>())
{
    status_items->parent = this;
    rsntpprovidertontpauth_items->parent = this;

    yang_name = "NtpProvider-list"; yang_parent_name = "prov-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TimeItems::ProvItems::NtpProviderList::~NtpProviderList()
{
}

bool System::TimeItems::ProvItems::NtpProviderList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| provt.is_set
	|| vrf.is_set
	|| descr.is_set
	|| preferred.is_set
	|| minpoll.is_set
	|| maxpoll.is_set
	|| keyid.is_set
	|| (status_items !=  nullptr && status_items->has_data())
	|| (rsntpprovidertontpauth_items !=  nullptr && rsntpprovidertontpauth_items->has_data());
}

bool System::TimeItems::ProvItems::NtpProviderList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(provt.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(preferred.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(keyid.yfilter)
	|| (status_items !=  nullptr && status_items->has_operation())
	|| (rsntpprovidertontpauth_items !=  nullptr && rsntpprovidertontpauth_items->has_operation());
}

std::string System::TimeItems::ProvItems::NtpProviderList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/time-items/prov-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TimeItems::ProvItems::NtpProviderList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NtpProvider-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::ProvItems::NtpProviderList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (provt.is_set || is_set(provt.yfilter)) leaf_name_data.push_back(provt.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (preferred.is_set || is_set(preferred.yfilter)) leaf_name_data.push_back(preferred.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (keyid.is_set || is_set(keyid.yfilter)) leaf_name_data.push_back(keyid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TimeItems::ProvItems::NtpProviderList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-items")
    {
        if(status_items == nullptr)
        {
            status_items = std::make_shared<System::TimeItems::ProvItems::NtpProviderList::StatusItems>();
        }
        return status_items;
    }

    if(child_yang_name == "rsntpProviderToNtpAuth-items")
    {
        if(rsntpprovidertontpauth_items == nullptr)
        {
            rsntpprovidertontpauth_items = std::make_shared<System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems>();
        }
        return rsntpprovidertontpauth_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TimeItems::ProvItems::NtpProviderList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(status_items != nullptr)
    {
        _children["status-items"] = status_items;
    }

    if(rsntpprovidertontpauth_items != nullptr)
    {
        _children["rsntpProviderToNtpAuth-items"] = rsntpprovidertontpauth_items;
    }

    return _children;
}

void System::TimeItems::ProvItems::NtpProviderList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provT")
    {
        provt = value;
        provt.value_namespace = name_space;
        provt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred")
    {
        preferred = value;
        preferred.value_namespace = name_space;
        preferred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minPoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxPoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyId")
    {
        keyid = value;
        keyid.value_namespace = name_space;
        keyid.value_namespace_prefix = name_space_prefix;
    }
}

void System::TimeItems::ProvItems::NtpProviderList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "provT")
    {
        provt.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "preferred")
    {
        preferred.yfilter = yfilter;
    }
    if(value_path == "minPoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "maxPoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "keyId")
    {
        keyid.yfilter = yfilter;
    }
}

bool System::TimeItems::ProvItems::NtpProviderList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-items" || name == "rsntpProviderToNtpAuth-items" || name == "name" || name == "provT" || name == "vrf" || name == "descr" || name == "preferred" || name == "minPoll" || name == "maxPoll" || name == "keyId")
        return true;
    return false;
}

System::TimeItems::ProvItems::NtpProviderList::StatusItems::StatusItems()
    :
    flags{YType::str, "flags"},
    mode{YType::enumeration, "mode"},
    stratum{YType::uint8, "stratum"},
    peerpoll{YType::int32, "peerPoll"},
    hostpoll{YType::int32, "hostPoll"},
    reach{YType::uint8, "reach"},
    delay{YType::str, "delay"},
    delayraw{YType::int32, "delayRaw"},
    dispersion{YType::uint32, "dispersion"}
{

    yang_name = "status-items"; yang_parent_name = "NtpProvider-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TimeItems::ProvItems::NtpProviderList::StatusItems::~StatusItems()
{
}

bool System::TimeItems::ProvItems::NtpProviderList::StatusItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| mode.is_set
	|| stratum.is_set
	|| peerpoll.is_set
	|| hostpoll.is_set
	|| reach.is_set
	|| delay.is_set
	|| delayraw.is_set
	|| dispersion.is_set;
}

bool System::TimeItems::ProvItems::NtpProviderList::StatusItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(stratum.yfilter)
	|| ydk::is_set(peerpoll.yfilter)
	|| ydk::is_set(hostpoll.yfilter)
	|| ydk::is_set(reach.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(delayraw.yfilter)
	|| ydk::is_set(dispersion.yfilter);
}

std::string System::TimeItems::ProvItems::NtpProviderList::StatusItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::ProvItems::NtpProviderList::StatusItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (stratum.is_set || is_set(stratum.yfilter)) leaf_name_data.push_back(stratum.get_name_leafdata());
    if (peerpoll.is_set || is_set(peerpoll.yfilter)) leaf_name_data.push_back(peerpoll.get_name_leafdata());
    if (hostpoll.is_set || is_set(hostpoll.yfilter)) leaf_name_data.push_back(hostpoll.get_name_leafdata());
    if (reach.is_set || is_set(reach.yfilter)) leaf_name_data.push_back(reach.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (delayraw.is_set || is_set(delayraw.yfilter)) leaf_name_data.push_back(delayraw.get_name_leafdata());
    if (dispersion.is_set || is_set(dispersion.yfilter)) leaf_name_data.push_back(dispersion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TimeItems::ProvItems::NtpProviderList::StatusItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TimeItems::ProvItems::NtpProviderList::StatusItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TimeItems::ProvItems::NtpProviderList::StatusItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stratum")
    {
        stratum = value;
        stratum.value_namespace = name_space;
        stratum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerPoll")
    {
        peerpoll = value;
        peerpoll.value_namespace = name_space;
        peerpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostPoll")
    {
        hostpoll = value;
        hostpoll.value_namespace = name_space;
        hostpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reach")
    {
        reach = value;
        reach.value_namespace = name_space;
        reach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delayRaw")
    {
        delayraw = value;
        delayraw.value_namespace = name_space;
        delayraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dispersion")
    {
        dispersion = value;
        dispersion.value_namespace = name_space;
        dispersion.value_namespace_prefix = name_space_prefix;
    }
}

void System::TimeItems::ProvItems::NtpProviderList::StatusItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "stratum")
    {
        stratum.yfilter = yfilter;
    }
    if(value_path == "peerPoll")
    {
        peerpoll.yfilter = yfilter;
    }
    if(value_path == "hostPoll")
    {
        hostpoll.yfilter = yfilter;
    }
    if(value_path == "reach")
    {
        reach.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "delayRaw")
    {
        delayraw.yfilter = yfilter;
    }
    if(value_path == "dispersion")
    {
        dispersion.yfilter = yfilter;
    }
}

bool System::TimeItems::ProvItems::NtpProviderList::StatusItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "mode" || name == "stratum" || name == "peerPoll" || name == "hostPoll" || name == "reach" || name == "delay" || name == "delayRaw" || name == "dispersion")
        return true;
    return false;
}

System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsntpProviderToNtpAuthItems()
    :
    rsntpprovidertontpauth_list(this, {"tdn"})
{

    yang_name = "rsntpProviderToNtpAuth-items"; yang_parent_name = "NtpProvider-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::~RsntpProviderToNtpAuthItems()
{
}

bool System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsntpprovidertontpauth_list.len(); index++)
    {
        if(rsntpprovidertontpauth_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::has_operation() const
{
    for (std::size_t index=0; index<rsntpprovidertontpauth_list.len(); index++)
    {
        if(rsntpprovidertontpauth_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsntpProviderToNtpAuth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsNtpProviderToNtpAuth-list")
    {
        auto ent_ = std::make_shared<System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList>();
        ent_->parent = this;
        rsntpprovidertontpauth_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsntpprovidertontpauth_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsNtpProviderToNtpAuth-list")
        return true;
    return false;
}

System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::RsNtpProviderToNtpAuthList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsNtpProviderToNtpAuth-list"; yang_parent_name = "rsntpProviderToNtpAuth-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::~RsNtpProviderToNtpAuthList()
{
}

bool System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsNtpProviderToNtpAuth-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::TimeItems::AccessgroupItems::AccessgroupItems()
    :
    peer{YType::str, "peer"},
    serveonly{YType::str, "serveOnly"},
    serve{YType::str, "serve"},
    queryonly{YType::str, "queryOnly"},
    matchall{YType::enumeration, "matchAll"}
{

    yang_name = "accessgroup-items"; yang_parent_name = "time-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TimeItems::AccessgroupItems::~AccessgroupItems()
{
}

bool System::TimeItems::AccessgroupItems::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| serveonly.is_set
	|| serve.is_set
	|| queryonly.is_set
	|| matchall.is_set;
}

bool System::TimeItems::AccessgroupItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(serveonly.yfilter)
	|| ydk::is_set(serve.yfilter)
	|| ydk::is_set(queryonly.yfilter)
	|| ydk::is_set(matchall.yfilter);
}

std::string System::TimeItems::AccessgroupItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/time-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TimeItems::AccessgroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accessgroup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::AccessgroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (serveonly.is_set || is_set(serveonly.yfilter)) leaf_name_data.push_back(serveonly.get_name_leafdata());
    if (serve.is_set || is_set(serve.yfilter)) leaf_name_data.push_back(serve.get_name_leafdata());
    if (queryonly.is_set || is_set(queryonly.yfilter)) leaf_name_data.push_back(queryonly.get_name_leafdata());
    if (matchall.is_set || is_set(matchall.yfilter)) leaf_name_data.push_back(matchall.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TimeItems::AccessgroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TimeItems::AccessgroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TimeItems::AccessgroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serveOnly")
    {
        serveonly = value;
        serveonly.value_namespace = name_space;
        serveonly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serve")
    {
        serve = value;
        serve.value_namespace = name_space;
        serve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queryOnly")
    {
        queryonly = value;
        queryonly.value_namespace = name_space;
        queryonly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchAll")
    {
        matchall = value;
        matchall.value_namespace = name_space;
        matchall.value_namespace_prefix = name_space_prefix;
    }
}

void System::TimeItems::AccessgroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "serveOnly")
    {
        serveonly.yfilter = yfilter;
    }
    if(value_path == "serve")
    {
        serve.yfilter = yfilter;
    }
    if(value_path == "queryOnly")
    {
        queryonly.yfilter = yfilter;
    }
    if(value_path == "matchAll")
    {
        matchall.yfilter = yfilter;
    }
}

bool System::TimeItems::AccessgroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "serveOnly" || name == "serve" || name == "queryOnly" || name == "matchAll")
        return true;
    return false;
}

System::TimeItems::SrcIpItems::SrcIpItems()
    :
    srcip{YType::str, "srcIp"},
    srcipv6{YType::str, "srcIpv6"}
{

    yang_name = "srcIp-items"; yang_parent_name = "time-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TimeItems::SrcIpItems::~SrcIpItems()
{
}

bool System::TimeItems::SrcIpItems::has_data() const
{
    if (is_presence_container) return true;
    return srcip.is_set
	|| srcipv6.is_set;
}

bool System::TimeItems::SrcIpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(srcipv6.yfilter);
}

std::string System::TimeItems::SrcIpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/time-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TimeItems::SrcIpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srcIp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::SrcIpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (srcipv6.is_set || is_set(srcipv6.yfilter)) leaf_name_data.push_back(srcipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TimeItems::SrcIpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TimeItems::SrcIpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TimeItems::SrcIpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIpv6")
    {
        srcipv6 = value;
        srcipv6.value_namespace = name_space;
        srcipv6.value_namespace_prefix = name_space_prefix;
    }
}

void System::TimeItems::SrcIpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "srcIpv6")
    {
        srcipv6.yfilter = yfilter;
    }
}

bool System::TimeItems::SrcIpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcIp" || name == "srcIpv6")
        return true;
    return false;
}

System::TimeItems::SrcIfItems::SrcIfItems()
    :
    srcif{YType::str, "srcIf"}
{

    yang_name = "srcIf-items"; yang_parent_name = "time-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TimeItems::SrcIfItems::~SrcIfItems()
{
}

bool System::TimeItems::SrcIfItems::has_data() const
{
    if (is_presence_container) return true;
    return srcif.is_set;
}

bool System::TimeItems::SrcIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcif.yfilter);
}

std::string System::TimeItems::SrcIfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/time-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TimeItems::SrcIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srcIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::SrcIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TimeItems::SrcIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TimeItems::SrcIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TimeItems::SrcIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
}

void System::TimeItems::SrcIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
}

bool System::TimeItems::SrcIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcIf")
        return true;
    return false;
}

System::NtpqItems::NtpqItems()
    :
    ntpq_list(this, {"remote"})
{

    yang_name = "ntpq-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NtpqItems::~NtpqItems()
{
}

bool System::NtpqItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ntpq_list.len(); index++)
    {
        if(ntpq_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NtpqItems::has_operation() const
{
    for (std::size_t index=0; index<ntpq_list.len(); index++)
    {
        if(ntpq_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NtpqItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NtpqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntpq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NtpqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NtpqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ntpq-list")
    {
        auto ent_ = std::make_shared<System::NtpqItems::NtpqList>();
        ent_->parent = this;
        ntpq_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NtpqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ntpq_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NtpqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NtpqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NtpqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ntpq-list")
        return true;
    return false;
}

System::NtpqItems::NtpqList::NtpqList()
    :
    remote{YType::str, "remote"},
    tally{YType::str, "tally"},
    refid{YType::str, "refid"},
    stratum{YType::str, "stratum"},
    t{YType::str, "t"},
    when{YType::str, "when"},
    poll{YType::str, "poll"},
    reach{YType::str, "reach"},
    delay{YType::str, "delay"},
    offset{YType::str, "offset"},
    jitter{YType::str, "jitter"}
{

    yang_name = "Ntpq-list"; yang_parent_name = "ntpq-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NtpqItems::NtpqList::~NtpqList()
{
}

bool System::NtpqItems::NtpqList::has_data() const
{
    if (is_presence_container) return true;
    return remote.is_set
	|| tally.is_set
	|| refid.is_set
	|| stratum.is_set
	|| t.is_set
	|| when.is_set
	|| poll.is_set
	|| reach.is_set
	|| delay.is_set
	|| offset.is_set
	|| jitter.is_set;
}

bool System::NtpqItems::NtpqList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote.yfilter)
	|| ydk::is_set(tally.yfilter)
	|| ydk::is_set(refid.yfilter)
	|| ydk::is_set(stratum.yfilter)
	|| ydk::is_set(t.yfilter)
	|| ydk::is_set(when.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(reach.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(jitter.yfilter);
}

std::string System::NtpqItems::NtpqList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ntpq-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NtpqItems::NtpqList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ntpq-list";
    ADD_KEY_TOKEN(remote, "remote");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NtpqItems::NtpqList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());
    if (tally.is_set || is_set(tally.yfilter)) leaf_name_data.push_back(tally.get_name_leafdata());
    if (refid.is_set || is_set(refid.yfilter)) leaf_name_data.push_back(refid.get_name_leafdata());
    if (stratum.is_set || is_set(stratum.yfilter)) leaf_name_data.push_back(stratum.get_name_leafdata());
    if (t.is_set || is_set(t.yfilter)) leaf_name_data.push_back(t.get_name_leafdata());
    if (when.is_set || is_set(when.yfilter)) leaf_name_data.push_back(when.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (reach.is_set || is_set(reach.yfilter)) leaf_name_data.push_back(reach.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (jitter.is_set || is_set(jitter.yfilter)) leaf_name_data.push_back(jitter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NtpqItems::NtpqList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NtpqItems::NtpqList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NtpqItems::NtpqList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tally")
    {
        tally = value;
        tally.value_namespace = name_space;
        tally.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refid")
    {
        refid = value;
        refid.value_namespace = name_space;
        refid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stratum")
    {
        stratum = value;
        stratum.value_namespace = name_space;
        stratum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t")
    {
        t = value;
        t.value_namespace = name_space;
        t.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "when")
    {
        when = value;
        when.value_namespace = name_space;
        when.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reach")
    {
        reach = value;
        reach.value_namespace = name_space;
        reach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter")
    {
        jitter = value;
        jitter.value_namespace = name_space;
        jitter.value_namespace_prefix = name_space_prefix;
    }
}

void System::NtpqItems::NtpqList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
    if(value_path == "tally")
    {
        tally.yfilter = yfilter;
    }
    if(value_path == "refid")
    {
        refid.yfilter = yfilter;
    }
    if(value_path == "stratum")
    {
        stratum.yfilter = yfilter;
    }
    if(value_path == "t")
    {
        t.yfilter = yfilter;
    }
    if(value_path == "when")
    {
        when.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "reach")
    {
        reach.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "jitter")
    {
        jitter.yfilter = yfilter;
    }
}

bool System::NtpqItems::NtpqList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote" || name == "tally" || name == "refid" || name == "stratum" || name == "t" || name == "when" || name == "poll" || name == "reach" || name == "delay" || name == "offset" || name == "jitter")
        return true;
    return false;
}

System::AcctItems::AcctItems()
    :
    sessionnum{YType::uint32, "sessionNum"},
    sessionid{YType::uint32, "sessionId"},
    sourceid{YType::uint32, "sourceId"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "acct-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AcctItems::~AcctItems()
{
}

bool System::AcctItems::has_data() const
{
    if (is_presence_container) return true;
    return sessionnum.is_set
	|| sessionid.is_set
	|| sourceid.is_set
	|| name.is_set
	|| adminst.is_set
	|| operst.is_set;
}

bool System::AcctItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessionnum.yfilter)
	|| ydk::is_set(sessionid.yfilter)
	|| ydk::is_set(sourceid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::AcctItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AcctItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acct-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcctItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessionnum.is_set || is_set(sessionnum.yfilter)) leaf_name_data.push_back(sessionnum.get_name_leafdata());
    if (sessionid.is_set || is_set(sessionid.yfilter)) leaf_name_data.push_back(sessionid.get_name_leafdata());
    if (sourceid.is_set || is_set(sourceid.yfilter)) leaf_name_data.push_back(sourceid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AcctItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AcctItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AcctItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessionNum")
    {
        sessionnum = value;
        sessionnum.value_namespace = name_space;
        sessionnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessionId")
    {
        sessionid = value;
        sessionid.value_namespace = name_space;
        sessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceId")
    {
        sourceid = value;
        sourceid.value_namespace = name_space;
        sourceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::AcctItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessionNum")
    {
        sessionnum.yfilter = yfilter;
    }
    if(value_path == "sessionId")
    {
        sessionid.yfilter = yfilter;
    }
    if(value_path == "sourceId")
    {
        sourceid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::AcctItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessionNum" || name == "sessionId" || name == "sourceId" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::RetryItems::RetryItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    src_items(std::make_shared<System::RetryItems::SrcItems>())
{
    src_items->parent = this;

    yang_name = "retry-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RetryItems::~RetryItems()
{
}

bool System::RetryItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (src_items !=  nullptr && src_items->has_data());
}

bool System::RetryItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (src_items !=  nullptr && src_items->has_operation());
}

std::string System::RetryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RetryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RetryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RetryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "src-items")
    {
        if(src_items == nullptr)
        {
            src_items = std::make_shared<System::RetryItems::SrcItems>();
        }
        return src_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RetryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(src_items != nullptr)
    {
        _children["src-items"] = src_items;
    }

    return _children;
}

void System::RetryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::RetryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::RetryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::RetryItems::SrcItems::SrcItems()
    :
    retrysrc_list(this, {"srcdn"})
{

    yang_name = "src-items"; yang_parent_name = "retry-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RetryItems::SrcItems::~SrcItems()
{
}

bool System::RetryItems::SrcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<retrysrc_list.len(); index++)
    {
        if(retrysrc_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RetryItems::SrcItems::has_operation() const
{
    for (std::size_t index=0; index<retrysrc_list.len(); index++)
    {
        if(retrysrc_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RetryItems::SrcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/retry-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RetryItems::SrcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RetryItems::SrcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RetryItems::SrcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RetrySrc-list")
    {
        auto ent_ = std::make_shared<System::RetryItems::SrcItems::RetrySrcList>();
        ent_->parent = this;
        retrysrc_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RetryItems::SrcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : retrysrc_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RetryItems::SrcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RetryItems::SrcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RetryItems::SrcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RetrySrc-list")
        return true;
    return false;
}

System::RetryItems::SrcItems::RetrySrcList::RetrySrcList()
    :
    srcdn{YType::str, "srcDn"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    tgt_items(std::make_shared<System::RetryItems::SrcItems::RetrySrcList::TgtItems>())
{
    tgt_items->parent = this;

    yang_name = "RetrySrc-list"; yang_parent_name = "src-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RetryItems::SrcItems::RetrySrcList::~RetrySrcList()
{
}

bool System::RetryItems::SrcItems::RetrySrcList::has_data() const
{
    if (is_presence_container) return true;
    return srcdn.is_set
	|| name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (tgt_items !=  nullptr && tgt_items->has_data());
}

bool System::RetryItems::SrcItems::RetrySrcList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcdn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (tgt_items !=  nullptr && tgt_items->has_operation());
}

std::string System::RetryItems::SrcItems::RetrySrcList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/retry-items/src-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RetryItems::SrcItems::RetrySrcList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RetrySrc-list";
    ADD_KEY_TOKEN(srcdn, "srcDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RetryItems::SrcItems::RetrySrcList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcdn.is_set || is_set(srcdn.yfilter)) leaf_name_data.push_back(srcdn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RetryItems::SrcItems::RetrySrcList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tgt-items")
    {
        if(tgt_items == nullptr)
        {
            tgt_items = std::make_shared<System::RetryItems::SrcItems::RetrySrcList::TgtItems>();
        }
        return tgt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RetryItems::SrcItems::RetrySrcList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tgt_items != nullptr)
    {
        _children["tgt-items"] = tgt_items;
    }

    return _children;
}

void System::RetryItems::SrcItems::RetrySrcList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcDn")
    {
        srcdn = value;
        srcdn.value_namespace = name_space;
        srcdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::RetryItems::SrcItems::RetrySrcList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcDn")
    {
        srcdn.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::RetryItems::SrcItems::RetrySrcList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tgt-items" || name == "srcDn" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::RetryItems::SrcItems::RetrySrcList::TgtItems::TgtItems()
    :
    retrytarget_list(this, {"targetdn"})
{

    yang_name = "tgt-items"; yang_parent_name = "RetrySrc-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RetryItems::SrcItems::RetrySrcList::TgtItems::~TgtItems()
{
}

bool System::RetryItems::SrcItems::RetrySrcList::TgtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<retrytarget_list.len(); index++)
    {
        if(retrytarget_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RetryItems::SrcItems::RetrySrcList::TgtItems::has_operation() const
{
    for (std::size_t index=0; index<retrytarget_list.len(); index++)
    {
        if(retrytarget_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RetryItems::SrcItems::RetrySrcList::TgtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tgt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RetryItems::SrcItems::RetrySrcList::TgtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RetryItems::SrcItems::RetrySrcList::TgtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RetryTarget-list")
    {
        auto ent_ = std::make_shared<System::RetryItems::SrcItems::RetrySrcList::TgtItems::RetryTargetList>();
        ent_->parent = this;
        retrytarget_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RetryItems::SrcItems::RetrySrcList::TgtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : retrytarget_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RetryItems::SrcItems::RetrySrcList::TgtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RetryItems::SrcItems::RetrySrcList::TgtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RetryItems::SrcItems::RetrySrcList::TgtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RetryTarget-list")
        return true;
    return false;
}

System::RetryItems::SrcItems::RetrySrcList::TgtItems::RetryTargetList::RetryTargetList()
    :
    targetdn{YType::str, "targetDn"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "RetryTarget-list"; yang_parent_name = "tgt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RetryItems::SrcItems::RetrySrcList::TgtItems::RetryTargetList::~RetryTargetList()
{
}

bool System::RetryItems::SrcItems::RetrySrcList::TgtItems::RetryTargetList::has_data() const
{
    if (is_presence_container) return true;
    return targetdn.is_set
	|| name.is_set
	|| adminst.is_set
	|| operst.is_set;
}

bool System::RetryItems::SrcItems::RetrySrcList::TgtItems::RetryTargetList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(targetdn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::RetryItems::SrcItems::RetrySrcList::TgtItems::RetryTargetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RetryTarget-list";
    ADD_KEY_TOKEN(targetdn, "targetDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RetryItems::SrcItems::RetrySrcList::TgtItems::RetryTargetList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (targetdn.is_set || is_set(targetdn.yfilter)) leaf_name_data.push_back(targetdn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RetryItems::SrcItems::RetrySrcList::TgtItems::RetryTargetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RetryItems::SrcItems::RetrySrcList::TgtItems::RetryTargetList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RetryItems::SrcItems::RetrySrcList::TgtItems::RetryTargetList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "targetDn")
    {
        targetdn = value;
        targetdn.value_namespace = name_space;
        targetdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::RetryItems::SrcItems::RetrySrcList::TgtItems::RetryTargetList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "targetDn")
    {
        targetdn.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::RetryItems::SrcItems::RetrySrcList::TgtItems::RetryTargetList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "targetDn" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::SpanItems::SpanItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    originip_items(std::make_shared<System::SpanItems::OriginipItems>())
    , monitor_items(std::make_shared<System::SpanItems::MonitorItems>())
{
    originip_items->parent = this;
    monitor_items->parent = this;

    yang_name = "span-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SpanItems::~SpanItems()
{
}

bool System::SpanItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (originip_items !=  nullptr && originip_items->has_data())
	|| (monitor_items !=  nullptr && monitor_items->has_data());
}

bool System::SpanItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (originip_items !=  nullptr && originip_items->has_operation())
	|| (monitor_items !=  nullptr && monitor_items->has_operation());
}

std::string System::SpanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SpanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SpanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SpanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "originip-items")
    {
        if(originip_items == nullptr)
        {
            originip_items = std::make_shared<System::SpanItems::OriginipItems>();
        }
        return originip_items;
    }

    if(child_yang_name == "monitor-items")
    {
        if(monitor_items == nullptr)
        {
            monitor_items = std::make_shared<System::SpanItems::MonitorItems>();
        }
        return monitor_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SpanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(originip_items != nullptr)
    {
        _children["originip-items"] = originip_items;
    }

    if(monitor_items != nullptr)
    {
        _children["monitor-items"] = monitor_items;
    }

    return _children;
}

void System::SpanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::SpanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::SpanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originip-items" || name == "monitor-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::SpanItems::OriginipItems::OriginipItems()
    :
    originip{YType::str, "originIp"}
{

    yang_name = "originip-items"; yang_parent_name = "span-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SpanItems::OriginipItems::~OriginipItems()
{
}

bool System::SpanItems::OriginipItems::has_data() const
{
    if (is_presence_container) return true;
    return originip.is_set;
}

bool System::SpanItems::OriginipItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(originip.yfilter);
}

std::string System::SpanItems::OriginipItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/span-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SpanItems::OriginipItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SpanItems::OriginipItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originip.is_set || is_set(originip.yfilter)) leaf_name_data.push_back(originip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SpanItems::OriginipItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SpanItems::OriginipItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SpanItems::OriginipItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originIp")
    {
        originip = value;
        originip.value_namespace = name_space;
        originip.value_namespace_prefix = name_space_prefix;
    }
}

void System::SpanItems::OriginipItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originIp")
    {
        originip.yfilter = yfilter;
    }
}

bool System::SpanItems::OriginipItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originIp")
        return true;
    return false;
}

System::SpanItems::MonitorItems::MonitorItems()
    :
    monitor_list(this, {"id"})
{

    yang_name = "monitor-items"; yang_parent_name = "span-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SpanItems::MonitorItems::~MonitorItems()
{
}

bool System::SpanItems::MonitorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<monitor_list.len(); index++)
    {
        if(monitor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SpanItems::MonitorItems::has_operation() const
{
    for (std::size_t index=0; index<monitor_list.len(); index++)
    {
        if(monitor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SpanItems::MonitorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/span-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SpanItems::MonitorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SpanItems::MonitorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SpanItems::MonitorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Monitor-list")
    {
        auto ent_ = std::make_shared<System::SpanItems::MonitorItems::MonitorList>();
        ent_->parent = this;
        monitor_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SpanItems::MonitorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : monitor_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SpanItems::MonitorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SpanItems::MonitorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SpanItems::MonitorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Monitor-list")
        return true;
    return false;
}

System::SpanItems::MonitorItems::MonitorList::MonitorList()
    :
    id{YType::uint16, "id"},
    type{YType::enumeration, "type"},
    operstate{YType::enumeration, "operState"},
    configstate{YType::enumeration, "configState"},
    description{YType::str, "description"},
    vrfname{YType::str, "vrfName"},
    aclname{YType::str, "aclName"},
    mtu{YType::uint16, "mtu"},
    allowsharing{YType::boolean, "allowSharing"},
    headertype{YType::enumeration, "headerType"},
    ismarkerpacket{YType::boolean, "isMarkerPacket"},
    isfwddropsrx{YType::boolean, "isFwdDropsRx"},
    isfwddropsrxlowpriority{YType::boolean, "isFwdDropsRxLowPriority"},
    erspanid{YType::uint16, "erspanId"},
    ipttl{YType::uint16, "ipTtl"},
    ipdscp{YType::uint16, "ipDscp"},
    markerpktint{YType::uint16, "markerPktInt"},
    destinationports{YType::str, "destinationPorts"},
    destinationip{YType::str, "destinationIp"},
    sourceip{YType::str, "sourceIp"},
    shuterror{YType::uint16, "shutError"}
        ,
    srcintf_items(std::make_shared<System::SpanItems::MonitorItems::MonitorList::SrcintfItems>())
    , filter_items(std::make_shared<System::SpanItems::MonitorItems::MonitorList::FilterItems>())
    , src_items(std::make_shared<System::SpanItems::MonitorItems::MonitorList::SrcItems>())
    , srcvsan_items(std::make_shared<System::SpanItems::MonitorItems::MonitorList::SrcvsanItems>())
{
    srcintf_items->parent = this;
    filter_items->parent = this;
    src_items->parent = this;
    srcvsan_items->parent = this;

    yang_name = "Monitor-list"; yang_parent_name = "monitor-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SpanItems::MonitorItems::MonitorList::~MonitorList()
{
}

bool System::SpanItems::MonitorItems::MonitorList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| operstate.is_set
	|| configstate.is_set
	|| description.is_set
	|| vrfname.is_set
	|| aclname.is_set
	|| mtu.is_set
	|| allowsharing.is_set
	|| headertype.is_set
	|| ismarkerpacket.is_set
	|| isfwddropsrx.is_set
	|| isfwddropsrxlowpriority.is_set
	|| erspanid.is_set
	|| ipttl.is_set
	|| ipdscp.is_set
	|| markerpktint.is_set
	|| destinationports.is_set
	|| destinationip.is_set
	|| sourceip.is_set
	|| shuterror.is_set
	|| (srcintf_items !=  nullptr && srcintf_items->has_data())
	|| (filter_items !=  nullptr && filter_items->has_data())
	|| (src_items !=  nullptr && src_items->has_data())
	|| (srcvsan_items !=  nullptr && srcvsan_items->has_data());
}

bool System::SpanItems::MonitorItems::MonitorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(configstate.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(aclname.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(allowsharing.yfilter)
	|| ydk::is_set(headertype.yfilter)
	|| ydk::is_set(ismarkerpacket.yfilter)
	|| ydk::is_set(isfwddropsrx.yfilter)
	|| ydk::is_set(isfwddropsrxlowpriority.yfilter)
	|| ydk::is_set(erspanid.yfilter)
	|| ydk::is_set(ipttl.yfilter)
	|| ydk::is_set(ipdscp.yfilter)
	|| ydk::is_set(markerpktint.yfilter)
	|| ydk::is_set(destinationports.yfilter)
	|| ydk::is_set(destinationip.yfilter)
	|| ydk::is_set(sourceip.yfilter)
	|| ydk::is_set(shuterror.yfilter)
	|| (srcintf_items !=  nullptr && srcintf_items->has_operation())
	|| (filter_items !=  nullptr && filter_items->has_operation())
	|| (src_items !=  nullptr && src_items->has_operation())
	|| (srcvsan_items !=  nullptr && srcvsan_items->has_operation());
}

std::string System::SpanItems::MonitorItems::MonitorList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/span-items/monitor-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SpanItems::MonitorItems::MonitorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Monitor-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SpanItems::MonitorItems::MonitorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (configstate.is_set || is_set(configstate.yfilter)) leaf_name_data.push_back(configstate.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (aclname.is_set || is_set(aclname.yfilter)) leaf_name_data.push_back(aclname.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (allowsharing.is_set || is_set(allowsharing.yfilter)) leaf_name_data.push_back(allowsharing.get_name_leafdata());
    if (headertype.is_set || is_set(headertype.yfilter)) leaf_name_data.push_back(headertype.get_name_leafdata());
    if (ismarkerpacket.is_set || is_set(ismarkerpacket.yfilter)) leaf_name_data.push_back(ismarkerpacket.get_name_leafdata());
    if (isfwddropsrx.is_set || is_set(isfwddropsrx.yfilter)) leaf_name_data.push_back(isfwddropsrx.get_name_leafdata());
    if (isfwddropsrxlowpriority.is_set || is_set(isfwddropsrxlowpriority.yfilter)) leaf_name_data.push_back(isfwddropsrxlowpriority.get_name_leafdata());
    if (erspanid.is_set || is_set(erspanid.yfilter)) leaf_name_data.push_back(erspanid.get_name_leafdata());
    if (ipttl.is_set || is_set(ipttl.yfilter)) leaf_name_data.push_back(ipttl.get_name_leafdata());
    if (ipdscp.is_set || is_set(ipdscp.yfilter)) leaf_name_data.push_back(ipdscp.get_name_leafdata());
    if (markerpktint.is_set || is_set(markerpktint.yfilter)) leaf_name_data.push_back(markerpktint.get_name_leafdata());
    if (destinationports.is_set || is_set(destinationports.yfilter)) leaf_name_data.push_back(destinationports.get_name_leafdata());
    if (destinationip.is_set || is_set(destinationip.yfilter)) leaf_name_data.push_back(destinationip.get_name_leafdata());
    if (sourceip.is_set || is_set(sourceip.yfilter)) leaf_name_data.push_back(sourceip.get_name_leafdata());
    if (shuterror.is_set || is_set(shuterror.yfilter)) leaf_name_data.push_back(shuterror.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SpanItems::MonitorItems::MonitorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srcintf-items")
    {
        if(srcintf_items == nullptr)
        {
            srcintf_items = std::make_shared<System::SpanItems::MonitorItems::MonitorList::SrcintfItems>();
        }
        return srcintf_items;
    }

    if(child_yang_name == "filter-items")
    {
        if(filter_items == nullptr)
        {
            filter_items = std::make_shared<System::SpanItems::MonitorItems::MonitorList::FilterItems>();
        }
        return filter_items;
    }

    if(child_yang_name == "src-items")
    {
        if(src_items == nullptr)
        {
            src_items = std::make_shared<System::SpanItems::MonitorItems::MonitorList::SrcItems>();
        }
        return src_items;
    }

    if(child_yang_name == "srcvsan-items")
    {
        if(srcvsan_items == nullptr)
        {
            srcvsan_items = std::make_shared<System::SpanItems::MonitorItems::MonitorList::SrcvsanItems>();
        }
        return srcvsan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SpanItems::MonitorItems::MonitorList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(srcintf_items != nullptr)
    {
        _children["srcintf-items"] = srcintf_items;
    }

    if(filter_items != nullptr)
    {
        _children["filter-items"] = filter_items;
    }

    if(src_items != nullptr)
    {
        _children["src-items"] = src_items;
    }

    if(srcvsan_items != nullptr)
    {
        _children["srcvsan-items"] = srcvsan_items;
    }

    return _children;
}

void System::SpanItems::MonitorItems::MonitorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configState")
    {
        configstate = value;
        configstate.value_namespace = name_space;
        configstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aclName")
    {
        aclname = value;
        aclname.value_namespace = name_space;
        aclname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowSharing")
    {
        allowsharing = value;
        allowsharing.value_namespace = name_space;
        allowsharing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "headerType")
    {
        headertype = value;
        headertype.value_namespace = name_space;
        headertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isMarkerPacket")
    {
        ismarkerpacket = value;
        ismarkerpacket.value_namespace = name_space;
        ismarkerpacket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isFwdDropsRx")
    {
        isfwddropsrx = value;
        isfwddropsrx.value_namespace = name_space;
        isfwddropsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isFwdDropsRxLowPriority")
    {
        isfwddropsrxlowpriority = value;
        isfwddropsrxlowpriority.value_namespace = name_space;
        isfwddropsrxlowpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "erspanId")
    {
        erspanid = value;
        erspanid.value_namespace = name_space;
        erspanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipTtl")
    {
        ipttl = value;
        ipttl.value_namespace = name_space;
        ipttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipDscp")
    {
        ipdscp = value;
        ipdscp.value_namespace = name_space;
        ipdscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "markerPktInt")
    {
        markerpktint = value;
        markerpktint.value_namespace = name_space;
        markerpktint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destinationPorts")
    {
        destinationports = value;
        destinationports.value_namespace = name_space;
        destinationports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destinationIp")
    {
        destinationip = value;
        destinationip.value_namespace = name_space;
        destinationip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceIp")
    {
        sourceip = value;
        sourceip.value_namespace = name_space;
        sourceip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutError")
    {
        shuterror = value;
        shuterror.value_namespace = name_space;
        shuterror.value_namespace_prefix = name_space_prefix;
    }
}

void System::SpanItems::MonitorItems::MonitorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "configState")
    {
        configstate.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "aclName")
    {
        aclname.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "allowSharing")
    {
        allowsharing.yfilter = yfilter;
    }
    if(value_path == "headerType")
    {
        headertype.yfilter = yfilter;
    }
    if(value_path == "isMarkerPacket")
    {
        ismarkerpacket.yfilter = yfilter;
    }
    if(value_path == "isFwdDropsRx")
    {
        isfwddropsrx.yfilter = yfilter;
    }
    if(value_path == "isFwdDropsRxLowPriority")
    {
        isfwddropsrxlowpriority.yfilter = yfilter;
    }
    if(value_path == "erspanId")
    {
        erspanid.yfilter = yfilter;
    }
    if(value_path == "ipTtl")
    {
        ipttl.yfilter = yfilter;
    }
    if(value_path == "ipDscp")
    {
        ipdscp.yfilter = yfilter;
    }
    if(value_path == "markerPktInt")
    {
        markerpktint.yfilter = yfilter;
    }
    if(value_path == "destinationPorts")
    {
        destinationports.yfilter = yfilter;
    }
    if(value_path == "destinationIp")
    {
        destinationip.yfilter = yfilter;
    }
    if(value_path == "sourceIp")
    {
        sourceip.yfilter = yfilter;
    }
    if(value_path == "shutError")
    {
        shuterror.yfilter = yfilter;
    }
}

bool System::SpanItems::MonitorItems::MonitorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcintf-items" || name == "filter-items" || name == "src-items" || name == "srcvsan-items" || name == "id" || name == "type" || name == "operState" || name == "configState" || name == "description" || name == "vrfName" || name == "aclName" || name == "mtu" || name == "allowSharing" || name == "headerType" || name == "isMarkerPacket" || name == "isFwdDropsRx" || name == "isFwdDropsRxLowPriority" || name == "erspanId" || name == "ipTtl" || name == "ipDscp" || name == "markerPktInt" || name == "destinationPorts" || name == "destinationIp" || name == "sourceIp" || name == "shutError")
        return true;
    return false;
}

System::SpanItems::MonitorItems::MonitorList::SrcintfItems::SrcintfItems()
    :
    sourceintf_list(this, {"id"})
{

    yang_name = "srcintf-items"; yang_parent_name = "Monitor-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SpanItems::MonitorItems::MonitorList::SrcintfItems::~SrcintfItems()
{
}

bool System::SpanItems::MonitorItems::MonitorList::SrcintfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sourceintf_list.len(); index++)
    {
        if(sourceintf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SpanItems::MonitorItems::MonitorList::SrcintfItems::has_operation() const
{
    for (std::size_t index=0; index<sourceintf_list.len(); index++)
    {
        if(sourceintf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SpanItems::MonitorItems::MonitorList::SrcintfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srcintf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SpanItems::MonitorItems::MonitorList::SrcintfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SpanItems::MonitorItems::MonitorList::SrcintfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SourceIntf-list")
    {
        auto ent_ = std::make_shared<System::SpanItems::MonitorItems::MonitorList::SrcintfItems::SourceIntfList>();
        ent_->parent = this;
        sourceintf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SpanItems::MonitorItems::MonitorList::SrcintfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sourceintf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SpanItems::MonitorItems::MonitorList::SrcintfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SpanItems::MonitorItems::MonitorList::SrcintfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SpanItems::MonitorItems::MonitorList::SrcintfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SourceIntf-list")
        return true;
    return false;
}

System::SpanItems::MonitorItems::MonitorList::SrcintfItems::SourceIntfList::SourceIntfList()
    :
    id{YType::str, "id"},
    direction{YType::enumeration, "direction"},
    error{YType::uint16, "error"}
{

    yang_name = "SourceIntf-list"; yang_parent_name = "srcintf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SpanItems::MonitorItems::MonitorList::SrcintfItems::SourceIntfList::~SourceIntfList()
{
}

bool System::SpanItems::MonitorItems::MonitorList::SrcintfItems::SourceIntfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| direction.is_set
	|| error.is_set;
}

bool System::SpanItems::MonitorItems::MonitorList::SrcintfItems::SourceIntfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string System::SpanItems::MonitorItems::MonitorList::SrcintfItems::SourceIntfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SourceIntf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SpanItems::MonitorItems::MonitorList::SrcintfItems::SourceIntfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SpanItems::MonitorItems::MonitorList::SrcintfItems::SourceIntfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SpanItems::MonitorItems::MonitorList::SrcintfItems::SourceIntfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SpanItems::MonitorItems::MonitorList::SrcintfItems::SourceIntfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void System::SpanItems::MonitorItems::MonitorList::SrcintfItems::SourceIntfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool System::SpanItems::MonitorItems::MonitorList::SrcintfItems::SourceIntfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "direction" || name == "error")
        return true;
    return false;
}

System::SpanItems::MonitorItems::MonitorList::FilterItems::FilterItems()
    :
    filtervlan_list(this, {"vlan"})
{

    yang_name = "filter-items"; yang_parent_name = "Monitor-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SpanItems::MonitorItems::MonitorList::FilterItems::~FilterItems()
{
}

bool System::SpanItems::MonitorItems::MonitorList::FilterItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<filtervlan_list.len(); index++)
    {
        if(filtervlan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SpanItems::MonitorItems::MonitorList::FilterItems::has_operation() const
{
    for (std::size_t index=0; index<filtervlan_list.len(); index++)
    {
        if(filtervlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SpanItems::MonitorItems::MonitorList::FilterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SpanItems::MonitorItems::MonitorList::FilterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SpanItems::MonitorItems::MonitorList::FilterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FilterVlan-list")
    {
        auto ent_ = std::make_shared<System::SpanItems::MonitorItems::MonitorList::FilterItems::FilterVlanList>();
        ent_->parent = this;
        filtervlan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SpanItems::MonitorItems::MonitorList::FilterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : filtervlan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SpanItems::MonitorItems::MonitorList::FilterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SpanItems::MonitorItems::MonitorList::FilterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SpanItems::MonitorItems::MonitorList::FilterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FilterVlan-list")
        return true;
    return false;
}

System::SpanItems::MonitorItems::MonitorList::FilterItems::FilterVlanList::FilterVlanList()
    :
    vlan{YType::str, "vlan"}
{

    yang_name = "FilterVlan-list"; yang_parent_name = "filter-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SpanItems::MonitorItems::MonitorList::FilterItems::FilterVlanList::~FilterVlanList()
{
}

bool System::SpanItems::MonitorItems::MonitorList::FilterItems::FilterVlanList::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool System::SpanItems::MonitorItems::MonitorList::FilterItems::FilterVlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string System::SpanItems::MonitorItems::MonitorList::FilterItems::FilterVlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FilterVlan-list";
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SpanItems::MonitorItems::MonitorList::FilterItems::FilterVlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SpanItems::MonitorItems::MonitorList::FilterItems::FilterVlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SpanItems::MonitorItems::MonitorList::FilterItems::FilterVlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SpanItems::MonitorItems::MonitorList::FilterItems::FilterVlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void System::SpanItems::MonitorItems::MonitorList::FilterItems::FilterVlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool System::SpanItems::MonitorItems::MonitorList::FilterItems::FilterVlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

System::SpanItems::MonitorItems::MonitorList::SrcItems::SrcItems()
    :
    sourcevlan_list(this, {"vlan"})
{

    yang_name = "src-items"; yang_parent_name = "Monitor-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SpanItems::MonitorItems::MonitorList::SrcItems::~SrcItems()
{
}

bool System::SpanItems::MonitorItems::MonitorList::SrcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sourcevlan_list.len(); index++)
    {
        if(sourcevlan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SpanItems::MonitorItems::MonitorList::SrcItems::has_operation() const
{
    for (std::size_t index=0; index<sourcevlan_list.len(); index++)
    {
        if(sourcevlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SpanItems::MonitorItems::MonitorList::SrcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SpanItems::MonitorItems::MonitorList::SrcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SpanItems::MonitorItems::MonitorList::SrcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SourceVlan-list")
    {
        auto ent_ = std::make_shared<System::SpanItems::MonitorItems::MonitorList::SrcItems::SourceVlanList>();
        ent_->parent = this;
        sourcevlan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SpanItems::MonitorItems::MonitorList::SrcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sourcevlan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SpanItems::MonitorItems::MonitorList::SrcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SpanItems::MonitorItems::MonitorList::SrcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SpanItems::MonitorItems::MonitorList::SrcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SourceVlan-list")
        return true;
    return false;
}

System::SpanItems::MonitorItems::MonitorList::SrcItems::SourceVlanList::SourceVlanList()
    :
    vlan{YType::str, "vlan"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "SourceVlan-list"; yang_parent_name = "src-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SpanItems::MonitorItems::MonitorList::SrcItems::SourceVlanList::~SourceVlanList()
{
}

bool System::SpanItems::MonitorItems::MonitorList::SrcItems::SourceVlanList::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| direction.is_set;
}

bool System::SpanItems::MonitorItems::MonitorList::SrcItems::SourceVlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string System::SpanItems::MonitorItems::MonitorList::SrcItems::SourceVlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SourceVlan-list";
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SpanItems::MonitorItems::MonitorList::SrcItems::SourceVlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SpanItems::MonitorItems::MonitorList::SrcItems::SourceVlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SpanItems::MonitorItems::MonitorList::SrcItems::SourceVlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SpanItems::MonitorItems::MonitorList::SrcItems::SourceVlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SpanItems::MonitorItems::MonitorList::SrcItems::SourceVlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool System::SpanItems::MonitorItems::MonitorList::SrcItems::SourceVlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "direction")
        return true;
    return false;
}

System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::SrcvsanItems()
    :
    sourcevsan_list(this, {"vsan"})
{

    yang_name = "srcvsan-items"; yang_parent_name = "Monitor-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::~SrcvsanItems()
{
}

bool System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sourcevsan_list.len(); index++)
    {
        if(sourcevsan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::has_operation() const
{
    for (std::size_t index=0; index<sourcevsan_list.len(); index++)
    {
        if(sourcevsan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srcvsan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SourceVsan-list")
    {
        auto ent_ = std::make_shared<System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::SourceVsanList>();
        ent_->parent = this;
        sourcevsan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sourcevsan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SourceVsan-list")
        return true;
    return false;
}

System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::SourceVsanList::SourceVsanList()
    :
    vsan{YType::str, "vsan"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "SourceVsan-list"; yang_parent_name = "srcvsan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::SourceVsanList::~SourceVsanList()
{
}

bool System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::SourceVsanList::has_data() const
{
    if (is_presence_container) return true;
    return vsan.is_set
	|| direction.is_set;
}

bool System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::SourceVsanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vsan.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::SourceVsanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SourceVsan-list";
    ADD_KEY_TOKEN(vsan, "vsan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::SourceVsanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vsan.is_set || is_set(vsan.yfilter)) leaf_name_data.push_back(vsan.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::SourceVsanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::SourceVsanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::SourceVsanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vsan")
    {
        vsan = value;
        vsan.value_namespace = name_space;
        vsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::SourceVsanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vsan")
    {
        vsan.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::SourceVsanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsan" || name == "direction")
        return true;
    return false;
}

System::DhcpItems::DhcpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::DhcpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "dhcp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::~DhcpItems()
{
}

bool System::DhcpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::DhcpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::DhcpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::DhcpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::DhcpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::DhcpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::DhcpItems::InstItems::InstItems()
    :
    v4relayenabled{YType::boolean, "v4RelayEnabled"},
    v6relayenabled{YType::boolean, "v6RelayEnabled"},
    snoopingenabled{YType::boolean, "SnoopingEnabled"},
    snoopingverifymacaddressenabled{YType::boolean, "SnoopingVerifyMacAddressEnabled"},
    snoopinginformationoptionenabled{YType::boolean, "SnoopingInformationOptionEnabled"},
    relayinformationoptionenabled{YType::boolean, "RelayInformationOptionEnabled"},
    relayinformationoptionvpnenabled{YType::boolean, "RelayInformationOptionVpnEnabled"},
    relayinformationoptiontrustenabled{YType::boolean, "RelayInformationOptionTrustEnabled"},
    relayinformationtrustallenabled{YType::boolean, "RelayInformationTrustAllEnabled"},
    relaysuboptioncircuitidcustomizedenabled{YType::boolean, "RelaySubOptionCircuitIdCustomizedEnabled"},
    relaysuboptioncircuitidformatstring{YType::str, "RelaySubOptionCircuitIdFormatString"},
    relaysuboptiontypeciscoenabled{YType::boolean, "RelaySubOptionTypeCiscoEnabled"},
    smartrelayglobalenabled{YType::boolean, "SmartRelayGlobalEnabled"},
    ipv6relayinformationoptionvpnenabled{YType::boolean, "Ipv6RelayInformationOptionVpnEnabled"},
    ipv6relayoptiontypeciscoenabled{YType::boolean, "Ipv6RelayOptionTypeCiscoEnabled"},
    daivalidatesrc{YType::boolean, "daiValidateSrc"},
    daivalidatedst{YType::boolean, "daiValidateDst"},
    daivalidateip{YType::boolean, "daiValidateIp"},
    dailogbufentries{YType::uint16, "daiLogBufEntries"},
    pktstrictval{YType::boolean, "pktStrictVal"}
        ,
    daivlan_items(std::make_shared<System::DhcpItems::InstItems::DaivlanItems>())
    , daiif_items(std::make_shared<System::DhcpItems::InstItems::DaiifItems>())
    , clientif_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems>())
    , relayif_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems>())
    , serverif_items(std::make_shared<System::DhcpItems::InstItems::ServerifItems>())
    , srcif_items(std::make_shared<System::DhcpItems::InstItems::SrcifItems>())
    , v6srcif_items(std::make_shared<System::DhcpItems::InstItems::V6srcifItems>())
    , ipsrcbindip_items(std::make_shared<System::DhcpItems::InstItems::IpsrcbindipItems>())
    , ipsgif_items(std::make_shared<System::DhcpItems::InstItems::IpsgifItems>())
    , ipsgexvlan_items(std::make_shared<System::DhcpItems::InstItems::IpsgexvlanItems>())
    , snoopvlan_items(std::make_shared<System::DhcpItems::InstItems::SnoopvlanItems>())
    , snoopif_items(std::make_shared<System::DhcpItems::InstItems::SnoopifItems>())
{
    daivlan_items->parent = this;
    daiif_items->parent = this;
    clientif_items->parent = this;
    relayif_items->parent = this;
    serverif_items->parent = this;
    srcif_items->parent = this;
    v6srcif_items->parent = this;
    ipsrcbindip_items->parent = this;
    ipsgif_items->parent = this;
    ipsgexvlan_items->parent = this;
    snoopvlan_items->parent = this;
    snoopif_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "dhcp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::~InstItems()
{
}

bool System::DhcpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return v4relayenabled.is_set
	|| v6relayenabled.is_set
	|| snoopingenabled.is_set
	|| snoopingverifymacaddressenabled.is_set
	|| snoopinginformationoptionenabled.is_set
	|| relayinformationoptionenabled.is_set
	|| relayinformationoptionvpnenabled.is_set
	|| relayinformationoptiontrustenabled.is_set
	|| relayinformationtrustallenabled.is_set
	|| relaysuboptioncircuitidcustomizedenabled.is_set
	|| relaysuboptioncircuitidformatstring.is_set
	|| relaysuboptiontypeciscoenabled.is_set
	|| smartrelayglobalenabled.is_set
	|| ipv6relayinformationoptionvpnenabled.is_set
	|| ipv6relayoptiontypeciscoenabled.is_set
	|| daivalidatesrc.is_set
	|| daivalidatedst.is_set
	|| daivalidateip.is_set
	|| dailogbufentries.is_set
	|| pktstrictval.is_set
	|| (daivlan_items !=  nullptr && daivlan_items->has_data())
	|| (daiif_items !=  nullptr && daiif_items->has_data())
	|| (clientif_items !=  nullptr && clientif_items->has_data())
	|| (relayif_items !=  nullptr && relayif_items->has_data())
	|| (serverif_items !=  nullptr && serverif_items->has_data())
	|| (srcif_items !=  nullptr && srcif_items->has_data())
	|| (v6srcif_items !=  nullptr && v6srcif_items->has_data())
	|| (ipsrcbindip_items !=  nullptr && ipsrcbindip_items->has_data())
	|| (ipsgif_items !=  nullptr && ipsgif_items->has_data())
	|| (ipsgexvlan_items !=  nullptr && ipsgexvlan_items->has_data())
	|| (snoopvlan_items !=  nullptr && snoopvlan_items->has_data())
	|| (snoopif_items !=  nullptr && snoopif_items->has_data());
}

bool System::DhcpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(v4relayenabled.yfilter)
	|| ydk::is_set(v6relayenabled.yfilter)
	|| ydk::is_set(snoopingenabled.yfilter)
	|| ydk::is_set(snoopingverifymacaddressenabled.yfilter)
	|| ydk::is_set(snoopinginformationoptionenabled.yfilter)
	|| ydk::is_set(relayinformationoptionenabled.yfilter)
	|| ydk::is_set(relayinformationoptionvpnenabled.yfilter)
	|| ydk::is_set(relayinformationoptiontrustenabled.yfilter)
	|| ydk::is_set(relayinformationtrustallenabled.yfilter)
	|| ydk::is_set(relaysuboptioncircuitidcustomizedenabled.yfilter)
	|| ydk::is_set(relaysuboptioncircuitidformatstring.yfilter)
	|| ydk::is_set(relaysuboptiontypeciscoenabled.yfilter)
	|| ydk::is_set(smartrelayglobalenabled.yfilter)
	|| ydk::is_set(ipv6relayinformationoptionvpnenabled.yfilter)
	|| ydk::is_set(ipv6relayoptiontypeciscoenabled.yfilter)
	|| ydk::is_set(daivalidatesrc.yfilter)
	|| ydk::is_set(daivalidatedst.yfilter)
	|| ydk::is_set(daivalidateip.yfilter)
	|| ydk::is_set(dailogbufentries.yfilter)
	|| ydk::is_set(pktstrictval.yfilter)
	|| (daivlan_items !=  nullptr && daivlan_items->has_operation())
	|| (daiif_items !=  nullptr && daiif_items->has_operation())
	|| (clientif_items !=  nullptr && clientif_items->has_operation())
	|| (relayif_items !=  nullptr && relayif_items->has_operation())
	|| (serverif_items !=  nullptr && serverif_items->has_operation())
	|| (srcif_items !=  nullptr && srcif_items->has_operation())
	|| (v6srcif_items !=  nullptr && v6srcif_items->has_operation())
	|| (ipsrcbindip_items !=  nullptr && ipsrcbindip_items->has_operation())
	|| (ipsgif_items !=  nullptr && ipsgif_items->has_operation())
	|| (ipsgexvlan_items !=  nullptr && ipsgexvlan_items->has_operation())
	|| (snoopvlan_items !=  nullptr && snoopvlan_items->has_operation())
	|| (snoopif_items !=  nullptr && snoopif_items->has_operation());
}

std::string System::DhcpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v4relayenabled.is_set || is_set(v4relayenabled.yfilter)) leaf_name_data.push_back(v4relayenabled.get_name_leafdata());
    if (v6relayenabled.is_set || is_set(v6relayenabled.yfilter)) leaf_name_data.push_back(v6relayenabled.get_name_leafdata());
    if (snoopingenabled.is_set || is_set(snoopingenabled.yfilter)) leaf_name_data.push_back(snoopingenabled.get_name_leafdata());
    if (snoopingverifymacaddressenabled.is_set || is_set(snoopingverifymacaddressenabled.yfilter)) leaf_name_data.push_back(snoopingverifymacaddressenabled.get_name_leafdata());
    if (snoopinginformationoptionenabled.is_set || is_set(snoopinginformationoptionenabled.yfilter)) leaf_name_data.push_back(snoopinginformationoptionenabled.get_name_leafdata());
    if (relayinformationoptionenabled.is_set || is_set(relayinformationoptionenabled.yfilter)) leaf_name_data.push_back(relayinformationoptionenabled.get_name_leafdata());
    if (relayinformationoptionvpnenabled.is_set || is_set(relayinformationoptionvpnenabled.yfilter)) leaf_name_data.push_back(relayinformationoptionvpnenabled.get_name_leafdata());
    if (relayinformationoptiontrustenabled.is_set || is_set(relayinformationoptiontrustenabled.yfilter)) leaf_name_data.push_back(relayinformationoptiontrustenabled.get_name_leafdata());
    if (relayinformationtrustallenabled.is_set || is_set(relayinformationtrustallenabled.yfilter)) leaf_name_data.push_back(relayinformationtrustallenabled.get_name_leafdata());
    if (relaysuboptioncircuitidcustomizedenabled.is_set || is_set(relaysuboptioncircuitidcustomizedenabled.yfilter)) leaf_name_data.push_back(relaysuboptioncircuitidcustomizedenabled.get_name_leafdata());
    if (relaysuboptioncircuitidformatstring.is_set || is_set(relaysuboptioncircuitidformatstring.yfilter)) leaf_name_data.push_back(relaysuboptioncircuitidformatstring.get_name_leafdata());
    if (relaysuboptiontypeciscoenabled.is_set || is_set(relaysuboptiontypeciscoenabled.yfilter)) leaf_name_data.push_back(relaysuboptiontypeciscoenabled.get_name_leafdata());
    if (smartrelayglobalenabled.is_set || is_set(smartrelayglobalenabled.yfilter)) leaf_name_data.push_back(smartrelayglobalenabled.get_name_leafdata());
    if (ipv6relayinformationoptionvpnenabled.is_set || is_set(ipv6relayinformationoptionvpnenabled.yfilter)) leaf_name_data.push_back(ipv6relayinformationoptionvpnenabled.get_name_leafdata());
    if (ipv6relayoptiontypeciscoenabled.is_set || is_set(ipv6relayoptiontypeciscoenabled.yfilter)) leaf_name_data.push_back(ipv6relayoptiontypeciscoenabled.get_name_leafdata());
    if (daivalidatesrc.is_set || is_set(daivalidatesrc.yfilter)) leaf_name_data.push_back(daivalidatesrc.get_name_leafdata());
    if (daivalidatedst.is_set || is_set(daivalidatedst.yfilter)) leaf_name_data.push_back(daivalidatedst.get_name_leafdata());
    if (daivalidateip.is_set || is_set(daivalidateip.yfilter)) leaf_name_data.push_back(daivalidateip.get_name_leafdata());
    if (dailogbufentries.is_set || is_set(dailogbufentries.yfilter)) leaf_name_data.push_back(dailogbufentries.get_name_leafdata());
    if (pktstrictval.is_set || is_set(pktstrictval.yfilter)) leaf_name_data.push_back(pktstrictval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daivlan-items")
    {
        if(daivlan_items == nullptr)
        {
            daivlan_items = std::make_shared<System::DhcpItems::InstItems::DaivlanItems>();
        }
        return daivlan_items;
    }

    if(child_yang_name == "daiif-items")
    {
        if(daiif_items == nullptr)
        {
            daiif_items = std::make_shared<System::DhcpItems::InstItems::DaiifItems>();
        }
        return daiif_items;
    }

    if(child_yang_name == "clientif-items")
    {
        if(clientif_items == nullptr)
        {
            clientif_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems>();
        }
        return clientif_items;
    }

    if(child_yang_name == "relayif-items")
    {
        if(relayif_items == nullptr)
        {
            relayif_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems>();
        }
        return relayif_items;
    }

    if(child_yang_name == "serverif-items")
    {
        if(serverif_items == nullptr)
        {
            serverif_items = std::make_shared<System::DhcpItems::InstItems::ServerifItems>();
        }
        return serverif_items;
    }

    if(child_yang_name == "srcif-items")
    {
        if(srcif_items == nullptr)
        {
            srcif_items = std::make_shared<System::DhcpItems::InstItems::SrcifItems>();
        }
        return srcif_items;
    }

    if(child_yang_name == "v6srcif-items")
    {
        if(v6srcif_items == nullptr)
        {
            v6srcif_items = std::make_shared<System::DhcpItems::InstItems::V6srcifItems>();
        }
        return v6srcif_items;
    }

    if(child_yang_name == "ipsrcbindip-items")
    {
        if(ipsrcbindip_items == nullptr)
        {
            ipsrcbindip_items = std::make_shared<System::DhcpItems::InstItems::IpsrcbindipItems>();
        }
        return ipsrcbindip_items;
    }

    if(child_yang_name == "ipsgif-items")
    {
        if(ipsgif_items == nullptr)
        {
            ipsgif_items = std::make_shared<System::DhcpItems::InstItems::IpsgifItems>();
        }
        return ipsgif_items;
    }

    if(child_yang_name == "ipsgexvlan-items")
    {
        if(ipsgexvlan_items == nullptr)
        {
            ipsgexvlan_items = std::make_shared<System::DhcpItems::InstItems::IpsgexvlanItems>();
        }
        return ipsgexvlan_items;
    }

    if(child_yang_name == "snoopvlan-items")
    {
        if(snoopvlan_items == nullptr)
        {
            snoopvlan_items = std::make_shared<System::DhcpItems::InstItems::SnoopvlanItems>();
        }
        return snoopvlan_items;
    }

    if(child_yang_name == "snoopif-items")
    {
        if(snoopif_items == nullptr)
        {
            snoopif_items = std::make_shared<System::DhcpItems::InstItems::SnoopifItems>();
        }
        return snoopif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daivlan_items != nullptr)
    {
        _children["daivlan-items"] = daivlan_items;
    }

    if(daiif_items != nullptr)
    {
        _children["daiif-items"] = daiif_items;
    }

    if(clientif_items != nullptr)
    {
        _children["clientif-items"] = clientif_items;
    }

    if(relayif_items != nullptr)
    {
        _children["relayif-items"] = relayif_items;
    }

    if(serverif_items != nullptr)
    {
        _children["serverif-items"] = serverif_items;
    }

    if(srcif_items != nullptr)
    {
        _children["srcif-items"] = srcif_items;
    }

    if(v6srcif_items != nullptr)
    {
        _children["v6srcif-items"] = v6srcif_items;
    }

    if(ipsrcbindip_items != nullptr)
    {
        _children["ipsrcbindip-items"] = ipsrcbindip_items;
    }

    if(ipsgif_items != nullptr)
    {
        _children["ipsgif-items"] = ipsgif_items;
    }

    if(ipsgexvlan_items != nullptr)
    {
        _children["ipsgexvlan-items"] = ipsgexvlan_items;
    }

    if(snoopvlan_items != nullptr)
    {
        _children["snoopvlan-items"] = snoopvlan_items;
    }

    if(snoopif_items != nullptr)
    {
        _children["snoopif-items"] = snoopif_items;
    }

    return _children;
}

void System::DhcpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "v4RelayEnabled")
    {
        v4relayenabled = value;
        v4relayenabled.value_namespace = name_space;
        v4relayenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6RelayEnabled")
    {
        v6relayenabled = value;
        v6relayenabled.value_namespace = name_space;
        v6relayenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SnoopingEnabled")
    {
        snoopingenabled = value;
        snoopingenabled.value_namespace = name_space;
        snoopingenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SnoopingVerifyMacAddressEnabled")
    {
        snoopingverifymacaddressenabled = value;
        snoopingverifymacaddressenabled.value_namespace = name_space;
        snoopingverifymacaddressenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SnoopingInformationOptionEnabled")
    {
        snoopinginformationoptionenabled = value;
        snoopinginformationoptionenabled.value_namespace = name_space;
        snoopinginformationoptionenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RelayInformationOptionEnabled")
    {
        relayinformationoptionenabled = value;
        relayinformationoptionenabled.value_namespace = name_space;
        relayinformationoptionenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RelayInformationOptionVpnEnabled")
    {
        relayinformationoptionvpnenabled = value;
        relayinformationoptionvpnenabled.value_namespace = name_space;
        relayinformationoptionvpnenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RelayInformationOptionTrustEnabled")
    {
        relayinformationoptiontrustenabled = value;
        relayinformationoptiontrustenabled.value_namespace = name_space;
        relayinformationoptiontrustenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RelayInformationTrustAllEnabled")
    {
        relayinformationtrustallenabled = value;
        relayinformationtrustallenabled.value_namespace = name_space;
        relayinformationtrustallenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RelaySubOptionCircuitIdCustomizedEnabled")
    {
        relaysuboptioncircuitidcustomizedenabled = value;
        relaysuboptioncircuitidcustomizedenabled.value_namespace = name_space;
        relaysuboptioncircuitidcustomizedenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RelaySubOptionCircuitIdFormatString")
    {
        relaysuboptioncircuitidformatstring = value;
        relaysuboptioncircuitidformatstring.value_namespace = name_space;
        relaysuboptioncircuitidformatstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RelaySubOptionTypeCiscoEnabled")
    {
        relaysuboptiontypeciscoenabled = value;
        relaysuboptiontypeciscoenabled.value_namespace = name_space;
        relaysuboptiontypeciscoenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SmartRelayGlobalEnabled")
    {
        smartrelayglobalenabled = value;
        smartrelayglobalenabled.value_namespace = name_space;
        smartrelayglobalenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ipv6RelayInformationOptionVpnEnabled")
    {
        ipv6relayinformationoptionvpnenabled = value;
        ipv6relayinformationoptionvpnenabled.value_namespace = name_space;
        ipv6relayinformationoptionvpnenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ipv6RelayOptionTypeCiscoEnabled")
    {
        ipv6relayoptiontypeciscoenabled = value;
        ipv6relayoptiontypeciscoenabled.value_namespace = name_space;
        ipv6relayoptiontypeciscoenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "daiValidateSrc")
    {
        daivalidatesrc = value;
        daivalidatesrc.value_namespace = name_space;
        daivalidatesrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "daiValidateDst")
    {
        daivalidatedst = value;
        daivalidatedst.value_namespace = name_space;
        daivalidatedst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "daiValidateIp")
    {
        daivalidateip = value;
        daivalidateip.value_namespace = name_space;
        daivalidateip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "daiLogBufEntries")
    {
        dailogbufentries = value;
        dailogbufentries.value_namespace = name_space;
        dailogbufentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktStrictVal")
    {
        pktstrictval = value;
        pktstrictval.value_namespace = name_space;
        pktstrictval.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "v4RelayEnabled")
    {
        v4relayenabled.yfilter = yfilter;
    }
    if(value_path == "v6RelayEnabled")
    {
        v6relayenabled.yfilter = yfilter;
    }
    if(value_path == "SnoopingEnabled")
    {
        snoopingenabled.yfilter = yfilter;
    }
    if(value_path == "SnoopingVerifyMacAddressEnabled")
    {
        snoopingverifymacaddressenabled.yfilter = yfilter;
    }
    if(value_path == "SnoopingInformationOptionEnabled")
    {
        snoopinginformationoptionenabled.yfilter = yfilter;
    }
    if(value_path == "RelayInformationOptionEnabled")
    {
        relayinformationoptionenabled.yfilter = yfilter;
    }
    if(value_path == "RelayInformationOptionVpnEnabled")
    {
        relayinformationoptionvpnenabled.yfilter = yfilter;
    }
    if(value_path == "RelayInformationOptionTrustEnabled")
    {
        relayinformationoptiontrustenabled.yfilter = yfilter;
    }
    if(value_path == "RelayInformationTrustAllEnabled")
    {
        relayinformationtrustallenabled.yfilter = yfilter;
    }
    if(value_path == "RelaySubOptionCircuitIdCustomizedEnabled")
    {
        relaysuboptioncircuitidcustomizedenabled.yfilter = yfilter;
    }
    if(value_path == "RelaySubOptionCircuitIdFormatString")
    {
        relaysuboptioncircuitidformatstring.yfilter = yfilter;
    }
    if(value_path == "RelaySubOptionTypeCiscoEnabled")
    {
        relaysuboptiontypeciscoenabled.yfilter = yfilter;
    }
    if(value_path == "SmartRelayGlobalEnabled")
    {
        smartrelayglobalenabled.yfilter = yfilter;
    }
    if(value_path == "Ipv6RelayInformationOptionVpnEnabled")
    {
        ipv6relayinformationoptionvpnenabled.yfilter = yfilter;
    }
    if(value_path == "Ipv6RelayOptionTypeCiscoEnabled")
    {
        ipv6relayoptiontypeciscoenabled.yfilter = yfilter;
    }
    if(value_path == "daiValidateSrc")
    {
        daivalidatesrc.yfilter = yfilter;
    }
    if(value_path == "daiValidateDst")
    {
        daivalidatedst.yfilter = yfilter;
    }
    if(value_path == "daiValidateIp")
    {
        daivalidateip.yfilter = yfilter;
    }
    if(value_path == "daiLogBufEntries")
    {
        dailogbufentries.yfilter = yfilter;
    }
    if(value_path == "pktStrictVal")
    {
        pktstrictval.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daivlan-items" || name == "daiif-items" || name == "clientif-items" || name == "relayif-items" || name == "serverif-items" || name == "srcif-items" || name == "v6srcif-items" || name == "ipsrcbindip-items" || name == "ipsgif-items" || name == "ipsgexvlan-items" || name == "snoopvlan-items" || name == "snoopif-items" || name == "v4RelayEnabled" || name == "v6RelayEnabled" || name == "SnoopingEnabled" || name == "SnoopingVerifyMacAddressEnabled" || name == "SnoopingInformationOptionEnabled" || name == "RelayInformationOptionEnabled" || name == "RelayInformationOptionVpnEnabled" || name == "RelayInformationOptionTrustEnabled" || name == "RelayInformationTrustAllEnabled" || name == "RelaySubOptionCircuitIdCustomizedEnabled" || name == "RelaySubOptionCircuitIdFormatString" || name == "RelaySubOptionTypeCiscoEnabled" || name == "SmartRelayGlobalEnabled" || name == "Ipv6RelayInformationOptionVpnEnabled" || name == "Ipv6RelayOptionTypeCiscoEnabled" || name == "daiValidateSrc" || name == "daiValidateDst" || name == "daiValidateIp" || name == "daiLogBufEntries" || name == "pktStrictVal")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaivlanItems::DaivlanItems()
    :
    daivlan_list(this, {"daivlannum"})
{

    yang_name = "daivlan-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::DaivlanItems::~DaivlanItems()
{
}

bool System::DhcpItems::InstItems::DaivlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<daivlan_list.len(); index++)
    {
        if(daivlan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::DaivlanItems::has_operation() const
{
    for (std::size_t index=0; index<daivlan_list.len(); index++)
    {
        if(daivlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::DaivlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::DaivlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daivlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaivlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaivlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DAIVlan-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::DaivlanItems::DAIVlanList>();
        ent_->parent = this;
        daivlan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaivlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : daivlan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::DaivlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::DaivlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::DaivlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DAIVlan-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaivlanItems::DAIVlanList::DAIVlanList()
    :
    daivlannum{YType::uint16, "daiVlanNum"},
    dailogtypeonvlan{YType::enumeration, "daiLogTypeOnVlan"}
{

    yang_name = "DAIVlan-list"; yang_parent_name = "daivlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::DaivlanItems::DAIVlanList::~DAIVlanList()
{
}

bool System::DhcpItems::InstItems::DaivlanItems::DAIVlanList::has_data() const
{
    if (is_presence_container) return true;
    return daivlannum.is_set
	|| dailogtypeonvlan.is_set;
}

bool System::DhcpItems::InstItems::DaivlanItems::DAIVlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(daivlannum.yfilter)
	|| ydk::is_set(dailogtypeonvlan.yfilter);
}

std::string System::DhcpItems::InstItems::DaivlanItems::DAIVlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/daivlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::DaivlanItems::DAIVlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DAIVlan-list";
    ADD_KEY_TOKEN(daivlannum, "daiVlanNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaivlanItems::DAIVlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (daivlannum.is_set || is_set(daivlannum.yfilter)) leaf_name_data.push_back(daivlannum.get_name_leafdata());
    if (dailogtypeonvlan.is_set || is_set(dailogtypeonvlan.yfilter)) leaf_name_data.push_back(dailogtypeonvlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaivlanItems::DAIVlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaivlanItems::DAIVlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::DaivlanItems::DAIVlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "daiVlanNum")
    {
        daivlannum = value;
        daivlannum.value_namespace = name_space;
        daivlannum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "daiLogTypeOnVlan")
    {
        dailogtypeonvlan = value;
        dailogtypeonvlan.value_namespace = name_space;
        dailogtypeonvlan.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::DaivlanItems::DAIVlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "daiVlanNum")
    {
        daivlannum.yfilter = yfilter;
    }
    if(value_path == "daiLogTypeOnVlan")
    {
        dailogtypeonvlan.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::DaivlanItems::DAIVlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daiVlanNum" || name == "daiLogTypeOnVlan")
        return true;
    return false;
}


}
}

