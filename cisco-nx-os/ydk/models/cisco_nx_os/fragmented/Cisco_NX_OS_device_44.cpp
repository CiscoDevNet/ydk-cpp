
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_44.hpp"
#include "Cisco_NX_OS_device_45.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventhistItems()
    :
    eventhistory_list(this, {"type"})
{

    yang_name = "eventhist-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::~EventhistItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::has_operation() const
{
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventhist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventHistory-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList>();
        ent_->parent = this;
        eventhistory_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eventhistory_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EventHistory-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::EventHistoryList()
    :
    type{YType::enumeration, "type"},
    size{YType::uint32, "size"}
{

    yang_name = "EventHistory-list"; yang_parent_name = "eventhist-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::~EventHistoryList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| size.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EventHistory-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "size")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : if_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    dr{YType::str, "dr"},
    nbrholdtime{YType::uint32, "nbrHoldTime"},
    genid{YType::uint32, "genID"},
    nexthello{YType::str, "nextHello"},
    ipaddr{YType::str, "ipAddr"},
    ifname{YType::str, "ifName"},
    drprio{YType::uint32, "drPrio"},
    drdelay{YType::uint16, "drDelay"},
    jprtmap{YType::str, "jpRtMap"},
    neighrtmap{YType::str, "neighRtMap"},
    neighpfxlist{YType::str, "neighpfxList"},
    border{YType::boolean, "border"},
    passive{YType::boolean, "passive"},
    rteppdn{YType::str, "rtEpPDn"},
    bfdinst{YType::enumeration, "bfdInst"},
    pimsparsemode{YType::boolean, "pimSparseMode"}
        ,
    adj_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems>())
    , db_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems>())
    , jp_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems>())
    , hello_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems>())
    , trstats_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems>())
    , rtvrfmbr_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    adj_items->parent = this;
    db_items->parent = this;
    jp_items->parent = this;
    hello_items->parent = this;
    trstats_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| dr.is_set
	|| nbrholdtime.is_set
	|| genid.is_set
	|| nexthello.is_set
	|| ipaddr.is_set
	|| ifname.is_set
	|| drprio.is_set
	|| drdelay.is_set
	|| jprtmap.is_set
	|| neighrtmap.is_set
	|| neighpfxlist.is_set
	|| border.is_set
	|| passive.is_set
	|| rteppdn.is_set
	|| bfdinst.is_set
	|| pimsparsemode.is_set
	|| (adj_items !=  nullptr && adj_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (jp_items !=  nullptr && jp_items->has_data())
	|| (hello_items !=  nullptr && hello_items->has_data())
	|| (trstats_items !=  nullptr && trstats_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(nbrholdtime.yfilter)
	|| ydk::is_set(genid.yfilter)
	|| ydk::is_set(nexthello.yfilter)
	|| ydk::is_set(ipaddr.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(drprio.yfilter)
	|| ydk::is_set(drdelay.yfilter)
	|| ydk::is_set(jprtmap.yfilter)
	|| ydk::is_set(neighrtmap.yfilter)
	|| ydk::is_set(neighpfxlist.yfilter)
	|| ydk::is_set(border.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(rteppdn.yfilter)
	|| ydk::is_set(bfdinst.yfilter)
	|| ydk::is_set(pimsparsemode.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (jp_items !=  nullptr && jp_items->has_operation())
	|| (hello_items !=  nullptr && hello_items->has_operation())
	|| (trstats_items !=  nullptr && trstats_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (nbrholdtime.is_set || is_set(nbrholdtime.yfilter)) leaf_name_data.push_back(nbrholdtime.get_name_leafdata());
    if (genid.is_set || is_set(genid.yfilter)) leaf_name_data.push_back(genid.get_name_leafdata());
    if (nexthello.is_set || is_set(nexthello.yfilter)) leaf_name_data.push_back(nexthello.get_name_leafdata());
    if (ipaddr.is_set || is_set(ipaddr.yfilter)) leaf_name_data.push_back(ipaddr.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (drprio.is_set || is_set(drprio.yfilter)) leaf_name_data.push_back(drprio.get_name_leafdata());
    if (drdelay.is_set || is_set(drdelay.yfilter)) leaf_name_data.push_back(drdelay.get_name_leafdata());
    if (jprtmap.is_set || is_set(jprtmap.yfilter)) leaf_name_data.push_back(jprtmap.get_name_leafdata());
    if (neighrtmap.is_set || is_set(neighrtmap.yfilter)) leaf_name_data.push_back(neighrtmap.get_name_leafdata());
    if (neighpfxlist.is_set || is_set(neighpfxlist.yfilter)) leaf_name_data.push_back(neighpfxlist.get_name_leafdata());
    if (border.is_set || is_set(border.yfilter)) leaf_name_data.push_back(border.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (rteppdn.is_set || is_set(rteppdn.yfilter)) leaf_name_data.push_back(rteppdn.get_name_leafdata());
    if (bfdinst.is_set || is_set(bfdinst.yfilter)) leaf_name_data.push_back(bfdinst.get_name_leafdata());
    if (pimsparsemode.is_set || is_set(pimsparsemode.yfilter)) leaf_name_data.push_back(pimsparsemode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems>();
        }
        return adj_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "jp-items")
    {
        if(jp_items == nullptr)
        {
            jp_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems>();
        }
        return jp_items;
    }

    if(child_yang_name == "hello-items")
    {
        if(hello_items == nullptr)
        {
            hello_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems>();
        }
        return hello_items;
    }

    if(child_yang_name == "trstats-items")
    {
        if(trstats_items == nullptr)
        {
            trstats_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems>();
        }
        return trstats_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adj_items != nullptr)
    {
        _children["adj-items"] = adj_items;
    }

    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(jp_items != nullptr)
    {
        _children["jp-items"] = jp_items;
    }

    if(hello_items != nullptr)
    {
        _children["hello-items"] = hello_items;
    }

    if(trstats_items != nullptr)
    {
        _children["trstats-items"] = trstats_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbrHoldTime")
    {
        nbrholdtime = value;
        nbrholdtime.value_namespace = name_space;
        nbrholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "genID")
    {
        genid = value;
        genid.value_namespace = name_space;
        genid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextHello")
    {
        nexthello = value;
        nexthello.value_namespace = name_space;
        nexthello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddr")
    {
        ipaddr = value;
        ipaddr.value_namespace = name_space;
        ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifName")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drPrio")
    {
        drprio = value;
        drprio.value_namespace = name_space;
        drprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drDelay")
    {
        drdelay = value;
        drdelay.value_namespace = name_space;
        drdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpRtMap")
    {
        jprtmap = value;
        jprtmap.value_namespace = name_space;
        jprtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighRtMap")
    {
        neighrtmap = value;
        neighrtmap.value_namespace = name_space;
        neighrtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighpfxList")
    {
        neighpfxlist = value;
        neighpfxlist.value_namespace = name_space;
        neighpfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "border")
    {
        border = value;
        border.value_namespace = name_space;
        border.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtEpPDn")
    {
        rteppdn = value;
        rteppdn.value_namespace = name_space;
        rteppdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdInst")
    {
        bfdinst = value;
        bfdinst.value_namespace = name_space;
        bfdinst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimSparseMode")
    {
        pimsparsemode = value;
        pimsparsemode.value_namespace = name_space;
        pimsparsemode.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "nbrHoldTime")
    {
        nbrholdtime.yfilter = yfilter;
    }
    if(value_path == "genID")
    {
        genid.yfilter = yfilter;
    }
    if(value_path == "nextHello")
    {
        nexthello.yfilter = yfilter;
    }
    if(value_path == "ipAddr")
    {
        ipaddr.yfilter = yfilter;
    }
    if(value_path == "ifName")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "drPrio")
    {
        drprio.yfilter = yfilter;
    }
    if(value_path == "drDelay")
    {
        drdelay.yfilter = yfilter;
    }
    if(value_path == "jpRtMap")
    {
        jprtmap.yfilter = yfilter;
    }
    if(value_path == "neighRtMap")
    {
        neighrtmap.yfilter = yfilter;
    }
    if(value_path == "neighpfxList")
    {
        neighpfxlist.yfilter = yfilter;
    }
    if(value_path == "border")
    {
        border.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "rtEpPDn")
    {
        rteppdn.yfilter = yfilter;
    }
    if(value_path == "bfdInst")
    {
        bfdinst.yfilter = yfilter;
    }
    if(value_path == "pimSparseMode")
    {
        pimsparsemode.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "db-items" || name == "jp-items" || name == "hello-items" || name == "trstats-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "ctrl" || name == "dr" || name == "nbrHoldTime" || name == "genID" || name == "nextHello" || name == "ipAddr" || name == "ifName" || name == "drPrio" || name == "drDelay" || name == "jpRtMap" || name == "neighRtMap" || name == "neighpfxList" || name == "border" || name == "passive" || name == "rtEpPDn" || name == "bfdInst" || name == "pimSparseMode")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjItems()
    :
    adjep_list(this, {"addr"})
{

    yang_name = "adj-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::~AdjItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList>();
        ent_->parent = this;
        adjep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : adjep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    nbrname{YType::str, "nbrName"},
    drprio{YType::uint32, "drPrio"},
    learntime{YType::str, "learnTime"},
    expirytime{YType::str, "expiryTime"},
    genid{YType::uint32, "genId"},
    bfdst{YType::enumeration, "bfdSt"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"}
{

    yang_name = "AdjEp-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::~AdjEpList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| nbrname.is_set
	|| drprio.is_set
	|| learntime.is_set
	|| expirytime.is_set
	|| genid.is_set
	|| bfdst.is_set
	|| operst.is_set
	|| flags.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(nbrname.yfilter)
	|| ydk::is_set(drprio.yfilter)
	|| ydk::is_set(learntime.yfilter)
	|| ydk::is_set(expirytime.yfilter)
	|| ydk::is_set(genid.yfilter)
	|| ydk::is_set(bfdst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (nbrname.is_set || is_set(nbrname.yfilter)) leaf_name_data.push_back(nbrname.get_name_leafdata());
    if (drprio.is_set || is_set(drprio.yfilter)) leaf_name_data.push_back(drprio.get_name_leafdata());
    if (learntime.is_set || is_set(learntime.yfilter)) leaf_name_data.push_back(learntime.get_name_leafdata());
    if (expirytime.is_set || is_set(expirytime.yfilter)) leaf_name_data.push_back(expirytime.get_name_leafdata());
    if (genid.is_set || is_set(genid.yfilter)) leaf_name_data.push_back(genid.get_name_leafdata());
    if (bfdst.is_set || is_set(bfdst.yfilter)) leaf_name_data.push_back(bfdst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbrName")
    {
        nbrname = value;
        nbrname.value_namespace = name_space;
        nbrname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drPrio")
    {
        drprio = value;
        drprio.value_namespace = name_space;
        drprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learnTime")
    {
        learntime = value;
        learntime.value_namespace = name_space;
        learntime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiryTime")
    {
        expirytime = value;
        expirytime.value_namespace = name_space;
        expirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "genId")
    {
        genid = value;
        genid.value_namespace = name_space;
        genid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdSt")
    {
        bfdst = value;
        bfdst.value_namespace = name_space;
        bfdst.value_namespace_prefix = name_space_prefix;
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
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "nbrName")
    {
        nbrname.yfilter = yfilter;
    }
    if(value_path == "drPrio")
    {
        drprio.yfilter = yfilter;
    }
    if(value_path == "learnTime")
    {
        learntime.yfilter = yfilter;
    }
    if(value_path == "expiryTime")
    {
        expirytime.yfilter = yfilter;
    }
    if(value_path == "genId")
    {
        genid.yfilter = yfilter;
    }
    if(value_path == "bfdSt")
    {
        bfdst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "nbrName" || name == "drPrio" || name == "learnTime" || name == "expiryTime" || name == "genId" || name == "bfdSt" || name == "operSt" || name == "flags")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::~DbItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : db_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    bf_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems>())
    , embedrp_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems>())
    , syslog_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems>())
    , vrf_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems>())
{
    bf_items->parent = this;
    embedrp_items->parent = this;
    syslog_items->parent = this;
    vrf_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::~DbList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (bf_items !=  nullptr && bf_items->has_data())
	|| (embedrp_items !=  nullptr && embedrp_items->has_data())
	|| (syslog_items !=  nullptr && syslog_items->has_data())
	|| (vrf_items !=  nullptr && vrf_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (bf_items !=  nullptr && bf_items->has_operation())
	|| (embedrp_items !=  nullptr && embedrp_items->has_operation())
	|| (syslog_items !=  nullptr && syslog_items->has_operation())
	|| (vrf_items !=  nullptr && vrf_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bf-items")
    {
        if(bf_items == nullptr)
        {
            bf_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems>();
        }
        return bf_items;
    }

    if(child_yang_name == "embedrp-items")
    {
        if(embedrp_items == nullptr)
        {
            embedrp_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems>();
        }
        return embedrp_items;
    }

    if(child_yang_name == "syslog-items")
    {
        if(syslog_items == nullptr)
        {
            syslog_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems>();
        }
        return syslog_items;
    }

    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems>();
        }
        return vrf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bf_items != nullptr)
    {
        _children["bf-items"] = bf_items;
    }

    if(embedrp_items != nullptr)
    {
        _children["embedrp-items"] = embedrp_items;
    }

    if(syslog_items != nullptr)
    {
        _children["syslog-items"] = syslog_items;
    }

    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bf-items" || name == "embedrp-items" || name == "syslog-items" || name == "vrf-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfItems()
    :
    bfentry_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems>())
{
    bfentry_items->parent = this;

    yang_name = "bf-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::~BfItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::has_data() const
{
    if (is_presence_container) return true;
    return (bfentry_items !=  nullptr && bfentry_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::has_operation() const
{
    return is_set(yfilter)
	|| (bfentry_items !=  nullptr && bfentry_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfentry-items")
    {
        if(bfentry_items == nullptr)
        {
            bfentry_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems>();
        }
        return bfentry_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bfentry_items != nullptr)
    {
        _children["bfentry-items"] = bfentry_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfentry-items")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfentryItems()
    :
    bfentry_list(this, {"bftype"})
{

    yang_name = "bfentry-items"; yang_parent_name = "bf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::~BfentryItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bfentry_list.len(); index++)
    {
        if(bfentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::has_operation() const
{
    for (std::size_t index=0; index<bfentry_list.len(); index++)
    {
        if(bfentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfentry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BfEntry-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList>();
        ent_->parent = this;
        bfentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bfentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BfEntry-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfEntryList()
    :
    bftype{YType::str, "bfType"},
    bfattr{YType::uint32, "bfAttr"},
    bfsgmnt{YType::uint32, "bfSgmnt"},
    bfflags{YType::uint32, "bfFlags"},
    bfcompressarraysize{YType::uint32, "bfCompressArraySize"},
    bfposallocated{YType::uint32, "bfPosAllocated"}
        ,
    bfcomp_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems>())
{
    bfcomp_items->parent = this;

    yang_name = "BfEntry-list"; yang_parent_name = "bfentry-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::~BfEntryList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::has_data() const
{
    if (is_presence_container) return true;
    return bftype.is_set
	|| bfattr.is_set
	|| bfsgmnt.is_set
	|| bfflags.is_set
	|| bfcompressarraysize.is_set
	|| bfposallocated.is_set
	|| (bfcomp_items !=  nullptr && bfcomp_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bftype.yfilter)
	|| ydk::is_set(bfattr.yfilter)
	|| ydk::is_set(bfsgmnt.yfilter)
	|| ydk::is_set(bfflags.yfilter)
	|| ydk::is_set(bfcompressarraysize.yfilter)
	|| ydk::is_set(bfposallocated.yfilter)
	|| (bfcomp_items !=  nullptr && bfcomp_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BfEntry-list";
    ADD_KEY_TOKEN(bftype, "bfType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bftype.is_set || is_set(bftype.yfilter)) leaf_name_data.push_back(bftype.get_name_leafdata());
    if (bfattr.is_set || is_set(bfattr.yfilter)) leaf_name_data.push_back(bfattr.get_name_leafdata());
    if (bfsgmnt.is_set || is_set(bfsgmnt.yfilter)) leaf_name_data.push_back(bfsgmnt.get_name_leafdata());
    if (bfflags.is_set || is_set(bfflags.yfilter)) leaf_name_data.push_back(bfflags.get_name_leafdata());
    if (bfcompressarraysize.is_set || is_set(bfcompressarraysize.yfilter)) leaf_name_data.push_back(bfcompressarraysize.get_name_leafdata());
    if (bfposallocated.is_set || is_set(bfposallocated.yfilter)) leaf_name_data.push_back(bfposallocated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfcomp-items")
    {
        if(bfcomp_items == nullptr)
        {
            bfcomp_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems>();
        }
        return bfcomp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bfcomp_items != nullptr)
    {
        _children["bfcomp-items"] = bfcomp_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfType")
    {
        bftype = value;
        bftype.value_namespace = name_space;
        bftype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfAttr")
    {
        bfattr = value;
        bfattr.value_namespace = name_space;
        bfattr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfSgmnt")
    {
        bfsgmnt = value;
        bfsgmnt.value_namespace = name_space;
        bfsgmnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfFlags")
    {
        bfflags = value;
        bfflags.value_namespace = name_space;
        bfflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfCompressArraySize")
    {
        bfcompressarraysize = value;
        bfcompressarraysize.value_namespace = name_space;
        bfcompressarraysize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfPosAllocated")
    {
        bfposallocated = value;
        bfposallocated.value_namespace = name_space;
        bfposallocated.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfType")
    {
        bftype.yfilter = yfilter;
    }
    if(value_path == "bfAttr")
    {
        bfattr.yfilter = yfilter;
    }
    if(value_path == "bfSgmnt")
    {
        bfsgmnt.yfilter = yfilter;
    }
    if(value_path == "bfFlags")
    {
        bfflags.yfilter = yfilter;
    }
    if(value_path == "bfCompressArraySize")
    {
        bfcompressarraysize.yfilter = yfilter;
    }
    if(value_path == "bfPosAllocated")
    {
        bfposallocated.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfcomp-items" || name == "bfType" || name == "bfAttr" || name == "bfSgmnt" || name == "bfFlags" || name == "bfCompressArraySize" || name == "bfPosAllocated")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfcompItems()
    :
    bfcomp_list(this, {"bfidx"})
{

    yang_name = "bfcomp-items"; yang_parent_name = "BfEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::~BfcompItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bfcomp_list.len(); index++)
    {
        if(bfcomp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::has_operation() const
{
    for (std::size_t index=0; index<bfcomp_list.len(); index++)
    {
        if(bfcomp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfcomp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BfComp-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList>();
        ent_->parent = this;
        bfcomp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bfcomp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BfComp-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList::BfCompList()
    :
    bfidx{YType::uint32, "bfIdx"},
    bfcomptype{YType::str, "bfCompType"},
    bfbitpos{YType::uint32, "bfBitPos"}
{

    yang_name = "BfComp-list"; yang_parent_name = "bfcomp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList::~BfCompList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList::has_data() const
{
    if (is_presence_container) return true;
    return bfidx.is_set
	|| bfcomptype.is_set
	|| bfbitpos.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfidx.yfilter)
	|| ydk::is_set(bfcomptype.yfilter)
	|| ydk::is_set(bfbitpos.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BfComp-list";
    ADD_KEY_TOKEN(bfidx, "bfIdx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfidx.is_set || is_set(bfidx.yfilter)) leaf_name_data.push_back(bfidx.get_name_leafdata());
    if (bfcomptype.is_set || is_set(bfcomptype.yfilter)) leaf_name_data.push_back(bfcomptype.get_name_leafdata());
    if (bfbitpos.is_set || is_set(bfbitpos.yfilter)) leaf_name_data.push_back(bfbitpos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfIdx")
    {
        bfidx = value;
        bfidx.value_namespace = name_space;
        bfidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfCompType")
    {
        bfcomptype = value;
        bfcomptype.value_namespace = name_space;
        bfcomptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfBitPos")
    {
        bfbitpos = value;
        bfbitpos.value_namespace = name_space;
        bfbitpos.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfIdx")
    {
        bfidx.yfilter = yfilter;
    }
    if(value_path == "bfCompType")
    {
        bfcomptype.yfilter = yfilter;
    }
    if(value_path == "bfBitPos")
    {
        bfbitpos.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfIdx" || name == "bfCompType" || name == "bfBitPos")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::EmbedrpItems()
    :
    embedrp_list(this, {"grpaddr"})
{

    yang_name = "embedrp-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::~EmbedrpItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<embedrp_list.len(); index++)
    {
        if(embedrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::has_operation() const
{
    for (std::size_t index=0; index<embedrp_list.len(); index++)
    {
        if(embedrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "embedrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EmbedRp-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::EmbedRpList>();
        ent_->parent = this;
        embedrp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : embedrp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EmbedRp-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::EmbedRpList::EmbedRpList()
    :
    grpaddr{YType::str, "grpAddr"},
    rpaddr{YType::str, "rpAddr"},
    illegalflag{YType::boolean, "illegalFlag"},
    prefix{YType::str, "prefix"},
    prefixlen{YType::uint32, "prefixLen"},
    grpid{YType::uint32, "grpId"},
    scope{YType::uint32, "scope"},
    scopestr{YType::str, "scopeStr"},
    rpifid{YType::str, "rpIfId"}
{

    yang_name = "EmbedRp-list"; yang_parent_name = "embedrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::EmbedRpList::~EmbedRpList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::EmbedRpList::has_data() const
{
    if (is_presence_container) return true;
    return grpaddr.is_set
	|| rpaddr.is_set
	|| illegalflag.is_set
	|| prefix.is_set
	|| prefixlen.is_set
	|| grpid.is_set
	|| scope.is_set
	|| scopestr.is_set
	|| rpifid.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::EmbedRpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpaddr.yfilter)
	|| ydk::is_set(rpaddr.yfilter)
	|| ydk::is_set(illegalflag.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefixlen.yfilter)
	|| ydk::is_set(grpid.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(scopestr.yfilter)
	|| ydk::is_set(rpifid.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::EmbedRpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EmbedRp-list";
    ADD_KEY_TOKEN(grpaddr, "grpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::EmbedRpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpaddr.is_set || is_set(grpaddr.yfilter)) leaf_name_data.push_back(grpaddr.get_name_leafdata());
    if (rpaddr.is_set || is_set(rpaddr.yfilter)) leaf_name_data.push_back(rpaddr.get_name_leafdata());
    if (illegalflag.is_set || is_set(illegalflag.yfilter)) leaf_name_data.push_back(illegalflag.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefixlen.is_set || is_set(prefixlen.yfilter)) leaf_name_data.push_back(prefixlen.get_name_leafdata());
    if (grpid.is_set || is_set(grpid.yfilter)) leaf_name_data.push_back(grpid.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (scopestr.is_set || is_set(scopestr.yfilter)) leaf_name_data.push_back(scopestr.get_name_leafdata());
    if (rpifid.is_set || is_set(rpifid.yfilter)) leaf_name_data.push_back(rpifid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::EmbedRpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::EmbedRpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::EmbedRpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpAddr")
    {
        grpaddr = value;
        grpaddr.value_namespace = name_space;
        grpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpAddr")
    {
        rpaddr = value;
        rpaddr.value_namespace = name_space;
        rpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "illegalFlag")
    {
        illegalflag = value;
        illegalflag.value_namespace = name_space;
        illegalflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixLen")
    {
        prefixlen = value;
        prefixlen.value_namespace = name_space;
        prefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpId")
    {
        grpid = value;
        grpid.value_namespace = name_space;
        grpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scopeStr")
    {
        scopestr = value;
        scopestr.value_namespace = name_space;
        scopestr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpIfId")
    {
        rpifid = value;
        rpifid.value_namespace = name_space;
        rpifid.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::EmbedRpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpAddr")
    {
        grpaddr.yfilter = yfilter;
    }
    if(value_path == "rpAddr")
    {
        rpaddr.yfilter = yfilter;
    }
    if(value_path == "illegalFlag")
    {
        illegalflag.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefixLen")
    {
        prefixlen.yfilter = yfilter;
    }
    if(value_path == "grpId")
    {
        grpid.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "scopeStr")
    {
        scopestr.yfilter = yfilter;
    }
    if(value_path == "rpIfId")
    {
        rpifid.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::EmbedRpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grpAddr" || name == "rpAddr" || name == "illegalFlag" || name == "prefix" || name == "prefixLen" || name == "grpId" || name == "scope" || name == "scopeStr" || name == "rpIfId")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::SyslogItems()
    :
    syslog_list(this, {"facname"})
{

    yang_name = "syslog-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::~SyslogItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<syslog_list.len(); index++)
    {
        if(syslog_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::has_operation() const
{
    for (std::size_t index=0; index<syslog_list.len(); index++)
    {
        if(syslog_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Syslog-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::SyslogList>();
        ent_->parent = this;
        syslog_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : syslog_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Syslog-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::SyslogList::SyslogList()
    :
    facname{YType::str, "facName"},
    defloglvl{YType::uint16, "deflogLvl"},
    currloglvl{YType::uint16, "currlogLvl"}
{

    yang_name = "Syslog-list"; yang_parent_name = "syslog-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::SyslogList::~SyslogList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::SyslogList::has_data() const
{
    if (is_presence_container) return true;
    return facname.is_set
	|| defloglvl.is_set
	|| currloglvl.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::SyslogList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(facname.yfilter)
	|| ydk::is_set(defloglvl.yfilter)
	|| ydk::is_set(currloglvl.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::SyslogList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Syslog-list";
    ADD_KEY_TOKEN(facname, "facName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::SyslogList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (facname.is_set || is_set(facname.yfilter)) leaf_name_data.push_back(facname.get_name_leafdata());
    if (defloglvl.is_set || is_set(defloglvl.yfilter)) leaf_name_data.push_back(defloglvl.get_name_leafdata());
    if (currloglvl.is_set || is_set(currloglvl.yfilter)) leaf_name_data.push_back(currloglvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::SyslogList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::SyslogList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::SyslogList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "facName")
    {
        facname = value;
        facname.value_namespace = name_space;
        facname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deflogLvl")
    {
        defloglvl = value;
        defloglvl.value_namespace = name_space;
        defloglvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currlogLvl")
    {
        currloglvl = value;
        currloglvl.value_namespace = name_space;
        currloglvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::SyslogList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "facName")
    {
        facname.yfilter = yfilter;
    }
    if(value_path == "deflogLvl")
    {
        defloglvl.yfilter = yfilter;
    }
    if(value_path == "currlogLvl")
    {
        currloglvl.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::SyslogList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "facName" || name == "deflogLvl" || name == "currlogLvl")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfItems()
    :
    vrf_list(this, {"name"})
{

    yang_name = "vrf-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::~VrfItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::has_operation() const
{
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vrf-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList>();
        ent_->parent = this;
        vrf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vrf-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfList()
    :
    name{YType::str, "name"},
    cid{YType::uint32, "cid"},
    tableid{YType::str, "tableId"},
    pim6enbldintfcount{YType::uint32, "pim6EnbldIntfCount"},
    bfdenabled{YType::boolean, "bfdEnabled"},
    totalnumroutes{YType::uint32, "totalNumRoutes"}
        ,
    autorp_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems>())
    , bsr_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems>())
    , grange_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems>())
    , group_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems>())
    , ifrec_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems>())
    , rp_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems>())
    , trstats_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems>())
    , vrfdetail_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems>())
{
    autorp_items->parent = this;
    bsr_items->parent = this;
    grange_items->parent = this;
    group_items->parent = this;
    ifrec_items->parent = this;
    rp_items->parent = this;
    trstats_items->parent = this;
    vrfdetail_items->parent = this;

    yang_name = "Vrf-list"; yang_parent_name = "vrf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::~VrfList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| cid.is_set
	|| tableid.is_set
	|| pim6enbldintfcount.is_set
	|| bfdenabled.is_set
	|| totalnumroutes.is_set
	|| (autorp_items !=  nullptr && autorp_items->has_data())
	|| (bsr_items !=  nullptr && bsr_items->has_data())
	|| (grange_items !=  nullptr && grange_items->has_data())
	|| (group_items !=  nullptr && group_items->has_data())
	|| (ifrec_items !=  nullptr && ifrec_items->has_data())
	|| (rp_items !=  nullptr && rp_items->has_data())
	|| (trstats_items !=  nullptr && trstats_items->has_data())
	|| (vrfdetail_items !=  nullptr && vrfdetail_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(cid.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(pim6enbldintfcount.yfilter)
	|| ydk::is_set(bfdenabled.yfilter)
	|| ydk::is_set(totalnumroutes.yfilter)
	|| (autorp_items !=  nullptr && autorp_items->has_operation())
	|| (bsr_items !=  nullptr && bsr_items->has_operation())
	|| (grange_items !=  nullptr && grange_items->has_operation())
	|| (group_items !=  nullptr && group_items->has_operation())
	|| (ifrec_items !=  nullptr && ifrec_items->has_operation())
	|| (rp_items !=  nullptr && rp_items->has_operation())
	|| (trstats_items !=  nullptr && trstats_items->has_operation())
	|| (vrfdetail_items !=  nullptr && vrfdetail_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vrf-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cid.is_set || is_set(cid.yfilter)) leaf_name_data.push_back(cid.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (pim6enbldintfcount.is_set || is_set(pim6enbldintfcount.yfilter)) leaf_name_data.push_back(pim6enbldintfcount.get_name_leafdata());
    if (bfdenabled.is_set || is_set(bfdenabled.yfilter)) leaf_name_data.push_back(bfdenabled.get_name_leafdata());
    if (totalnumroutes.is_set || is_set(totalnumroutes.yfilter)) leaf_name_data.push_back(totalnumroutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autorp-items")
    {
        if(autorp_items == nullptr)
        {
            autorp_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems>();
        }
        return autorp_items;
    }

    if(child_yang_name == "bsr-items")
    {
        if(bsr_items == nullptr)
        {
            bsr_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems>();
        }
        return bsr_items;
    }

    if(child_yang_name == "grange-items")
    {
        if(grange_items == nullptr)
        {
            grange_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems>();
        }
        return grange_items;
    }

    if(child_yang_name == "group-items")
    {
        if(group_items == nullptr)
        {
            group_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems>();
        }
        return group_items;
    }

    if(child_yang_name == "ifrec-items")
    {
        if(ifrec_items == nullptr)
        {
            ifrec_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems>();
        }
        return ifrec_items;
    }

    if(child_yang_name == "rp-items")
    {
        if(rp_items == nullptr)
        {
            rp_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems>();
        }
        return rp_items;
    }

    if(child_yang_name == "trstats-items")
    {
        if(trstats_items == nullptr)
        {
            trstats_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems>();
        }
        return trstats_items;
    }

    if(child_yang_name == "vrfdetail-items")
    {
        if(vrfdetail_items == nullptr)
        {
            vrfdetail_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems>();
        }
        return vrfdetail_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(autorp_items != nullptr)
    {
        _children["autorp-items"] = autorp_items;
    }

    if(bsr_items != nullptr)
    {
        _children["bsr-items"] = bsr_items;
    }

    if(grange_items != nullptr)
    {
        _children["grange-items"] = grange_items;
    }

    if(group_items != nullptr)
    {
        _children["group-items"] = group_items;
    }

    if(ifrec_items != nullptr)
    {
        _children["ifrec-items"] = ifrec_items;
    }

    if(rp_items != nullptr)
    {
        _children["rp-items"] = rp_items;
    }

    if(trstats_items != nullptr)
    {
        _children["trstats-items"] = trstats_items;
    }

    if(vrfdetail_items != nullptr)
    {
        _children["vrfdetail-items"] = vrfdetail_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cid")
    {
        cid = value;
        cid.value_namespace = name_space;
        cid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6EnbldIntfCount")
    {
        pim6enbldintfcount = value;
        pim6enbldintfcount.value_namespace = name_space;
        pim6enbldintfcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdEnabled")
    {
        bfdenabled = value;
        bfdenabled.value_namespace = name_space;
        bfdenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalNumRoutes")
    {
        totalnumroutes = value;
        totalnumroutes.value_namespace = name_space;
        totalnumroutes.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "cid")
    {
        cid.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "pim6EnbldIntfCount")
    {
        pim6enbldintfcount.yfilter = yfilter;
    }
    if(value_path == "bfdEnabled")
    {
        bfdenabled.yfilter = yfilter;
    }
    if(value_path == "totalNumRoutes")
    {
        totalnumroutes.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autorp-items" || name == "bsr-items" || name == "grange-items" || name == "group-items" || name == "ifrec-items" || name == "rp-items" || name == "trstats-items" || name == "vrfdetail-items" || name == "name" || name == "cid" || name == "tableId" || name == "pim6EnbldIntfCount" || name == "bfdEnabled" || name == "totalNumRoutes")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutorpItems()
    :
    autorppinfo_list(this, {"addr"})
{

    yang_name = "autorp-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::~AutorpItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<autorppinfo_list.len(); index++)
    {
        if(autorppinfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::has_operation() const
{
    for (std::size_t index=0; index<autorppinfo_list.len(); index++)
    {
        if(autorppinfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autorp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AutoRppInfo-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList>();
        ent_->parent = this;
        autorppinfo_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : autorppinfo_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AutoRppInfo-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::AutoRppInfoList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    expiry{YType::str, "expiry"},
    uptime{YType::str, "uptime"},
    priority{YType::uint32, "priority"},
    hashmasklen{YType::uint32, "hashMaskLen"}
{

    yang_name = "AutoRppInfo-list"; yang_parent_name = "autorp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::~AutoRppInfoList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| expiry.is_set
	|| uptime.is_set
	|| priority.is_set
	|| hashmasklen.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(hashmasklen.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AutoRppInfo-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (hashmasklen.is_set || is_set(hashmasklen.yfilter)) leaf_name_data.push_back(hashmasklen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen = value;
        hashmasklen.value_namespace = name_space;
        hashmasklen.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "expiry" || name == "uptime" || name == "priority" || name == "hashMaskLen")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrItems()
    :
    bsrinfo_list(this, {"grpaddr"})
{

    yang_name = "bsr-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::~BsrItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bsrinfo_list.len(); index++)
    {
        if(bsrinfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::has_operation() const
{
    for (std::size_t index=0; index<bsrinfo_list.len(); index++)
    {
        if(bsrinfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BsrInfo-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList>();
        ent_->parent = this;
        bsrinfo_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bsrinfo_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BsrInfo-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::BsrInfoList()
    :
    grpaddr{YType::str, "grpAddr"},
    bsraddr{YType::str, "bsrAddr"},
    rpaddr{YType::str, "rpAddr"},
    hash{YType::uint32, "hash"},
    hashmasklen{YType::uint32, "hashMaskLen"},
    besthash{YType::boolean, "bestHash"}
{

    yang_name = "BsrInfo-list"; yang_parent_name = "bsr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::~BsrInfoList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::has_data() const
{
    if (is_presence_container) return true;
    return grpaddr.is_set
	|| bsraddr.is_set
	|| rpaddr.is_set
	|| hash.is_set
	|| hashmasklen.is_set
	|| besthash.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpaddr.yfilter)
	|| ydk::is_set(bsraddr.yfilter)
	|| ydk::is_set(rpaddr.yfilter)
	|| ydk::is_set(hash.yfilter)
	|| ydk::is_set(hashmasklen.yfilter)
	|| ydk::is_set(besthash.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BsrInfo-list";
    ADD_KEY_TOKEN(grpaddr, "grpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpaddr.is_set || is_set(grpaddr.yfilter)) leaf_name_data.push_back(grpaddr.get_name_leafdata());
    if (bsraddr.is_set || is_set(bsraddr.yfilter)) leaf_name_data.push_back(bsraddr.get_name_leafdata());
    if (rpaddr.is_set || is_set(rpaddr.yfilter)) leaf_name_data.push_back(rpaddr.get_name_leafdata());
    if (hash.is_set || is_set(hash.yfilter)) leaf_name_data.push_back(hash.get_name_leafdata());
    if (hashmasklen.is_set || is_set(hashmasklen.yfilter)) leaf_name_data.push_back(hashmasklen.get_name_leafdata());
    if (besthash.is_set || is_set(besthash.yfilter)) leaf_name_data.push_back(besthash.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpAddr")
    {
        grpaddr = value;
        grpaddr.value_namespace = name_space;
        grpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrAddr")
    {
        bsraddr = value;
        bsraddr.value_namespace = name_space;
        bsraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpAddr")
    {
        rpaddr = value;
        rpaddr.value_namespace = name_space;
        rpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash")
    {
        hash = value;
        hash.value_namespace = name_space;
        hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen = value;
        hashmasklen.value_namespace = name_space;
        hashmasklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestHash")
    {
        besthash = value;
        besthash.value_namespace = name_space;
        besthash.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpAddr")
    {
        grpaddr.yfilter = yfilter;
    }
    if(value_path == "bsrAddr")
    {
        bsraddr.yfilter = yfilter;
    }
    if(value_path == "rpAddr")
    {
        rpaddr.yfilter = yfilter;
    }
    if(value_path == "hash")
    {
        hash.yfilter = yfilter;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen.yfilter = yfilter;
    }
    if(value_path == "bestHash")
    {
        besthash.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grpAddr" || name == "bsrAddr" || name == "rpAddr" || name == "hash" || name == "hashMaskLen" || name == "bestHash")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::GrangeItems()
    :
    rpgrange_list(this, {"addr"})
{

    yang_name = "grange-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::~GrangeItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpgrange_list.len(); index++)
    {
        if(rpgrange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::has_operation() const
{
    for (std::size_t index=0; index<rpgrange_list.len(); index++)
    {
        if(rpgrange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RpGrange-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList>();
        ent_->parent = this;
        rpgrange_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpgrange_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RpGrange-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::RpGrangeList()
    :
    addr{YType::str, "addr"},
    rpaddr{YType::str, "rpAddr"},
    mode{YType::str, "mode"},
    usershared{YType::uint32, "userShared"}
{

    yang_name = "RpGrange-list"; yang_parent_name = "grange-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::~RpGrangeList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| rpaddr.is_set
	|| mode.is_set
	|| usershared.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(rpaddr.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(usershared.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RpGrange-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (rpaddr.is_set || is_set(rpaddr.yfilter)) leaf_name_data.push_back(rpaddr.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (usershared.is_set || is_set(usershared.yfilter)) leaf_name_data.push_back(usershared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpAddr")
    {
        rpaddr = value;
        rpaddr.value_namespace = name_space;
        rpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userShared")
    {
        usershared = value;
        usershared.value_namespace = name_space;
        usershared.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "rpAddr")
    {
        rpaddr.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "userShared")
    {
        usershared.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "rpAddr" || name == "mode" || name == "userShared")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupItems()
    :
    group_list(this, {"grpaddr"})
{

    yang_name = "group-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::~GroupItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::has_operation() const
{
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Group-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList>();
        ent_->parent = this;
        group_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Group-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::GroupList()
    :
    grpaddr{YType::str, "grpAddr"},
    grpmasklen{YType::uint32, "grpMasklen"},
    bidir{YType::boolean, "bidir"}
        ,
    source_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems>())
{
    source_items->parent = this;

    yang_name = "Group-list"; yang_parent_name = "group-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::~GroupList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::has_data() const
{
    if (is_presence_container) return true;
    return grpaddr.is_set
	|| grpmasklen.is_set
	|| bidir.is_set
	|| (source_items !=  nullptr && source_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpaddr.yfilter)
	|| ydk::is_set(grpmasklen.yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| (source_items !=  nullptr && source_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Group-list";
    ADD_KEY_TOKEN(grpaddr, "grpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpaddr.is_set || is_set(grpaddr.yfilter)) leaf_name_data.push_back(grpaddr.get_name_leafdata());
    if (grpmasklen.is_set || is_set(grpmasklen.yfilter)) leaf_name_data.push_back(grpmasklen.get_name_leafdata());
    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-items")
    {
        if(source_items == nullptr)
        {
            source_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems>();
        }
        return source_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_items != nullptr)
    {
        _children["source-items"] = source_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpAddr")
    {
        grpaddr = value;
        grpaddr.value_namespace = name_space;
        grpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpMasklen")
    {
        grpmasklen = value;
        grpmasklen.value_namespace = name_space;
        grpmasklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpAddr")
    {
        grpaddr.yfilter = yfilter;
    }
    if(value_path == "grpMasklen")
    {
        grpmasklen.yfilter = yfilter;
    }
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-items" || name == "grpAddr" || name == "grpMasklen" || name == "bidir")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceItems()
    :
    source_list(this, {"srcaddr"})
{

    yang_name = "source-items"; yang_parent_name = "Group-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::~SourceItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_operation() const
{
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Source-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList>();
        ent_->parent = this;
        source_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : source_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Source-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::SourceList()
    :
    srcaddr{YType::str, "srcAddr"},
    expiryts{YType::str, "expiryTs"},
    assertmetrics{YType::uint32, "assertMetrics"},
    assertmetricprefs{YType::uint32, "assertMetricPrefs"},
    oifcount{YType::uint32, "oifcount"},
    routeiif{YType::str, "routeIif"},
    rpfnbr{YType::str, "rpfNbr"},
    routebits{YType::str, "routeBits"},
    rttimeoutinvtl{YType::uint32, "rtTimeOutInvtl"},
    jpholdtime{YType::uint32, "jpHoldTime"}
        ,
    oif_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "Source-list"; yang_parent_name = "source-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::~SourceList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_data() const
{
    if (is_presence_container) return true;
    return srcaddr.is_set
	|| expiryts.is_set
	|| assertmetrics.is_set
	|| assertmetricprefs.is_set
	|| oifcount.is_set
	|| routeiif.is_set
	|| rpfnbr.is_set
	|| routebits.is_set
	|| rttimeoutinvtl.is_set
	|| jpholdtime.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(expiryts.yfilter)
	|| ydk::is_set(assertmetrics.yfilter)
	|| ydk::is_set(assertmetricprefs.yfilter)
	|| ydk::is_set(oifcount.yfilter)
	|| ydk::is_set(routeiif.yfilter)
	|| ydk::is_set(rpfnbr.yfilter)
	|| ydk::is_set(routebits.yfilter)
	|| ydk::is_set(rttimeoutinvtl.yfilter)
	|| ydk::is_set(jpholdtime.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Source-list";
    ADD_KEY_TOKEN(srcaddr, "srcAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (expiryts.is_set || is_set(expiryts.yfilter)) leaf_name_data.push_back(expiryts.get_name_leafdata());
    if (assertmetrics.is_set || is_set(assertmetrics.yfilter)) leaf_name_data.push_back(assertmetrics.get_name_leafdata());
    if (assertmetricprefs.is_set || is_set(assertmetricprefs.yfilter)) leaf_name_data.push_back(assertmetricprefs.get_name_leafdata());
    if (oifcount.is_set || is_set(oifcount.yfilter)) leaf_name_data.push_back(oifcount.get_name_leafdata());
    if (routeiif.is_set || is_set(routeiif.yfilter)) leaf_name_data.push_back(routeiif.get_name_leafdata());
    if (rpfnbr.is_set || is_set(rpfnbr.yfilter)) leaf_name_data.push_back(rpfnbr.get_name_leafdata());
    if (routebits.is_set || is_set(routebits.yfilter)) leaf_name_data.push_back(routebits.get_name_leafdata());
    if (rttimeoutinvtl.is_set || is_set(rttimeoutinvtl.yfilter)) leaf_name_data.push_back(rttimeoutinvtl.get_name_leafdata());
    if (jpholdtime.is_set || is_set(jpholdtime.yfilter)) leaf_name_data.push_back(jpholdtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oif_items != nullptr)
    {
        _children["oif-items"] = oif_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiryTs")
    {
        expiryts = value;
        expiryts.value_namespace = name_space;
        expiryts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertMetrics")
    {
        assertmetrics = value;
        assertmetrics.value_namespace = name_space;
        assertmetrics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertMetricPrefs")
    {
        assertmetricprefs = value;
        assertmetricprefs.value_namespace = name_space;
        assertmetricprefs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifcount")
    {
        oifcount = value;
        oifcount.value_namespace = name_space;
        oifcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeIif")
    {
        routeiif = value;
        routeiif.value_namespace = name_space;
        routeiif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr = value;
        rpfnbr.value_namespace = name_space;
        rpfnbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeBits")
    {
        routebits = value;
        routebits.value_namespace = name_space;
        routebits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtTimeOutInvtl")
    {
        rttimeoutinvtl = value;
        rttimeoutinvtl.value_namespace = name_space;
        rttimeoutinvtl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpHoldTime")
    {
        jpholdtime = value;
        jpholdtime.value_namespace = name_space;
        jpholdtime.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "expiryTs")
    {
        expiryts.yfilter = yfilter;
    }
    if(value_path == "assertMetrics")
    {
        assertmetrics.yfilter = yfilter;
    }
    if(value_path == "assertMetricPrefs")
    {
        assertmetricprefs.yfilter = yfilter;
    }
    if(value_path == "oifcount")
    {
        oifcount.yfilter = yfilter;
    }
    if(value_path == "routeIif")
    {
        routeiif.yfilter = yfilter;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr.yfilter = yfilter;
    }
    if(value_path == "routeBits")
    {
        routebits.yfilter = yfilter;
    }
    if(value_path == "rtTimeOutInvtl")
    {
        rttimeoutinvtl.yfilter = yfilter;
    }
    if(value_path == "jpHoldTime")
    {
        jpholdtime.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "srcAddr" || name == "expiryTs" || name == "assertMetrics" || name == "assertMetricPrefs" || name == "oifcount" || name == "routeIif" || name == "rpfNbr" || name == "routeBits" || name == "rtTimeOutInvtl" || name == "jpHoldTime")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifItems()
    :
    oif_list(this, {"oifname"})
{

    yang_name = "oif-items"; yang_parent_name = "Source-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::~OifItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Oif-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList>();
        ent_->parent = this;
        oif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Oif-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifList()
    :
    oifname{YType::str, "oifName"},
    oifuptime{YType::str, "oifUptime"},
    oifrpf{YType::boolean, "oifRPF"},
    oiflispencapentries{YType::uint32, "oifLispEncapEntries"}
{

    yang_name = "Oif-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::~OifList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_data() const
{
    if (is_presence_container) return true;
    return oifname.is_set
	|| oifuptime.is_set
	|| oifrpf.is_set
	|| oiflispencapentries.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oifname.yfilter)
	|| ydk::is_set(oifuptime.yfilter)
	|| ydk::is_set(oifrpf.yfilter)
	|| ydk::is_set(oiflispencapentries.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Oif-list";
    ADD_KEY_TOKEN(oifname, "oifName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oifname.is_set || is_set(oifname.yfilter)) leaf_name_data.push_back(oifname.get_name_leafdata());
    if (oifuptime.is_set || is_set(oifuptime.yfilter)) leaf_name_data.push_back(oifuptime.get_name_leafdata());
    if (oifrpf.is_set || is_set(oifrpf.yfilter)) leaf_name_data.push_back(oifrpf.get_name_leafdata());
    if (oiflispencapentries.is_set || is_set(oiflispencapentries.yfilter)) leaf_name_data.push_back(oiflispencapentries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oifName")
    {
        oifname = value;
        oifname.value_namespace = name_space;
        oifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifUptime")
    {
        oifuptime = value;
        oifuptime.value_namespace = name_space;
        oifuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifRPF")
    {
        oifrpf = value;
        oifrpf.value_namespace = name_space;
        oifrpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifLispEncapEntries")
    {
        oiflispencapentries = value;
        oiflispencapentries.value_namespace = name_space;
        oiflispencapentries.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oifName")
    {
        oifname.yfilter = yfilter;
    }
    if(value_path == "oifUptime")
    {
        oifuptime.yfilter = yfilter;
    }
    if(value_path == "oifRPF")
    {
        oifrpf.yfilter = yfilter;
    }
    if(value_path == "oifLispEncapEntries")
    {
        oiflispencapentries.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oifName" || name == "oifUptime" || name == "oifRPF" || name == "oifLispEncapEntries")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfrecItems()
    :
    ifrec_list(this, {"pim6ifname"})
{

    yang_name = "ifrec-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::~IfrecItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifrec_list.len(); index++)
    {
        if(ifrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::has_operation() const
{
    for (std::size_t index=0; index<ifrec_list.len(); index++)
    {
        if(ifrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfRec-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList>();
        ent_->parent = this;
        ifrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ifrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfRec-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfRecList()
    :
    pim6ifname{YType::str, "pim6IfName"},
    pim6dr{YType::str, "pim6Dr"},
    pim6drprio{YType::uint32, "pim6DrPrio"},
    pim6nbrholdtime{YType::uint32, "pim6NbrHoldTime"},
    pim6genid{YType::uint32, "pim6GenID"},
    pim6nexthello{YType::str, "pim6NextHello"},
    pim6ipaddr{YType::str, "pim6IpAddr"},
    pim6border{YType::boolean, "pim6Border"},
    pim6sparsemode{YType::boolean, "pim6SparseMode"}
        ,
    adjrec_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems>())
    , ifstats_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems>())
{
    adjrec_items->parent = this;
    ifstats_items->parent = this;

    yang_name = "IfRec-list"; yang_parent_name = "ifrec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::~IfRecList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::has_data() const
{
    if (is_presence_container) return true;
    return pim6ifname.is_set
	|| pim6dr.is_set
	|| pim6drprio.is_set
	|| pim6nbrholdtime.is_set
	|| pim6genid.is_set
	|| pim6nexthello.is_set
	|| pim6ipaddr.is_set
	|| pim6border.is_set
	|| pim6sparsemode.is_set
	|| (adjrec_items !=  nullptr && adjrec_items->has_data())
	|| (ifstats_items !=  nullptr && ifstats_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pim6ifname.yfilter)
	|| ydk::is_set(pim6dr.yfilter)
	|| ydk::is_set(pim6drprio.yfilter)
	|| ydk::is_set(pim6nbrholdtime.yfilter)
	|| ydk::is_set(pim6genid.yfilter)
	|| ydk::is_set(pim6nexthello.yfilter)
	|| ydk::is_set(pim6ipaddr.yfilter)
	|| ydk::is_set(pim6border.yfilter)
	|| ydk::is_set(pim6sparsemode.yfilter)
	|| (adjrec_items !=  nullptr && adjrec_items->has_operation())
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfRec-list";
    ADD_KEY_TOKEN(pim6ifname, "pim6IfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim6ifname.is_set || is_set(pim6ifname.yfilter)) leaf_name_data.push_back(pim6ifname.get_name_leafdata());
    if (pim6dr.is_set || is_set(pim6dr.yfilter)) leaf_name_data.push_back(pim6dr.get_name_leafdata());
    if (pim6drprio.is_set || is_set(pim6drprio.yfilter)) leaf_name_data.push_back(pim6drprio.get_name_leafdata());
    if (pim6nbrholdtime.is_set || is_set(pim6nbrholdtime.yfilter)) leaf_name_data.push_back(pim6nbrholdtime.get_name_leafdata());
    if (pim6genid.is_set || is_set(pim6genid.yfilter)) leaf_name_data.push_back(pim6genid.get_name_leafdata());
    if (pim6nexthello.is_set || is_set(pim6nexthello.yfilter)) leaf_name_data.push_back(pim6nexthello.get_name_leafdata());
    if (pim6ipaddr.is_set || is_set(pim6ipaddr.yfilter)) leaf_name_data.push_back(pim6ipaddr.get_name_leafdata());
    if (pim6border.is_set || is_set(pim6border.yfilter)) leaf_name_data.push_back(pim6border.get_name_leafdata());
    if (pim6sparsemode.is_set || is_set(pim6sparsemode.yfilter)) leaf_name_data.push_back(pim6sparsemode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjrec-items")
    {
        if(adjrec_items == nullptr)
        {
            adjrec_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems>();
        }
        return adjrec_items;
    }

    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems>();
        }
        return ifstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjrec_items != nullptr)
    {
        _children["adjrec-items"] = adjrec_items;
    }

    if(ifstats_items != nullptr)
    {
        _children["ifstats-items"] = ifstats_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pim6IfName")
    {
        pim6ifname = value;
        pim6ifname.value_namespace = name_space;
        pim6ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6Dr")
    {
        pim6dr = value;
        pim6dr.value_namespace = name_space;
        pim6dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6DrPrio")
    {
        pim6drprio = value;
        pim6drprio.value_namespace = name_space;
        pim6drprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6NbrHoldTime")
    {
        pim6nbrholdtime = value;
        pim6nbrholdtime.value_namespace = name_space;
        pim6nbrholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6GenID")
    {
        pim6genid = value;
        pim6genid.value_namespace = name_space;
        pim6genid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6NextHello")
    {
        pim6nexthello = value;
        pim6nexthello.value_namespace = name_space;
        pim6nexthello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6IpAddr")
    {
        pim6ipaddr = value;
        pim6ipaddr.value_namespace = name_space;
        pim6ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6Border")
    {
        pim6border = value;
        pim6border.value_namespace = name_space;
        pim6border.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6SparseMode")
    {
        pim6sparsemode = value;
        pim6sparsemode.value_namespace = name_space;
        pim6sparsemode.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pim6IfName")
    {
        pim6ifname.yfilter = yfilter;
    }
    if(value_path == "pim6Dr")
    {
        pim6dr.yfilter = yfilter;
    }
    if(value_path == "pim6DrPrio")
    {
        pim6drprio.yfilter = yfilter;
    }
    if(value_path == "pim6NbrHoldTime")
    {
        pim6nbrholdtime.yfilter = yfilter;
    }
    if(value_path == "pim6GenID")
    {
        pim6genid.yfilter = yfilter;
    }
    if(value_path == "pim6NextHello")
    {
        pim6nexthello.yfilter = yfilter;
    }
    if(value_path == "pim6IpAddr")
    {
        pim6ipaddr.yfilter = yfilter;
    }
    if(value_path == "pim6Border")
    {
        pim6border.yfilter = yfilter;
    }
    if(value_path == "pim6SparseMode")
    {
        pim6sparsemode.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjrec-items" || name == "ifstats-items" || name == "pim6IfName" || name == "pim6Dr" || name == "pim6DrPrio" || name == "pim6NbrHoldTime" || name == "pim6GenID" || name == "pim6NextHello" || name == "pim6IpAddr" || name == "pim6Border" || name == "pim6SparseMode")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjrecItems()
    :
    adjeprec_list(this, {"addr"})
{

    yang_name = "adjrec-items"; yang_parent_name = "IfRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::~AdjrecItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjeprec_list.len(); index++)
    {
        if(adjeprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::has_operation() const
{
    for (std::size_t index=0; index<adjeprec_list.len(); index++)
    {
        if(adjeprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjrec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEpRec-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList>();
        ent_->parent = this;
        adjeprec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : adjeprec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEpRec-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjEpRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    nbrname{YType::str, "nbrName"},
    drprio{YType::uint32, "drPrio"},
    learntime{YType::str, "learnTime"},
    expirytime{YType::str, "expiryTime"},
    genid{YType::uint32, "genId"},
    bfdst{YType::enumeration, "bfdSt"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"}
        ,
    adjstats_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems>())
{
    adjstats_items->parent = this;

    yang_name = "AdjEpRec-list"; yang_parent_name = "adjrec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::~AdjEpRecList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| nbrname.is_set
	|| drprio.is_set
	|| learntime.is_set
	|| expirytime.is_set
	|| genid.is_set
	|| bfdst.is_set
	|| operst.is_set
	|| flags.is_set
	|| (adjstats_items !=  nullptr && adjstats_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(nbrname.yfilter)
	|| ydk::is_set(drprio.yfilter)
	|| ydk::is_set(learntime.yfilter)
	|| ydk::is_set(expirytime.yfilter)
	|| ydk::is_set(genid.yfilter)
	|| ydk::is_set(bfdst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (adjstats_items !=  nullptr && adjstats_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEpRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (nbrname.is_set || is_set(nbrname.yfilter)) leaf_name_data.push_back(nbrname.get_name_leafdata());
    if (drprio.is_set || is_set(drprio.yfilter)) leaf_name_data.push_back(drprio.get_name_leafdata());
    if (learntime.is_set || is_set(learntime.yfilter)) leaf_name_data.push_back(learntime.get_name_leafdata());
    if (expirytime.is_set || is_set(expirytime.yfilter)) leaf_name_data.push_back(expirytime.get_name_leafdata());
    if (genid.is_set || is_set(genid.yfilter)) leaf_name_data.push_back(genid.get_name_leafdata());
    if (bfdst.is_set || is_set(bfdst.yfilter)) leaf_name_data.push_back(bfdst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjstats-items")
    {
        if(adjstats_items == nullptr)
        {
            adjstats_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems>();
        }
        return adjstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjstats_items != nullptr)
    {
        _children["adjstats-items"] = adjstats_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbrName")
    {
        nbrname = value;
        nbrname.value_namespace = name_space;
        nbrname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drPrio")
    {
        drprio = value;
        drprio.value_namespace = name_space;
        drprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learnTime")
    {
        learntime = value;
        learntime.value_namespace = name_space;
        learntime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiryTime")
    {
        expirytime = value;
        expirytime.value_namespace = name_space;
        expirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "genId")
    {
        genid = value;
        genid.value_namespace = name_space;
        genid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdSt")
    {
        bfdst = value;
        bfdst.value_namespace = name_space;
        bfdst.value_namespace_prefix = name_space_prefix;
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
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "nbrName")
    {
        nbrname.yfilter = yfilter;
    }
    if(value_path == "drPrio")
    {
        drprio.yfilter = yfilter;
    }
    if(value_path == "learnTime")
    {
        learntime.yfilter = yfilter;
    }
    if(value_path == "expiryTime")
    {
        expirytime.yfilter = yfilter;
    }
    if(value_path == "genId")
    {
        genid.yfilter = yfilter;
    }
    if(value_path == "bfdSt")
    {
        bfdst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjstats-items" || name == "addr" || name == "name" || name == "nbrName" || name == "drPrio" || name == "learnTime" || name == "expiryTime" || name == "genId" || name == "bfdSt" || name == "operSt" || name == "flags")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::AdjstatsItems()
    :
    lasthellorcvd{YType::str, "lastHelloRcvd"},
    longhelloitvl{YType::uint32, "longHelloItvl"},
    lastholdtime{YType::uint16, "lastHoldTime"},
    nonhelloexpresets{YType::uint32, "nonHelloExpResets"}
{

    yang_name = "adjstats-items"; yang_parent_name = "AdjEpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::~AdjstatsItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return lasthellorcvd.is_set
	|| longhelloitvl.is_set
	|| lastholdtime.is_set
	|| nonhelloexpresets.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lasthellorcvd.yfilter)
	|| ydk::is_set(longhelloitvl.yfilter)
	|| ydk::is_set(lastholdtime.yfilter)
	|| ydk::is_set(nonhelloexpresets.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lasthellorcvd.is_set || is_set(lasthellorcvd.yfilter)) leaf_name_data.push_back(lasthellorcvd.get_name_leafdata());
    if (longhelloitvl.is_set || is_set(longhelloitvl.yfilter)) leaf_name_data.push_back(longhelloitvl.get_name_leafdata());
    if (lastholdtime.is_set || is_set(lastholdtime.yfilter)) leaf_name_data.push_back(lastholdtime.get_name_leafdata());
    if (nonhelloexpresets.is_set || is_set(nonhelloexpresets.yfilter)) leaf_name_data.push_back(nonhelloexpresets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastHelloRcvd")
    {
        lasthellorcvd = value;
        lasthellorcvd.value_namespace = name_space;
        lasthellorcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "longHelloItvl")
    {
        longhelloitvl = value;
        longhelloitvl.value_namespace = name_space;
        longhelloitvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastHoldTime")
    {
        lastholdtime = value;
        lastholdtime.value_namespace = name_space;
        lastholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nonHelloExpResets")
    {
        nonhelloexpresets = value;
        nonhelloexpresets.value_namespace = name_space;
        nonhelloexpresets.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastHelloRcvd")
    {
        lasthellorcvd.yfilter = yfilter;
    }
    if(value_path == "longHelloItvl")
    {
        longhelloitvl.yfilter = yfilter;
    }
    if(value_path == "lastHoldTime")
    {
        lastholdtime.yfilter = yfilter;
    }
    if(value_path == "nonHelloExpResets")
    {
        nonhelloexpresets.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastHelloRcvd" || name == "longHelloItvl" || name == "lastHoldTime" || name == "nonHelloExpResets")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::IfstatsItems()
    :
    hellosent{YType::uint32, "helloSent"},
    hellorcvd{YType::uint32, "helloRcvd"},
    jpsent{YType::uint32, "jpSent"},
    jprcvd{YType::uint32, "jpRcvd"},
    assertsent{YType::uint32, "assertSent"},
    assertrcvd{YType::uint32, "assertRcvd"},
    graftssent{YType::uint32, "graftsSent"},
    graftsrcvd{YType::uint32, "graftsRcvd"},
    grftacksent{YType::uint32, "grftAckSent"},
    grftackrcvd{YType::uint32, "grftAckRcvd"},
    dfoffersent{YType::uint32, "dfOfferSent"},
    dfofferrcvd{YType::uint32, "dfOfferRcvd"},
    dfwinnersent{YType::uint32, "dfWinnerSent"},
    dfwinnerrcvd{YType::uint32, "dfWinnerRcvd"},
    dfbackoffsent{YType::uint32, "dfBackoffSent"},
    dfbackoffrcvd{YType::uint32, "dfBackoffRcvd"},
    dfpassessent{YType::uint32, "dfPassesSent"},
    dfpassesrcvd{YType::uint32, "dfPassesRcvd"},
    chksumerr{YType::uint32, "chksumErr"},
    invalidpktsent{YType::uint32, "invalidPktSent"},
    invalidpktrcvd{YType::uint32, "invalidPktRcvd"},
    authfail{YType::uint32, "authFail"},
    pktlenerr{YType::uint32, "pktLenErr"},
    badverpkt{YType::uint32, "badVerPkt"},
    pktfrmself{YType::uint32, "pktFrmSelf"},
    pktfrmnonnbr{YType::uint32, "pktFrmNonNbr"},
    pktonpassiveif{YType::uint32, "pktOnPassiveIf"},
    jprcvdonrpf{YType::uint32, "jpRcvdOnRPF"},
    joinnorp{YType::uint32, "joinNoRP"},
    joinwrongrp{YType::uint32, "joinWrongRp"},
    jpssmrcvd{YType::uint32, "jpSSMRcvd"},
    jpbidirrcvd{YType::uint32, "jpBidirRcvd"},
    jpfilterin{YType::uint32, "jpFilterIn"},
    jpfilterout{YType::uint32, "jpFilterOut"}
{

    yang_name = "ifstats-items"; yang_parent_name = "IfRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::~IfstatsItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return hellosent.is_set
	|| hellorcvd.is_set
	|| jpsent.is_set
	|| jprcvd.is_set
	|| assertsent.is_set
	|| assertrcvd.is_set
	|| graftssent.is_set
	|| graftsrcvd.is_set
	|| grftacksent.is_set
	|| grftackrcvd.is_set
	|| dfoffersent.is_set
	|| dfofferrcvd.is_set
	|| dfwinnersent.is_set
	|| dfwinnerrcvd.is_set
	|| dfbackoffsent.is_set
	|| dfbackoffrcvd.is_set
	|| dfpassessent.is_set
	|| dfpassesrcvd.is_set
	|| chksumerr.is_set
	|| invalidpktsent.is_set
	|| invalidpktrcvd.is_set
	|| authfail.is_set
	|| pktlenerr.is_set
	|| badverpkt.is_set
	|| pktfrmself.is_set
	|| pktfrmnonnbr.is_set
	|| pktonpassiveif.is_set
	|| jprcvdonrpf.is_set
	|| joinnorp.is_set
	|| joinwrongrp.is_set
	|| jpssmrcvd.is_set
	|| jpbidirrcvd.is_set
	|| jpfilterin.is_set
	|| jpfilterout.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hellosent.yfilter)
	|| ydk::is_set(hellorcvd.yfilter)
	|| ydk::is_set(jpsent.yfilter)
	|| ydk::is_set(jprcvd.yfilter)
	|| ydk::is_set(assertsent.yfilter)
	|| ydk::is_set(assertrcvd.yfilter)
	|| ydk::is_set(graftssent.yfilter)
	|| ydk::is_set(graftsrcvd.yfilter)
	|| ydk::is_set(grftacksent.yfilter)
	|| ydk::is_set(grftackrcvd.yfilter)
	|| ydk::is_set(dfoffersent.yfilter)
	|| ydk::is_set(dfofferrcvd.yfilter)
	|| ydk::is_set(dfwinnersent.yfilter)
	|| ydk::is_set(dfwinnerrcvd.yfilter)
	|| ydk::is_set(dfbackoffsent.yfilter)
	|| ydk::is_set(dfbackoffrcvd.yfilter)
	|| ydk::is_set(dfpassessent.yfilter)
	|| ydk::is_set(dfpassesrcvd.yfilter)
	|| ydk::is_set(chksumerr.yfilter)
	|| ydk::is_set(invalidpktsent.yfilter)
	|| ydk::is_set(invalidpktrcvd.yfilter)
	|| ydk::is_set(authfail.yfilter)
	|| ydk::is_set(pktlenerr.yfilter)
	|| ydk::is_set(badverpkt.yfilter)
	|| ydk::is_set(pktfrmself.yfilter)
	|| ydk::is_set(pktfrmnonnbr.yfilter)
	|| ydk::is_set(pktonpassiveif.yfilter)
	|| ydk::is_set(jprcvdonrpf.yfilter)
	|| ydk::is_set(joinnorp.yfilter)
	|| ydk::is_set(joinwrongrp.yfilter)
	|| ydk::is_set(jpssmrcvd.yfilter)
	|| ydk::is_set(jpbidirrcvd.yfilter)
	|| ydk::is_set(jpfilterin.yfilter)
	|| ydk::is_set(jpfilterout.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hellosent.is_set || is_set(hellosent.yfilter)) leaf_name_data.push_back(hellosent.get_name_leafdata());
    if (hellorcvd.is_set || is_set(hellorcvd.yfilter)) leaf_name_data.push_back(hellorcvd.get_name_leafdata());
    if (jpsent.is_set || is_set(jpsent.yfilter)) leaf_name_data.push_back(jpsent.get_name_leafdata());
    if (jprcvd.is_set || is_set(jprcvd.yfilter)) leaf_name_data.push_back(jprcvd.get_name_leafdata());
    if (assertsent.is_set || is_set(assertsent.yfilter)) leaf_name_data.push_back(assertsent.get_name_leafdata());
    if (assertrcvd.is_set || is_set(assertrcvd.yfilter)) leaf_name_data.push_back(assertrcvd.get_name_leafdata());
    if (graftssent.is_set || is_set(graftssent.yfilter)) leaf_name_data.push_back(graftssent.get_name_leafdata());
    if (graftsrcvd.is_set || is_set(graftsrcvd.yfilter)) leaf_name_data.push_back(graftsrcvd.get_name_leafdata());
    if (grftacksent.is_set || is_set(grftacksent.yfilter)) leaf_name_data.push_back(grftacksent.get_name_leafdata());
    if (grftackrcvd.is_set || is_set(grftackrcvd.yfilter)) leaf_name_data.push_back(grftackrcvd.get_name_leafdata());
    if (dfoffersent.is_set || is_set(dfoffersent.yfilter)) leaf_name_data.push_back(dfoffersent.get_name_leafdata());
    if (dfofferrcvd.is_set || is_set(dfofferrcvd.yfilter)) leaf_name_data.push_back(dfofferrcvd.get_name_leafdata());
    if (dfwinnersent.is_set || is_set(dfwinnersent.yfilter)) leaf_name_data.push_back(dfwinnersent.get_name_leafdata());
    if (dfwinnerrcvd.is_set || is_set(dfwinnerrcvd.yfilter)) leaf_name_data.push_back(dfwinnerrcvd.get_name_leafdata());
    if (dfbackoffsent.is_set || is_set(dfbackoffsent.yfilter)) leaf_name_data.push_back(dfbackoffsent.get_name_leafdata());
    if (dfbackoffrcvd.is_set || is_set(dfbackoffrcvd.yfilter)) leaf_name_data.push_back(dfbackoffrcvd.get_name_leafdata());
    if (dfpassessent.is_set || is_set(dfpassessent.yfilter)) leaf_name_data.push_back(dfpassessent.get_name_leafdata());
    if (dfpassesrcvd.is_set || is_set(dfpassesrcvd.yfilter)) leaf_name_data.push_back(dfpassesrcvd.get_name_leafdata());
    if (chksumerr.is_set || is_set(chksumerr.yfilter)) leaf_name_data.push_back(chksumerr.get_name_leafdata());
    if (invalidpktsent.is_set || is_set(invalidpktsent.yfilter)) leaf_name_data.push_back(invalidpktsent.get_name_leafdata());
    if (invalidpktrcvd.is_set || is_set(invalidpktrcvd.yfilter)) leaf_name_data.push_back(invalidpktrcvd.get_name_leafdata());
    if (authfail.is_set || is_set(authfail.yfilter)) leaf_name_data.push_back(authfail.get_name_leafdata());
    if (pktlenerr.is_set || is_set(pktlenerr.yfilter)) leaf_name_data.push_back(pktlenerr.get_name_leafdata());
    if (badverpkt.is_set || is_set(badverpkt.yfilter)) leaf_name_data.push_back(badverpkt.get_name_leafdata());
    if (pktfrmself.is_set || is_set(pktfrmself.yfilter)) leaf_name_data.push_back(pktfrmself.get_name_leafdata());
    if (pktfrmnonnbr.is_set || is_set(pktfrmnonnbr.yfilter)) leaf_name_data.push_back(pktfrmnonnbr.get_name_leafdata());
    if (pktonpassiveif.is_set || is_set(pktonpassiveif.yfilter)) leaf_name_data.push_back(pktonpassiveif.get_name_leafdata());
    if (jprcvdonrpf.is_set || is_set(jprcvdonrpf.yfilter)) leaf_name_data.push_back(jprcvdonrpf.get_name_leafdata());
    if (joinnorp.is_set || is_set(joinnorp.yfilter)) leaf_name_data.push_back(joinnorp.get_name_leafdata());
    if (joinwrongrp.is_set || is_set(joinwrongrp.yfilter)) leaf_name_data.push_back(joinwrongrp.get_name_leafdata());
    if (jpssmrcvd.is_set || is_set(jpssmrcvd.yfilter)) leaf_name_data.push_back(jpssmrcvd.get_name_leafdata());
    if (jpbidirrcvd.is_set || is_set(jpbidirrcvd.yfilter)) leaf_name_data.push_back(jpbidirrcvd.get_name_leafdata());
    if (jpfilterin.is_set || is_set(jpfilterin.yfilter)) leaf_name_data.push_back(jpfilterin.get_name_leafdata());
    if (jpfilterout.is_set || is_set(jpfilterout.yfilter)) leaf_name_data.push_back(jpfilterout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "helloSent")
    {
        hellosent = value;
        hellosent.value_namespace = name_space;
        hellosent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloRcvd")
    {
        hellorcvd = value;
        hellorcvd.value_namespace = name_space;
        hellorcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpSent")
    {
        jpsent = value;
        jpsent.value_namespace = name_space;
        jpsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpRcvd")
    {
        jprcvd = value;
        jprcvd.value_namespace = name_space;
        jprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertSent")
    {
        assertsent = value;
        assertsent.value_namespace = name_space;
        assertsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertRcvd")
    {
        assertrcvd = value;
        assertrcvd.value_namespace = name_space;
        assertrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graftsSent")
    {
        graftssent = value;
        graftssent.value_namespace = name_space;
        graftssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graftsRcvd")
    {
        graftsrcvd = value;
        graftsrcvd.value_namespace = name_space;
        graftsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grftAckSent")
    {
        grftacksent = value;
        grftacksent.value_namespace = name_space;
        grftacksent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grftAckRcvd")
    {
        grftackrcvd = value;
        grftackrcvd.value_namespace = name_space;
        grftackrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfOfferSent")
    {
        dfoffersent = value;
        dfoffersent.value_namespace = name_space;
        dfoffersent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfOfferRcvd")
    {
        dfofferrcvd = value;
        dfofferrcvd.value_namespace = name_space;
        dfofferrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfWinnerSent")
    {
        dfwinnersent = value;
        dfwinnersent.value_namespace = name_space;
        dfwinnersent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfWinnerRcvd")
    {
        dfwinnerrcvd = value;
        dfwinnerrcvd.value_namespace = name_space;
        dfwinnerrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfBackoffSent")
    {
        dfbackoffsent = value;
        dfbackoffsent.value_namespace = name_space;
        dfbackoffsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfBackoffRcvd")
    {
        dfbackoffrcvd = value;
        dfbackoffrcvd.value_namespace = name_space;
        dfbackoffrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfPassesSent")
    {
        dfpassessent = value;
        dfpassessent.value_namespace = name_space;
        dfpassessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfPassesRcvd")
    {
        dfpassesrcvd = value;
        dfpassesrcvd.value_namespace = name_space;
        dfpassesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chksumErr")
    {
        chksumerr = value;
        chksumerr.value_namespace = name_space;
        chksumerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidPktSent")
    {
        invalidpktsent = value;
        invalidpktsent.value_namespace = name_space;
        invalidpktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidPktRcvd")
    {
        invalidpktrcvd = value;
        invalidpktrcvd.value_namespace = name_space;
        invalidpktrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authFail")
    {
        authfail = value;
        authfail.value_namespace = name_space;
        authfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktLenErr")
    {
        pktlenerr = value;
        pktlenerr.value_namespace = name_space;
        pktlenerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badVerPkt")
    {
        badverpkt = value;
        badverpkt.value_namespace = name_space;
        badverpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktFrmSelf")
    {
        pktfrmself = value;
        pktfrmself.value_namespace = name_space;
        pktfrmself.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktFrmNonNbr")
    {
        pktfrmnonnbr = value;
        pktfrmnonnbr.value_namespace = name_space;
        pktfrmnonnbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktOnPassiveIf")
    {
        pktonpassiveif = value;
        pktonpassiveif.value_namespace = name_space;
        pktonpassiveif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpRcvdOnRPF")
    {
        jprcvdonrpf = value;
        jprcvdonrpf.value_namespace = name_space;
        jprcvdonrpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "joinNoRP")
    {
        joinnorp = value;
        joinnorp.value_namespace = name_space;
        joinnorp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "joinWrongRp")
    {
        joinwrongrp = value;
        joinwrongrp.value_namespace = name_space;
        joinwrongrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpSSMRcvd")
    {
        jpssmrcvd = value;
        jpssmrcvd.value_namespace = name_space;
        jpssmrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpBidirRcvd")
    {
        jpbidirrcvd = value;
        jpbidirrcvd.value_namespace = name_space;
        jpbidirrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpFilterIn")
    {
        jpfilterin = value;
        jpfilterin.value_namespace = name_space;
        jpfilterin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpFilterOut")
    {
        jpfilterout = value;
        jpfilterout.value_namespace = name_space;
        jpfilterout.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "helloSent")
    {
        hellosent.yfilter = yfilter;
    }
    if(value_path == "helloRcvd")
    {
        hellorcvd.yfilter = yfilter;
    }
    if(value_path == "jpSent")
    {
        jpsent.yfilter = yfilter;
    }
    if(value_path == "jpRcvd")
    {
        jprcvd.yfilter = yfilter;
    }
    if(value_path == "assertSent")
    {
        assertsent.yfilter = yfilter;
    }
    if(value_path == "assertRcvd")
    {
        assertrcvd.yfilter = yfilter;
    }
    if(value_path == "graftsSent")
    {
        graftssent.yfilter = yfilter;
    }
    if(value_path == "graftsRcvd")
    {
        graftsrcvd.yfilter = yfilter;
    }
    if(value_path == "grftAckSent")
    {
        grftacksent.yfilter = yfilter;
    }
    if(value_path == "grftAckRcvd")
    {
        grftackrcvd.yfilter = yfilter;
    }
    if(value_path == "dfOfferSent")
    {
        dfoffersent.yfilter = yfilter;
    }
    if(value_path == "dfOfferRcvd")
    {
        dfofferrcvd.yfilter = yfilter;
    }
    if(value_path == "dfWinnerSent")
    {
        dfwinnersent.yfilter = yfilter;
    }
    if(value_path == "dfWinnerRcvd")
    {
        dfwinnerrcvd.yfilter = yfilter;
    }
    if(value_path == "dfBackoffSent")
    {
        dfbackoffsent.yfilter = yfilter;
    }
    if(value_path == "dfBackoffRcvd")
    {
        dfbackoffrcvd.yfilter = yfilter;
    }
    if(value_path == "dfPassesSent")
    {
        dfpassessent.yfilter = yfilter;
    }
    if(value_path == "dfPassesRcvd")
    {
        dfpassesrcvd.yfilter = yfilter;
    }
    if(value_path == "chksumErr")
    {
        chksumerr.yfilter = yfilter;
    }
    if(value_path == "invalidPktSent")
    {
        invalidpktsent.yfilter = yfilter;
    }
    if(value_path == "invalidPktRcvd")
    {
        invalidpktrcvd.yfilter = yfilter;
    }
    if(value_path == "authFail")
    {
        authfail.yfilter = yfilter;
    }
    if(value_path == "pktLenErr")
    {
        pktlenerr.yfilter = yfilter;
    }
    if(value_path == "badVerPkt")
    {
        badverpkt.yfilter = yfilter;
    }
    if(value_path == "pktFrmSelf")
    {
        pktfrmself.yfilter = yfilter;
    }
    if(value_path == "pktFrmNonNbr")
    {
        pktfrmnonnbr.yfilter = yfilter;
    }
    if(value_path == "pktOnPassiveIf")
    {
        pktonpassiveif.yfilter = yfilter;
    }
    if(value_path == "jpRcvdOnRPF")
    {
        jprcvdonrpf.yfilter = yfilter;
    }
    if(value_path == "joinNoRP")
    {
        joinnorp.yfilter = yfilter;
    }
    if(value_path == "joinWrongRp")
    {
        joinwrongrp.yfilter = yfilter;
    }
    if(value_path == "jpSSMRcvd")
    {
        jpssmrcvd.yfilter = yfilter;
    }
    if(value_path == "jpBidirRcvd")
    {
        jpbidirrcvd.yfilter = yfilter;
    }
    if(value_path == "jpFilterIn")
    {
        jpfilterin.yfilter = yfilter;
    }
    if(value_path == "jpFilterOut")
    {
        jpfilterout.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helloSent" || name == "helloRcvd" || name == "jpSent" || name == "jpRcvd" || name == "assertSent" || name == "assertRcvd" || name == "graftsSent" || name == "graftsRcvd" || name == "grftAckSent" || name == "grftAckRcvd" || name == "dfOfferSent" || name == "dfOfferRcvd" || name == "dfWinnerSent" || name == "dfWinnerRcvd" || name == "dfBackoffSent" || name == "dfBackoffRcvd" || name == "dfPassesSent" || name == "dfPassesRcvd" || name == "chksumErr" || name == "invalidPktSent" || name == "invalidPktRcvd" || name == "authFail" || name == "pktLenErr" || name == "badVerPkt" || name == "pktFrmSelf" || name == "pktFrmNonNbr" || name == "pktOnPassiveIf" || name == "jpRcvdOnRPF" || name == "joinNoRP" || name == "joinWrongRp" || name == "jpSSMRcvd" || name == "jpBidirRcvd" || name == "jpFilterIn" || name == "jpFilterOut")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpItems()
    :
    rpinforec_list(this, {"rpaddr"})
{

    yang_name = "rp-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::~RpItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpinforec_list.len(); index++)
    {
        if(rpinforec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::has_operation() const
{
    for (std::size_t index=0; index<rpinforec_list.len(); index++)
    {
        if(rpinforec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RpInfoRec-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList>();
        ent_->parent = this;
        rpinforec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpinforec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RpInfoRec-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpInfoRecList()
    :
    rpaddr{YType::str, "rpAddr"},
    rplocal{YType::boolean, "rpLocal"},
    rpuptime{YType::str, "rpUptime"},
    rppriority{YType::uint32, "rpPriority"},
    rpdisctype{YType::str, "rpDiscType"},
    rpdfordinal{YType::uint32, "rpDfOrdinal"},
    rpmetricpref{YType::uint32, "rpMetricPref"},
    rpmetric{YType::uint32, "rpMetric"}
        ,
    rpif_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems>())
{
    rpif_items->parent = this;

    yang_name = "RpInfoRec-list"; yang_parent_name = "rp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::~RpInfoRecList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::has_data() const
{
    if (is_presence_container) return true;
    return rpaddr.is_set
	|| rplocal.is_set
	|| rpuptime.is_set
	|| rppriority.is_set
	|| rpdisctype.is_set
	|| rpdfordinal.is_set
	|| rpmetricpref.is_set
	|| rpmetric.is_set
	|| (rpif_items !=  nullptr && rpif_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rpaddr.yfilter)
	|| ydk::is_set(rplocal.yfilter)
	|| ydk::is_set(rpuptime.yfilter)
	|| ydk::is_set(rppriority.yfilter)
	|| ydk::is_set(rpdisctype.yfilter)
	|| ydk::is_set(rpdfordinal.yfilter)
	|| ydk::is_set(rpmetricpref.yfilter)
	|| ydk::is_set(rpmetric.yfilter)
	|| (rpif_items !=  nullptr && rpif_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RpInfoRec-list";
    ADD_KEY_TOKEN(rpaddr, "rpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpaddr.is_set || is_set(rpaddr.yfilter)) leaf_name_data.push_back(rpaddr.get_name_leafdata());
    if (rplocal.is_set || is_set(rplocal.yfilter)) leaf_name_data.push_back(rplocal.get_name_leafdata());
    if (rpuptime.is_set || is_set(rpuptime.yfilter)) leaf_name_data.push_back(rpuptime.get_name_leafdata());
    if (rppriority.is_set || is_set(rppriority.yfilter)) leaf_name_data.push_back(rppriority.get_name_leafdata());
    if (rpdisctype.is_set || is_set(rpdisctype.yfilter)) leaf_name_data.push_back(rpdisctype.get_name_leafdata());
    if (rpdfordinal.is_set || is_set(rpdfordinal.yfilter)) leaf_name_data.push_back(rpdfordinal.get_name_leafdata());
    if (rpmetricpref.is_set || is_set(rpmetricpref.yfilter)) leaf_name_data.push_back(rpmetricpref.get_name_leafdata());
    if (rpmetric.is_set || is_set(rpmetric.yfilter)) leaf_name_data.push_back(rpmetric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpif-items")
    {
        if(rpif_items == nullptr)
        {
            rpif_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems>();
        }
        return rpif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rpif_items != nullptr)
    {
        _children["rpif-items"] = rpif_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rpAddr")
    {
        rpaddr = value;
        rpaddr.value_namespace = name_space;
        rpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpLocal")
    {
        rplocal = value;
        rplocal.value_namespace = name_space;
        rplocal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpUptime")
    {
        rpuptime = value;
        rpuptime.value_namespace = name_space;
        rpuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpPriority")
    {
        rppriority = value;
        rppriority.value_namespace = name_space;
        rppriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpDiscType")
    {
        rpdisctype = value;
        rpdisctype.value_namespace = name_space;
        rpdisctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpDfOrdinal")
    {
        rpdfordinal = value;
        rpdfordinal.value_namespace = name_space;
        rpdfordinal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpMetricPref")
    {
        rpmetricpref = value;
        rpmetricpref.value_namespace = name_space;
        rpmetricpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpMetric")
    {
        rpmetric = value;
        rpmetric.value_namespace = name_space;
        rpmetric.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rpAddr")
    {
        rpaddr.yfilter = yfilter;
    }
    if(value_path == "rpLocal")
    {
        rplocal.yfilter = yfilter;
    }
    if(value_path == "rpUptime")
    {
        rpuptime.yfilter = yfilter;
    }
    if(value_path == "rpPriority")
    {
        rppriority.yfilter = yfilter;
    }
    if(value_path == "rpDiscType")
    {
        rpdisctype.yfilter = yfilter;
    }
    if(value_path == "rpDfOrdinal")
    {
        rpdfordinal.yfilter = yfilter;
    }
    if(value_path == "rpMetricPref")
    {
        rpmetricpref.yfilter = yfilter;
    }
    if(value_path == "rpMetric")
    {
        rpmetric.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpif-items" || name == "rpAddr" || name == "rpLocal" || name == "rpUptime" || name == "rpPriority" || name == "rpDiscType" || name == "rpDfOrdinal" || name == "rpMetricPref" || name == "rpMetric")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpifItems()
    :
    rpif_list(this, {"ifname"})
{

    yang_name = "rpif-items"; yang_parent_name = "RpInfoRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::~RpifItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpif_list.len(); index++)
    {
        if(rpif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::has_operation() const
{
    for (std::size_t index=0; index<rpif_list.len(); index++)
    {
        if(rpif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RpIf-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList>();
        ent_->parent = this;
        rpif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RpIf-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::RpIfList()
    :
    ifname{YType::str, "ifName"},
    dfwinner{YType::str, "dfWinner"},
    dfstate{YType::enumeration, "dfState"},
    dfuptime{YType::str, "dfUptime"},
    isrpf{YType::boolean, "isRpf"},
    winnermetricpref{YType::uint32, "winnerMetricPref"},
    winnermetric{YType::uint32, "winnerMetric"}
{

    yang_name = "RpIf-list"; yang_parent_name = "rpif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::~RpIfList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::has_data() const
{
    if (is_presence_container) return true;
    return ifname.is_set
	|| dfwinner.is_set
	|| dfstate.is_set
	|| dfuptime.is_set
	|| isrpf.is_set
	|| winnermetricpref.is_set
	|| winnermetric.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(dfwinner.yfilter)
	|| ydk::is_set(dfstate.yfilter)
	|| ydk::is_set(dfuptime.yfilter)
	|| ydk::is_set(isrpf.yfilter)
	|| ydk::is_set(winnermetricpref.yfilter)
	|| ydk::is_set(winnermetric.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RpIf-list";
    ADD_KEY_TOKEN(ifname, "ifName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (dfwinner.is_set || is_set(dfwinner.yfilter)) leaf_name_data.push_back(dfwinner.get_name_leafdata());
    if (dfstate.is_set || is_set(dfstate.yfilter)) leaf_name_data.push_back(dfstate.get_name_leafdata());
    if (dfuptime.is_set || is_set(dfuptime.yfilter)) leaf_name_data.push_back(dfuptime.get_name_leafdata());
    if (isrpf.is_set || is_set(isrpf.yfilter)) leaf_name_data.push_back(isrpf.get_name_leafdata());
    if (winnermetricpref.is_set || is_set(winnermetricpref.yfilter)) leaf_name_data.push_back(winnermetricpref.get_name_leafdata());
    if (winnermetric.is_set || is_set(winnermetric.yfilter)) leaf_name_data.push_back(winnermetric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifName")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfWinner")
    {
        dfwinner = value;
        dfwinner.value_namespace = name_space;
        dfwinner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfState")
    {
        dfstate = value;
        dfstate.value_namespace = name_space;
        dfstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfUptime")
    {
        dfuptime = value;
        dfuptime.value_namespace = name_space;
        dfuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isRpf")
    {
        isrpf = value;
        isrpf.value_namespace = name_space;
        isrpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "winnerMetricPref")
    {
        winnermetricpref = value;
        winnermetricpref.value_namespace = name_space;
        winnermetricpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "winnerMetric")
    {
        winnermetric = value;
        winnermetric.value_namespace = name_space;
        winnermetric.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifName")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "dfWinner")
    {
        dfwinner.yfilter = yfilter;
    }
    if(value_path == "dfState")
    {
        dfstate.yfilter = yfilter;
    }
    if(value_path == "dfUptime")
    {
        dfuptime.yfilter = yfilter;
    }
    if(value_path == "isRpf")
    {
        isrpf.yfilter = yfilter;
    }
    if(value_path == "winnerMetricPref")
    {
        winnermetricpref.yfilter = yfilter;
    }
    if(value_path == "winnerMetric")
    {
        winnermetric.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifName" || name == "dfWinner" || name == "dfState" || name == "dfUptime" || name == "isRpf" || name == "winnerMetricPref" || name == "winnerMetric")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::TrstatsItems()
    :
    lastclearts{YType::str, "lastClearTs"},
    regrcvd{YType::uint32, "regRcvd"},
    nullregrcvd{YType::uint32, "nullRegRcvd"},
    regstoprcvd{YType::uint32, "regStopRcvd"},
    bsrcvd{YType::uint32, "bsRcvd"},
    candrprcvd{YType::uint32, "candRpRcvd"},
    autorpannrcvd{YType::uint32, "autorpAnnRcvd"},
    autorpdiscrcvd{YType::uint32, "autorpDiscRcvd"},
    nullregsent{YType::uint32, "nullRegSent"},
    regstopsent{YType::uint32, "regStopSent"},
    bssent{YType::uint32, "bsSent"},
    candrpsent{YType::uint32, "candRPSent"},
    autorpannsent{YType::uint32, "autorpAnnSent"},
    autorpdiscsent{YType::uint32, "autorpDiscSent"},
    autorprpfsent{YType::uint32, "autorpRpfSent"},
    autorpbrddeny{YType::uint32, "autorpBrdDeny"},
    autorrpnolistn{YType::uint32, "autorrpNoListn"},
    autorpttlexp{YType::uint32, "autorpTtlExp"},
    autorpinvtype{YType::uint32, "autorpInvType"},
    bsnonbr{YType::uint32, "bsNoNbr"},
    bsborddeny{YType::uint32, "bsBordDeny"},
    bslenerr{YType::uint32, "bsLenErr"},
    bsrpffail{YType::uint32, "bsRpfFail"},
    bsnolis{YType::uint32, "bsNoLis"},
    candrpnolis{YType::uint32, "candrpNoLis"},
    candrpborddeny{YType::uint32, "candrpBordDeny"},
    regrcvdnorp{YType::uint32, "regRcvdNoRP"},
    regrcvdforssm{YType::uint32, "regRcvdForSSM"},
    regrcvdforbd{YType::uint32, "regRcvdForBd"},
    noroute{YType::uint32, "noRoute"}
{

    yang_name = "trstats-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::~TrstatsItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return lastclearts.is_set
	|| regrcvd.is_set
	|| nullregrcvd.is_set
	|| regstoprcvd.is_set
	|| bsrcvd.is_set
	|| candrprcvd.is_set
	|| autorpannrcvd.is_set
	|| autorpdiscrcvd.is_set
	|| nullregsent.is_set
	|| regstopsent.is_set
	|| bssent.is_set
	|| candrpsent.is_set
	|| autorpannsent.is_set
	|| autorpdiscsent.is_set
	|| autorprpfsent.is_set
	|| autorpbrddeny.is_set
	|| autorrpnolistn.is_set
	|| autorpttlexp.is_set
	|| autorpinvtype.is_set
	|| bsnonbr.is_set
	|| bsborddeny.is_set
	|| bslenerr.is_set
	|| bsrpffail.is_set
	|| bsnolis.is_set
	|| candrpnolis.is_set
	|| candrpborddeny.is_set
	|| regrcvdnorp.is_set
	|| regrcvdforssm.is_set
	|| regrcvdforbd.is_set
	|| noroute.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lastclearts.yfilter)
	|| ydk::is_set(regrcvd.yfilter)
	|| ydk::is_set(nullregrcvd.yfilter)
	|| ydk::is_set(regstoprcvd.yfilter)
	|| ydk::is_set(bsrcvd.yfilter)
	|| ydk::is_set(candrprcvd.yfilter)
	|| ydk::is_set(autorpannrcvd.yfilter)
	|| ydk::is_set(autorpdiscrcvd.yfilter)
	|| ydk::is_set(nullregsent.yfilter)
	|| ydk::is_set(regstopsent.yfilter)
	|| ydk::is_set(bssent.yfilter)
	|| ydk::is_set(candrpsent.yfilter)
	|| ydk::is_set(autorpannsent.yfilter)
	|| ydk::is_set(autorpdiscsent.yfilter)
	|| ydk::is_set(autorprpfsent.yfilter)
	|| ydk::is_set(autorpbrddeny.yfilter)
	|| ydk::is_set(autorrpnolistn.yfilter)
	|| ydk::is_set(autorpttlexp.yfilter)
	|| ydk::is_set(autorpinvtype.yfilter)
	|| ydk::is_set(bsnonbr.yfilter)
	|| ydk::is_set(bsborddeny.yfilter)
	|| ydk::is_set(bslenerr.yfilter)
	|| ydk::is_set(bsrpffail.yfilter)
	|| ydk::is_set(bsnolis.yfilter)
	|| ydk::is_set(candrpnolis.yfilter)
	|| ydk::is_set(candrpborddeny.yfilter)
	|| ydk::is_set(regrcvdnorp.yfilter)
	|| ydk::is_set(regrcvdforssm.yfilter)
	|| ydk::is_set(regrcvdforbd.yfilter)
	|| ydk::is_set(noroute.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lastclearts.is_set || is_set(lastclearts.yfilter)) leaf_name_data.push_back(lastclearts.get_name_leafdata());
    if (regrcvd.is_set || is_set(regrcvd.yfilter)) leaf_name_data.push_back(regrcvd.get_name_leafdata());
    if (nullregrcvd.is_set || is_set(nullregrcvd.yfilter)) leaf_name_data.push_back(nullregrcvd.get_name_leafdata());
    if (regstoprcvd.is_set || is_set(regstoprcvd.yfilter)) leaf_name_data.push_back(regstoprcvd.get_name_leafdata());
    if (bsrcvd.is_set || is_set(bsrcvd.yfilter)) leaf_name_data.push_back(bsrcvd.get_name_leafdata());
    if (candrprcvd.is_set || is_set(candrprcvd.yfilter)) leaf_name_data.push_back(candrprcvd.get_name_leafdata());
    if (autorpannrcvd.is_set || is_set(autorpannrcvd.yfilter)) leaf_name_data.push_back(autorpannrcvd.get_name_leafdata());
    if (autorpdiscrcvd.is_set || is_set(autorpdiscrcvd.yfilter)) leaf_name_data.push_back(autorpdiscrcvd.get_name_leafdata());
    if (nullregsent.is_set || is_set(nullregsent.yfilter)) leaf_name_data.push_back(nullregsent.get_name_leafdata());
    if (regstopsent.is_set || is_set(regstopsent.yfilter)) leaf_name_data.push_back(regstopsent.get_name_leafdata());
    if (bssent.is_set || is_set(bssent.yfilter)) leaf_name_data.push_back(bssent.get_name_leafdata());
    if (candrpsent.is_set || is_set(candrpsent.yfilter)) leaf_name_data.push_back(candrpsent.get_name_leafdata());
    if (autorpannsent.is_set || is_set(autorpannsent.yfilter)) leaf_name_data.push_back(autorpannsent.get_name_leafdata());
    if (autorpdiscsent.is_set || is_set(autorpdiscsent.yfilter)) leaf_name_data.push_back(autorpdiscsent.get_name_leafdata());
    if (autorprpfsent.is_set || is_set(autorprpfsent.yfilter)) leaf_name_data.push_back(autorprpfsent.get_name_leafdata());
    if (autorpbrddeny.is_set || is_set(autorpbrddeny.yfilter)) leaf_name_data.push_back(autorpbrddeny.get_name_leafdata());
    if (autorrpnolistn.is_set || is_set(autorrpnolistn.yfilter)) leaf_name_data.push_back(autorrpnolistn.get_name_leafdata());
    if (autorpttlexp.is_set || is_set(autorpttlexp.yfilter)) leaf_name_data.push_back(autorpttlexp.get_name_leafdata());
    if (autorpinvtype.is_set || is_set(autorpinvtype.yfilter)) leaf_name_data.push_back(autorpinvtype.get_name_leafdata());
    if (bsnonbr.is_set || is_set(bsnonbr.yfilter)) leaf_name_data.push_back(bsnonbr.get_name_leafdata());
    if (bsborddeny.is_set || is_set(bsborddeny.yfilter)) leaf_name_data.push_back(bsborddeny.get_name_leafdata());
    if (bslenerr.is_set || is_set(bslenerr.yfilter)) leaf_name_data.push_back(bslenerr.get_name_leafdata());
    if (bsrpffail.is_set || is_set(bsrpffail.yfilter)) leaf_name_data.push_back(bsrpffail.get_name_leafdata());
    if (bsnolis.is_set || is_set(bsnolis.yfilter)) leaf_name_data.push_back(bsnolis.get_name_leafdata());
    if (candrpnolis.is_set || is_set(candrpnolis.yfilter)) leaf_name_data.push_back(candrpnolis.get_name_leafdata());
    if (candrpborddeny.is_set || is_set(candrpborddeny.yfilter)) leaf_name_data.push_back(candrpborddeny.get_name_leafdata());
    if (regrcvdnorp.is_set || is_set(regrcvdnorp.yfilter)) leaf_name_data.push_back(regrcvdnorp.get_name_leafdata());
    if (regrcvdforssm.is_set || is_set(regrcvdforssm.yfilter)) leaf_name_data.push_back(regrcvdforssm.get_name_leafdata());
    if (regrcvdforbd.is_set || is_set(regrcvdforbd.yfilter)) leaf_name_data.push_back(regrcvdforbd.get_name_leafdata());
    if (noroute.is_set || is_set(noroute.yfilter)) leaf_name_data.push_back(noroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastClearTs")
    {
        lastclearts = value;
        lastclearts.value_namespace = name_space;
        lastclearts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvd")
    {
        regrcvd = value;
        regrcvd.value_namespace = name_space;
        regrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullRegRcvd")
    {
        nullregrcvd = value;
        nullregrcvd.value_namespace = name_space;
        nullregrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStopRcvd")
    {
        regstoprcvd = value;
        regstoprcvd.value_namespace = name_space;
        regstoprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsRcvd")
    {
        bsrcvd = value;
        bsrcvd.value_namespace = name_space;
        bsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candRpRcvd")
    {
        candrprcvd = value;
        candrprcvd.value_namespace = name_space;
        candrprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpAnnRcvd")
    {
        autorpannrcvd = value;
        autorpannrcvd.value_namespace = name_space;
        autorpannrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpDiscRcvd")
    {
        autorpdiscrcvd = value;
        autorpdiscrcvd.value_namespace = name_space;
        autorpdiscrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullRegSent")
    {
        nullregsent = value;
        nullregsent.value_namespace = name_space;
        nullregsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStopSent")
    {
        regstopsent = value;
        regstopsent.value_namespace = name_space;
        regstopsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsSent")
    {
        bssent = value;
        bssent.value_namespace = name_space;
        bssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candRPSent")
    {
        candrpsent = value;
        candrpsent.value_namespace = name_space;
        candrpsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpAnnSent")
    {
        autorpannsent = value;
        autorpannsent.value_namespace = name_space;
        autorpannsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpDiscSent")
    {
        autorpdiscsent = value;
        autorpdiscsent.value_namespace = name_space;
        autorpdiscsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpRpfSent")
    {
        autorprpfsent = value;
        autorprpfsent.value_namespace = name_space;
        autorprpfsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpBrdDeny")
    {
        autorpbrddeny = value;
        autorpbrddeny.value_namespace = name_space;
        autorpbrddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorrpNoListn")
    {
        autorrpnolistn = value;
        autorrpnolistn.value_namespace = name_space;
        autorrpnolistn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpTtlExp")
    {
        autorpttlexp = value;
        autorpttlexp.value_namespace = name_space;
        autorpttlexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpInvType")
    {
        autorpinvtype = value;
        autorpinvtype.value_namespace = name_space;
        autorpinvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsNoNbr")
    {
        bsnonbr = value;
        bsnonbr.value_namespace = name_space;
        bsnonbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsBordDeny")
    {
        bsborddeny = value;
        bsborddeny.value_namespace = name_space;
        bsborddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsLenErr")
    {
        bslenerr = value;
        bslenerr.value_namespace = name_space;
        bslenerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsRpfFail")
    {
        bsrpffail = value;
        bsrpffail.value_namespace = name_space;
        bsrpffail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsNoLis")
    {
        bsnolis = value;
        bsnolis.value_namespace = name_space;
        bsnolis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candrpNoLis")
    {
        candrpnolis = value;
        candrpnolis.value_namespace = name_space;
        candrpnolis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candrpBordDeny")
    {
        candrpborddeny = value;
        candrpborddeny.value_namespace = name_space;
        candrpborddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdNoRP")
    {
        regrcvdnorp = value;
        regrcvdnorp.value_namespace = name_space;
        regrcvdnorp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdForSSM")
    {
        regrcvdforssm = value;
        regrcvdforssm.value_namespace = name_space;
        regrcvdforssm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdForBd")
    {
        regrcvdforbd = value;
        regrcvdforbd.value_namespace = name_space;
        regrcvdforbd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noRoute")
    {
        noroute = value;
        noroute.value_namespace = name_space;
        noroute.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastClearTs")
    {
        lastclearts.yfilter = yfilter;
    }
    if(value_path == "regRcvd")
    {
        regrcvd.yfilter = yfilter;
    }
    if(value_path == "nullRegRcvd")
    {
        nullregrcvd.yfilter = yfilter;
    }
    if(value_path == "regStopRcvd")
    {
        regstoprcvd.yfilter = yfilter;
    }
    if(value_path == "bsRcvd")
    {
        bsrcvd.yfilter = yfilter;
    }
    if(value_path == "candRpRcvd")
    {
        candrprcvd.yfilter = yfilter;
    }
    if(value_path == "autorpAnnRcvd")
    {
        autorpannrcvd.yfilter = yfilter;
    }
    if(value_path == "autorpDiscRcvd")
    {
        autorpdiscrcvd.yfilter = yfilter;
    }
    if(value_path == "nullRegSent")
    {
        nullregsent.yfilter = yfilter;
    }
    if(value_path == "regStopSent")
    {
        regstopsent.yfilter = yfilter;
    }
    if(value_path == "bsSent")
    {
        bssent.yfilter = yfilter;
    }
    if(value_path == "candRPSent")
    {
        candrpsent.yfilter = yfilter;
    }
    if(value_path == "autorpAnnSent")
    {
        autorpannsent.yfilter = yfilter;
    }
    if(value_path == "autorpDiscSent")
    {
        autorpdiscsent.yfilter = yfilter;
    }
    if(value_path == "autorpRpfSent")
    {
        autorprpfsent.yfilter = yfilter;
    }
    if(value_path == "autorpBrdDeny")
    {
        autorpbrddeny.yfilter = yfilter;
    }
    if(value_path == "autorrpNoListn")
    {
        autorrpnolistn.yfilter = yfilter;
    }
    if(value_path == "autorpTtlExp")
    {
        autorpttlexp.yfilter = yfilter;
    }
    if(value_path == "autorpInvType")
    {
        autorpinvtype.yfilter = yfilter;
    }
    if(value_path == "bsNoNbr")
    {
        bsnonbr.yfilter = yfilter;
    }
    if(value_path == "bsBordDeny")
    {
        bsborddeny.yfilter = yfilter;
    }
    if(value_path == "bsLenErr")
    {
        bslenerr.yfilter = yfilter;
    }
    if(value_path == "bsRpfFail")
    {
        bsrpffail.yfilter = yfilter;
    }
    if(value_path == "bsNoLis")
    {
        bsnolis.yfilter = yfilter;
    }
    if(value_path == "candrpNoLis")
    {
        candrpnolis.yfilter = yfilter;
    }
    if(value_path == "candrpBordDeny")
    {
        candrpborddeny.yfilter = yfilter;
    }
    if(value_path == "regRcvdNoRP")
    {
        regrcvdnorp.yfilter = yfilter;
    }
    if(value_path == "regRcvdForSSM")
    {
        regrcvdforssm.yfilter = yfilter;
    }
    if(value_path == "regRcvdForBd")
    {
        regrcvdforbd.yfilter = yfilter;
    }
    if(value_path == "noRoute")
    {
        noroute.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastClearTs" || name == "regRcvd" || name == "nullRegRcvd" || name == "regStopRcvd" || name == "bsRcvd" || name == "candRpRcvd" || name == "autorpAnnRcvd" || name == "autorpDiscRcvd" || name == "nullRegSent" || name == "regStopSent" || name == "bsSent" || name == "candRPSent" || name == "autorpAnnSent" || name == "autorpDiscSent" || name == "autorpRpfSent" || name == "autorpBrdDeny" || name == "autorrpNoListn" || name == "autorpTtlExp" || name == "autorpInvType" || name == "bsNoNbr" || name == "bsBordDeny" || name == "bsLenErr" || name == "bsRpfFail" || name == "bsNoLis" || name == "candrpNoLis" || name == "candrpBordDeny" || name == "regRcvdNoRP" || name == "regRcvdForSSM" || name == "regRcvdForBd" || name == "noRoute")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::VrfdetailItems()
    :
    stlmt{YType::uint64, "stLmt"},
    availstlmt{YType::uint64, "availStLmt"},
    rsvlmt{YType::uint64, "rsvLmt"},
    availrsvlmt{YType::uint64, "availRsvLmt"},
    rsvpolname{YType::str, "rsvPolName"},
    regratelmt{YType::uint64, "regRateLmt"},
    sharedtrpolname{YType::str, "sharedTrPolName"}
        ,
    grange_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems>())
{
    grange_items->parent = this;

    yang_name = "vrfdetail-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::~VrfdetailItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::has_data() const
{
    if (is_presence_container) return true;
    return stlmt.is_set
	|| availstlmt.is_set
	|| rsvlmt.is_set
	|| availrsvlmt.is_set
	|| rsvpolname.is_set
	|| regratelmt.is_set
	|| sharedtrpolname.is_set
	|| (grange_items !=  nullptr && grange_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stlmt.yfilter)
	|| ydk::is_set(availstlmt.yfilter)
	|| ydk::is_set(rsvlmt.yfilter)
	|| ydk::is_set(availrsvlmt.yfilter)
	|| ydk::is_set(rsvpolname.yfilter)
	|| ydk::is_set(regratelmt.yfilter)
	|| ydk::is_set(sharedtrpolname.yfilter)
	|| (grange_items !=  nullptr && grange_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfdetail-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stlmt.is_set || is_set(stlmt.yfilter)) leaf_name_data.push_back(stlmt.get_name_leafdata());
    if (availstlmt.is_set || is_set(availstlmt.yfilter)) leaf_name_data.push_back(availstlmt.get_name_leafdata());
    if (rsvlmt.is_set || is_set(rsvlmt.yfilter)) leaf_name_data.push_back(rsvlmt.get_name_leafdata());
    if (availrsvlmt.is_set || is_set(availrsvlmt.yfilter)) leaf_name_data.push_back(availrsvlmt.get_name_leafdata());
    if (rsvpolname.is_set || is_set(rsvpolname.yfilter)) leaf_name_data.push_back(rsvpolname.get_name_leafdata());
    if (regratelmt.is_set || is_set(regratelmt.yfilter)) leaf_name_data.push_back(regratelmt.get_name_leafdata());
    if (sharedtrpolname.is_set || is_set(sharedtrpolname.yfilter)) leaf_name_data.push_back(sharedtrpolname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "grange-items")
    {
        if(grange_items == nullptr)
        {
            grange_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems>();
        }
        return grange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(grange_items != nullptr)
    {
        _children["grange-items"] = grange_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stLmt")
    {
        stlmt = value;
        stlmt.value_namespace = name_space;
        stlmt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "availStLmt")
    {
        availstlmt = value;
        availstlmt.value_namespace = name_space;
        availstlmt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvLmt")
    {
        rsvlmt = value;
        rsvlmt.value_namespace = name_space;
        rsvlmt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "availRsvLmt")
    {
        availrsvlmt = value;
        availrsvlmt.value_namespace = name_space;
        availrsvlmt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvPolName")
    {
        rsvpolname = value;
        rsvpolname.value_namespace = name_space;
        rsvpolname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRateLmt")
    {
        regratelmt = value;
        regratelmt.value_namespace = name_space;
        regratelmt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sharedTrPolName")
    {
        sharedtrpolname = value;
        sharedtrpolname.value_namespace = name_space;
        sharedtrpolname.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stLmt")
    {
        stlmt.yfilter = yfilter;
    }
    if(value_path == "availStLmt")
    {
        availstlmt.yfilter = yfilter;
    }
    if(value_path == "rsvLmt")
    {
        rsvlmt.yfilter = yfilter;
    }
    if(value_path == "availRsvLmt")
    {
        availrsvlmt.yfilter = yfilter;
    }
    if(value_path == "rsvPolName")
    {
        rsvpolname.yfilter = yfilter;
    }
    if(value_path == "regRateLmt")
    {
        regratelmt.yfilter = yfilter;
    }
    if(value_path == "sharedTrPolName")
    {
        sharedtrpolname.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grange-items" || name == "stLmt" || name == "availStLmt" || name == "rsvLmt" || name == "availRsvLmt" || name == "rsvPolName" || name == "regRateLmt" || name == "sharedTrPolName")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::GrangeItems()
    :
    sharedrouterange_list(this, {"grangeip"})
{

    yang_name = "grange-items"; yang_parent_name = "vrfdetail-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::~GrangeItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sharedrouterange_list.len(); index++)
    {
        if(sharedrouterange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::has_operation() const
{
    for (std::size_t index=0; index<sharedrouterange_list.len(); index++)
    {
        if(sharedrouterange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SharedRouteRange-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList>();
        ent_->parent = this;
        sharedrouterange_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sharedrouterange_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SharedRouteRange-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::SharedRouteRangeList()
    :
    grangeip{YType::str, "grangeIp"}
{

    yang_name = "SharedRouteRange-list"; yang_parent_name = "grange-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::~SharedRouteRangeList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::has_data() const
{
    if (is_presence_container) return true;
    return grangeip.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grangeip.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SharedRouteRange-list";
    ADD_KEY_TOKEN(grangeip, "grangeIp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grangeip.is_set || is_set(grangeip.yfilter)) leaf_name_data.push_back(grangeip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grangeIp")
    {
        grangeip = value;
        grangeip.value_namespace = name_space;
        grangeip.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grangeIp")
    {
        grangeip.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grangeIp")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpItems()
    :
    jptrp_list(this, {"policydir"})
{

    yang_name = "jp-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::~JpItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<jptrp_list.len(); index++)
    {
        if(jptrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::has_operation() const
{
    for (std::size_t index=0; index<jptrp_list.len(); index++)
    {
        if(jptrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "JpTrP-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList>();
        ent_->parent = this;
        jptrp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : jptrp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "JpTrP-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::JpTrPList()
    :
    policydir{YType::enumeration, "policyDir"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "RtMap"},
    pfxlist{YType::str, "pfxList"},
    itvl{YType::uint16, "itvl"}
{

    yang_name = "JpTrP-list"; yang_parent_name = "jp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::~JpTrPList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::has_data() const
{
    if (is_presence_container) return true;
    return policydir.is_set
	|| name.is_set
	|| descr.is_set
	|| rtmap.is_set
	|| pfxlist.is_set
	|| itvl.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policydir.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(itvl.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "JpTrP-list";
    ADD_KEY_TOKEN(policydir, "policyDir");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policydir.is_set || is_set(policydir.yfilter)) leaf_name_data.push_back(policydir.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (itvl.is_set || is_set(itvl.yfilter)) leaf_name_data.push_back(itvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policyDir")
    {
        policydir = value;
        policydir.value_namespace = name_space;
        policydir.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "RtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "itvl")
    {
        itvl = value;
        itvl.value_namespace = name_space;
        itvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policyDir")
    {
        policydir.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "RtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "itvl")
    {
        itvl.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policyDir" || name == "name" || name == "descr" || name == "RtMap" || name == "pfxList" || name == "itvl")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::HelloItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    helloitvl{YType::uint32, "helloItvl"},
    autht{YType::enumeration, "authT"},
    authkey{YType::str, "authKey"}
{

    yang_name = "hello-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::~HelloItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| helloitvl.is_set
	|| autht.is_set
	|| authkey.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(helloitvl.yfilter)
	|| ydk::is_set(autht.yfilter)
	|| ydk::is_set(authkey.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (helloitvl.is_set || is_set(helloitvl.yfilter)) leaf_name_data.push_back(helloitvl.get_name_leafdata());
    if (autht.is_set || is_set(autht.yfilter)) leaf_name_data.push_back(autht.get_name_leafdata());
    if (authkey.is_set || is_set(authkey.yfilter)) leaf_name_data.push_back(authkey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "helloItvl")
    {
        helloitvl = value;
        helloitvl.value_namespace = name_space;
        helloitvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authT")
    {
        autht = value;
        autht.value_namespace = name_space;
        autht.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authKey")
    {
        authkey = value;
        authkey.value_namespace = name_space;
        authkey.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "helloItvl")
    {
        helloitvl.yfilter = yfilter;
    }
    if(value_path == "authT")
    {
        autht.yfilter = yfilter;
    }
    if(value_path == "authKey")
    {
        authkey.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "helloItvl" || name == "authT" || name == "authKey")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::TrstatsItems()
    :
    lastclearts{YType::str, "lastClearTs"},
    regrcvd{YType::uint32, "regRcvd"},
    nullregrcvd{YType::uint32, "nullRegRcvd"},
    regstoprcvd{YType::uint32, "regStopRcvd"},
    bsrcvd{YType::uint32, "bsRcvd"},
    candrprcvd{YType::uint32, "candRpRcvd"},
    autorpannrcvd{YType::uint32, "autorpAnnRcvd"},
    autorpdiscrcvd{YType::uint32, "autorpDiscRcvd"},
    nullregsent{YType::uint32, "nullRegSent"},
    regstopsent{YType::uint32, "regStopSent"},
    bssent{YType::uint32, "bsSent"},
    candrpsent{YType::uint32, "candRPSent"},
    autorpannsent{YType::uint32, "autorpAnnSent"},
    autorpdiscsent{YType::uint32, "autorpDiscSent"},
    autorprpfsent{YType::uint32, "autorpRpfSent"},
    autorpbrddeny{YType::uint32, "autorpBrdDeny"},
    autorrpnolistn{YType::uint32, "autorrpNoListn"},
    autorpttlexp{YType::uint32, "autorpTtlExp"},
    autorpinvtype{YType::uint32, "autorpInvType"},
    bsnonbr{YType::uint32, "bsNoNbr"},
    bsborddeny{YType::uint32, "bsBordDeny"},
    bslenerr{YType::uint32, "bsLenErr"},
    bsrpffail{YType::uint32, "bsRpfFail"},
    bsnolis{YType::uint32, "bsNoLis"},
    candrpnolis{YType::uint32, "candrpNoLis"},
    candrpborddeny{YType::uint32, "candrpBordDeny"},
    regrcvdnorp{YType::uint32, "regRcvdNoRP"},
    regrcvdforssm{YType::uint32, "regRcvdForSSM"},
    regrcvdforbd{YType::uint32, "regRcvdForBd"},
    noroute{YType::uint32, "noRoute"}
{

    yang_name = "trstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::~TrstatsItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return lastclearts.is_set
	|| regrcvd.is_set
	|| nullregrcvd.is_set
	|| regstoprcvd.is_set
	|| bsrcvd.is_set
	|| candrprcvd.is_set
	|| autorpannrcvd.is_set
	|| autorpdiscrcvd.is_set
	|| nullregsent.is_set
	|| regstopsent.is_set
	|| bssent.is_set
	|| candrpsent.is_set
	|| autorpannsent.is_set
	|| autorpdiscsent.is_set
	|| autorprpfsent.is_set
	|| autorpbrddeny.is_set
	|| autorrpnolistn.is_set
	|| autorpttlexp.is_set
	|| autorpinvtype.is_set
	|| bsnonbr.is_set
	|| bsborddeny.is_set
	|| bslenerr.is_set
	|| bsrpffail.is_set
	|| bsnolis.is_set
	|| candrpnolis.is_set
	|| candrpborddeny.is_set
	|| regrcvdnorp.is_set
	|| regrcvdforssm.is_set
	|| regrcvdforbd.is_set
	|| noroute.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lastclearts.yfilter)
	|| ydk::is_set(regrcvd.yfilter)
	|| ydk::is_set(nullregrcvd.yfilter)
	|| ydk::is_set(regstoprcvd.yfilter)
	|| ydk::is_set(bsrcvd.yfilter)
	|| ydk::is_set(candrprcvd.yfilter)
	|| ydk::is_set(autorpannrcvd.yfilter)
	|| ydk::is_set(autorpdiscrcvd.yfilter)
	|| ydk::is_set(nullregsent.yfilter)
	|| ydk::is_set(regstopsent.yfilter)
	|| ydk::is_set(bssent.yfilter)
	|| ydk::is_set(candrpsent.yfilter)
	|| ydk::is_set(autorpannsent.yfilter)
	|| ydk::is_set(autorpdiscsent.yfilter)
	|| ydk::is_set(autorprpfsent.yfilter)
	|| ydk::is_set(autorpbrddeny.yfilter)
	|| ydk::is_set(autorrpnolistn.yfilter)
	|| ydk::is_set(autorpttlexp.yfilter)
	|| ydk::is_set(autorpinvtype.yfilter)
	|| ydk::is_set(bsnonbr.yfilter)
	|| ydk::is_set(bsborddeny.yfilter)
	|| ydk::is_set(bslenerr.yfilter)
	|| ydk::is_set(bsrpffail.yfilter)
	|| ydk::is_set(bsnolis.yfilter)
	|| ydk::is_set(candrpnolis.yfilter)
	|| ydk::is_set(candrpborddeny.yfilter)
	|| ydk::is_set(regrcvdnorp.yfilter)
	|| ydk::is_set(regrcvdforssm.yfilter)
	|| ydk::is_set(regrcvdforbd.yfilter)
	|| ydk::is_set(noroute.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lastclearts.is_set || is_set(lastclearts.yfilter)) leaf_name_data.push_back(lastclearts.get_name_leafdata());
    if (regrcvd.is_set || is_set(regrcvd.yfilter)) leaf_name_data.push_back(regrcvd.get_name_leafdata());
    if (nullregrcvd.is_set || is_set(nullregrcvd.yfilter)) leaf_name_data.push_back(nullregrcvd.get_name_leafdata());
    if (regstoprcvd.is_set || is_set(regstoprcvd.yfilter)) leaf_name_data.push_back(regstoprcvd.get_name_leafdata());
    if (bsrcvd.is_set || is_set(bsrcvd.yfilter)) leaf_name_data.push_back(bsrcvd.get_name_leafdata());
    if (candrprcvd.is_set || is_set(candrprcvd.yfilter)) leaf_name_data.push_back(candrprcvd.get_name_leafdata());
    if (autorpannrcvd.is_set || is_set(autorpannrcvd.yfilter)) leaf_name_data.push_back(autorpannrcvd.get_name_leafdata());
    if (autorpdiscrcvd.is_set || is_set(autorpdiscrcvd.yfilter)) leaf_name_data.push_back(autorpdiscrcvd.get_name_leafdata());
    if (nullregsent.is_set || is_set(nullregsent.yfilter)) leaf_name_data.push_back(nullregsent.get_name_leafdata());
    if (regstopsent.is_set || is_set(regstopsent.yfilter)) leaf_name_data.push_back(regstopsent.get_name_leafdata());
    if (bssent.is_set || is_set(bssent.yfilter)) leaf_name_data.push_back(bssent.get_name_leafdata());
    if (candrpsent.is_set || is_set(candrpsent.yfilter)) leaf_name_data.push_back(candrpsent.get_name_leafdata());
    if (autorpannsent.is_set || is_set(autorpannsent.yfilter)) leaf_name_data.push_back(autorpannsent.get_name_leafdata());
    if (autorpdiscsent.is_set || is_set(autorpdiscsent.yfilter)) leaf_name_data.push_back(autorpdiscsent.get_name_leafdata());
    if (autorprpfsent.is_set || is_set(autorprpfsent.yfilter)) leaf_name_data.push_back(autorprpfsent.get_name_leafdata());
    if (autorpbrddeny.is_set || is_set(autorpbrddeny.yfilter)) leaf_name_data.push_back(autorpbrddeny.get_name_leafdata());
    if (autorrpnolistn.is_set || is_set(autorrpnolistn.yfilter)) leaf_name_data.push_back(autorrpnolistn.get_name_leafdata());
    if (autorpttlexp.is_set || is_set(autorpttlexp.yfilter)) leaf_name_data.push_back(autorpttlexp.get_name_leafdata());
    if (autorpinvtype.is_set || is_set(autorpinvtype.yfilter)) leaf_name_data.push_back(autorpinvtype.get_name_leafdata());
    if (bsnonbr.is_set || is_set(bsnonbr.yfilter)) leaf_name_data.push_back(bsnonbr.get_name_leafdata());
    if (bsborddeny.is_set || is_set(bsborddeny.yfilter)) leaf_name_data.push_back(bsborddeny.get_name_leafdata());
    if (bslenerr.is_set || is_set(bslenerr.yfilter)) leaf_name_data.push_back(bslenerr.get_name_leafdata());
    if (bsrpffail.is_set || is_set(bsrpffail.yfilter)) leaf_name_data.push_back(bsrpffail.get_name_leafdata());
    if (bsnolis.is_set || is_set(bsnolis.yfilter)) leaf_name_data.push_back(bsnolis.get_name_leafdata());
    if (candrpnolis.is_set || is_set(candrpnolis.yfilter)) leaf_name_data.push_back(candrpnolis.get_name_leafdata());
    if (candrpborddeny.is_set || is_set(candrpborddeny.yfilter)) leaf_name_data.push_back(candrpborddeny.get_name_leafdata());
    if (regrcvdnorp.is_set || is_set(regrcvdnorp.yfilter)) leaf_name_data.push_back(regrcvdnorp.get_name_leafdata());
    if (regrcvdforssm.is_set || is_set(regrcvdforssm.yfilter)) leaf_name_data.push_back(regrcvdforssm.get_name_leafdata());
    if (regrcvdforbd.is_set || is_set(regrcvdforbd.yfilter)) leaf_name_data.push_back(regrcvdforbd.get_name_leafdata());
    if (noroute.is_set || is_set(noroute.yfilter)) leaf_name_data.push_back(noroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastClearTs")
    {
        lastclearts = value;
        lastclearts.value_namespace = name_space;
        lastclearts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvd")
    {
        regrcvd = value;
        regrcvd.value_namespace = name_space;
        regrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullRegRcvd")
    {
        nullregrcvd = value;
        nullregrcvd.value_namespace = name_space;
        nullregrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStopRcvd")
    {
        regstoprcvd = value;
        regstoprcvd.value_namespace = name_space;
        regstoprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsRcvd")
    {
        bsrcvd = value;
        bsrcvd.value_namespace = name_space;
        bsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candRpRcvd")
    {
        candrprcvd = value;
        candrprcvd.value_namespace = name_space;
        candrprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpAnnRcvd")
    {
        autorpannrcvd = value;
        autorpannrcvd.value_namespace = name_space;
        autorpannrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpDiscRcvd")
    {
        autorpdiscrcvd = value;
        autorpdiscrcvd.value_namespace = name_space;
        autorpdiscrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullRegSent")
    {
        nullregsent = value;
        nullregsent.value_namespace = name_space;
        nullregsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStopSent")
    {
        regstopsent = value;
        regstopsent.value_namespace = name_space;
        regstopsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsSent")
    {
        bssent = value;
        bssent.value_namespace = name_space;
        bssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candRPSent")
    {
        candrpsent = value;
        candrpsent.value_namespace = name_space;
        candrpsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpAnnSent")
    {
        autorpannsent = value;
        autorpannsent.value_namespace = name_space;
        autorpannsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpDiscSent")
    {
        autorpdiscsent = value;
        autorpdiscsent.value_namespace = name_space;
        autorpdiscsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpRpfSent")
    {
        autorprpfsent = value;
        autorprpfsent.value_namespace = name_space;
        autorprpfsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpBrdDeny")
    {
        autorpbrddeny = value;
        autorpbrddeny.value_namespace = name_space;
        autorpbrddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorrpNoListn")
    {
        autorrpnolistn = value;
        autorrpnolistn.value_namespace = name_space;
        autorrpnolistn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpTtlExp")
    {
        autorpttlexp = value;
        autorpttlexp.value_namespace = name_space;
        autorpttlexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpInvType")
    {
        autorpinvtype = value;
        autorpinvtype.value_namespace = name_space;
        autorpinvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsNoNbr")
    {
        bsnonbr = value;
        bsnonbr.value_namespace = name_space;
        bsnonbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsBordDeny")
    {
        bsborddeny = value;
        bsborddeny.value_namespace = name_space;
        bsborddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsLenErr")
    {
        bslenerr = value;
        bslenerr.value_namespace = name_space;
        bslenerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsRpfFail")
    {
        bsrpffail = value;
        bsrpffail.value_namespace = name_space;
        bsrpffail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsNoLis")
    {
        bsnolis = value;
        bsnolis.value_namespace = name_space;
        bsnolis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candrpNoLis")
    {
        candrpnolis = value;
        candrpnolis.value_namespace = name_space;
        candrpnolis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candrpBordDeny")
    {
        candrpborddeny = value;
        candrpborddeny.value_namespace = name_space;
        candrpborddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdNoRP")
    {
        regrcvdnorp = value;
        regrcvdnorp.value_namespace = name_space;
        regrcvdnorp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdForSSM")
    {
        regrcvdforssm = value;
        regrcvdforssm.value_namespace = name_space;
        regrcvdforssm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdForBd")
    {
        regrcvdforbd = value;
        regrcvdforbd.value_namespace = name_space;
        regrcvdforbd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noRoute")
    {
        noroute = value;
        noroute.value_namespace = name_space;
        noroute.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastClearTs")
    {
        lastclearts.yfilter = yfilter;
    }
    if(value_path == "regRcvd")
    {
        regrcvd.yfilter = yfilter;
    }
    if(value_path == "nullRegRcvd")
    {
        nullregrcvd.yfilter = yfilter;
    }
    if(value_path == "regStopRcvd")
    {
        regstoprcvd.yfilter = yfilter;
    }
    if(value_path == "bsRcvd")
    {
        bsrcvd.yfilter = yfilter;
    }
    if(value_path == "candRpRcvd")
    {
        candrprcvd.yfilter = yfilter;
    }
    if(value_path == "autorpAnnRcvd")
    {
        autorpannrcvd.yfilter = yfilter;
    }
    if(value_path == "autorpDiscRcvd")
    {
        autorpdiscrcvd.yfilter = yfilter;
    }
    if(value_path == "nullRegSent")
    {
        nullregsent.yfilter = yfilter;
    }
    if(value_path == "regStopSent")
    {
        regstopsent.yfilter = yfilter;
    }
    if(value_path == "bsSent")
    {
        bssent.yfilter = yfilter;
    }
    if(value_path == "candRPSent")
    {
        candrpsent.yfilter = yfilter;
    }
    if(value_path == "autorpAnnSent")
    {
        autorpannsent.yfilter = yfilter;
    }
    if(value_path == "autorpDiscSent")
    {
        autorpdiscsent.yfilter = yfilter;
    }
    if(value_path == "autorpRpfSent")
    {
        autorprpfsent.yfilter = yfilter;
    }
    if(value_path == "autorpBrdDeny")
    {
        autorpbrddeny.yfilter = yfilter;
    }
    if(value_path == "autorrpNoListn")
    {
        autorrpnolistn.yfilter = yfilter;
    }
    if(value_path == "autorpTtlExp")
    {
        autorpttlexp.yfilter = yfilter;
    }
    if(value_path == "autorpInvType")
    {
        autorpinvtype.yfilter = yfilter;
    }
    if(value_path == "bsNoNbr")
    {
        bsnonbr.yfilter = yfilter;
    }
    if(value_path == "bsBordDeny")
    {
        bsborddeny.yfilter = yfilter;
    }
    if(value_path == "bsLenErr")
    {
        bslenerr.yfilter = yfilter;
    }
    if(value_path == "bsRpfFail")
    {
        bsrpffail.yfilter = yfilter;
    }
    if(value_path == "bsNoLis")
    {
        bsnolis.yfilter = yfilter;
    }
    if(value_path == "candrpNoLis")
    {
        candrpnolis.yfilter = yfilter;
    }
    if(value_path == "candrpBordDeny")
    {
        candrpborddeny.yfilter = yfilter;
    }
    if(value_path == "regRcvdNoRP")
    {
        regrcvdnorp.yfilter = yfilter;
    }
    if(value_path == "regRcvdForSSM")
    {
        regrcvdforssm.yfilter = yfilter;
    }
    if(value_path == "regRcvdForBd")
    {
        regrcvdforbd.yfilter = yfilter;
    }
    if(value_path == "noRoute")
    {
        noroute.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastClearTs" || name == "regRcvd" || name == "nullRegRcvd" || name == "regStopRcvd" || name == "bsRcvd" || name == "candRpRcvd" || name == "autorpAnnRcvd" || name == "autorpDiscRcvd" || name == "nullRegSent" || name == "regStopSent" || name == "bsSent" || name == "candRPSent" || name == "autorpAnnSent" || name == "autorpDiscSent" || name == "autorpRpfSent" || name == "autorpBrdDeny" || name == "autorrpNoListn" || name == "autorpTtlExp" || name == "autorpInvType" || name == "bsNoNbr" || name == "bsBordDeny" || name == "bsLenErr" || name == "bsRpfFail" || name == "bsNoLis" || name == "candrpNoLis" || name == "candrpBordDeny" || name == "regRcvdNoRP" || name == "regRcvdForSSM" || name == "regRcvdForBd" || name == "noRoute")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtnwpathtoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::LimitItems::LimitItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    max{YType::uint32, "max"},
    rsvd{YType::uint32, "rsvd"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "limit-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::LimitItems::~LimitItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::LimitItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| max.is_set
	|| rsvd.is_set
	|| rtmap.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::LimitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(rsvd.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::LimitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::LimitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (rsvd.is_set || is_set(rsvd.yfilter)) leaf_name_data.push_back(rsvd.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::LimitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::LimitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::LimitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvd")
    {
        rsvd = value;
        rsvd.value_namespace = name_space;
        rsvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::LimitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "rsvd")
    {
        rsvd.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::LimitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "max" || name == "rsvd" || name == "rtMap")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::AsmItems::AsmItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::str, "ctrl"},
    prebuildspt{YType::boolean, "preBuildSpt"},
    force{YType::boolean, "force"},
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"}
        ,
    sgexp_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems>())
    , shared_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems>())
    , reg_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems>())
{
    sgexp_items->parent = this;
    shared_items->parent = this;
    reg_items->parent = this;

    yang_name = "asm-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::AsmItems::~AsmItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| prebuildspt.is_set
	|| force.is_set
	|| rtmap.is_set
	|| pfxlist.is_set
	|| (sgexp_items !=  nullptr && sgexp_items->has_data())
	|| (shared_items !=  nullptr && shared_items->has_data())
	|| (reg_items !=  nullptr && reg_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(prebuildspt.yfilter)
	|| ydk::is_set(force.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| (sgexp_items !=  nullptr && sgexp_items->has_operation())
	|| (shared_items !=  nullptr && shared_items->has_operation())
	|| (reg_items !=  nullptr && reg_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::AsmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::AsmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (prebuildspt.is_set || is_set(prebuildspt.yfilter)) leaf_name_data.push_back(prebuildspt.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::AsmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sgexp-items")
    {
        if(sgexp_items == nullptr)
        {
            sgexp_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems>();
        }
        return sgexp_items;
    }

    if(child_yang_name == "shared-items")
    {
        if(shared_items == nullptr)
        {
            shared_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems>();
        }
        return shared_items;
    }

    if(child_yang_name == "reg-items")
    {
        if(reg_items == nullptr)
        {
            reg_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems>();
        }
        return reg_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::AsmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sgexp_items != nullptr)
    {
        _children["sgexp-items"] = sgexp_items;
    }

    if(shared_items != nullptr)
    {
        _children["shared-items"] = shared_items;
    }

    if(reg_items != nullptr)
    {
        _children["reg-items"] = reg_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::AsmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preBuildSpt")
    {
        prebuildspt = value;
        prebuildspt.value_namespace = name_space;
        prebuildspt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::AsmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "preBuildSpt")
    {
        prebuildspt.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgexp-items" || name == "shared-items" || name == "reg-items" || name == "name" || name == "descr" || name == "ctrl" || name == "preBuildSpt" || name == "force" || name == "rtMap" || name == "pfxList")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::SgexpItems()
    :
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"},
    sgexpitvl{YType::uint32, "sgExpItvl"}
{

    yang_name = "sgexp-items"; yang_parent_name = "asm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::~SgexpItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set
	|| sgexpitvl.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter)
	|| ydk::is_set(sgexpitvl.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sgexp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());
    if (sgexpitvl.is_set || is_set(sgexpitvl.yfilter)) leaf_name_data.push_back(sgexpitvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgExpItvl")
    {
        sgexpitvl = value;
        sgexpitvl.value_namespace = name_space;
        sgexpitvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
    if(value_path == "sgExpItvl")
    {
        sgexpitvl.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone" || name == "sgExpItvl")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::SharedItems()
    :
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"},
    usesptcommand{YType::boolean, "useSPTCommand"}
{

    yang_name = "shared-items"; yang_parent_name = "asm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::~SharedItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set
	|| usesptcommand.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter)
	|| ydk::is_set(usesptcommand.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());
    if (usesptcommand.is_set || is_set(usesptcommand.yfilter)) leaf_name_data.push_back(usesptcommand.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useSPTCommand")
    {
        usesptcommand = value;
        usesptcommand.value_namespace = name_space;
        usesptcommand.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
    if(value_path == "useSPTCommand")
    {
        usesptcommand.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone" || name == "useSPTCommand")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::RegItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    addr{YType::str, "addr"},
    srcif{YType::str, "srcIf"},
    maxrate{YType::uint16, "maxRate"},
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"}
{

    yang_name = "reg-items"; yang_parent_name = "asm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::~RegItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| addr.is_set
	|| srcif.is_set
	|| maxrate.is_set
	|| rtmap.is_set
	|| pfxlist.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(maxrate.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (maxrate.is_set || is_set(maxrate.yfilter)) leaf_name_data.push_back(maxrate.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxRate")
    {
        maxrate = value;
        maxrate.value_namespace = name_space;
        maxrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "maxRate")
    {
        maxrate.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "addr" || name == "srcIf" || name == "maxRate" || name == "rtMap" || name == "pfxList")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::SsmItems::SsmItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    range_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems>())
{
    range_items->parent = this;

    yang_name = "ssm-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::SsmItems::~SsmItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::SsmItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (range_items !=  nullptr && range_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::SsmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (range_items !=  nullptr && range_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::SsmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::SsmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::SsmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range-items")
    {
        if(range_items == nullptr)
        {
            range_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems>();
        }
        return range_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::SsmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(range_items != nullptr)
    {
        _children["range-items"] = range_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::SsmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::Pim6Items::InstItems::DomItems::DomList::SsmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::SsmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::RangeItems()
    :
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"}
{

    yang_name = "range-items"; yang_parent_name = "ssm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::~RangeItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::BidirItems::BidirItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    maxrp{YType::uint16, "maxRP"},
    dfobitvl{YType::uint16, "dfobItvl"}
{

    yang_name = "bidir-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::BidirItems::~BidirItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::BidirItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| maxrp.is_set
	|| dfobitvl.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::BidirItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(maxrp.yfilter)
	|| ydk::is_set(dfobitvl.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::BidirItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::BidirItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (maxrp.is_set || is_set(maxrp.yfilter)) leaf_name_data.push_back(maxrp.get_name_leafdata());
    if (dfobitvl.is_set || is_set(dfobitvl.yfilter)) leaf_name_data.push_back(dfobitvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::BidirItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::BidirItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::BidirItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxRP")
    {
        maxrp = value;
        maxrp.value_namespace = name_space;
        maxrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfobItvl")
    {
        dfobitvl = value;
        dfobitvl.value_namespace = name_space;
        dfobitvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::BidirItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "maxRP")
    {
        maxrp.yfilter = yfilter;
    }
    if(value_path == "dfobItvl")
    {
        dfobitvl.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::BidirItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "maxRP" || name == "dfobItvl")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::StaticrpItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    rp_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems>())
{
    rp_items->parent = this;

    yang_name = "staticrp-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::~StaticrpItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (rp_items !=  nullptr && rp_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (rp_items !=  nullptr && rp_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "staticrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-items")
    {
        if(rp_items == nullptr)
        {
            rp_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems>();
        }
        return rp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rp_items != nullptr)
    {
        _children["rp-items"] = rp_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::RpItems()
    :
    staticrp_list(this, {"addr"})
{

    yang_name = "rp-items"; yang_parent_name = "staticrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::~RpItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<staticrp_list.len(); index++)
    {
        if(staticrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::has_operation() const
{
    for (std::size_t index=0; index<staticrp_list.len(); index++)
    {
        if(staticrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StaticRP-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList>();
        ent_->parent = this;
        staticrp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : staticrp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StaticRP-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::StaticRPList()
    :
    addr{YType::str, "addr"}
        ,
    range_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems>())
    , rpgrplist_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems>())
{
    range_items->parent = this;
    rpgrplist_items->parent = this;

    yang_name = "StaticRP-list"; yang_parent_name = "rp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::~StaticRPList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| (range_items !=  nullptr && range_items->has_data())
	|| (rpgrplist_items !=  nullptr && rpgrplist_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| (range_items !=  nullptr && range_items->has_operation())
	|| (rpgrplist_items !=  nullptr && rpgrplist_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StaticRP-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range-items")
    {
        if(range_items == nullptr)
        {
            range_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems>();
        }
        return range_items;
    }

    if(child_yang_name == "rpgrplist-items")
    {
        if(rpgrplist_items == nullptr)
        {
            rpgrplist_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems>();
        }
        return rpgrplist_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(range_items != nullptr)
    {
        _children["range-items"] = range_items;
    }

    if(rpgrplist_items != nullptr)
    {
        _children["rpgrplist-items"] = rpgrplist_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-items" || name == "rpgrplist-items" || name == "addr")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RangeItems()
    :
    rpgrprange_list(this, {"bidir"})
{

    yang_name = "range-items"; yang_parent_name = "StaticRP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::~RangeItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpgrprange_list.len(); index++)
    {
        if(rpgrprange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::has_operation() const
{
    for (std::size_t index=0; index<rpgrprange_list.len(); index++)
    {
        if(rpgrprange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RpGrpRange-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList>();
        ent_->parent = this;
        rpgrprange_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpgrprange_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RpGrpRange-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList::RpGrpRangeList()
    :
    bidir{YType::boolean, "bidir"},
    override{YType::boolean, "override"},
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"}
{

    yang_name = "RpGrpRange-list"; yang_parent_name = "range-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList::~RpGrpRangeList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList::has_data() const
{
    if (is_presence_container) return true;
    return bidir.is_set
	|| override.is_set
	|| rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| ydk::is_set(override.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RpGrpRange-list";
    ADD_KEY_TOKEN(bidir, "bidir");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidir" || name == "override" || name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpgrplistItems()
    :
    rpgrplist_list(this, {"grplistname"})
{

    yang_name = "rpgrplist-items"; yang_parent_name = "StaticRP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::~RpgrplistItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpgrplist_list.len(); index++)
    {
        if(rpgrplist_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::has_operation() const
{
    for (std::size_t index=0; index<rpgrplist_list.len(); index++)
    {
        if(rpgrplist_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpgrplist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RpGrpList-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpGrpListList>();
        ent_->parent = this;
        rpgrplist_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpgrplist_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RpGrpList-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpGrpListList::RpGrpListList()
    :
    grplistname{YType::str, "grpListName"},
    bidir{YType::boolean, "bidir"},
    override{YType::boolean, "override"}
{

    yang_name = "RpGrpList-list"; yang_parent_name = "rpgrplist-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpGrpListList::~RpGrpListList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpGrpListList::has_data() const
{
    if (is_presence_container) return true;
    return grplistname.is_set
	|| bidir.is_set
	|| override.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpGrpListList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grplistname.yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| ydk::is_set(override.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpGrpListList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RpGrpList-list";
    ADD_KEY_TOKEN(grplistname, "grpListName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpGrpListList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grplistname.is_set || is_set(grplistname.yfilter)) leaf_name_data.push_back(grplistname.get_name_leafdata());
    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpGrpListList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpGrpListList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpGrpListList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpListName")
    {
        grplistname = value;
        grplistname.value_namespace = name_space;
        grplistname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpGrpListList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpListName")
    {
        grplistname.yfilter = yfilter;
    }
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpGrpListList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grpListName" || name == "bidir" || name == "override")
        return true;
    return false;
}

System::Pim6Items::InstItems::GlItems::GlItems()
    :
    loglvl{YType::uint16, "logLvl"},
    isolate{YType::boolean, "isolate"}
{

    yang_name = "gl-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Pim6Items::InstItems::GlItems::~GlItems()
{
}

bool System::Pim6Items::InstItems::GlItems::has_data() const
{
    if (is_presence_container) return true;
    return loglvl.is_set
	|| isolate.is_set;
}

bool System::Pim6Items::InstItems::GlItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loglvl.yfilter)
	|| ydk::is_set(isolate.yfilter);
}

std::string System::Pim6Items::InstItems::GlItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pim6-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Pim6Items::InstItems::GlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::GlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loglvl.is_set || is_set(loglvl.yfilter)) leaf_name_data.push_back(loglvl.get_name_leafdata());
    if (isolate.is_set || is_set(isolate.yfilter)) leaf_name_data.push_back(isolate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::GlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::GlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::GlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logLvl")
    {
        loglvl = value;
        loglvl.value_namespace = name_space;
        loglvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isolate")
    {
        isolate = value;
        isolate.value_namespace = name_space;
        isolate.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::GlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logLvl")
    {
        loglvl.yfilter = yfilter;
    }
    if(value_path == "isolate")
    {
        isolate.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::GlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logLvl" || name == "isolate")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::RoutedbItems()
    :
    vrf_items(std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems>())
{
    vrf_items->parent = this;

    yang_name = "routedb-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Pim6Items::InstItems::RoutedbItems::~RoutedbItems()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::has_data() const
{
    if (is_presence_container) return true;
    return (vrf_items !=  nullptr && vrf_items->has_data());
}

bool System::Pim6Items::InstItems::RoutedbItems::has_operation() const
{
    return is_set(yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation());
}

std::string System::Pim6Items::InstItems::RoutedbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pim6-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Pim6Items::InstItems::RoutedbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routedb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems>();
        }
        return vrf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::RoutedbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::RoutedbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfItems()
    :
    vrf_list(this, {"name"})
{

    yang_name = "vrf-items"; yang_parent_name = "routedb-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::~VrfItems()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::has_operation() const
{
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pim6-items/inst-items/routedb-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vrf-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList>();
        ent_->parent = this;
        vrf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vrf-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfList()
    :
    name{YType::str, "name"},
    cid{YType::uint32, "cid"},
    tableid{YType::str, "tableId"},
    pim6enbldintfcount{YType::uint32, "pim6EnbldIntfCount"},
    bfdenabled{YType::boolean, "bfdEnabled"},
    totalnumroutes{YType::uint32, "totalNumRoutes"}
        ,
    autorp_items(std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems>())
    , bsr_items(std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems>())
    , grange_items(std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems>())
    , group_items(std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems>())
    , ifrec_items(std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems>())
    , rp_items(std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems>())
    , trstats_items(std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems>())
    , vrfdetail_items(std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems>())
{
    autorp_items->parent = this;
    bsr_items->parent = this;
    grange_items->parent = this;
    group_items->parent = this;
    ifrec_items->parent = this;
    rp_items->parent = this;
    trstats_items->parent = this;
    vrfdetail_items->parent = this;

    yang_name = "Vrf-list"; yang_parent_name = "vrf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::~VrfList()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| cid.is_set
	|| tableid.is_set
	|| pim6enbldintfcount.is_set
	|| bfdenabled.is_set
	|| totalnumroutes.is_set
	|| (autorp_items !=  nullptr && autorp_items->has_data())
	|| (bsr_items !=  nullptr && bsr_items->has_data())
	|| (grange_items !=  nullptr && grange_items->has_data())
	|| (group_items !=  nullptr && group_items->has_data())
	|| (ifrec_items !=  nullptr && ifrec_items->has_data())
	|| (rp_items !=  nullptr && rp_items->has_data())
	|| (trstats_items !=  nullptr && trstats_items->has_data())
	|| (vrfdetail_items !=  nullptr && vrfdetail_items->has_data());
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(cid.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(pim6enbldintfcount.yfilter)
	|| ydk::is_set(bfdenabled.yfilter)
	|| ydk::is_set(totalnumroutes.yfilter)
	|| (autorp_items !=  nullptr && autorp_items->has_operation())
	|| (bsr_items !=  nullptr && bsr_items->has_operation())
	|| (grange_items !=  nullptr && grange_items->has_operation())
	|| (group_items !=  nullptr && group_items->has_operation())
	|| (ifrec_items !=  nullptr && ifrec_items->has_operation())
	|| (rp_items !=  nullptr && rp_items->has_operation())
	|| (trstats_items !=  nullptr && trstats_items->has_operation())
	|| (vrfdetail_items !=  nullptr && vrfdetail_items->has_operation());
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pim6-items/inst-items/routedb-items/vrf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vrf-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cid.is_set || is_set(cid.yfilter)) leaf_name_data.push_back(cid.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (pim6enbldintfcount.is_set || is_set(pim6enbldintfcount.yfilter)) leaf_name_data.push_back(pim6enbldintfcount.get_name_leafdata());
    if (bfdenabled.is_set || is_set(bfdenabled.yfilter)) leaf_name_data.push_back(bfdenabled.get_name_leafdata());
    if (totalnumroutes.is_set || is_set(totalnumroutes.yfilter)) leaf_name_data.push_back(totalnumroutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autorp-items")
    {
        if(autorp_items == nullptr)
        {
            autorp_items = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems>();
        }
        return autorp_items;
    }

    if(child_yang_name == "bsr-items")
    {
        if(bsr_items == nullptr)
        {
            bsr_items = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems>();
        }
        return bsr_items;
    }

    if(child_yang_name == "grange-items")
    {
        if(grange_items == nullptr)
        {
            grange_items = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems>();
        }
        return grange_items;
    }

    if(child_yang_name == "group-items")
    {
        if(group_items == nullptr)
        {
            group_items = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems>();
        }
        return group_items;
    }

    if(child_yang_name == "ifrec-items")
    {
        if(ifrec_items == nullptr)
        {
            ifrec_items = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems>();
        }
        return ifrec_items;
    }

    if(child_yang_name == "rp-items")
    {
        if(rp_items == nullptr)
        {
            rp_items = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems>();
        }
        return rp_items;
    }

    if(child_yang_name == "trstats-items")
    {
        if(trstats_items == nullptr)
        {
            trstats_items = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems>();
        }
        return trstats_items;
    }

    if(child_yang_name == "vrfdetail-items")
    {
        if(vrfdetail_items == nullptr)
        {
            vrfdetail_items = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems>();
        }
        return vrfdetail_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(autorp_items != nullptr)
    {
        _children["autorp-items"] = autorp_items;
    }

    if(bsr_items != nullptr)
    {
        _children["bsr-items"] = bsr_items;
    }

    if(grange_items != nullptr)
    {
        _children["grange-items"] = grange_items;
    }

    if(group_items != nullptr)
    {
        _children["group-items"] = group_items;
    }

    if(ifrec_items != nullptr)
    {
        _children["ifrec-items"] = ifrec_items;
    }

    if(rp_items != nullptr)
    {
        _children["rp-items"] = rp_items;
    }

    if(trstats_items != nullptr)
    {
        _children["trstats-items"] = trstats_items;
    }

    if(vrfdetail_items != nullptr)
    {
        _children["vrfdetail-items"] = vrfdetail_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cid")
    {
        cid = value;
        cid.value_namespace = name_space;
        cid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6EnbldIntfCount")
    {
        pim6enbldintfcount = value;
        pim6enbldintfcount.value_namespace = name_space;
        pim6enbldintfcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdEnabled")
    {
        bfdenabled = value;
        bfdenabled.value_namespace = name_space;
        bfdenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalNumRoutes")
    {
        totalnumroutes = value;
        totalnumroutes.value_namespace = name_space;
        totalnumroutes.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "cid")
    {
        cid.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "pim6EnbldIntfCount")
    {
        pim6enbldintfcount.yfilter = yfilter;
    }
    if(value_path == "bfdEnabled")
    {
        bfdenabled.yfilter = yfilter;
    }
    if(value_path == "totalNumRoutes")
    {
        totalnumroutes.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autorp-items" || name == "bsr-items" || name == "grange-items" || name == "group-items" || name == "ifrec-items" || name == "rp-items" || name == "trstats-items" || name == "vrfdetail-items" || name == "name" || name == "cid" || name == "tableId" || name == "pim6EnbldIntfCount" || name == "bfdEnabled" || name == "totalNumRoutes")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutorpItems()
    :
    autorppinfo_list(this, {"addr"})
{

    yang_name = "autorp-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::~AutorpItems()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<autorppinfo_list.len(); index++)
    {
        if(autorppinfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::has_operation() const
{
    for (std::size_t index=0; index<autorppinfo_list.len(); index++)
    {
        if(autorppinfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autorp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AutoRppInfo-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutoRppInfoList>();
        ent_->parent = this;
        autorppinfo_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : autorppinfo_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AutoRppInfo-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutoRppInfoList::AutoRppInfoList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    expiry{YType::str, "expiry"},
    uptime{YType::str, "uptime"},
    priority{YType::uint32, "priority"},
    hashmasklen{YType::uint32, "hashMaskLen"}
{

    yang_name = "AutoRppInfo-list"; yang_parent_name = "autorp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutoRppInfoList::~AutoRppInfoList()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutoRppInfoList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| expiry.is_set
	|| uptime.is_set
	|| priority.is_set
	|| hashmasklen.is_set;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutoRppInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(hashmasklen.yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutoRppInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AutoRppInfo-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutoRppInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (hashmasklen.is_set || is_set(hashmasklen.yfilter)) leaf_name_data.push_back(hashmasklen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutoRppInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutoRppInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutoRppInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen = value;
        hashmasklen.value_namespace = name_space;
        hashmasklen.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutoRppInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutoRppInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "expiry" || name == "uptime" || name == "priority" || name == "hashMaskLen")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrItems()
    :
    bsrinfo_list(this, {"grpaddr"})
{

    yang_name = "bsr-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::~BsrItems()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bsrinfo_list.len(); index++)
    {
        if(bsrinfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::has_operation() const
{
    for (std::size_t index=0; index<bsrinfo_list.len(); index++)
    {
        if(bsrinfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BsrInfo-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrInfoList>();
        ent_->parent = this;
        bsrinfo_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bsrinfo_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BsrInfo-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrInfoList::BsrInfoList()
    :
    grpaddr{YType::str, "grpAddr"},
    bsraddr{YType::str, "bsrAddr"},
    rpaddr{YType::str, "rpAddr"},
    hash{YType::uint32, "hash"},
    hashmasklen{YType::uint32, "hashMaskLen"},
    besthash{YType::boolean, "bestHash"}
{

    yang_name = "BsrInfo-list"; yang_parent_name = "bsr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrInfoList::~BsrInfoList()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrInfoList::has_data() const
{
    if (is_presence_container) return true;
    return grpaddr.is_set
	|| bsraddr.is_set
	|| rpaddr.is_set
	|| hash.is_set
	|| hashmasklen.is_set
	|| besthash.is_set;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpaddr.yfilter)
	|| ydk::is_set(bsraddr.yfilter)
	|| ydk::is_set(rpaddr.yfilter)
	|| ydk::is_set(hash.yfilter)
	|| ydk::is_set(hashmasklen.yfilter)
	|| ydk::is_set(besthash.yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BsrInfo-list";
    ADD_KEY_TOKEN(grpaddr, "grpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpaddr.is_set || is_set(grpaddr.yfilter)) leaf_name_data.push_back(grpaddr.get_name_leafdata());
    if (bsraddr.is_set || is_set(bsraddr.yfilter)) leaf_name_data.push_back(bsraddr.get_name_leafdata());
    if (rpaddr.is_set || is_set(rpaddr.yfilter)) leaf_name_data.push_back(rpaddr.get_name_leafdata());
    if (hash.is_set || is_set(hash.yfilter)) leaf_name_data.push_back(hash.get_name_leafdata());
    if (hashmasklen.is_set || is_set(hashmasklen.yfilter)) leaf_name_data.push_back(hashmasklen.get_name_leafdata());
    if (besthash.is_set || is_set(besthash.yfilter)) leaf_name_data.push_back(besthash.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpAddr")
    {
        grpaddr = value;
        grpaddr.value_namespace = name_space;
        grpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrAddr")
    {
        bsraddr = value;
        bsraddr.value_namespace = name_space;
        bsraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpAddr")
    {
        rpaddr = value;
        rpaddr.value_namespace = name_space;
        rpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash")
    {
        hash = value;
        hash.value_namespace = name_space;
        hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen = value;
        hashmasklen.value_namespace = name_space;
        hashmasklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestHash")
    {
        besthash = value;
        besthash.value_namespace = name_space;
        besthash.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpAddr")
    {
        grpaddr.yfilter = yfilter;
    }
    if(value_path == "bsrAddr")
    {
        bsraddr.yfilter = yfilter;
    }
    if(value_path == "rpAddr")
    {
        rpaddr.yfilter = yfilter;
    }
    if(value_path == "hash")
    {
        hash.yfilter = yfilter;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen.yfilter = yfilter;
    }
    if(value_path == "bestHash")
    {
        besthash.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grpAddr" || name == "bsrAddr" || name == "rpAddr" || name == "hash" || name == "hashMaskLen" || name == "bestHash")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::GrangeItems()
    :
    rpgrange_list(this, {"addr"})
{

    yang_name = "grange-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::~GrangeItems()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpgrange_list.len(); index++)
    {
        if(rpgrange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::has_operation() const
{
    for (std::size_t index=0; index<rpgrange_list.len(); index++)
    {
        if(rpgrange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RpGrange-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::RpGrangeList>();
        ent_->parent = this;
        rpgrange_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpgrange_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RpGrange-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::RpGrangeList::RpGrangeList()
    :
    addr{YType::str, "addr"},
    rpaddr{YType::str, "rpAddr"},
    mode{YType::str, "mode"},
    usershared{YType::uint32, "userShared"}
{

    yang_name = "RpGrange-list"; yang_parent_name = "grange-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::RpGrangeList::~RpGrangeList()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::RpGrangeList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| rpaddr.is_set
	|| mode.is_set
	|| usershared.is_set;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::RpGrangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(rpaddr.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(usershared.yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::RpGrangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RpGrange-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::RpGrangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (rpaddr.is_set || is_set(rpaddr.yfilter)) leaf_name_data.push_back(rpaddr.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (usershared.is_set || is_set(usershared.yfilter)) leaf_name_data.push_back(usershared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::RpGrangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::RpGrangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::RpGrangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpAddr")
    {
        rpaddr = value;
        rpaddr.value_namespace = name_space;
        rpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userShared")
    {
        usershared = value;
        usershared.value_namespace = name_space;
        usershared.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::RpGrangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "rpAddr")
    {
        rpaddr.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "userShared")
    {
        usershared.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::RpGrangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "rpAddr" || name == "mode" || name == "userShared")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupItems()
    :
    group_list(this, {"grpaddr"})
{

    yang_name = "group-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::~GroupItems()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::has_operation() const
{
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Group-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList>();
        ent_->parent = this;
        group_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Group-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::GroupList()
    :
    grpaddr{YType::str, "grpAddr"},
    grpmasklen{YType::uint32, "grpMasklen"},
    bidir{YType::boolean, "bidir"}
        ,
    source_items(std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems>())
{
    source_items->parent = this;

    yang_name = "Group-list"; yang_parent_name = "group-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::~GroupList()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::has_data() const
{
    if (is_presence_container) return true;
    return grpaddr.is_set
	|| grpmasklen.is_set
	|| bidir.is_set
	|| (source_items !=  nullptr && source_items->has_data());
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpaddr.yfilter)
	|| ydk::is_set(grpmasklen.yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| (source_items !=  nullptr && source_items->has_operation());
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Group-list";
    ADD_KEY_TOKEN(grpaddr, "grpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpaddr.is_set || is_set(grpaddr.yfilter)) leaf_name_data.push_back(grpaddr.get_name_leafdata());
    if (grpmasklen.is_set || is_set(grpmasklen.yfilter)) leaf_name_data.push_back(grpmasklen.get_name_leafdata());
    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-items")
    {
        if(source_items == nullptr)
        {
            source_items = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems>();
        }
        return source_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_items != nullptr)
    {
        _children["source-items"] = source_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpAddr")
    {
        grpaddr = value;
        grpaddr.value_namespace = name_space;
        grpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpMasklen")
    {
        grpmasklen = value;
        grpmasklen.value_namespace = name_space;
        grpmasklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpAddr")
    {
        grpaddr.yfilter = yfilter;
    }
    if(value_path == "grpMasklen")
    {
        grpmasklen.yfilter = yfilter;
    }
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-items" || name == "grpAddr" || name == "grpMasklen" || name == "bidir")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceItems()
    :
    source_list(this, {"srcaddr"})
{

    yang_name = "source-items"; yang_parent_name = "Group-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::~SourceItems()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_operation() const
{
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Source-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList>();
        ent_->parent = this;
        source_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : source_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Source-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::SourceList()
    :
    srcaddr{YType::str, "srcAddr"},
    expiryts{YType::str, "expiryTs"},
    assertmetrics{YType::uint32, "assertMetrics"},
    assertmetricprefs{YType::uint32, "assertMetricPrefs"},
    oifcount{YType::uint32, "oifcount"},
    routeiif{YType::str, "routeIif"},
    rpfnbr{YType::str, "rpfNbr"},
    routebits{YType::str, "routeBits"},
    rttimeoutinvtl{YType::uint32, "rtTimeOutInvtl"},
    jpholdtime{YType::uint32, "jpHoldTime"}
        ,
    oif_items(std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "Source-list"; yang_parent_name = "source-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::~SourceList()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_data() const
{
    if (is_presence_container) return true;
    return srcaddr.is_set
	|| expiryts.is_set
	|| assertmetrics.is_set
	|| assertmetricprefs.is_set
	|| oifcount.is_set
	|| routeiif.is_set
	|| rpfnbr.is_set
	|| routebits.is_set
	|| rttimeoutinvtl.is_set
	|| jpholdtime.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(expiryts.yfilter)
	|| ydk::is_set(assertmetrics.yfilter)
	|| ydk::is_set(assertmetricprefs.yfilter)
	|| ydk::is_set(oifcount.yfilter)
	|| ydk::is_set(routeiif.yfilter)
	|| ydk::is_set(rpfnbr.yfilter)
	|| ydk::is_set(routebits.yfilter)
	|| ydk::is_set(rttimeoutinvtl.yfilter)
	|| ydk::is_set(jpholdtime.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Source-list";
    ADD_KEY_TOKEN(srcaddr, "srcAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (expiryts.is_set || is_set(expiryts.yfilter)) leaf_name_data.push_back(expiryts.get_name_leafdata());
    if (assertmetrics.is_set || is_set(assertmetrics.yfilter)) leaf_name_data.push_back(assertmetrics.get_name_leafdata());
    if (assertmetricprefs.is_set || is_set(assertmetricprefs.yfilter)) leaf_name_data.push_back(assertmetricprefs.get_name_leafdata());
    if (oifcount.is_set || is_set(oifcount.yfilter)) leaf_name_data.push_back(oifcount.get_name_leafdata());
    if (routeiif.is_set || is_set(routeiif.yfilter)) leaf_name_data.push_back(routeiif.get_name_leafdata());
    if (rpfnbr.is_set || is_set(rpfnbr.yfilter)) leaf_name_data.push_back(rpfnbr.get_name_leafdata());
    if (routebits.is_set || is_set(routebits.yfilter)) leaf_name_data.push_back(routebits.get_name_leafdata());
    if (rttimeoutinvtl.is_set || is_set(rttimeoutinvtl.yfilter)) leaf_name_data.push_back(rttimeoutinvtl.get_name_leafdata());
    if (jpholdtime.is_set || is_set(jpholdtime.yfilter)) leaf_name_data.push_back(jpholdtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oif_items != nullptr)
    {
        _children["oif-items"] = oif_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiryTs")
    {
        expiryts = value;
        expiryts.value_namespace = name_space;
        expiryts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertMetrics")
    {
        assertmetrics = value;
        assertmetrics.value_namespace = name_space;
        assertmetrics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertMetricPrefs")
    {
        assertmetricprefs = value;
        assertmetricprefs.value_namespace = name_space;
        assertmetricprefs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifcount")
    {
        oifcount = value;
        oifcount.value_namespace = name_space;
        oifcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeIif")
    {
        routeiif = value;
        routeiif.value_namespace = name_space;
        routeiif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr = value;
        rpfnbr.value_namespace = name_space;
        rpfnbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeBits")
    {
        routebits = value;
        routebits.value_namespace = name_space;
        routebits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtTimeOutInvtl")
    {
        rttimeoutinvtl = value;
        rttimeoutinvtl.value_namespace = name_space;
        rttimeoutinvtl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpHoldTime")
    {
        jpholdtime = value;
        jpholdtime.value_namespace = name_space;
        jpholdtime.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "expiryTs")
    {
        expiryts.yfilter = yfilter;
    }
    if(value_path == "assertMetrics")
    {
        assertmetrics.yfilter = yfilter;
    }
    if(value_path == "assertMetricPrefs")
    {
        assertmetricprefs.yfilter = yfilter;
    }
    if(value_path == "oifcount")
    {
        oifcount.yfilter = yfilter;
    }
    if(value_path == "routeIif")
    {
        routeiif.yfilter = yfilter;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr.yfilter = yfilter;
    }
    if(value_path == "routeBits")
    {
        routebits.yfilter = yfilter;
    }
    if(value_path == "rtTimeOutInvtl")
    {
        rttimeoutinvtl.yfilter = yfilter;
    }
    if(value_path == "jpHoldTime")
    {
        jpholdtime.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "srcAddr" || name == "expiryTs" || name == "assertMetrics" || name == "assertMetricPrefs" || name == "oifcount" || name == "routeIif" || name == "rpfNbr" || name == "routeBits" || name == "rtTimeOutInvtl" || name == "jpHoldTime")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifItems()
    :
    oif_list(this, {"oifname"})
{

    yang_name = "oif-items"; yang_parent_name = "Source-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::~OifItems()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Oif-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList>();
        ent_->parent = this;
        oif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Oif-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifList()
    :
    oifname{YType::str, "oifName"},
    oifuptime{YType::str, "oifUptime"},
    oifrpf{YType::boolean, "oifRPF"},
    oiflispencapentries{YType::uint32, "oifLispEncapEntries"}
{

    yang_name = "Oif-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::~OifList()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_data() const
{
    if (is_presence_container) return true;
    return oifname.is_set
	|| oifuptime.is_set
	|| oifrpf.is_set
	|| oiflispencapentries.is_set;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oifname.yfilter)
	|| ydk::is_set(oifuptime.yfilter)
	|| ydk::is_set(oifrpf.yfilter)
	|| ydk::is_set(oiflispencapentries.yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Oif-list";
    ADD_KEY_TOKEN(oifname, "oifName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oifname.is_set || is_set(oifname.yfilter)) leaf_name_data.push_back(oifname.get_name_leafdata());
    if (oifuptime.is_set || is_set(oifuptime.yfilter)) leaf_name_data.push_back(oifuptime.get_name_leafdata());
    if (oifrpf.is_set || is_set(oifrpf.yfilter)) leaf_name_data.push_back(oifrpf.get_name_leafdata());
    if (oiflispencapentries.is_set || is_set(oiflispencapentries.yfilter)) leaf_name_data.push_back(oiflispencapentries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oifName")
    {
        oifname = value;
        oifname.value_namespace = name_space;
        oifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifUptime")
    {
        oifuptime = value;
        oifuptime.value_namespace = name_space;
        oifuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifRPF")
    {
        oifrpf = value;
        oifrpf.value_namespace = name_space;
        oifrpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifLispEncapEntries")
    {
        oiflispencapentries = value;
        oiflispencapentries.value_namespace = name_space;
        oiflispencapentries.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oifName")
    {
        oifname.yfilter = yfilter;
    }
    if(value_path == "oifUptime")
    {
        oifuptime.yfilter = yfilter;
    }
    if(value_path == "oifRPF")
    {
        oifrpf.yfilter = yfilter;
    }
    if(value_path == "oifLispEncapEntries")
    {
        oiflispencapentries.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oifName" || name == "oifUptime" || name == "oifRPF" || name == "oifLispEncapEntries")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfrecItems()
    :
    ifrec_list(this, {"pim6ifname"})
{

    yang_name = "ifrec-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::~IfrecItems()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifrec_list.len(); index++)
    {
        if(ifrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::has_operation() const
{
    for (std::size_t index=0; index<ifrec_list.len(); index++)
    {
        if(ifrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfRec-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList>();
        ent_->parent = this;
        ifrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ifrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfRec-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfRecList()
    :
    pim6ifname{YType::str, "pim6IfName"},
    pim6dr{YType::str, "pim6Dr"},
    pim6drprio{YType::uint32, "pim6DrPrio"},
    pim6nbrholdtime{YType::uint32, "pim6NbrHoldTime"},
    pim6genid{YType::uint32, "pim6GenID"},
    pim6nexthello{YType::str, "pim6NextHello"},
    pim6ipaddr{YType::str, "pim6IpAddr"},
    pim6border{YType::boolean, "pim6Border"},
    pim6sparsemode{YType::boolean, "pim6SparseMode"}
        ,
    adjrec_items(std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems>())
    , ifstats_items(std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems>())
{
    adjrec_items->parent = this;
    ifstats_items->parent = this;

    yang_name = "IfRec-list"; yang_parent_name = "ifrec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::~IfRecList()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::has_data() const
{
    if (is_presence_container) return true;
    return pim6ifname.is_set
	|| pim6dr.is_set
	|| pim6drprio.is_set
	|| pim6nbrholdtime.is_set
	|| pim6genid.is_set
	|| pim6nexthello.is_set
	|| pim6ipaddr.is_set
	|| pim6border.is_set
	|| pim6sparsemode.is_set
	|| (adjrec_items !=  nullptr && adjrec_items->has_data())
	|| (ifstats_items !=  nullptr && ifstats_items->has_data());
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pim6ifname.yfilter)
	|| ydk::is_set(pim6dr.yfilter)
	|| ydk::is_set(pim6drprio.yfilter)
	|| ydk::is_set(pim6nbrholdtime.yfilter)
	|| ydk::is_set(pim6genid.yfilter)
	|| ydk::is_set(pim6nexthello.yfilter)
	|| ydk::is_set(pim6ipaddr.yfilter)
	|| ydk::is_set(pim6border.yfilter)
	|| ydk::is_set(pim6sparsemode.yfilter)
	|| (adjrec_items !=  nullptr && adjrec_items->has_operation())
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation());
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfRec-list";
    ADD_KEY_TOKEN(pim6ifname, "pim6IfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim6ifname.is_set || is_set(pim6ifname.yfilter)) leaf_name_data.push_back(pim6ifname.get_name_leafdata());
    if (pim6dr.is_set || is_set(pim6dr.yfilter)) leaf_name_data.push_back(pim6dr.get_name_leafdata());
    if (pim6drprio.is_set || is_set(pim6drprio.yfilter)) leaf_name_data.push_back(pim6drprio.get_name_leafdata());
    if (pim6nbrholdtime.is_set || is_set(pim6nbrholdtime.yfilter)) leaf_name_data.push_back(pim6nbrholdtime.get_name_leafdata());
    if (pim6genid.is_set || is_set(pim6genid.yfilter)) leaf_name_data.push_back(pim6genid.get_name_leafdata());
    if (pim6nexthello.is_set || is_set(pim6nexthello.yfilter)) leaf_name_data.push_back(pim6nexthello.get_name_leafdata());
    if (pim6ipaddr.is_set || is_set(pim6ipaddr.yfilter)) leaf_name_data.push_back(pim6ipaddr.get_name_leafdata());
    if (pim6border.is_set || is_set(pim6border.yfilter)) leaf_name_data.push_back(pim6border.get_name_leafdata());
    if (pim6sparsemode.is_set || is_set(pim6sparsemode.yfilter)) leaf_name_data.push_back(pim6sparsemode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjrec-items")
    {
        if(adjrec_items == nullptr)
        {
            adjrec_items = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems>();
        }
        return adjrec_items;
    }

    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems>();
        }
        return ifstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjrec_items != nullptr)
    {
        _children["adjrec-items"] = adjrec_items;
    }

    if(ifstats_items != nullptr)
    {
        _children["ifstats-items"] = ifstats_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pim6IfName")
    {
        pim6ifname = value;
        pim6ifname.value_namespace = name_space;
        pim6ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6Dr")
    {
        pim6dr = value;
        pim6dr.value_namespace = name_space;
        pim6dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6DrPrio")
    {
        pim6drprio = value;
        pim6drprio.value_namespace = name_space;
        pim6drprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6NbrHoldTime")
    {
        pim6nbrholdtime = value;
        pim6nbrholdtime.value_namespace = name_space;
        pim6nbrholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6GenID")
    {
        pim6genid = value;
        pim6genid.value_namespace = name_space;
        pim6genid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6NextHello")
    {
        pim6nexthello = value;
        pim6nexthello.value_namespace = name_space;
        pim6nexthello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6IpAddr")
    {
        pim6ipaddr = value;
        pim6ipaddr.value_namespace = name_space;
        pim6ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6Border")
    {
        pim6border = value;
        pim6border.value_namespace = name_space;
        pim6border.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6SparseMode")
    {
        pim6sparsemode = value;
        pim6sparsemode.value_namespace = name_space;
        pim6sparsemode.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pim6IfName")
    {
        pim6ifname.yfilter = yfilter;
    }
    if(value_path == "pim6Dr")
    {
        pim6dr.yfilter = yfilter;
    }
    if(value_path == "pim6DrPrio")
    {
        pim6drprio.yfilter = yfilter;
    }
    if(value_path == "pim6NbrHoldTime")
    {
        pim6nbrholdtime.yfilter = yfilter;
    }
    if(value_path == "pim6GenID")
    {
        pim6genid.yfilter = yfilter;
    }
    if(value_path == "pim6NextHello")
    {
        pim6nexthello.yfilter = yfilter;
    }
    if(value_path == "pim6IpAddr")
    {
        pim6ipaddr.yfilter = yfilter;
    }
    if(value_path == "pim6Border")
    {
        pim6border.yfilter = yfilter;
    }
    if(value_path == "pim6SparseMode")
    {
        pim6sparsemode.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjrec-items" || name == "ifstats-items" || name == "pim6IfName" || name == "pim6Dr" || name == "pim6DrPrio" || name == "pim6NbrHoldTime" || name == "pim6GenID" || name == "pim6NextHello" || name == "pim6IpAddr" || name == "pim6Border" || name == "pim6SparseMode")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjrecItems()
    :
    adjeprec_list(this, {"addr"})
{

    yang_name = "adjrec-items"; yang_parent_name = "IfRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::~AdjrecItems()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjeprec_list.len(); index++)
    {
        if(adjeprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::has_operation() const
{
    for (std::size_t index=0; index<adjeprec_list.len(); index++)
    {
        if(adjeprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjrec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEpRec-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList>();
        ent_->parent = this;
        adjeprec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : adjeprec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEpRec-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjEpRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    nbrname{YType::str, "nbrName"},
    drprio{YType::uint32, "drPrio"},
    learntime{YType::str, "learnTime"},
    expirytime{YType::str, "expiryTime"},
    genid{YType::uint32, "genId"},
    bfdst{YType::enumeration, "bfdSt"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"}
        ,
    adjstats_items(std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems>())
{
    adjstats_items->parent = this;

    yang_name = "AdjEpRec-list"; yang_parent_name = "adjrec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::~AdjEpRecList()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| nbrname.is_set
	|| drprio.is_set
	|| learntime.is_set
	|| expirytime.is_set
	|| genid.is_set
	|| bfdst.is_set
	|| operst.is_set
	|| flags.is_set
	|| (adjstats_items !=  nullptr && adjstats_items->has_data());
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(nbrname.yfilter)
	|| ydk::is_set(drprio.yfilter)
	|| ydk::is_set(learntime.yfilter)
	|| ydk::is_set(expirytime.yfilter)
	|| ydk::is_set(genid.yfilter)
	|| ydk::is_set(bfdst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (adjstats_items !=  nullptr && adjstats_items->has_operation());
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEpRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (nbrname.is_set || is_set(nbrname.yfilter)) leaf_name_data.push_back(nbrname.get_name_leafdata());
    if (drprio.is_set || is_set(drprio.yfilter)) leaf_name_data.push_back(drprio.get_name_leafdata());
    if (learntime.is_set || is_set(learntime.yfilter)) leaf_name_data.push_back(learntime.get_name_leafdata());
    if (expirytime.is_set || is_set(expirytime.yfilter)) leaf_name_data.push_back(expirytime.get_name_leafdata());
    if (genid.is_set || is_set(genid.yfilter)) leaf_name_data.push_back(genid.get_name_leafdata());
    if (bfdst.is_set || is_set(bfdst.yfilter)) leaf_name_data.push_back(bfdst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjstats-items")
    {
        if(adjstats_items == nullptr)
        {
            adjstats_items = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems>();
        }
        return adjstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjstats_items != nullptr)
    {
        _children["adjstats-items"] = adjstats_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbrName")
    {
        nbrname = value;
        nbrname.value_namespace = name_space;
        nbrname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drPrio")
    {
        drprio = value;
        drprio.value_namespace = name_space;
        drprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learnTime")
    {
        learntime = value;
        learntime.value_namespace = name_space;
        learntime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiryTime")
    {
        expirytime = value;
        expirytime.value_namespace = name_space;
        expirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "genId")
    {
        genid = value;
        genid.value_namespace = name_space;
        genid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdSt")
    {
        bfdst = value;
        bfdst.value_namespace = name_space;
        bfdst.value_namespace_prefix = name_space_prefix;
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
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "nbrName")
    {
        nbrname.yfilter = yfilter;
    }
    if(value_path == "drPrio")
    {
        drprio.yfilter = yfilter;
    }
    if(value_path == "learnTime")
    {
        learntime.yfilter = yfilter;
    }
    if(value_path == "expiryTime")
    {
        expirytime.yfilter = yfilter;
    }
    if(value_path == "genId")
    {
        genid.yfilter = yfilter;
    }
    if(value_path == "bfdSt")
    {
        bfdst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjstats-items" || name == "addr" || name == "name" || name == "nbrName" || name == "drPrio" || name == "learnTime" || name == "expiryTime" || name == "genId" || name == "bfdSt" || name == "operSt" || name == "flags")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::AdjstatsItems()
    :
    lasthellorcvd{YType::str, "lastHelloRcvd"},
    longhelloitvl{YType::uint32, "longHelloItvl"},
    lastholdtime{YType::uint16, "lastHoldTime"},
    nonhelloexpresets{YType::uint32, "nonHelloExpResets"}
{

    yang_name = "adjstats-items"; yang_parent_name = "AdjEpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::~AdjstatsItems()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return lasthellorcvd.is_set
	|| longhelloitvl.is_set
	|| lastholdtime.is_set
	|| nonhelloexpresets.is_set;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lasthellorcvd.yfilter)
	|| ydk::is_set(longhelloitvl.yfilter)
	|| ydk::is_set(lastholdtime.yfilter)
	|| ydk::is_set(nonhelloexpresets.yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lasthellorcvd.is_set || is_set(lasthellorcvd.yfilter)) leaf_name_data.push_back(lasthellorcvd.get_name_leafdata());
    if (longhelloitvl.is_set || is_set(longhelloitvl.yfilter)) leaf_name_data.push_back(longhelloitvl.get_name_leafdata());
    if (lastholdtime.is_set || is_set(lastholdtime.yfilter)) leaf_name_data.push_back(lastholdtime.get_name_leafdata());
    if (nonhelloexpresets.is_set || is_set(nonhelloexpresets.yfilter)) leaf_name_data.push_back(nonhelloexpresets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastHelloRcvd")
    {
        lasthellorcvd = value;
        lasthellorcvd.value_namespace = name_space;
        lasthellorcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "longHelloItvl")
    {
        longhelloitvl = value;
        longhelloitvl.value_namespace = name_space;
        longhelloitvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastHoldTime")
    {
        lastholdtime = value;
        lastholdtime.value_namespace = name_space;
        lastholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nonHelloExpResets")
    {
        nonhelloexpresets = value;
        nonhelloexpresets.value_namespace = name_space;
        nonhelloexpresets.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastHelloRcvd")
    {
        lasthellorcvd.yfilter = yfilter;
    }
    if(value_path == "longHelloItvl")
    {
        longhelloitvl.yfilter = yfilter;
    }
    if(value_path == "lastHoldTime")
    {
        lastholdtime.yfilter = yfilter;
    }
    if(value_path == "nonHelloExpResets")
    {
        nonhelloexpresets.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastHelloRcvd" || name == "longHelloItvl" || name == "lastHoldTime" || name == "nonHelloExpResets")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::IfstatsItems()
    :
    hellosent{YType::uint32, "helloSent"},
    hellorcvd{YType::uint32, "helloRcvd"},
    jpsent{YType::uint32, "jpSent"},
    jprcvd{YType::uint32, "jpRcvd"},
    assertsent{YType::uint32, "assertSent"},
    assertrcvd{YType::uint32, "assertRcvd"},
    graftssent{YType::uint32, "graftsSent"},
    graftsrcvd{YType::uint32, "graftsRcvd"},
    grftacksent{YType::uint32, "grftAckSent"},
    grftackrcvd{YType::uint32, "grftAckRcvd"},
    dfoffersent{YType::uint32, "dfOfferSent"},
    dfofferrcvd{YType::uint32, "dfOfferRcvd"},
    dfwinnersent{YType::uint32, "dfWinnerSent"},
    dfwinnerrcvd{YType::uint32, "dfWinnerRcvd"},
    dfbackoffsent{YType::uint32, "dfBackoffSent"},
    dfbackoffrcvd{YType::uint32, "dfBackoffRcvd"},
    dfpassessent{YType::uint32, "dfPassesSent"},
    dfpassesrcvd{YType::uint32, "dfPassesRcvd"},
    chksumerr{YType::uint32, "chksumErr"},
    invalidpktsent{YType::uint32, "invalidPktSent"},
    invalidpktrcvd{YType::uint32, "invalidPktRcvd"},
    authfail{YType::uint32, "authFail"},
    pktlenerr{YType::uint32, "pktLenErr"},
    badverpkt{YType::uint32, "badVerPkt"},
    pktfrmself{YType::uint32, "pktFrmSelf"},
    pktfrmnonnbr{YType::uint32, "pktFrmNonNbr"},
    pktonpassiveif{YType::uint32, "pktOnPassiveIf"},
    jprcvdonrpf{YType::uint32, "jpRcvdOnRPF"},
    joinnorp{YType::uint32, "joinNoRP"},
    joinwrongrp{YType::uint32, "joinWrongRp"},
    jpssmrcvd{YType::uint32, "jpSSMRcvd"},
    jpbidirrcvd{YType::uint32, "jpBidirRcvd"},
    jpfilterin{YType::uint32, "jpFilterIn"},
    jpfilterout{YType::uint32, "jpFilterOut"}
{

    yang_name = "ifstats-items"; yang_parent_name = "IfRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::~IfstatsItems()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return hellosent.is_set
	|| hellorcvd.is_set
	|| jpsent.is_set
	|| jprcvd.is_set
	|| assertsent.is_set
	|| assertrcvd.is_set
	|| graftssent.is_set
	|| graftsrcvd.is_set
	|| grftacksent.is_set
	|| grftackrcvd.is_set
	|| dfoffersent.is_set
	|| dfofferrcvd.is_set
	|| dfwinnersent.is_set
	|| dfwinnerrcvd.is_set
	|| dfbackoffsent.is_set
	|| dfbackoffrcvd.is_set
	|| dfpassessent.is_set
	|| dfpassesrcvd.is_set
	|| chksumerr.is_set
	|| invalidpktsent.is_set
	|| invalidpktrcvd.is_set
	|| authfail.is_set
	|| pktlenerr.is_set
	|| badverpkt.is_set
	|| pktfrmself.is_set
	|| pktfrmnonnbr.is_set
	|| pktonpassiveif.is_set
	|| jprcvdonrpf.is_set
	|| joinnorp.is_set
	|| joinwrongrp.is_set
	|| jpssmrcvd.is_set
	|| jpbidirrcvd.is_set
	|| jpfilterin.is_set
	|| jpfilterout.is_set;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hellosent.yfilter)
	|| ydk::is_set(hellorcvd.yfilter)
	|| ydk::is_set(jpsent.yfilter)
	|| ydk::is_set(jprcvd.yfilter)
	|| ydk::is_set(assertsent.yfilter)
	|| ydk::is_set(assertrcvd.yfilter)
	|| ydk::is_set(graftssent.yfilter)
	|| ydk::is_set(graftsrcvd.yfilter)
	|| ydk::is_set(grftacksent.yfilter)
	|| ydk::is_set(grftackrcvd.yfilter)
	|| ydk::is_set(dfoffersent.yfilter)
	|| ydk::is_set(dfofferrcvd.yfilter)
	|| ydk::is_set(dfwinnersent.yfilter)
	|| ydk::is_set(dfwinnerrcvd.yfilter)
	|| ydk::is_set(dfbackoffsent.yfilter)
	|| ydk::is_set(dfbackoffrcvd.yfilter)
	|| ydk::is_set(dfpassessent.yfilter)
	|| ydk::is_set(dfpassesrcvd.yfilter)
	|| ydk::is_set(chksumerr.yfilter)
	|| ydk::is_set(invalidpktsent.yfilter)
	|| ydk::is_set(invalidpktrcvd.yfilter)
	|| ydk::is_set(authfail.yfilter)
	|| ydk::is_set(pktlenerr.yfilter)
	|| ydk::is_set(badverpkt.yfilter)
	|| ydk::is_set(pktfrmself.yfilter)
	|| ydk::is_set(pktfrmnonnbr.yfilter)
	|| ydk::is_set(pktonpassiveif.yfilter)
	|| ydk::is_set(jprcvdonrpf.yfilter)
	|| ydk::is_set(joinnorp.yfilter)
	|| ydk::is_set(joinwrongrp.yfilter)
	|| ydk::is_set(jpssmrcvd.yfilter)
	|| ydk::is_set(jpbidirrcvd.yfilter)
	|| ydk::is_set(jpfilterin.yfilter)
	|| ydk::is_set(jpfilterout.yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hellosent.is_set || is_set(hellosent.yfilter)) leaf_name_data.push_back(hellosent.get_name_leafdata());
    if (hellorcvd.is_set || is_set(hellorcvd.yfilter)) leaf_name_data.push_back(hellorcvd.get_name_leafdata());
    if (jpsent.is_set || is_set(jpsent.yfilter)) leaf_name_data.push_back(jpsent.get_name_leafdata());
    if (jprcvd.is_set || is_set(jprcvd.yfilter)) leaf_name_data.push_back(jprcvd.get_name_leafdata());
    if (assertsent.is_set || is_set(assertsent.yfilter)) leaf_name_data.push_back(assertsent.get_name_leafdata());
    if (assertrcvd.is_set || is_set(assertrcvd.yfilter)) leaf_name_data.push_back(assertrcvd.get_name_leafdata());
    if (graftssent.is_set || is_set(graftssent.yfilter)) leaf_name_data.push_back(graftssent.get_name_leafdata());
    if (graftsrcvd.is_set || is_set(graftsrcvd.yfilter)) leaf_name_data.push_back(graftsrcvd.get_name_leafdata());
    if (grftacksent.is_set || is_set(grftacksent.yfilter)) leaf_name_data.push_back(grftacksent.get_name_leafdata());
    if (grftackrcvd.is_set || is_set(grftackrcvd.yfilter)) leaf_name_data.push_back(grftackrcvd.get_name_leafdata());
    if (dfoffersent.is_set || is_set(dfoffersent.yfilter)) leaf_name_data.push_back(dfoffersent.get_name_leafdata());
    if (dfofferrcvd.is_set || is_set(dfofferrcvd.yfilter)) leaf_name_data.push_back(dfofferrcvd.get_name_leafdata());
    if (dfwinnersent.is_set || is_set(dfwinnersent.yfilter)) leaf_name_data.push_back(dfwinnersent.get_name_leafdata());
    if (dfwinnerrcvd.is_set || is_set(dfwinnerrcvd.yfilter)) leaf_name_data.push_back(dfwinnerrcvd.get_name_leafdata());
    if (dfbackoffsent.is_set || is_set(dfbackoffsent.yfilter)) leaf_name_data.push_back(dfbackoffsent.get_name_leafdata());
    if (dfbackoffrcvd.is_set || is_set(dfbackoffrcvd.yfilter)) leaf_name_data.push_back(dfbackoffrcvd.get_name_leafdata());
    if (dfpassessent.is_set || is_set(dfpassessent.yfilter)) leaf_name_data.push_back(dfpassessent.get_name_leafdata());
    if (dfpassesrcvd.is_set || is_set(dfpassesrcvd.yfilter)) leaf_name_data.push_back(dfpassesrcvd.get_name_leafdata());
    if (chksumerr.is_set || is_set(chksumerr.yfilter)) leaf_name_data.push_back(chksumerr.get_name_leafdata());
    if (invalidpktsent.is_set || is_set(invalidpktsent.yfilter)) leaf_name_data.push_back(invalidpktsent.get_name_leafdata());
    if (invalidpktrcvd.is_set || is_set(invalidpktrcvd.yfilter)) leaf_name_data.push_back(invalidpktrcvd.get_name_leafdata());
    if (authfail.is_set || is_set(authfail.yfilter)) leaf_name_data.push_back(authfail.get_name_leafdata());
    if (pktlenerr.is_set || is_set(pktlenerr.yfilter)) leaf_name_data.push_back(pktlenerr.get_name_leafdata());
    if (badverpkt.is_set || is_set(badverpkt.yfilter)) leaf_name_data.push_back(badverpkt.get_name_leafdata());
    if (pktfrmself.is_set || is_set(pktfrmself.yfilter)) leaf_name_data.push_back(pktfrmself.get_name_leafdata());
    if (pktfrmnonnbr.is_set || is_set(pktfrmnonnbr.yfilter)) leaf_name_data.push_back(pktfrmnonnbr.get_name_leafdata());
    if (pktonpassiveif.is_set || is_set(pktonpassiveif.yfilter)) leaf_name_data.push_back(pktonpassiveif.get_name_leafdata());
    if (jprcvdonrpf.is_set || is_set(jprcvdonrpf.yfilter)) leaf_name_data.push_back(jprcvdonrpf.get_name_leafdata());
    if (joinnorp.is_set || is_set(joinnorp.yfilter)) leaf_name_data.push_back(joinnorp.get_name_leafdata());
    if (joinwrongrp.is_set || is_set(joinwrongrp.yfilter)) leaf_name_data.push_back(joinwrongrp.get_name_leafdata());
    if (jpssmrcvd.is_set || is_set(jpssmrcvd.yfilter)) leaf_name_data.push_back(jpssmrcvd.get_name_leafdata());
    if (jpbidirrcvd.is_set || is_set(jpbidirrcvd.yfilter)) leaf_name_data.push_back(jpbidirrcvd.get_name_leafdata());
    if (jpfilterin.is_set || is_set(jpfilterin.yfilter)) leaf_name_data.push_back(jpfilterin.get_name_leafdata());
    if (jpfilterout.is_set || is_set(jpfilterout.yfilter)) leaf_name_data.push_back(jpfilterout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "helloSent")
    {
        hellosent = value;
        hellosent.value_namespace = name_space;
        hellosent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloRcvd")
    {
        hellorcvd = value;
        hellorcvd.value_namespace = name_space;
        hellorcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpSent")
    {
        jpsent = value;
        jpsent.value_namespace = name_space;
        jpsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpRcvd")
    {
        jprcvd = value;
        jprcvd.value_namespace = name_space;
        jprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertSent")
    {
        assertsent = value;
        assertsent.value_namespace = name_space;
        assertsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertRcvd")
    {
        assertrcvd = value;
        assertrcvd.value_namespace = name_space;
        assertrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graftsSent")
    {
        graftssent = value;
        graftssent.value_namespace = name_space;
        graftssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graftsRcvd")
    {
        graftsrcvd = value;
        graftsrcvd.value_namespace = name_space;
        graftsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grftAckSent")
    {
        grftacksent = value;
        grftacksent.value_namespace = name_space;
        grftacksent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grftAckRcvd")
    {
        grftackrcvd = value;
        grftackrcvd.value_namespace = name_space;
        grftackrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfOfferSent")
    {
        dfoffersent = value;
        dfoffersent.value_namespace = name_space;
        dfoffersent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfOfferRcvd")
    {
        dfofferrcvd = value;
        dfofferrcvd.value_namespace = name_space;
        dfofferrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfWinnerSent")
    {
        dfwinnersent = value;
        dfwinnersent.value_namespace = name_space;
        dfwinnersent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfWinnerRcvd")
    {
        dfwinnerrcvd = value;
        dfwinnerrcvd.value_namespace = name_space;
        dfwinnerrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfBackoffSent")
    {
        dfbackoffsent = value;
        dfbackoffsent.value_namespace = name_space;
        dfbackoffsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfBackoffRcvd")
    {
        dfbackoffrcvd = value;
        dfbackoffrcvd.value_namespace = name_space;
        dfbackoffrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfPassesSent")
    {
        dfpassessent = value;
        dfpassessent.value_namespace = name_space;
        dfpassessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfPassesRcvd")
    {
        dfpassesrcvd = value;
        dfpassesrcvd.value_namespace = name_space;
        dfpassesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chksumErr")
    {
        chksumerr = value;
        chksumerr.value_namespace = name_space;
        chksumerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidPktSent")
    {
        invalidpktsent = value;
        invalidpktsent.value_namespace = name_space;
        invalidpktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidPktRcvd")
    {
        invalidpktrcvd = value;
        invalidpktrcvd.value_namespace = name_space;
        invalidpktrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authFail")
    {
        authfail = value;
        authfail.value_namespace = name_space;
        authfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktLenErr")
    {
        pktlenerr = value;
        pktlenerr.value_namespace = name_space;
        pktlenerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badVerPkt")
    {
        badverpkt = value;
        badverpkt.value_namespace = name_space;
        badverpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktFrmSelf")
    {
        pktfrmself = value;
        pktfrmself.value_namespace = name_space;
        pktfrmself.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktFrmNonNbr")
    {
        pktfrmnonnbr = value;
        pktfrmnonnbr.value_namespace = name_space;
        pktfrmnonnbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktOnPassiveIf")
    {
        pktonpassiveif = value;
        pktonpassiveif.value_namespace = name_space;
        pktonpassiveif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpRcvdOnRPF")
    {
        jprcvdonrpf = value;
        jprcvdonrpf.value_namespace = name_space;
        jprcvdonrpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "joinNoRP")
    {
        joinnorp = value;
        joinnorp.value_namespace = name_space;
        joinnorp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "joinWrongRp")
    {
        joinwrongrp = value;
        joinwrongrp.value_namespace = name_space;
        joinwrongrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpSSMRcvd")
    {
        jpssmrcvd = value;
        jpssmrcvd.value_namespace = name_space;
        jpssmrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpBidirRcvd")
    {
        jpbidirrcvd = value;
        jpbidirrcvd.value_namespace = name_space;
        jpbidirrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpFilterIn")
    {
        jpfilterin = value;
        jpfilterin.value_namespace = name_space;
        jpfilterin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpFilterOut")
    {
        jpfilterout = value;
        jpfilterout.value_namespace = name_space;
        jpfilterout.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "helloSent")
    {
        hellosent.yfilter = yfilter;
    }
    if(value_path == "helloRcvd")
    {
        hellorcvd.yfilter = yfilter;
    }
    if(value_path == "jpSent")
    {
        jpsent.yfilter = yfilter;
    }
    if(value_path == "jpRcvd")
    {
        jprcvd.yfilter = yfilter;
    }
    if(value_path == "assertSent")
    {
        assertsent.yfilter = yfilter;
    }
    if(value_path == "assertRcvd")
    {
        assertrcvd.yfilter = yfilter;
    }
    if(value_path == "graftsSent")
    {
        graftssent.yfilter = yfilter;
    }
    if(value_path == "graftsRcvd")
    {
        graftsrcvd.yfilter = yfilter;
    }
    if(value_path == "grftAckSent")
    {
        grftacksent.yfilter = yfilter;
    }
    if(value_path == "grftAckRcvd")
    {
        grftackrcvd.yfilter = yfilter;
    }
    if(value_path == "dfOfferSent")
    {
        dfoffersent.yfilter = yfilter;
    }
    if(value_path == "dfOfferRcvd")
    {
        dfofferrcvd.yfilter = yfilter;
    }
    if(value_path == "dfWinnerSent")
    {
        dfwinnersent.yfilter = yfilter;
    }
    if(value_path == "dfWinnerRcvd")
    {
        dfwinnerrcvd.yfilter = yfilter;
    }
    if(value_path == "dfBackoffSent")
    {
        dfbackoffsent.yfilter = yfilter;
    }
    if(value_path == "dfBackoffRcvd")
    {
        dfbackoffrcvd.yfilter = yfilter;
    }
    if(value_path == "dfPassesSent")
    {
        dfpassessent.yfilter = yfilter;
    }
    if(value_path == "dfPassesRcvd")
    {
        dfpassesrcvd.yfilter = yfilter;
    }
    if(value_path == "chksumErr")
    {
        chksumerr.yfilter = yfilter;
    }
    if(value_path == "invalidPktSent")
    {
        invalidpktsent.yfilter = yfilter;
    }
    if(value_path == "invalidPktRcvd")
    {
        invalidpktrcvd.yfilter = yfilter;
    }
    if(value_path == "authFail")
    {
        authfail.yfilter = yfilter;
    }
    if(value_path == "pktLenErr")
    {
        pktlenerr.yfilter = yfilter;
    }
    if(value_path == "badVerPkt")
    {
        badverpkt.yfilter = yfilter;
    }
    if(value_path == "pktFrmSelf")
    {
        pktfrmself.yfilter = yfilter;
    }
    if(value_path == "pktFrmNonNbr")
    {
        pktfrmnonnbr.yfilter = yfilter;
    }
    if(value_path == "pktOnPassiveIf")
    {
        pktonpassiveif.yfilter = yfilter;
    }
    if(value_path == "jpRcvdOnRPF")
    {
        jprcvdonrpf.yfilter = yfilter;
    }
    if(value_path == "joinNoRP")
    {
        joinnorp.yfilter = yfilter;
    }
    if(value_path == "joinWrongRp")
    {
        joinwrongrp.yfilter = yfilter;
    }
    if(value_path == "jpSSMRcvd")
    {
        jpssmrcvd.yfilter = yfilter;
    }
    if(value_path == "jpBidirRcvd")
    {
        jpbidirrcvd.yfilter = yfilter;
    }
    if(value_path == "jpFilterIn")
    {
        jpfilterin.yfilter = yfilter;
    }
    if(value_path == "jpFilterOut")
    {
        jpfilterout.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helloSent" || name == "helloRcvd" || name == "jpSent" || name == "jpRcvd" || name == "assertSent" || name == "assertRcvd" || name == "graftsSent" || name == "graftsRcvd" || name == "grftAckSent" || name == "grftAckRcvd" || name == "dfOfferSent" || name == "dfOfferRcvd" || name == "dfWinnerSent" || name == "dfWinnerRcvd" || name == "dfBackoffSent" || name == "dfBackoffRcvd" || name == "dfPassesSent" || name == "dfPassesRcvd" || name == "chksumErr" || name == "invalidPktSent" || name == "invalidPktRcvd" || name == "authFail" || name == "pktLenErr" || name == "badVerPkt" || name == "pktFrmSelf" || name == "pktFrmNonNbr" || name == "pktOnPassiveIf" || name == "jpRcvdOnRPF" || name == "joinNoRP" || name == "joinWrongRp" || name == "jpSSMRcvd" || name == "jpBidirRcvd" || name == "jpFilterIn" || name == "jpFilterOut")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpItems()
    :
    rpinforec_list(this, {"rpaddr"})
{

    yang_name = "rp-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::~RpItems()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpinforec_list.len(); index++)
    {
        if(rpinforec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::has_operation() const
{
    for (std::size_t index=0; index<rpinforec_list.len(); index++)
    {
        if(rpinforec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RpInfoRec-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList>();
        ent_->parent = this;
        rpinforec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpinforec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RpInfoRec-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpInfoRecList()
    :
    rpaddr{YType::str, "rpAddr"},
    rplocal{YType::boolean, "rpLocal"},
    rpuptime{YType::str, "rpUptime"},
    rppriority{YType::uint32, "rpPriority"},
    rpdisctype{YType::str, "rpDiscType"},
    rpdfordinal{YType::uint32, "rpDfOrdinal"},
    rpmetricpref{YType::uint32, "rpMetricPref"},
    rpmetric{YType::uint32, "rpMetric"}
        ,
    rpif_items(std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems>())
{
    rpif_items->parent = this;

    yang_name = "RpInfoRec-list"; yang_parent_name = "rp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::~RpInfoRecList()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::has_data() const
{
    if (is_presence_container) return true;
    return rpaddr.is_set
	|| rplocal.is_set
	|| rpuptime.is_set
	|| rppriority.is_set
	|| rpdisctype.is_set
	|| rpdfordinal.is_set
	|| rpmetricpref.is_set
	|| rpmetric.is_set
	|| (rpif_items !=  nullptr && rpif_items->has_data());
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rpaddr.yfilter)
	|| ydk::is_set(rplocal.yfilter)
	|| ydk::is_set(rpuptime.yfilter)
	|| ydk::is_set(rppriority.yfilter)
	|| ydk::is_set(rpdisctype.yfilter)
	|| ydk::is_set(rpdfordinal.yfilter)
	|| ydk::is_set(rpmetricpref.yfilter)
	|| ydk::is_set(rpmetric.yfilter)
	|| (rpif_items !=  nullptr && rpif_items->has_operation());
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RpInfoRec-list";
    ADD_KEY_TOKEN(rpaddr, "rpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpaddr.is_set || is_set(rpaddr.yfilter)) leaf_name_data.push_back(rpaddr.get_name_leafdata());
    if (rplocal.is_set || is_set(rplocal.yfilter)) leaf_name_data.push_back(rplocal.get_name_leafdata());
    if (rpuptime.is_set || is_set(rpuptime.yfilter)) leaf_name_data.push_back(rpuptime.get_name_leafdata());
    if (rppriority.is_set || is_set(rppriority.yfilter)) leaf_name_data.push_back(rppriority.get_name_leafdata());
    if (rpdisctype.is_set || is_set(rpdisctype.yfilter)) leaf_name_data.push_back(rpdisctype.get_name_leafdata());
    if (rpdfordinal.is_set || is_set(rpdfordinal.yfilter)) leaf_name_data.push_back(rpdfordinal.get_name_leafdata());
    if (rpmetricpref.is_set || is_set(rpmetricpref.yfilter)) leaf_name_data.push_back(rpmetricpref.get_name_leafdata());
    if (rpmetric.is_set || is_set(rpmetric.yfilter)) leaf_name_data.push_back(rpmetric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpif-items")
    {
        if(rpif_items == nullptr)
        {
            rpif_items = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems>();
        }
        return rpif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rpif_items != nullptr)
    {
        _children["rpif-items"] = rpif_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rpAddr")
    {
        rpaddr = value;
        rpaddr.value_namespace = name_space;
        rpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpLocal")
    {
        rplocal = value;
        rplocal.value_namespace = name_space;
        rplocal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpUptime")
    {
        rpuptime = value;
        rpuptime.value_namespace = name_space;
        rpuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpPriority")
    {
        rppriority = value;
        rppriority.value_namespace = name_space;
        rppriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpDiscType")
    {
        rpdisctype = value;
        rpdisctype.value_namespace = name_space;
        rpdisctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpDfOrdinal")
    {
        rpdfordinal = value;
        rpdfordinal.value_namespace = name_space;
        rpdfordinal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpMetricPref")
    {
        rpmetricpref = value;
        rpmetricpref.value_namespace = name_space;
        rpmetricpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpMetric")
    {
        rpmetric = value;
        rpmetric.value_namespace = name_space;
        rpmetric.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rpAddr")
    {
        rpaddr.yfilter = yfilter;
    }
    if(value_path == "rpLocal")
    {
        rplocal.yfilter = yfilter;
    }
    if(value_path == "rpUptime")
    {
        rpuptime.yfilter = yfilter;
    }
    if(value_path == "rpPriority")
    {
        rppriority.yfilter = yfilter;
    }
    if(value_path == "rpDiscType")
    {
        rpdisctype.yfilter = yfilter;
    }
    if(value_path == "rpDfOrdinal")
    {
        rpdfordinal.yfilter = yfilter;
    }
    if(value_path == "rpMetricPref")
    {
        rpmetricpref.yfilter = yfilter;
    }
    if(value_path == "rpMetric")
    {
        rpmetric.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpif-items" || name == "rpAddr" || name == "rpLocal" || name == "rpUptime" || name == "rpPriority" || name == "rpDiscType" || name == "rpDfOrdinal" || name == "rpMetricPref" || name == "rpMetric")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpifItems()
    :
    rpif_list(this, {"ifname"})
{

    yang_name = "rpif-items"; yang_parent_name = "RpInfoRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::~RpifItems()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpif_list.len(); index++)
    {
        if(rpif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::has_operation() const
{
    for (std::size_t index=0; index<rpif_list.len(); index++)
    {
        if(rpif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RpIf-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList>();
        ent_->parent = this;
        rpif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RpIf-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::RpIfList()
    :
    ifname{YType::str, "ifName"},
    dfwinner{YType::str, "dfWinner"},
    dfstate{YType::enumeration, "dfState"},
    dfuptime{YType::str, "dfUptime"},
    isrpf{YType::boolean, "isRpf"},
    winnermetricpref{YType::uint32, "winnerMetricPref"},
    winnermetric{YType::uint32, "winnerMetric"}
{

    yang_name = "RpIf-list"; yang_parent_name = "rpif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::~RpIfList()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::has_data() const
{
    if (is_presence_container) return true;
    return ifname.is_set
	|| dfwinner.is_set
	|| dfstate.is_set
	|| dfuptime.is_set
	|| isrpf.is_set
	|| winnermetricpref.is_set
	|| winnermetric.is_set;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(dfwinner.yfilter)
	|| ydk::is_set(dfstate.yfilter)
	|| ydk::is_set(dfuptime.yfilter)
	|| ydk::is_set(isrpf.yfilter)
	|| ydk::is_set(winnermetricpref.yfilter)
	|| ydk::is_set(winnermetric.yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RpIf-list";
    ADD_KEY_TOKEN(ifname, "ifName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (dfwinner.is_set || is_set(dfwinner.yfilter)) leaf_name_data.push_back(dfwinner.get_name_leafdata());
    if (dfstate.is_set || is_set(dfstate.yfilter)) leaf_name_data.push_back(dfstate.get_name_leafdata());
    if (dfuptime.is_set || is_set(dfuptime.yfilter)) leaf_name_data.push_back(dfuptime.get_name_leafdata());
    if (isrpf.is_set || is_set(isrpf.yfilter)) leaf_name_data.push_back(isrpf.get_name_leafdata());
    if (winnermetricpref.is_set || is_set(winnermetricpref.yfilter)) leaf_name_data.push_back(winnermetricpref.get_name_leafdata());
    if (winnermetric.is_set || is_set(winnermetric.yfilter)) leaf_name_data.push_back(winnermetric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifName")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfWinner")
    {
        dfwinner = value;
        dfwinner.value_namespace = name_space;
        dfwinner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfState")
    {
        dfstate = value;
        dfstate.value_namespace = name_space;
        dfstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfUptime")
    {
        dfuptime = value;
        dfuptime.value_namespace = name_space;
        dfuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isRpf")
    {
        isrpf = value;
        isrpf.value_namespace = name_space;
        isrpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "winnerMetricPref")
    {
        winnermetricpref = value;
        winnermetricpref.value_namespace = name_space;
        winnermetricpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "winnerMetric")
    {
        winnermetric = value;
        winnermetric.value_namespace = name_space;
        winnermetric.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifName")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "dfWinner")
    {
        dfwinner.yfilter = yfilter;
    }
    if(value_path == "dfState")
    {
        dfstate.yfilter = yfilter;
    }
    if(value_path == "dfUptime")
    {
        dfuptime.yfilter = yfilter;
    }
    if(value_path == "isRpf")
    {
        isrpf.yfilter = yfilter;
    }
    if(value_path == "winnerMetricPref")
    {
        winnermetricpref.yfilter = yfilter;
    }
    if(value_path == "winnerMetric")
    {
        winnermetric.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifName" || name == "dfWinner" || name == "dfState" || name == "dfUptime" || name == "isRpf" || name == "winnerMetricPref" || name == "winnerMetric")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems::TrstatsItems()
    :
    lastclearts{YType::str, "lastClearTs"},
    regrcvd{YType::uint32, "regRcvd"},
    nullregrcvd{YType::uint32, "nullRegRcvd"},
    regstoprcvd{YType::uint32, "regStopRcvd"},
    bsrcvd{YType::uint32, "bsRcvd"},
    candrprcvd{YType::uint32, "candRpRcvd"},
    autorpannrcvd{YType::uint32, "autorpAnnRcvd"},
    autorpdiscrcvd{YType::uint32, "autorpDiscRcvd"},
    nullregsent{YType::uint32, "nullRegSent"},
    regstopsent{YType::uint32, "regStopSent"},
    bssent{YType::uint32, "bsSent"},
    candrpsent{YType::uint32, "candRPSent"},
    autorpannsent{YType::uint32, "autorpAnnSent"},
    autorpdiscsent{YType::uint32, "autorpDiscSent"},
    autorprpfsent{YType::uint32, "autorpRpfSent"},
    autorpbrddeny{YType::uint32, "autorpBrdDeny"},
    autorrpnolistn{YType::uint32, "autorrpNoListn"},
    autorpttlexp{YType::uint32, "autorpTtlExp"},
    autorpinvtype{YType::uint32, "autorpInvType"},
    bsnonbr{YType::uint32, "bsNoNbr"},
    bsborddeny{YType::uint32, "bsBordDeny"},
    bslenerr{YType::uint32, "bsLenErr"},
    bsrpffail{YType::uint32, "bsRpfFail"},
    bsnolis{YType::uint32, "bsNoLis"},
    candrpnolis{YType::uint32, "candrpNoLis"},
    candrpborddeny{YType::uint32, "candrpBordDeny"},
    regrcvdnorp{YType::uint32, "regRcvdNoRP"},
    regrcvdforssm{YType::uint32, "regRcvdForSSM"},
    regrcvdforbd{YType::uint32, "regRcvdForBd"},
    noroute{YType::uint32, "noRoute"}
{

    yang_name = "trstats-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems::~TrstatsItems()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return lastclearts.is_set
	|| regrcvd.is_set
	|| nullregrcvd.is_set
	|| regstoprcvd.is_set
	|| bsrcvd.is_set
	|| candrprcvd.is_set
	|| autorpannrcvd.is_set
	|| autorpdiscrcvd.is_set
	|| nullregsent.is_set
	|| regstopsent.is_set
	|| bssent.is_set
	|| candrpsent.is_set
	|| autorpannsent.is_set
	|| autorpdiscsent.is_set
	|| autorprpfsent.is_set
	|| autorpbrddeny.is_set
	|| autorrpnolistn.is_set
	|| autorpttlexp.is_set
	|| autorpinvtype.is_set
	|| bsnonbr.is_set
	|| bsborddeny.is_set
	|| bslenerr.is_set
	|| bsrpffail.is_set
	|| bsnolis.is_set
	|| candrpnolis.is_set
	|| candrpborddeny.is_set
	|| regrcvdnorp.is_set
	|| regrcvdforssm.is_set
	|| regrcvdforbd.is_set
	|| noroute.is_set;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lastclearts.yfilter)
	|| ydk::is_set(regrcvd.yfilter)
	|| ydk::is_set(nullregrcvd.yfilter)
	|| ydk::is_set(regstoprcvd.yfilter)
	|| ydk::is_set(bsrcvd.yfilter)
	|| ydk::is_set(candrprcvd.yfilter)
	|| ydk::is_set(autorpannrcvd.yfilter)
	|| ydk::is_set(autorpdiscrcvd.yfilter)
	|| ydk::is_set(nullregsent.yfilter)
	|| ydk::is_set(regstopsent.yfilter)
	|| ydk::is_set(bssent.yfilter)
	|| ydk::is_set(candrpsent.yfilter)
	|| ydk::is_set(autorpannsent.yfilter)
	|| ydk::is_set(autorpdiscsent.yfilter)
	|| ydk::is_set(autorprpfsent.yfilter)
	|| ydk::is_set(autorpbrddeny.yfilter)
	|| ydk::is_set(autorrpnolistn.yfilter)
	|| ydk::is_set(autorpttlexp.yfilter)
	|| ydk::is_set(autorpinvtype.yfilter)
	|| ydk::is_set(bsnonbr.yfilter)
	|| ydk::is_set(bsborddeny.yfilter)
	|| ydk::is_set(bslenerr.yfilter)
	|| ydk::is_set(bsrpffail.yfilter)
	|| ydk::is_set(bsnolis.yfilter)
	|| ydk::is_set(candrpnolis.yfilter)
	|| ydk::is_set(candrpborddeny.yfilter)
	|| ydk::is_set(regrcvdnorp.yfilter)
	|| ydk::is_set(regrcvdforssm.yfilter)
	|| ydk::is_set(regrcvdforbd.yfilter)
	|| ydk::is_set(noroute.yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lastclearts.is_set || is_set(lastclearts.yfilter)) leaf_name_data.push_back(lastclearts.get_name_leafdata());
    if (regrcvd.is_set || is_set(regrcvd.yfilter)) leaf_name_data.push_back(regrcvd.get_name_leafdata());
    if (nullregrcvd.is_set || is_set(nullregrcvd.yfilter)) leaf_name_data.push_back(nullregrcvd.get_name_leafdata());
    if (regstoprcvd.is_set || is_set(regstoprcvd.yfilter)) leaf_name_data.push_back(regstoprcvd.get_name_leafdata());
    if (bsrcvd.is_set || is_set(bsrcvd.yfilter)) leaf_name_data.push_back(bsrcvd.get_name_leafdata());
    if (candrprcvd.is_set || is_set(candrprcvd.yfilter)) leaf_name_data.push_back(candrprcvd.get_name_leafdata());
    if (autorpannrcvd.is_set || is_set(autorpannrcvd.yfilter)) leaf_name_data.push_back(autorpannrcvd.get_name_leafdata());
    if (autorpdiscrcvd.is_set || is_set(autorpdiscrcvd.yfilter)) leaf_name_data.push_back(autorpdiscrcvd.get_name_leafdata());
    if (nullregsent.is_set || is_set(nullregsent.yfilter)) leaf_name_data.push_back(nullregsent.get_name_leafdata());
    if (regstopsent.is_set || is_set(regstopsent.yfilter)) leaf_name_data.push_back(regstopsent.get_name_leafdata());
    if (bssent.is_set || is_set(bssent.yfilter)) leaf_name_data.push_back(bssent.get_name_leafdata());
    if (candrpsent.is_set || is_set(candrpsent.yfilter)) leaf_name_data.push_back(candrpsent.get_name_leafdata());
    if (autorpannsent.is_set || is_set(autorpannsent.yfilter)) leaf_name_data.push_back(autorpannsent.get_name_leafdata());
    if (autorpdiscsent.is_set || is_set(autorpdiscsent.yfilter)) leaf_name_data.push_back(autorpdiscsent.get_name_leafdata());
    if (autorprpfsent.is_set || is_set(autorprpfsent.yfilter)) leaf_name_data.push_back(autorprpfsent.get_name_leafdata());
    if (autorpbrddeny.is_set || is_set(autorpbrddeny.yfilter)) leaf_name_data.push_back(autorpbrddeny.get_name_leafdata());
    if (autorrpnolistn.is_set || is_set(autorrpnolistn.yfilter)) leaf_name_data.push_back(autorrpnolistn.get_name_leafdata());
    if (autorpttlexp.is_set || is_set(autorpttlexp.yfilter)) leaf_name_data.push_back(autorpttlexp.get_name_leafdata());
    if (autorpinvtype.is_set || is_set(autorpinvtype.yfilter)) leaf_name_data.push_back(autorpinvtype.get_name_leafdata());
    if (bsnonbr.is_set || is_set(bsnonbr.yfilter)) leaf_name_data.push_back(bsnonbr.get_name_leafdata());
    if (bsborddeny.is_set || is_set(bsborddeny.yfilter)) leaf_name_data.push_back(bsborddeny.get_name_leafdata());
    if (bslenerr.is_set || is_set(bslenerr.yfilter)) leaf_name_data.push_back(bslenerr.get_name_leafdata());
    if (bsrpffail.is_set || is_set(bsrpffail.yfilter)) leaf_name_data.push_back(bsrpffail.get_name_leafdata());
    if (bsnolis.is_set || is_set(bsnolis.yfilter)) leaf_name_data.push_back(bsnolis.get_name_leafdata());
    if (candrpnolis.is_set || is_set(candrpnolis.yfilter)) leaf_name_data.push_back(candrpnolis.get_name_leafdata());
    if (candrpborddeny.is_set || is_set(candrpborddeny.yfilter)) leaf_name_data.push_back(candrpborddeny.get_name_leafdata());
    if (regrcvdnorp.is_set || is_set(regrcvdnorp.yfilter)) leaf_name_data.push_back(regrcvdnorp.get_name_leafdata());
    if (regrcvdforssm.is_set || is_set(regrcvdforssm.yfilter)) leaf_name_data.push_back(regrcvdforssm.get_name_leafdata());
    if (regrcvdforbd.is_set || is_set(regrcvdforbd.yfilter)) leaf_name_data.push_back(regrcvdforbd.get_name_leafdata());
    if (noroute.is_set || is_set(noroute.yfilter)) leaf_name_data.push_back(noroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastClearTs")
    {
        lastclearts = value;
        lastclearts.value_namespace = name_space;
        lastclearts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvd")
    {
        regrcvd = value;
        regrcvd.value_namespace = name_space;
        regrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullRegRcvd")
    {
        nullregrcvd = value;
        nullregrcvd.value_namespace = name_space;
        nullregrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStopRcvd")
    {
        regstoprcvd = value;
        regstoprcvd.value_namespace = name_space;
        regstoprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsRcvd")
    {
        bsrcvd = value;
        bsrcvd.value_namespace = name_space;
        bsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candRpRcvd")
    {
        candrprcvd = value;
        candrprcvd.value_namespace = name_space;
        candrprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpAnnRcvd")
    {
        autorpannrcvd = value;
        autorpannrcvd.value_namespace = name_space;
        autorpannrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpDiscRcvd")
    {
        autorpdiscrcvd = value;
        autorpdiscrcvd.value_namespace = name_space;
        autorpdiscrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullRegSent")
    {
        nullregsent = value;
        nullregsent.value_namespace = name_space;
        nullregsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStopSent")
    {
        regstopsent = value;
        regstopsent.value_namespace = name_space;
        regstopsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsSent")
    {
        bssent = value;
        bssent.value_namespace = name_space;
        bssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candRPSent")
    {
        candrpsent = value;
        candrpsent.value_namespace = name_space;
        candrpsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpAnnSent")
    {
        autorpannsent = value;
        autorpannsent.value_namespace = name_space;
        autorpannsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpDiscSent")
    {
        autorpdiscsent = value;
        autorpdiscsent.value_namespace = name_space;
        autorpdiscsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpRpfSent")
    {
        autorprpfsent = value;
        autorprpfsent.value_namespace = name_space;
        autorprpfsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpBrdDeny")
    {
        autorpbrddeny = value;
        autorpbrddeny.value_namespace = name_space;
        autorpbrddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorrpNoListn")
    {
        autorrpnolistn = value;
        autorrpnolistn.value_namespace = name_space;
        autorrpnolistn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpTtlExp")
    {
        autorpttlexp = value;
        autorpttlexp.value_namespace = name_space;
        autorpttlexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpInvType")
    {
        autorpinvtype = value;
        autorpinvtype.value_namespace = name_space;
        autorpinvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsNoNbr")
    {
        bsnonbr = value;
        bsnonbr.value_namespace = name_space;
        bsnonbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsBordDeny")
    {
        bsborddeny = value;
        bsborddeny.value_namespace = name_space;
        bsborddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsLenErr")
    {
        bslenerr = value;
        bslenerr.value_namespace = name_space;
        bslenerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsRpfFail")
    {
        bsrpffail = value;
        bsrpffail.value_namespace = name_space;
        bsrpffail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsNoLis")
    {
        bsnolis = value;
        bsnolis.value_namespace = name_space;
        bsnolis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candrpNoLis")
    {
        candrpnolis = value;
        candrpnolis.value_namespace = name_space;
        candrpnolis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candrpBordDeny")
    {
        candrpborddeny = value;
        candrpborddeny.value_namespace = name_space;
        candrpborddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdNoRP")
    {
        regrcvdnorp = value;
        regrcvdnorp.value_namespace = name_space;
        regrcvdnorp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdForSSM")
    {
        regrcvdforssm = value;
        regrcvdforssm.value_namespace = name_space;
        regrcvdforssm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdForBd")
    {
        regrcvdforbd = value;
        regrcvdforbd.value_namespace = name_space;
        regrcvdforbd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noRoute")
    {
        noroute = value;
        noroute.value_namespace = name_space;
        noroute.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastClearTs")
    {
        lastclearts.yfilter = yfilter;
    }
    if(value_path == "regRcvd")
    {
        regrcvd.yfilter = yfilter;
    }
    if(value_path == "nullRegRcvd")
    {
        nullregrcvd.yfilter = yfilter;
    }
    if(value_path == "regStopRcvd")
    {
        regstoprcvd.yfilter = yfilter;
    }
    if(value_path == "bsRcvd")
    {
        bsrcvd.yfilter = yfilter;
    }
    if(value_path == "candRpRcvd")
    {
        candrprcvd.yfilter = yfilter;
    }
    if(value_path == "autorpAnnRcvd")
    {
        autorpannrcvd.yfilter = yfilter;
    }
    if(value_path == "autorpDiscRcvd")
    {
        autorpdiscrcvd.yfilter = yfilter;
    }
    if(value_path == "nullRegSent")
    {
        nullregsent.yfilter = yfilter;
    }
    if(value_path == "regStopSent")
    {
        regstopsent.yfilter = yfilter;
    }
    if(value_path == "bsSent")
    {
        bssent.yfilter = yfilter;
    }
    if(value_path == "candRPSent")
    {
        candrpsent.yfilter = yfilter;
    }
    if(value_path == "autorpAnnSent")
    {
        autorpannsent.yfilter = yfilter;
    }
    if(value_path == "autorpDiscSent")
    {
        autorpdiscsent.yfilter = yfilter;
    }
    if(value_path == "autorpRpfSent")
    {
        autorprpfsent.yfilter = yfilter;
    }
    if(value_path == "autorpBrdDeny")
    {
        autorpbrddeny.yfilter = yfilter;
    }
    if(value_path == "autorrpNoListn")
    {
        autorrpnolistn.yfilter = yfilter;
    }
    if(value_path == "autorpTtlExp")
    {
        autorpttlexp.yfilter = yfilter;
    }
    if(value_path == "autorpInvType")
    {
        autorpinvtype.yfilter = yfilter;
    }
    if(value_path == "bsNoNbr")
    {
        bsnonbr.yfilter = yfilter;
    }
    if(value_path == "bsBordDeny")
    {
        bsborddeny.yfilter = yfilter;
    }
    if(value_path == "bsLenErr")
    {
        bslenerr.yfilter = yfilter;
    }
    if(value_path == "bsRpfFail")
    {
        bsrpffail.yfilter = yfilter;
    }
    if(value_path == "bsNoLis")
    {
        bsnolis.yfilter = yfilter;
    }
    if(value_path == "candrpNoLis")
    {
        candrpnolis.yfilter = yfilter;
    }
    if(value_path == "candrpBordDeny")
    {
        candrpborddeny.yfilter = yfilter;
    }
    if(value_path == "regRcvdNoRP")
    {
        regrcvdnorp.yfilter = yfilter;
    }
    if(value_path == "regRcvdForSSM")
    {
        regrcvdforssm.yfilter = yfilter;
    }
    if(value_path == "regRcvdForBd")
    {
        regrcvdforbd.yfilter = yfilter;
    }
    if(value_path == "noRoute")
    {
        noroute.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastClearTs" || name == "regRcvd" || name == "nullRegRcvd" || name == "regStopRcvd" || name == "bsRcvd" || name == "candRpRcvd" || name == "autorpAnnRcvd" || name == "autorpDiscRcvd" || name == "nullRegSent" || name == "regStopSent" || name == "bsSent" || name == "candRPSent" || name == "autorpAnnSent" || name == "autorpDiscSent" || name == "autorpRpfSent" || name == "autorpBrdDeny" || name == "autorrpNoListn" || name == "autorpTtlExp" || name == "autorpInvType" || name == "bsNoNbr" || name == "bsBordDeny" || name == "bsLenErr" || name == "bsRpfFail" || name == "bsNoLis" || name == "candrpNoLis" || name == "candrpBordDeny" || name == "regRcvdNoRP" || name == "regRcvdForSSM" || name == "regRcvdForBd" || name == "noRoute")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::VrfdetailItems()
    :
    stlmt{YType::uint64, "stLmt"},
    availstlmt{YType::uint64, "availStLmt"},
    rsvlmt{YType::uint64, "rsvLmt"},
    availrsvlmt{YType::uint64, "availRsvLmt"},
    rsvpolname{YType::str, "rsvPolName"},
    regratelmt{YType::uint64, "regRateLmt"},
    sharedtrpolname{YType::str, "sharedTrPolName"}
        ,
    grange_items(std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems>())
{
    grange_items->parent = this;

    yang_name = "vrfdetail-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::~VrfdetailItems()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::has_data() const
{
    if (is_presence_container) return true;
    return stlmt.is_set
	|| availstlmt.is_set
	|| rsvlmt.is_set
	|| availrsvlmt.is_set
	|| rsvpolname.is_set
	|| regratelmt.is_set
	|| sharedtrpolname.is_set
	|| (grange_items !=  nullptr && grange_items->has_data());
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stlmt.yfilter)
	|| ydk::is_set(availstlmt.yfilter)
	|| ydk::is_set(rsvlmt.yfilter)
	|| ydk::is_set(availrsvlmt.yfilter)
	|| ydk::is_set(rsvpolname.yfilter)
	|| ydk::is_set(regratelmt.yfilter)
	|| ydk::is_set(sharedtrpolname.yfilter)
	|| (grange_items !=  nullptr && grange_items->has_operation());
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfdetail-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stlmt.is_set || is_set(stlmt.yfilter)) leaf_name_data.push_back(stlmt.get_name_leafdata());
    if (availstlmt.is_set || is_set(availstlmt.yfilter)) leaf_name_data.push_back(availstlmt.get_name_leafdata());
    if (rsvlmt.is_set || is_set(rsvlmt.yfilter)) leaf_name_data.push_back(rsvlmt.get_name_leafdata());
    if (availrsvlmt.is_set || is_set(availrsvlmt.yfilter)) leaf_name_data.push_back(availrsvlmt.get_name_leafdata());
    if (rsvpolname.is_set || is_set(rsvpolname.yfilter)) leaf_name_data.push_back(rsvpolname.get_name_leafdata());
    if (regratelmt.is_set || is_set(regratelmt.yfilter)) leaf_name_data.push_back(regratelmt.get_name_leafdata());
    if (sharedtrpolname.is_set || is_set(sharedtrpolname.yfilter)) leaf_name_data.push_back(sharedtrpolname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "grange-items")
    {
        if(grange_items == nullptr)
        {
            grange_items = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems>();
        }
        return grange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(grange_items != nullptr)
    {
        _children["grange-items"] = grange_items;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stLmt")
    {
        stlmt = value;
        stlmt.value_namespace = name_space;
        stlmt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "availStLmt")
    {
        availstlmt = value;
        availstlmt.value_namespace = name_space;
        availstlmt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvLmt")
    {
        rsvlmt = value;
        rsvlmt.value_namespace = name_space;
        rsvlmt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "availRsvLmt")
    {
        availrsvlmt = value;
        availrsvlmt.value_namespace = name_space;
        availrsvlmt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvPolName")
    {
        rsvpolname = value;
        rsvpolname.value_namespace = name_space;
        rsvpolname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRateLmt")
    {
        regratelmt = value;
        regratelmt.value_namespace = name_space;
        regratelmt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sharedTrPolName")
    {
        sharedtrpolname = value;
        sharedtrpolname.value_namespace = name_space;
        sharedtrpolname.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stLmt")
    {
        stlmt.yfilter = yfilter;
    }
    if(value_path == "availStLmt")
    {
        availstlmt.yfilter = yfilter;
    }
    if(value_path == "rsvLmt")
    {
        rsvlmt.yfilter = yfilter;
    }
    if(value_path == "availRsvLmt")
    {
        availrsvlmt.yfilter = yfilter;
    }
    if(value_path == "rsvPolName")
    {
        rsvpolname.yfilter = yfilter;
    }
    if(value_path == "regRateLmt")
    {
        regratelmt.yfilter = yfilter;
    }
    if(value_path == "sharedTrPolName")
    {
        sharedtrpolname.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grange-items" || name == "stLmt" || name == "availStLmt" || name == "rsvLmt" || name == "availRsvLmt" || name == "rsvPolName" || name == "regRateLmt" || name == "sharedTrPolName")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::GrangeItems()
    :
    sharedrouterange_list(this, {"grangeip"})
{

    yang_name = "grange-items"; yang_parent_name = "vrfdetail-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::~GrangeItems()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sharedrouterange_list.len(); index++)
    {
        if(sharedrouterange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::has_operation() const
{
    for (std::size_t index=0; index<sharedrouterange_list.len(); index++)
    {
        if(sharedrouterange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SharedRouteRange-list")
    {
        auto ent_ = std::make_shared<System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList>();
        ent_->parent = this;
        sharedrouterange_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sharedrouterange_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SharedRouteRange-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::SharedRouteRangeList()
    :
    grangeip{YType::str, "grangeIp"}
{

    yang_name = "SharedRouteRange-list"; yang_parent_name = "grange-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::~SharedRouteRangeList()
{
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::has_data() const
{
    if (is_presence_container) return true;
    return grangeip.is_set;
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grangeip.yfilter);
}

std::string System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SharedRouteRange-list";
    ADD_KEY_TOKEN(grangeip, "grangeIp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grangeip.is_set || is_set(grangeip.yfilter)) leaf_name_data.push_back(grangeip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grangeIp")
    {
        grangeip = value;
        grangeip.value_namespace = name_space;
        grangeip.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grangeIp")
    {
        grangeip.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grangeIp")
        return true;
    return false;
}

System::SegrtItems::SegrtItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::SegrtItems::InstItems>())
    , te_items(std::make_shared<System::SegrtItems::TeItems>())
{
    inst_items->parent = this;
    te_items->parent = this;

    yang_name = "segrt-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::~SegrtItems()
{
}

bool System::SegrtItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data())
	|| (te_items !=  nullptr && te_items->has_data());
}

bool System::SegrtItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation())
	|| (te_items !=  nullptr && te_items->has_operation());
}

std::string System::SegrtItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::SegrtItems::InstItems>();
        }
        return inst_items;
    }

    if(child_yang_name == "te-items")
    {
        if(te_items == nullptr)
        {
            te_items = std::make_shared<System::SegrtItems::TeItems>();
        }
        return te_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    if(te_items != nullptr)
    {
        _children["te-items"] = te_items;
    }

    return _children;
}

void System::SegrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::SegrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "te-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::SegrtItems::InstItems::InstItems()
    :
    srgbcleanupintvl{YType::uint16, "srgbCleanupIntvl"},
    srgballocretryintvl{YType::uint16, "srgbAllocRetryIntvl"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    dom_items(std::make_shared<System::SegrtItems::InstItems::DomItems>())
    , srgb_items(std::make_shared<System::SegrtItems::InstItems::SrgbItems>())
{
    dom_items->parent = this;
    srgb_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "segrt-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::InstItems::~InstItems()
{
}

bool System::SegrtItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return srgbcleanupintvl.is_set
	|| srgballocretryintvl.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (srgb_items !=  nullptr && srgb_items->has_data());
}

bool System::SegrtItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srgbcleanupintvl.yfilter)
	|| ydk::is_set(srgballocretryintvl.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (srgb_items !=  nullptr && srgb_items->has_operation());
}

std::string System::SegrtItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srgbcleanupintvl.is_set || is_set(srgbcleanupintvl.yfilter)) leaf_name_data.push_back(srgbcleanupintvl.get_name_leafdata());
    if (srgballocretryintvl.is_set || is_set(srgballocretryintvl.yfilter)) leaf_name_data.push_back(srgballocretryintvl.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::SegrtItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "srgb-items")
    {
        if(srgb_items == nullptr)
        {
            srgb_items = std::make_shared<System::SegrtItems::InstItems::SrgbItems>();
        }
        return srgb_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(srgb_items != nullptr)
    {
        _children["srgb-items"] = srgb_items;
    }

    return _children;
}

void System::SegrtItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srgbCleanupIntvl")
    {
        srgbcleanupintvl = value;
        srgbcleanupintvl.value_namespace = name_space;
        srgbcleanupintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgbAllocRetryIntvl")
    {
        srgballocretryintvl = value;
        srgballocretryintvl.value_namespace = name_space;
        srgballocretryintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStQual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srgbCleanupIntvl")
    {
        srgbcleanupintvl.yfilter = yfilter;
    }
    if(value_path == "srgbAllocRetryIntvl")
    {
        srgballocretryintvl.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::SegrtItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "srgb-items" || name == "srgbCleanupIntvl" || name == "srgbAllocRetryIntvl" || name == "operSt" || name == "operStQual" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::SegrtItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::InstItems::DomItems::~DomItems()
{
}

bool System::SegrtItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::SegrtItems::InstItems::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SegrtItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::SegrtItems::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"}
        ,
    af_items(std::make_shared<System::SegrtItems::InstItems::DomItems::DomList::AfItems>())
{
    af_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (af_items !=  nullptr && af_items->has_data());
}

bool System::SegrtItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (af_items !=  nullptr && af_items->has_operation());
}

std::string System::SegrtItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::SegrtItems::InstItems::DomItems::DomList::AfItems>();
        }
        return af_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(af_items != nullptr)
    {
        _children["af-items"] = af_items;
    }

    return _children;
}

void System::SegrtItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::SegrtItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-items" || name == "name")
        return true;
    return false;
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::AfItems()
    :
    domaf_list(this, {"aftype"})
{

    yang_name = "af-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::~AfItems()
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domaf_list.len(); index++)
    {
        if(domaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::has_operation() const
{
    for (std::size_t index=0; index<domaf_list.len(); index++)
    {
        if(domaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::InstItems::DomItems::DomList::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::DomItems::DomList::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::InstItems::DomItems::DomList::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomAf-list")
    {
        auto ent_ = std::make_shared<System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList>();
        ent_->parent = this;
        domaf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::InstItems::DomItems::DomList::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domaf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomAf-list")
        return true;
    return false;
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::DomAfList()
    :
    aftype{YType::enumeration, "afType"},
    name{YType::str, "name"}
        ,
    pfxsid_items(std::make_shared<System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems>())
{
    pfxsid_items->parent = this;

    yang_name = "DomAf-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::~DomAfList()
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::has_data() const
{
    if (is_presence_container) return true;
    return aftype.is_set
	|| name.is_set
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data());
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aftype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation());
}

std::string System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomAf-list";
    ADD_KEY_TOKEN(aftype, "afType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aftype.is_set || is_set(aftype.yfilter)) leaf_name_data.push_back(aftype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pfxsid_items != nullptr)
    {
        _children["pfxsid-items"] = pfxsid_items;
    }

    return _children;
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afType")
    {
        aftype = value;
        aftype.value_namespace = name_space;
        aftype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afType")
    {
        aftype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfxsid-items" || name == "afType" || name == "name")
        return true;
    return false;
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PfxsidItems()
    :
    prefixsid_list(this, {"type"})
{

    yang_name = "pfxsid-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::~PfxsidItems()
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixsid_list.len(); index++)
    {
        if(prefixsid_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::has_operation() const
{
    for (std::size_t index=0; index<prefixsid_list.len(); index++)
    {
        if(prefixsid_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PrefixSid-list")
    {
        auto ent_ = std::make_shared<System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList>();
        ent_->parent = this;
        prefixsid_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixsid_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PrefixSid-list")
        return true;
    return false;
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::PrefixSidList()
    :
    type{YType::enumeration, "type"}
        ,
    mplspfxsid_items(std::make_shared<System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems>())
{
    mplspfxsid_items->parent = this;

    yang_name = "PrefixSid-list"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::~PrefixSidList()
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (mplspfxsid_items !=  nullptr && mplspfxsid_items->has_data());
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (mplspfxsid_items !=  nullptr && mplspfxsid_items->has_operation());
}

std::string System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PrefixSid-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplspfxsid-items")
    {
        if(mplspfxsid_items == nullptr)
        {
            mplspfxsid_items = std::make_shared<System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems>();
        }
        return mplspfxsid_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mplspfxsid_items != nullptr)
    {
        _children["mplspfxsid-items"] = mplspfxsid_items;
    }

    return _children;
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplspfxsid-items" || name == "type")
        return true;
    return false;
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplspfxsidItems()
    :
    mplsprefixsid_list(this, {"pfx"})
{

    yang_name = "mplspfxsid-items"; yang_parent_name = "PrefixSid-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::~MplspfxsidItems()
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsprefixsid_list.len(); index++)
    {
        if(mplsprefixsid_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::has_operation() const
{
    for (std::size_t index=0; index<mplsprefixsid_list.len(); index++)
    {
        if(mplsprefixsid_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplspfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MplsPrefixSid-list")
    {
        auto ent_ = std::make_shared<System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList>();
        ent_->parent = this;
        mplsprefixsid_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mplsprefixsid_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MplsPrefixSid-list")
        return true;
    return false;
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::MplsPrefixSidList()
    :
    pfx{YType::str, "pfx"},
    sidvaluetype{YType::enumeration, "sidValueType"},
    sidvalue{YType::uint32, "sidValue"}
{

    yang_name = "MplsPrefixSid-list"; yang_parent_name = "mplspfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::~MplsPrefixSidList()
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| sidvaluetype.is_set
	|| sidvalue.is_set;
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(sidvaluetype.yfilter)
	|| ydk::is_set(sidvalue.yfilter);
}

std::string System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MplsPrefixSid-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (sidvaluetype.is_set || is_set(sidvaluetype.yfilter)) leaf_name_data.push_back(sidvaluetype.get_name_leafdata());
    if (sidvalue.is_set || is_set(sidvalue.yfilter)) leaf_name_data.push_back(sidvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sidValueType")
    {
        sidvaluetype = value;
        sidvaluetype.value_namespace = name_space;
        sidvaluetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sidValue")
    {
        sidvalue = value;
        sidvalue.value_namespace = name_space;
        sidvalue.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "sidValueType")
    {
        sidvaluetype.yfilter = yfilter;
    }
    if(value_path == "sidValue")
    {
        sidvalue.yfilter = yfilter;
    }
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfx" || name == "sidValueType" || name == "sidValue")
        return true;
    return false;
}

System::SegrtItems::InstItems::SrgbItems::SrgbItems()
    :
    cfgsrgb_items(std::make_shared<System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems>())
    , opersrgb_items(std::make_shared<System::SegrtItems::InstItems::SrgbItems::OpersrgbItems>())
{
    cfgsrgb_items->parent = this;
    opersrgb_items->parent = this;

    yang_name = "srgb-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::InstItems::SrgbItems::~SrgbItems()
{
}

bool System::SegrtItems::InstItems::SrgbItems::has_data() const
{
    if (is_presence_container) return true;
    return (cfgsrgb_items !=  nullptr && cfgsrgb_items->has_data())
	|| (opersrgb_items !=  nullptr && opersrgb_items->has_data());
}

bool System::SegrtItems::InstItems::SrgbItems::has_operation() const
{
    return is_set(yfilter)
	|| (cfgsrgb_items !=  nullptr && cfgsrgb_items->has_operation())
	|| (opersrgb_items !=  nullptr && opersrgb_items->has_operation());
}

std::string System::SegrtItems::InstItems::SrgbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::InstItems::SrgbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::SrgbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::InstItems::SrgbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfgsrgb-items")
    {
        if(cfgsrgb_items == nullptr)
        {
            cfgsrgb_items = std::make_shared<System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems>();
        }
        return cfgsrgb_items;
    }

    if(child_yang_name == "opersrgb-items")
    {
        if(opersrgb_items == nullptr)
        {
            opersrgb_items = std::make_shared<System::SegrtItems::InstItems::SrgbItems::OpersrgbItems>();
        }
        return opersrgb_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::InstItems::SrgbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cfgsrgb_items != nullptr)
    {
        _children["cfgsrgb-items"] = cfgsrgb_items;
    }

    if(opersrgb_items != nullptr)
    {
        _children["opersrgb-items"] = opersrgb_items;
    }

    return _children;
}

void System::SegrtItems::InstItems::SrgbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::InstItems::SrgbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::InstItems::SrgbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfgsrgb-items" || name == "opersrgb-items")
        return true;
    return false;
}

System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::CfgsrgbItems()
    :
    configsrgb_list(this, {"type"})
{

    yang_name = "cfgsrgb-items"; yang_parent_name = "srgb-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::~CfgsrgbItems()
{
}

bool System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<configsrgb_list.len(); index++)
    {
        if(configsrgb_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::has_operation() const
{
    for (std::size_t index=0; index<configsrgb_list.len(); index++)
    {
        if(configsrgb_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/inst-items/srgb-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfgsrgb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ConfigSrgb-list")
    {
        auto ent_ = std::make_shared<System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList>();
        ent_->parent = this;
        configsrgb_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : configsrgb_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ConfigSrgb-list")
        return true;
    return false;
}

System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::ConfigSrgbList()
    :
    type{YType::enumeration, "type"}
        ,
    lblblock_items(std::make_shared<System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems>())
{
    lblblock_items->parent = this;

    yang_name = "ConfigSrgb-list"; yang_parent_name = "cfgsrgb-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::~ConfigSrgbList()
{
}

bool System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (lblblock_items !=  nullptr && lblblock_items->has_data());
}

bool System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (lblblock_items !=  nullptr && lblblock_items->has_operation());
}

std::string System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/inst-items/srgb-items/cfgsrgb-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ConfigSrgb-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lblblock-items")
    {
        if(lblblock_items == nullptr)
        {
            lblblock_items = std::make_shared<System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems>();
        }
        return lblblock_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lblblock_items != nullptr)
    {
        _children["lblblock-items"] = lblblock_items;
    }

    return _children;
}

void System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lblblock-items" || name == "type")
        return true;
    return false;
}

System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblblockItems()
    :
    lblblock_list(this, {"localid"})
{

    yang_name = "lblblock-items"; yang_parent_name = "ConfigSrgb-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::~LblblockItems()
{
}

bool System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lblblock_list.len(); index++)
    {
        if(lblblock_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::has_operation() const
{
    for (std::size_t index=0; index<lblblock_list.len(); index++)
    {
        if(lblblock_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lblblock-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LblBlock-list")
    {
        auto ent_ = std::make_shared<System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblBlockList>();
        ent_->parent = this;
        lblblock_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lblblock_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LblBlock-list")
        return true;
    return false;
}

System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblBlockList::LblBlockList()
    :
    localid{YType::str, "localId"},
    srlblmin{YType::uint32, "srLblMin"},
    srlblmax{YType::uint32, "srLblMax"},
    operst{YType::enumeration, "operSt"},
    numallocretries{YType::uint32, "numAllocRetries"}
{

    yang_name = "LblBlock-list"; yang_parent_name = "lblblock-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblBlockList::~LblBlockList()
{
}

bool System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblBlockList::has_data() const
{
    if (is_presence_container) return true;
    return localid.is_set
	|| srlblmin.is_set
	|| srlblmax.is_set
	|| operst.is_set
	|| numallocretries.is_set;
}

bool System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblBlockList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localid.yfilter)
	|| ydk::is_set(srlblmin.yfilter)
	|| ydk::is_set(srlblmax.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numallocretries.yfilter);
}

std::string System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblBlockList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LblBlock-list";
    ADD_KEY_TOKEN(localid, "localId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblBlockList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localid.is_set || is_set(localid.yfilter)) leaf_name_data.push_back(localid.get_name_leafdata());
    if (srlblmin.is_set || is_set(srlblmin.yfilter)) leaf_name_data.push_back(srlblmin.get_name_leafdata());
    if (srlblmax.is_set || is_set(srlblmax.yfilter)) leaf_name_data.push_back(srlblmax.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numallocretries.is_set || is_set(numallocretries.yfilter)) leaf_name_data.push_back(numallocretries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblBlockList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblBlockList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblBlockList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localId")
    {
        localid = value;
        localid.value_namespace = name_space;
        localid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srLblMin")
    {
        srlblmin = value;
        srlblmin.value_namespace = name_space;
        srlblmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srLblMax")
    {
        srlblmax = value;
        srlblmax.value_namespace = name_space;
        srlblmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numAllocRetries")
    {
        numallocretries = value;
        numallocretries.value_namespace = name_space;
        numallocretries.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblBlockList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localId")
    {
        localid.yfilter = yfilter;
    }
    if(value_path == "srLblMin")
    {
        srlblmin.yfilter = yfilter;
    }
    if(value_path == "srLblMax")
    {
        srlblmax.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numAllocRetries")
    {
        numallocretries.yfilter = yfilter;
    }
}

bool System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblBlockList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localId" || name == "srLblMin" || name == "srLblMax" || name == "operSt" || name == "numAllocRetries")
        return true;
    return false;
}

System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OpersrgbItems()
    :
    type{YType::enumeration, "type"}
        ,
    operlblblock_items(std::make_shared<System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems>())
{
    operlblblock_items->parent = this;

    yang_name = "opersrgb-items"; yang_parent_name = "srgb-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::~OpersrgbItems()
{
}

bool System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (operlblblock_items !=  nullptr && operlblblock_items->has_data());
}

bool System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (operlblblock_items !=  nullptr && operlblblock_items->has_operation());
}

std::string System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/inst-items/srgb-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opersrgb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operlblblock-items")
    {
        if(operlblblock_items == nullptr)
        {
            operlblblock_items = std::make_shared<System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems>();
        }
        return operlblblock_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(operlblblock_items != nullptr)
    {
        _children["operlblblock-items"] = operlblblock_items;
    }

    return _children;
}

void System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operlblblock-items" || name == "type")
        return true;
    return false;
}

System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperlblblockItems()
    :
    operlblblock_list(this, {"localid"})
{

    yang_name = "operlblblock-items"; yang_parent_name = "opersrgb-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::~OperlblblockItems()
{
}

bool System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<operlblblock_list.len(); index++)
    {
        if(operlblblock_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::has_operation() const
{
    for (std::size_t index=0; index<operlblblock_list.len(); index++)
    {
        if(operlblblock_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/inst-items/srgb-items/opersrgb-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operlblblock-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OperLblBlock-list")
    {
        auto ent_ = std::make_shared<System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList>();
        ent_->parent = this;
        operlblblock_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : operlblblock_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OperLblBlock-list")
        return true;
    return false;
}

System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList::OperLblBlockList()
    :
    localid{YType::str, "localId"},
    srlblmin{YType::uint32, "srLblMin"},
    srlblmax{YType::uint32, "srLblMax"},
    operst{YType::enumeration, "operSt"},
    numallocretries{YType::uint32, "numAllocRetries"}
{

    yang_name = "OperLblBlock-list"; yang_parent_name = "operlblblock-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList::~OperLblBlockList()
{
}

bool System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList::has_data() const
{
    if (is_presence_container) return true;
    return localid.is_set
	|| srlblmin.is_set
	|| srlblmax.is_set
	|| operst.is_set
	|| numallocretries.is_set;
}

bool System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localid.yfilter)
	|| ydk::is_set(srlblmin.yfilter)
	|| ydk::is_set(srlblmax.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numallocretries.yfilter);
}

std::string System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/inst-items/srgb-items/opersrgb-items/operlblblock-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OperLblBlock-list";
    ADD_KEY_TOKEN(localid, "localId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localid.is_set || is_set(localid.yfilter)) leaf_name_data.push_back(localid.get_name_leafdata());
    if (srlblmin.is_set || is_set(srlblmin.yfilter)) leaf_name_data.push_back(srlblmin.get_name_leafdata());
    if (srlblmax.is_set || is_set(srlblmax.yfilter)) leaf_name_data.push_back(srlblmax.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numallocretries.is_set || is_set(numallocretries.yfilter)) leaf_name_data.push_back(numallocretries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localId")
    {
        localid = value;
        localid.value_namespace = name_space;
        localid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srLblMin")
    {
        srlblmin = value;
        srlblmin.value_namespace = name_space;
        srlblmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srLblMax")
    {
        srlblmax = value;
        srlblmax.value_namespace = name_space;
        srlblmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numAllocRetries")
    {
        numallocretries = value;
        numallocretries.value_namespace = name_space;
        numallocretries.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localId")
    {
        localid.yfilter = yfilter;
    }
    if(value_path == "srLblMin")
    {
        srlblmin.yfilter = yfilter;
    }
    if(value_path == "srLblMax")
    {
        srlblmax.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numAllocRetries")
    {
        numallocretries.yfilter = yfilter;
    }
}

bool System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localId" || name == "srLblMin" || name == "srLblMax" || name == "operSt" || name == "numAllocRetries")
        return true;
    return false;
}

System::SegrtItems::TeItems::TeItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    color_items(std::make_shared<System::SegrtItems::TeItems::ColorItems>())
    , encap_items(std::make_shared<System::SegrtItems::TeItems::EncapItems>())
    , exppath_items(std::make_shared<System::SegrtItems::TeItems::ExppathItems>())
    , pcc_items(std::make_shared<System::SegrtItems::TeItems::PccItems>())
    , policy_items(std::make_shared<System::SegrtItems::TeItems::PolicyItems>())
{
    color_items->parent = this;
    encap_items->parent = this;
    exppath_items->parent = this;
    pcc_items->parent = this;
    policy_items->parent = this;

    yang_name = "te-items"; yang_parent_name = "segrt-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::TeItems::~TeItems()
{
}

bool System::SegrtItems::TeItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (color_items !=  nullptr && color_items->has_data())
	|| (encap_items !=  nullptr && encap_items->has_data())
	|| (exppath_items !=  nullptr && exppath_items->has_data())
	|| (pcc_items !=  nullptr && pcc_items->has_data())
	|| (policy_items !=  nullptr && policy_items->has_data());
}

bool System::SegrtItems::TeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (color_items !=  nullptr && color_items->has_operation())
	|| (encap_items !=  nullptr && encap_items->has_operation())
	|| (exppath_items !=  nullptr && exppath_items->has_operation())
	|| (pcc_items !=  nullptr && pcc_items->has_operation())
	|| (policy_items !=  nullptr && policy_items->has_operation());
}

std::string System::SegrtItems::TeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::TeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::TeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::TeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "color-items")
    {
        if(color_items == nullptr)
        {
            color_items = std::make_shared<System::SegrtItems::TeItems::ColorItems>();
        }
        return color_items;
    }

    if(child_yang_name == "encap-items")
    {
        if(encap_items == nullptr)
        {
            encap_items = std::make_shared<System::SegrtItems::TeItems::EncapItems>();
        }
        return encap_items;
    }

    if(child_yang_name == "exppath-items")
    {
        if(exppath_items == nullptr)
        {
            exppath_items = std::make_shared<System::SegrtItems::TeItems::ExppathItems>();
        }
        return exppath_items;
    }

    if(child_yang_name == "pcc-items")
    {
        if(pcc_items == nullptr)
        {
            pcc_items = std::make_shared<System::SegrtItems::TeItems::PccItems>();
        }
        return pcc_items;
    }

    if(child_yang_name == "policy-items")
    {
        if(policy_items == nullptr)
        {
            policy_items = std::make_shared<System::SegrtItems::TeItems::PolicyItems>();
        }
        return policy_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::TeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(color_items != nullptr)
    {
        _children["color-items"] = color_items;
    }

    if(encap_items != nullptr)
    {
        _children["encap-items"] = encap_items;
    }

    if(exppath_items != nullptr)
    {
        _children["exppath-items"] = exppath_items;
    }

    if(pcc_items != nullptr)
    {
        _children["pcc-items"] = pcc_items;
    }

    if(policy_items != nullptr)
    {
        _children["policy-items"] = policy_items;
    }

    return _children;
}

void System::SegrtItems::TeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::TeItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::SegrtItems::TeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "color-items" || name == "encap-items" || name == "exppath-items" || name == "pcc-items" || name == "policy-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::SegrtItems::TeItems::ColorItems::ColorItems()
    :
    color_list(this, {"color"})
{

    yang_name = "color-items"; yang_parent_name = "te-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::TeItems::ColorItems::~ColorItems()
{
}

bool System::SegrtItems::TeItems::ColorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<color_list.len(); index++)
    {
        if(color_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::TeItems::ColorItems::has_operation() const
{
    for (std::size_t index=0; index<color_list.len(); index++)
    {
        if(color_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::TeItems::ColorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/te-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::TeItems::ColorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "color-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::TeItems::ColorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::TeItems::ColorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Color-list")
    {
        auto ent_ = std::make_shared<System::SegrtItems::TeItems::ColorItems::ColorList>();
        ent_->parent = this;
        color_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::TeItems::ColorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : color_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SegrtItems::TeItems::ColorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::TeItems::ColorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::TeItems::ColorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Color-list")
        return true;
    return false;
}

System::SegrtItems::TeItems::ColorItems::ColorList::ColorList()
    :
    color{YType::uint64, "color"},
    metric{YType::enumeration, "metric"}
{

    yang_name = "Color-list"; yang_parent_name = "color-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::TeItems::ColorItems::ColorList::~ColorList()
{
}

bool System::SegrtItems::TeItems::ColorItems::ColorList::has_data() const
{
    if (is_presence_container) return true;
    return color.is_set
	|| metric.is_set;
}

bool System::SegrtItems::TeItems::ColorItems::ColorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string System::SegrtItems::TeItems::ColorItems::ColorList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/te-items/color-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::TeItems::ColorItems::ColorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Color-list";
    ADD_KEY_TOKEN(color, "color");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::TeItems::ColorItems::ColorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::TeItems::ColorItems::ColorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::TeItems::ColorItems::ColorList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SegrtItems::TeItems::ColorItems::ColorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::TeItems::ColorItems::ColorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool System::SegrtItems::TeItems::ColorItems::ColorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "color" || name == "metric")
        return true;
    return false;
}

System::SegrtItems::TeItems::EncapItems::EncapItems()
    :
    encapsulation_list(this, {"encaptype"})
{

    yang_name = "encap-items"; yang_parent_name = "te-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::TeItems::EncapItems::~EncapItems()
{
}

bool System::SegrtItems::TeItems::EncapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<encapsulation_list.len(); index++)
    {
        if(encapsulation_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::TeItems::EncapItems::has_operation() const
{
    for (std::size_t index=0; index<encapsulation_list.len(); index++)
    {
        if(encapsulation_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::TeItems::EncapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/te-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::TeItems::EncapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::TeItems::EncapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::TeItems::EncapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Encapsulation-list")
    {
        auto ent_ = std::make_shared<System::SegrtItems::TeItems::EncapItems::EncapsulationList>();
        ent_->parent = this;
        encapsulation_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::TeItems::EncapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : encapsulation_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SegrtItems::TeItems::EncapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::TeItems::EncapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::TeItems::EncapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Encapsulation-list")
        return true;
    return false;
}

System::SegrtItems::TeItems::EncapItems::EncapsulationList::EncapsulationList()
    :
    encaptype{YType::enumeration, "encapType"},
    srcaddress{YType::str, "srcAddress"}
{

    yang_name = "Encapsulation-list"; yang_parent_name = "encap-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::TeItems::EncapItems::EncapsulationList::~EncapsulationList()
{
}

bool System::SegrtItems::TeItems::EncapItems::EncapsulationList::has_data() const
{
    if (is_presence_container) return true;
    return encaptype.is_set
	|| srcaddress.is_set;
}

bool System::SegrtItems::TeItems::EncapItems::EncapsulationList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encaptype.yfilter)
	|| ydk::is_set(srcaddress.yfilter);
}

std::string System::SegrtItems::TeItems::EncapItems::EncapsulationList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/te-items/encap-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::TeItems::EncapItems::EncapsulationList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Encapsulation-list";
    ADD_KEY_TOKEN(encaptype, "encapType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::TeItems::EncapItems::EncapsulationList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encaptype.is_set || is_set(encaptype.yfilter)) leaf_name_data.push_back(encaptype.get_name_leafdata());
    if (srcaddress.is_set || is_set(srcaddress.yfilter)) leaf_name_data.push_back(srcaddress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::TeItems::EncapItems::EncapsulationList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::TeItems::EncapItems::EncapsulationList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SegrtItems::TeItems::EncapItems::EncapsulationList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapType")
    {
        encaptype = value;
        encaptype.value_namespace = name_space;
        encaptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcAddress")
    {
        srcaddress = value;
        srcaddress.value_namespace = name_space;
        srcaddress.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::TeItems::EncapItems::EncapsulationList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapType")
    {
        encaptype.yfilter = yfilter;
    }
    if(value_path == "srcAddress")
    {
        srcaddress.yfilter = yfilter;
    }
}

bool System::SegrtItems::TeItems::EncapItems::EncapsulationList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapType" || name == "srcAddress")
        return true;
    return false;
}

System::SegrtItems::TeItems::ExppathItems::ExppathItems()
    :
    exppath_list(this, {"name"})
{

    yang_name = "exppath-items"; yang_parent_name = "te-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::TeItems::ExppathItems::~ExppathItems()
{
}

bool System::SegrtItems::TeItems::ExppathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<exppath_list.len(); index++)
    {
        if(exppath_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::TeItems::ExppathItems::has_operation() const
{
    for (std::size_t index=0; index<exppath_list.len(); index++)
    {
        if(exppath_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::TeItems::ExppathItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/te-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::TeItems::ExppathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exppath-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::TeItems::ExppathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::TeItems::ExppathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExpPath-list")
    {
        auto ent_ = std::make_shared<System::SegrtItems::TeItems::ExppathItems::ExpPathList>();
        ent_->parent = this;
        exppath_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::TeItems::ExppathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : exppath_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SegrtItems::TeItems::ExppathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::TeItems::ExppathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::TeItems::ExppathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExpPath-list")
        return true;
    return false;
}

System::SegrtItems::TeItems::ExppathItems::ExpPathList::ExpPathList()
    :
    name{YType::str, "name"}
        ,
    nxtlbl_items(std::make_shared<System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems>())
{
    nxtlbl_items->parent = this;

    yang_name = "ExpPath-list"; yang_parent_name = "exppath-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::TeItems::ExppathItems::ExpPathList::~ExpPathList()
{
}

bool System::SegrtItems::TeItems::ExppathItems::ExpPathList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (nxtlbl_items !=  nullptr && nxtlbl_items->has_data());
}

bool System::SegrtItems::TeItems::ExppathItems::ExpPathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (nxtlbl_items !=  nullptr && nxtlbl_items->has_operation());
}

std::string System::SegrtItems::TeItems::ExppathItems::ExpPathList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/te-items/exppath-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::TeItems::ExppathItems::ExpPathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExpPath-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::TeItems::ExppathItems::ExpPathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::TeItems::ExppathItems::ExpPathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nxtlbl-items")
    {
        if(nxtlbl_items == nullptr)
        {
            nxtlbl_items = std::make_shared<System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems>();
        }
        return nxtlbl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::TeItems::ExppathItems::ExpPathList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nxtlbl_items != nullptr)
    {
        _children["nxtlbl-items"] = nxtlbl_items;
    }

    return _children;
}

void System::SegrtItems::TeItems::ExppathItems::ExpPathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::TeItems::ExppathItems::ExpPathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::SegrtItems::TeItems::ExppathItems::ExpPathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nxtlbl-items" || name == "name")
        return true;
    return false;
}

System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtlblItems()
    :
    nxtlbl_list(this, {"idx"})
{

    yang_name = "nxtlbl-items"; yang_parent_name = "ExpPath-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::~NxtlblItems()
{
}

bool System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nxtlbl_list.len(); index++)
    {
        if(nxtlbl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::has_operation() const
{
    for (std::size_t index=0; index<nxtlbl_list.len(); index++)
    {
        if(nxtlbl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nxtlbl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NxtLbl-list")
    {
        auto ent_ = std::make_shared<System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtLblList>();
        ent_->parent = this;
        nxtlbl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nxtlbl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NxtLbl-list")
        return true;
    return false;
}

System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtLblList::NxtLblList()
    :
    idx{YType::uint32, "idx"},
    lbl{YType::uint32, "lbl"}
{

    yang_name = "NxtLbl-list"; yang_parent_name = "nxtlbl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtLblList::~NxtLblList()
{
}

bool System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtLblList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| lbl.is_set;
}

bool System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtLblList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(lbl.yfilter);
}

std::string System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtLblList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NxtLbl-list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtLblList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtLblList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtLblList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtLblList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtLblList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
}

bool System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtLblList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "lbl")
        return true;
    return false;
}

System::SegrtItems::TeItems::PccItems::PccItems()
    :
    srcaddress{YType::str, "srcAddress"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    pce_items(std::make_shared<System::SegrtItems::TeItems::PccItems::PceItems>())
{
    pce_items->parent = this;

    yang_name = "pcc-items"; yang_parent_name = "te-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::TeItems::PccItems::~PccItems()
{
}

bool System::SegrtItems::TeItems::PccItems::has_data() const
{
    if (is_presence_container) return true;
    return srcaddress.is_set
	|| name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (pce_items !=  nullptr && pce_items->has_data());
}

bool System::SegrtItems::TeItems::PccItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddress.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (pce_items !=  nullptr && pce_items->has_operation());
}

std::string System::SegrtItems::TeItems::PccItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/te-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::TeItems::PccItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::TeItems::PccItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddress.is_set || is_set(srcaddress.yfilter)) leaf_name_data.push_back(srcaddress.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::TeItems::PccItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pce-items")
    {
        if(pce_items == nullptr)
        {
            pce_items = std::make_shared<System::SegrtItems::TeItems::PccItems::PceItems>();
        }
        return pce_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::TeItems::PccItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pce_items != nullptr)
    {
        _children["pce-items"] = pce_items;
    }

    return _children;
}

void System::SegrtItems::TeItems::PccItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcAddress")
    {
        srcaddress = value;
        srcaddress.value_namespace = name_space;
        srcaddress.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::TeItems::PccItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcAddress")
    {
        srcaddress.yfilter = yfilter;
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
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::SegrtItems::TeItems::PccItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-items" || name == "srcAddress" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::SegrtItems::TeItems::PccItems::PceItems::PceItems()
    :
    pce_list(this, {"pceaddress"})
{

    yang_name = "pce-items"; yang_parent_name = "pcc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::TeItems::PccItems::PceItems::~PceItems()
{
}

bool System::SegrtItems::TeItems::PccItems::PceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pce_list.len(); index++)
    {
        if(pce_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::TeItems::PccItems::PceItems::has_operation() const
{
    for (std::size_t index=0; index<pce_list.len(); index++)
    {
        if(pce_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::TeItems::PccItems::PceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/te-items/pcc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::TeItems::PccItems::PceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::TeItems::PccItems::PceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::TeItems::PccItems::PceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Pce-list")
    {
        auto ent_ = std::make_shared<System::SegrtItems::TeItems::PccItems::PceItems::PceList>();
        ent_->parent = this;
        pce_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::TeItems::PccItems::PceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pce_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SegrtItems::TeItems::PccItems::PceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::TeItems::PccItems::PceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::TeItems::PccItems::PceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Pce-list")
        return true;
    return false;
}

System::SegrtItems::TeItems::PccItems::PceItems::PceList::PceList()
    :
    pceaddress{YType::str, "pceAddress"},
    precedence{YType::uint32, "precedence"}
{

    yang_name = "Pce-list"; yang_parent_name = "pce-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::TeItems::PccItems::PceItems::PceList::~PceList()
{
}

bool System::SegrtItems::TeItems::PccItems::PceItems::PceList::has_data() const
{
    if (is_presence_container) return true;
    return pceaddress.is_set
	|| precedence.is_set;
}

bool System::SegrtItems::TeItems::PccItems::PceItems::PceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pceaddress.yfilter)
	|| ydk::is_set(precedence.yfilter);
}

std::string System::SegrtItems::TeItems::PccItems::PceItems::PceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/te-items/pcc-items/pce-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::TeItems::PccItems::PceItems::PceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Pce-list";
    ADD_KEY_TOKEN(pceaddress, "pceAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::TeItems::PccItems::PceItems::PceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceaddress.is_set || is_set(pceaddress.yfilter)) leaf_name_data.push_back(pceaddress.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::TeItems::PccItems::PceItems::PceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::TeItems::PccItems::PceItems::PceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SegrtItems::TeItems::PccItems::PceItems::PceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pceAddress")
    {
        pceaddress = value;
        pceaddress.value_namespace = name_space;
        pceaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::TeItems::PccItems::PceItems::PceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pceAddress")
    {
        pceaddress.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool System::SegrtItems::TeItems::PccItems::PceItems::PceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pceAddress" || name == "precedence")
        return true;
    return false;
}

System::SegrtItems::TeItems::PolicyItems::PolicyItems()
    :
    policy_list(this, {"name"})
{

    yang_name = "policy-items"; yang_parent_name = "te-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::TeItems::PolicyItems::~PolicyItems()
{
}

bool System::SegrtItems::TeItems::PolicyItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_list.len(); index++)
    {
        if(policy_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::TeItems::PolicyItems::has_operation() const
{
    for (std::size_t index=0; index<policy_list.len(); index++)
    {
        if(policy_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::TeItems::PolicyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/te-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::TeItems::PolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::TeItems::PolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::TeItems::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Policy-list")
    {
        auto ent_ = std::make_shared<System::SegrtItems::TeItems::PolicyItems::PolicyList>();
        ent_->parent = this;
        policy_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::TeItems::PolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SegrtItems::TeItems::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::TeItems::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::TeItems::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Policy-list")
        return true;
    return false;
}

System::SegrtItems::TeItems::PolicyItems::PolicyList::PolicyList()
    :
    name{YType::str, "name"},
    endpoint{YType::str, "endpoint"},
    color{YType::uint64, "color"}
        ,
    pref_items(std::make_shared<System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems>())
{
    pref_items->parent = this;

    yang_name = "Policy-list"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::TeItems::PolicyItems::PolicyList::~PolicyList()
{
}

bool System::SegrtItems::TeItems::PolicyItems::PolicyList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| endpoint.is_set
	|| color.is_set
	|| (pref_items !=  nullptr && pref_items->has_data());
}

bool System::SegrtItems::TeItems::PolicyItems::PolicyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(endpoint.yfilter)
	|| ydk::is_set(color.yfilter)
	|| (pref_items !=  nullptr && pref_items->has_operation());
}

std::string System::SegrtItems::TeItems::PolicyItems::PolicyList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/te-items/policy-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::TeItems::PolicyItems::PolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Policy-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::TeItems::PolicyItems::PolicyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (endpoint.is_set || is_set(endpoint.yfilter)) leaf_name_data.push_back(endpoint.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::TeItems::PolicyItems::PolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pref-items")
    {
        if(pref_items == nullptr)
        {
            pref_items = std::make_shared<System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems>();
        }
        return pref_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::TeItems::PolicyItems::PolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pref_items != nullptr)
    {
        _children["pref-items"] = pref_items;
    }

    return _children;
}

void System::SegrtItems::TeItems::PolicyItems::PolicyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint")
    {
        endpoint = value;
        endpoint.value_namespace = name_space;
        endpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::TeItems::PolicyItems::PolicyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "endpoint")
    {
        endpoint.yfilter = yfilter;
    }
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
}

bool System::SegrtItems::TeItems::PolicyItems::PolicyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pref-items" || name == "name" || name == "endpoint" || name == "color")
        return true;
    return false;
}

System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PrefItems()
    :
    polpref_list(this, {"pref"})
{

    yang_name = "pref-items"; yang_parent_name = "Policy-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::~PrefItems()
{
}

bool System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<polpref_list.len(); index++)
    {
        if(polpref_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::has_operation() const
{
    for (std::size_t index=0; index<polpref_list.len(); index++)
    {
        if(polpref_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pref-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PolPref-list")
    {
        auto ent_ = std::make_shared<System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList>();
        ent_->parent = this;
        polpref_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : polpref_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PolPref-list")
        return true;
    return false;
}

System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::PolPrefList()
    :
    pref{YType::uint32, "pref"}
        ,
    exp_items(std::make_shared<System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems>())
{
    exp_items->parent = this;

    yang_name = "PolPref-list"; yang_parent_name = "pref-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::~PolPrefList()
{
}

bool System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::has_data() const
{
    if (is_presence_container) return true;
    return pref.is_set
	|| (exp_items !=  nullptr && exp_items->has_data());
}

bool System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pref.yfilter)
	|| (exp_items !=  nullptr && exp_items->has_operation());
}

std::string System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PolPref-list";
    ADD_KEY_TOKEN(pref, "pref");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pref.is_set || is_set(pref.yfilter)) leaf_name_data.push_back(pref.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exp-items")
    {
        if(exp_items == nullptr)
        {
            exp_items = std::make_shared<System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems>();
        }
        return exp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(exp_items != nullptr)
    {
        _children["exp-items"] = exp_items;
    }

    return _children;
}

void System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pref")
    {
        pref = value;
        pref.value_namespace = name_space;
        pref.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pref")
    {
        pref.yfilter = yfilter;
    }
}

bool System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp-items" || name == "pref")
        return true;
    return false;
}

System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::ExpItems()
    :
    polexp_list(this, {"name"})
{

    yang_name = "exp-items"; yang_parent_name = "PolPref-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::~ExpItems()
{
}

bool System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<polexp_list.len(); index++)
    {
        if(polexp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::has_operation() const
{
    for (std::size_t index=0; index<polexp_list.len(); index++)
    {
        if(polexp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PolExp-list")
    {
        auto ent_ = std::make_shared<System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::PolExpList>();
        ent_->parent = this;
        polexp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : polexp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PolExp-list")
        return true;
    return false;
}

System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::PolExpList::PolExpList()
    :
    name{YType::str, "name"}
{

    yang_name = "PolExp-list"; yang_parent_name = "exp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::PolExpList::~PolExpList()
{
}

bool System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::PolExpList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::PolExpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::PolExpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PolExp-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::PolExpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::PolExpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::PolExpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::PolExpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::PolExpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::PolExpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::VrrpItems::VrrpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::VrrpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "vrrp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VrrpItems::~VrrpItems()
{
}

bool System::VrrpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::VrrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::VrrpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VrrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::VrrpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::VrrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::VrrpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::VrrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::VrrpItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    if_items(std::make_shared<System::VrrpItems::InstItems::IfItems>())
{
    if_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "vrrp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VrrpItems::InstItems::~InstItems()
{
}

bool System::VrrpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::VrrpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::VrrpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vrrp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VrrpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrrpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrrpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::VrrpItems::InstItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrrpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::VrrpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrrpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
}

bool System::VrrpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::VrrpItems::InstItems::IfItems::IfItems()
    :
    interface_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VrrpItems::InstItems::IfItems::~IfItems()
{
}

bool System::VrrpItems::InstItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_list.len(); index++)
    {
        if(interface_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrrpItems::InstItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<interface_list.len(); index++)
    {
        if(interface_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrrpItems::InstItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vrrp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VrrpItems::InstItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrrpItems::InstItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrrpItems::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Interface-list")
    {
        auto ent_ = std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList>();
        ent_->parent = this;
        interface_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrrpItems::InstItems::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VrrpItems::InstItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrrpItems::InstItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrrpItems::InstItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Interface-list")
        return true;
    return false;
}

System::VrrpItems::InstItems::IfItems::InterfaceList::InterfaceList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    id_items(std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems>())
    , rtvrfmbr_items(std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems>())
{
    id_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "Interface-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VrrpItems::InstItems::IfItems::InterfaceList::~InterfaceList()
{
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (id_items !=  nullptr && id_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (id_items !=  nullptr && id_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::VrrpItems::InstItems::IfItems::InterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vrrp-items/inst-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VrrpItems::InstItems::IfItems::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Interface-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrrpItems::InstItems::IfItems::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrrpItems::InstItems::IfItems::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id-items")
    {
        if(id_items == nullptr)
        {
            id_items = std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems>();
        }
        return id_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrrpItems::InstItems::IfItems::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(id_items != nullptr)
    {
        _children["id-items"] = id_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdItems()
    :
    id_list(this, {"id"})
{

    yang_name = "id-items"; yang_parent_name = "Interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::~IdItems()
{
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<id_list.len(); index++)
    {
        if(id_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::has_operation() const
{
    for (std::size_t index=0; index<id_list.len(); index++)
    {
        if(id_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Id-list")
    {
        auto ent_ = std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList>();
        ent_->parent = this;
        id_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : id_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Id-list")
        return true;
    return false;
}

System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::IdList()
    :
    id{YType::uint8, "id"},
    primary{YType::str, "primary"},
    advintvl{YType::uint8, "advIntvl"},
    authtext{YType::str, "authText"},
    authtype{YType::enumeration, "authType"},
    preempt{YType::enumeration, "preempt"},
    pricfg{YType::uint8, "priCfg"},
    bfdpeeraddr{YType::str, "bfdPeerAddr"},
    fwdlwrthrld{YType::uint8, "fwdLwrThrld"},
    fwduprthrld{YType::uint8, "fwdUprThrld"},
    adminst{YType::enumeration, "adminSt"},
    groupst{YType::enumeration, "groupSt"},
    groupstqual{YType::enumeration, "groupStQual"},
    mac{YType::str, "mac"},
    masteraddr{YType::str, "masterAddr"},
    bfdsessionst{YType::enumeration, "bfdSessionSt"}
        ,
    secondary_items(std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems>())
    , track_items(std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems>())
{
    secondary_items->parent = this;
    track_items->parent = this;

    yang_name = "Id-list"; yang_parent_name = "id-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::~IdList()
{
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| primary.is_set
	|| advintvl.is_set
	|| authtext.is_set
	|| authtype.is_set
	|| preempt.is_set
	|| pricfg.is_set
	|| bfdpeeraddr.is_set
	|| fwdlwrthrld.is_set
	|| fwduprthrld.is_set
	|| adminst.is_set
	|| groupst.is_set
	|| groupstqual.is_set
	|| mac.is_set
	|| masteraddr.is_set
	|| bfdsessionst.is_set
	|| (secondary_items !=  nullptr && secondary_items->has_data())
	|| (track_items !=  nullptr && track_items->has_data());
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(advintvl.yfilter)
	|| ydk::is_set(authtext.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(pricfg.yfilter)
	|| ydk::is_set(bfdpeeraddr.yfilter)
	|| ydk::is_set(fwdlwrthrld.yfilter)
	|| ydk::is_set(fwduprthrld.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(groupst.yfilter)
	|| ydk::is_set(groupstqual.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(masteraddr.yfilter)
	|| ydk::is_set(bfdsessionst.yfilter)
	|| (secondary_items !=  nullptr && secondary_items->has_operation())
	|| (track_items !=  nullptr && track_items->has_operation());
}

std::string System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Id-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (advintvl.is_set || is_set(advintvl.yfilter)) leaf_name_data.push_back(advintvl.get_name_leafdata());
    if (authtext.is_set || is_set(authtext.yfilter)) leaf_name_data.push_back(authtext.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (pricfg.is_set || is_set(pricfg.yfilter)) leaf_name_data.push_back(pricfg.get_name_leafdata());
    if (bfdpeeraddr.is_set || is_set(bfdpeeraddr.yfilter)) leaf_name_data.push_back(bfdpeeraddr.get_name_leafdata());
    if (fwdlwrthrld.is_set || is_set(fwdlwrthrld.yfilter)) leaf_name_data.push_back(fwdlwrthrld.get_name_leafdata());
    if (fwduprthrld.is_set || is_set(fwduprthrld.yfilter)) leaf_name_data.push_back(fwduprthrld.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (groupst.is_set || is_set(groupst.yfilter)) leaf_name_data.push_back(groupst.get_name_leafdata());
    if (groupstqual.is_set || is_set(groupstqual.yfilter)) leaf_name_data.push_back(groupstqual.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (masteraddr.is_set || is_set(masteraddr.yfilter)) leaf_name_data.push_back(masteraddr.get_name_leafdata());
    if (bfdsessionst.is_set || is_set(bfdsessionst.yfilter)) leaf_name_data.push_back(bfdsessionst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-items")
    {
        if(secondary_items == nullptr)
        {
            secondary_items = std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems>();
        }
        return secondary_items;
    }

    if(child_yang_name == "track-items")
    {
        if(track_items == nullptr)
        {
            track_items = std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems>();
        }
        return track_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(secondary_items != nullptr)
    {
        _children["secondary-items"] = secondary_items;
    }

    if(track_items != nullptr)
    {
        _children["track-items"] = track_items;
    }

    return _children;
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advIntvl")
    {
        advintvl = value;
        advintvl.value_namespace = name_space;
        advintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authText")
    {
        authtext = value;
        authtext.value_namespace = name_space;
        authtext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authType")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priCfg")
    {
        pricfg = value;
        pricfg.value_namespace = name_space;
        pricfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdPeerAddr")
    {
        bfdpeeraddr = value;
        bfdpeeraddr.value_namespace = name_space;
        bfdpeeraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdLwrThrld")
    {
        fwdlwrthrld = value;
        fwdlwrthrld.value_namespace = name_space;
        fwdlwrthrld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdUprThrld")
    {
        fwduprthrld = value;
        fwduprthrld.value_namespace = name_space;
        fwduprthrld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupSt")
    {
        groupst = value;
        groupst.value_namespace = name_space;
        groupst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupStQual")
    {
        groupstqual = value;
        groupstqual.value_namespace = name_space;
        groupstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "masterAddr")
    {
        masteraddr = value;
        masteraddr.value_namespace = name_space;
        masteraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdSessionSt")
    {
        bfdsessionst = value;
        bfdsessionst.value_namespace = name_space;
        bfdsessionst.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "advIntvl")
    {
        advintvl.yfilter = yfilter;
    }
    if(value_path == "authText")
    {
        authtext.yfilter = yfilter;
    }
    if(value_path == "authType")
    {
        authtype.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "priCfg")
    {
        pricfg.yfilter = yfilter;
    }
    if(value_path == "bfdPeerAddr")
    {
        bfdpeeraddr.yfilter = yfilter;
    }
    if(value_path == "fwdLwrThrld")
    {
        fwdlwrthrld.yfilter = yfilter;
    }
    if(value_path == "fwdUprThrld")
    {
        fwduprthrld.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "groupSt")
    {
        groupst.yfilter = yfilter;
    }
    if(value_path == "groupStQual")
    {
        groupstqual.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "masterAddr")
    {
        masteraddr.yfilter = yfilter;
    }
    if(value_path == "bfdSessionSt")
    {
        bfdsessionst.yfilter = yfilter;
    }
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-items" || name == "track-items" || name == "id" || name == "primary" || name == "advIntvl" || name == "authText" || name == "authType" || name == "preempt" || name == "priCfg" || name == "bfdPeerAddr" || name == "fwdLwrThrld" || name == "fwdUprThrld" || name == "adminSt" || name == "groupSt" || name == "groupStQual" || name == "mac" || name == "masterAddr" || name == "bfdSessionSt")
        return true;
    return false;
}

System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryItems()
    :
    secondary_list(this, {"secondary"})
{

    yang_name = "secondary-items"; yang_parent_name = "Id-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::~SecondaryItems()
{
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary_list.len(); index++)
    {
        if(secondary_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::has_operation() const
{
    for (std::size_t index=0; index<secondary_list.len(); index++)
    {
        if(secondary_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Secondary-list")
    {
        auto ent_ = std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryList>();
        ent_->parent = this;
        secondary_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : secondary_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Secondary-list")
        return true;
    return false;
}

System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryList::SecondaryList()
    :
    secondary{YType::str, "secondary"}
{

    yang_name = "Secondary-list"; yang_parent_name = "secondary-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryList::~SecondaryList()
{
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryList::has_data() const
{
    if (is_presence_container) return true;
    return secondary.is_set;
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Secondary-list";
    ADD_KEY_TOKEN(secondary, "secondary");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary")
        return true;
    return false;
}

System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems()
    :
    nativetrack_items(std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems>())
    , track_items(std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_>())
{
    nativetrack_items->parent = this;
    track_items->parent = this;

    yang_name = "track-items"; yang_parent_name = "Id-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::~TrackItems()
{
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::has_data() const
{
    if (is_presence_container) return true;
    return (nativetrack_items !=  nullptr && nativetrack_items->has_data())
	|| (track_items !=  nullptr && track_items->has_data());
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::has_operation() const
{
    return is_set(yfilter)
	|| (nativetrack_items !=  nullptr && nativetrack_items->has_operation())
	|| (track_items !=  nullptr && track_items->has_operation());
}

std::string System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nativeTrack-items")
    {
        if(nativetrack_items == nullptr)
        {
            nativetrack_items = std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems>();
        }
        return nativetrack_items;
    }

    if(child_yang_name == "track-items")
    {
        if(track_items == nullptr)
        {
            track_items = std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_>();
        }
        return track_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nativetrack_items != nullptr)
    {
        _children["nativeTrack-items"] = nativetrack_items;
    }

    if(track_items != nullptr)
    {
        _children["track-items"] = track_items;
    }

    return _children;
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nativeTrack-items" || name == "track-items")
        return true;
    return false;
}

System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems::NativeTrackItems()
    :
    id{YType::str, "id"},
    priority{YType::uint16, "priority"}
{

    yang_name = "nativeTrack-items"; yang_parent_name = "track-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems::~NativeTrackItems()
{
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| priority.is_set;
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nativeTrack-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "priority")
        return true;
    return false;
}

System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::TrackItems_()
    :
    objecttrack_list(this, {"id"})
{

    yang_name = "track-items"; yang_parent_name = "track-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::~TrackItems_()
{
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<objecttrack_list.len(); index++)
    {
        if(objecttrack_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::has_operation() const
{
    for (std::size_t index=0; index<objecttrack_list.len(); index++)
    {
        if(objecttrack_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ObjectTrack-list")
    {
        auto ent_ = std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::ObjectTrackList>();
        ent_->parent = this;
        objecttrack_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : objecttrack_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ObjectTrack-list")
        return true;
    return false;
}

System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::ObjectTrackList::ObjectTrackList()
    :
    id{YType::uint16, "id"},
    decrementpriority{YType::uint16, "decrementPriority"}
{

    yang_name = "ObjectTrack-list"; yang_parent_name = "track-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::ObjectTrackList::~ObjectTrackList()
{
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::ObjectTrackList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| decrementpriority.is_set;
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::ObjectTrackList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(decrementpriority.yfilter);
}

std::string System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::ObjectTrackList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ObjectTrack-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::ObjectTrackList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (decrementpriority.is_set || is_set(decrementpriority.yfilter)) leaf_name_data.push_back(decrementpriority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::ObjectTrackList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::ObjectTrackList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::ObjectTrackList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decrementPriority")
    {
        decrementpriority = value;
        decrementpriority.value_namespace = name_space;
        decrementpriority.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::ObjectTrackList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "decrementPriority")
    {
        decrementpriority.yfilter = yfilter;
    }
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::ObjectTrackList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "decrementPriority")
        return true;
    return false;
}

System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "Interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "Interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtnwpathtoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Vrrpv3Items::Vrrpv3Items()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::Vrrpv3Items::InstItems>())
{
    inst_items->parent = this;

    yang_name = "vrrpv3-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Vrrpv3Items::~Vrrpv3Items()
{
}

bool System::Vrrpv3Items::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::Vrrpv3Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::Vrrpv3Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Vrrpv3Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrpv3-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Vrrpv3Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Vrrpv3Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::Vrrpv3Items::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Vrrpv3Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::Vrrpv3Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Vrrpv3Items::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Vrrpv3Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::Vrrpv3Items::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    if_items(std::make_shared<System::Vrrpv3Items::InstItems::IfItems>())
{
    if_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "vrrpv3-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Vrrpv3Items::InstItems::~InstItems()
{
}

bool System::Vrrpv3Items::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::Vrrpv3Items::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::Vrrpv3Items::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vrrpv3-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Vrrpv3Items::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Vrrpv3Items::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Vrrpv3Items::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::Vrrpv3Items::InstItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Vrrpv3Items::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::Vrrpv3Items::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Vrrpv3Items::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
}

bool System::Vrrpv3Items::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}


}
}

