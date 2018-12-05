
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_41.hpp"
#include "Cisco_NX_OS_device_42.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::RPolicyList()
    :
    rtmap{YType::str, "rtMap"}
        ,
    if_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems>())
{
    if_items->parent = this;

    yang_name = "RPolicy-list"; yang_parent_name = "rpolicy-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::~RPolicyList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RPolicy-list";
    ADD_KEY_TOKEN(rtmap, "rtMap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "rtMap")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::IfItems()
    :
    tgtif_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "RPolicy-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::~IfItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tgtif_list.len(); index++)
    {
        if(tgtif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<tgtif_list.len(); index++)
    {
        if(tgtif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TgtIf-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList>();
        ent_->parent = this;
        tgtif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tgtif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TgtIf-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList::TgtIfList()
    :
    id{YType::str, "id"},
    vsi{YType::boolean, "vsi"},
    accgrp{YType::boolean, "accGrp"},
    pfxlist{YType::boolean, "pfxList"}
{

    yang_name = "TgtIf-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList::~TgtIfList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vsi.is_set
	|| accgrp.is_set
	|| pfxlist.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vsi.yfilter)
	|| ydk::is_set(accgrp.yfilter)
	|| ydk::is_set(pfxlist.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TgtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vsi.is_set || is_set(vsi.yfilter)) leaf_name_data.push_back(vsi.get_name_leafdata());
    if (accgrp.is_set || is_set(accgrp.yfilter)) leaf_name_data.push_back(accgrp.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vsi")
    {
        vsi = value;
        vsi.value_namespace = name_space;
        vsi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accGrp")
    {
        accgrp = value;
        accgrp.value_namespace = name_space;
        accgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vsi")
    {
        vsi.yfilter = yfilter;
    }
    if(value_path == "accGrp")
    {
        accgrp.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vsi" || name == "accGrp" || name == "pfxList")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::BdItems::BdItems()
    :
    bd_list(this, {"bdid"})
{

    yang_name = "bd-items"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::BdItems::~BdItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::BdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bd_list.len(); index++)
    {
        if(bd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::BdItems::has_operation() const
{
    for (std::size_t index=0; index<bd_list.len(); index++)
    {
        if(bd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::BdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::BdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::BdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::BdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BD-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList>();
        ent_->parent = this;
        bd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::BdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::BdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::BdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::BdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BD-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList::BDList()
    :
    bdid{YType::str, "bdid"}
{

    yang_name = "BD-list"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList::~BDList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList::has_data() const
{
    if (is_presence_container) return true;
    return bdid.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bdid.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BD-list";
    ADD_KEY_TOKEN(bdid, "bdid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bdid.is_set || is_set(bdid.yfilter)) leaf_name_data.push_back(bdid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bdid")
    {
        bdid = value;
        bdid.value_namespace = name_space;
        bdid.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bdid")
    {
        bdid.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdid")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::GlItems()
    :
    eventhist_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems>())
    , igmpsnbase_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems>())
    , mctraf_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems>())
    , gtimers_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems>())
    , gvlan_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems>())
    , gdebug_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems>())
    , mrouter_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems>())
    , proxy_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems>())
{
    eventhist_items->parent = this;
    igmpsnbase_items->parent = this;
    mctraf_items->parent = this;
    gtimers_items->parent = this;
    gvlan_items->parent = this;
    gdebug_items->parent = this;
    mrouter_items->parent = this;
    proxy_items->parent = this;

    yang_name = "gl-items"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::~GlItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::has_data() const
{
    if (is_presence_container) return true;
    return (eventhist_items !=  nullptr && eventhist_items->has_data())
	|| (igmpsnbase_items !=  nullptr && igmpsnbase_items->has_data())
	|| (mctraf_items !=  nullptr && mctraf_items->has_data())
	|| (gtimers_items !=  nullptr && gtimers_items->has_data())
	|| (gvlan_items !=  nullptr && gvlan_items->has_data())
	|| (gdebug_items !=  nullptr && gdebug_items->has_data())
	|| (mrouter_items !=  nullptr && mrouter_items->has_data())
	|| (proxy_items !=  nullptr && proxy_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::has_operation() const
{
    return is_set(yfilter)
	|| (eventhist_items !=  nullptr && eventhist_items->has_operation())
	|| (igmpsnbase_items !=  nullptr && igmpsnbase_items->has_operation())
	|| (mctraf_items !=  nullptr && mctraf_items->has_operation())
	|| (gtimers_items !=  nullptr && gtimers_items->has_operation())
	|| (gvlan_items !=  nullptr && gvlan_items->has_operation())
	|| (gdebug_items !=  nullptr && gdebug_items->has_operation())
	|| (mrouter_items !=  nullptr && mrouter_items->has_operation())
	|| (proxy_items !=  nullptr && proxy_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::GlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eventHist-items")
    {
        if(eventhist_items == nullptr)
        {
            eventhist_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems>();
        }
        return eventhist_items;
    }

    if(child_yang_name == "igmpsnbase-items")
    {
        if(igmpsnbase_items == nullptr)
        {
            igmpsnbase_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems>();
        }
        return igmpsnbase_items;
    }

    if(child_yang_name == "mctraf-items")
    {
        if(mctraf_items == nullptr)
        {
            mctraf_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems>();
        }
        return mctraf_items;
    }

    if(child_yang_name == "gTimers-items")
    {
        if(gtimers_items == nullptr)
        {
            gtimers_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems>();
        }
        return gtimers_items;
    }

    if(child_yang_name == "gvlan-items")
    {
        if(gvlan_items == nullptr)
        {
            gvlan_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems>();
        }
        return gvlan_items;
    }

    if(child_yang_name == "gdebug-items")
    {
        if(gdebug_items == nullptr)
        {
            gdebug_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems>();
        }
        return gdebug_items;
    }

    if(child_yang_name == "mrouter-items")
    {
        if(mrouter_items == nullptr)
        {
            mrouter_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems>();
        }
        return mrouter_items;
    }

    if(child_yang_name == "proxy-items")
    {
        if(proxy_items == nullptr)
        {
            proxy_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems>();
        }
        return proxy_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(eventhist_items != nullptr)
    {
        _children["eventHist-items"] = eventhist_items;
    }

    if(igmpsnbase_items != nullptr)
    {
        _children["igmpsnbase-items"] = igmpsnbase_items;
    }

    if(mctraf_items != nullptr)
    {
        _children["mctraf-items"] = mctraf_items;
    }

    if(gtimers_items != nullptr)
    {
        _children["gTimers-items"] = gtimers_items;
    }

    if(gvlan_items != nullptr)
    {
        _children["gvlan-items"] = gvlan_items;
    }

    if(gdebug_items != nullptr)
    {
        _children["gdebug-items"] = gdebug_items;
    }

    if(mrouter_items != nullptr)
    {
        _children["mrouter-items"] = mrouter_items;
    }

    if(proxy_items != nullptr)
    {
        _children["proxy-items"] = proxy_items;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eventHist-items" || name == "igmpsnbase-items" || name == "mctraf-items" || name == "gTimers-items" || name == "gvlan-items" || name == "gdebug-items" || name == "mrouter-items" || name == "proxy-items")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistItems()
    :
    eventhistory_list(this, {"type"})
{

    yang_name = "eventHist-items"; yang_parent_name = "gl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::~EventHistItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::has_operation() const
{
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/gl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventHist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventHistory-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList>();
        ent_->parent = this;
        eventhistory_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EventHistory-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList::EventHistoryList()
    :
    type{YType::enumeration, "type"},
    size{YType::uint32, "size"}
{

    yang_name = "EventHistory-list"; yang_parent_name = "eventHist-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList::~EventHistoryList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| size.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/gl-items/eventHist-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EventHistory-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "size")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems::IgmpsnbaseItems()
    :
    lookupmac{YType::boolean, "lookupMac"},
    llgrpsuppr{YType::boolean, "llGrpSuppr"},
    reportsuppr{YType::boolean, "reportSuppr"},
    v3reportsuppr{YType::boolean, "v3ReportSuppr"},
    exptracking{YType::boolean, "expTracking"},
    igmpsnoop{YType::boolean, "igmpSnoop"},
    minver{YType::uint16, "minVer"},
    maxgrp{YType::uint16, "maxGrp"}
{

    yang_name = "igmpsnbase-items"; yang_parent_name = "gl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems::~IgmpsnbaseItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems::has_data() const
{
    if (is_presence_container) return true;
    return lookupmac.is_set
	|| llgrpsuppr.is_set
	|| reportsuppr.is_set
	|| v3reportsuppr.is_set
	|| exptracking.is_set
	|| igmpsnoop.is_set
	|| minver.is_set
	|| maxgrp.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lookupmac.yfilter)
	|| ydk::is_set(llgrpsuppr.yfilter)
	|| ydk::is_set(reportsuppr.yfilter)
	|| ydk::is_set(v3reportsuppr.yfilter)
	|| ydk::is_set(exptracking.yfilter)
	|| ydk::is_set(igmpsnoop.yfilter)
	|| ydk::is_set(minver.yfilter)
	|| ydk::is_set(maxgrp.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/gl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmpsnbase-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lookupmac.is_set || is_set(lookupmac.yfilter)) leaf_name_data.push_back(lookupmac.get_name_leafdata());
    if (llgrpsuppr.is_set || is_set(llgrpsuppr.yfilter)) leaf_name_data.push_back(llgrpsuppr.get_name_leafdata());
    if (reportsuppr.is_set || is_set(reportsuppr.yfilter)) leaf_name_data.push_back(reportsuppr.get_name_leafdata());
    if (v3reportsuppr.is_set || is_set(v3reportsuppr.yfilter)) leaf_name_data.push_back(v3reportsuppr.get_name_leafdata());
    if (exptracking.is_set || is_set(exptracking.yfilter)) leaf_name_data.push_back(exptracking.get_name_leafdata());
    if (igmpsnoop.is_set || is_set(igmpsnoop.yfilter)) leaf_name_data.push_back(igmpsnoop.get_name_leafdata());
    if (minver.is_set || is_set(minver.yfilter)) leaf_name_data.push_back(minver.get_name_leafdata());
    if (maxgrp.is_set || is_set(maxgrp.yfilter)) leaf_name_data.push_back(maxgrp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lookupMac")
    {
        lookupmac = value;
        lookupmac.value_namespace = name_space;
        lookupmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "llGrpSuppr")
    {
        llgrpsuppr = value;
        llgrpsuppr.value_namespace = name_space;
        llgrpsuppr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reportSuppr")
    {
        reportsuppr = value;
        reportsuppr.value_namespace = name_space;
        reportsuppr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3ReportSuppr")
    {
        v3reportsuppr = value;
        v3reportsuppr.value_namespace = name_space;
        v3reportsuppr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expTracking")
    {
        exptracking = value;
        exptracking.value_namespace = name_space;
        exptracking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpSnoop")
    {
        igmpsnoop = value;
        igmpsnoop.value_namespace = name_space;
        igmpsnoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minVer")
    {
        minver = value;
        minver.value_namespace = name_space;
        minver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxGrp")
    {
        maxgrp = value;
        maxgrp.value_namespace = name_space;
        maxgrp.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lookupMac")
    {
        lookupmac.yfilter = yfilter;
    }
    if(value_path == "llGrpSuppr")
    {
        llgrpsuppr.yfilter = yfilter;
    }
    if(value_path == "reportSuppr")
    {
        reportsuppr.yfilter = yfilter;
    }
    if(value_path == "v3ReportSuppr")
    {
        v3reportsuppr.yfilter = yfilter;
    }
    if(value_path == "expTracking")
    {
        exptracking.yfilter = yfilter;
    }
    if(value_path == "igmpSnoop")
    {
        igmpsnoop.yfilter = yfilter;
    }
    if(value_path == "minVer")
    {
        minver.yfilter = yfilter;
    }
    if(value_path == "maxGrp")
    {
        maxgrp.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lookupMac" || name == "llGrpSuppr" || name == "reportSuppr" || name == "v3ReportSuppr" || name == "expTracking" || name == "igmpSnoop" || name == "minVer" || name == "maxGrp")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems::MctrafItems()
    :
    holddowntimer{YType::uint16, "holddownTimer"},
    optmcflood{YType::str, "optMcFlood"},
    manytooneenh{YType::str, "manyToOneEnh"},
    vpcpeerlinkexc{YType::boolean, "vpcPeerLinkExc"},
    ccmode{YType::boolean, "ccMode"}
{

    yang_name = "mctraf-items"; yang_parent_name = "gl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems::~MctrafItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems::has_data() const
{
    if (is_presence_container) return true;
    return holddowntimer.is_set
	|| optmcflood.is_set
	|| manytooneenh.is_set
	|| vpcpeerlinkexc.is_set
	|| ccmode.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holddowntimer.yfilter)
	|| ydk::is_set(optmcflood.yfilter)
	|| ydk::is_set(manytooneenh.yfilter)
	|| ydk::is_set(vpcpeerlinkexc.yfilter)
	|| ydk::is_set(ccmode.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/gl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mctraf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holddowntimer.is_set || is_set(holddowntimer.yfilter)) leaf_name_data.push_back(holddowntimer.get_name_leafdata());
    if (optmcflood.is_set || is_set(optmcflood.yfilter)) leaf_name_data.push_back(optmcflood.get_name_leafdata());
    if (manytooneenh.is_set || is_set(manytooneenh.yfilter)) leaf_name_data.push_back(manytooneenh.get_name_leafdata());
    if (vpcpeerlinkexc.is_set || is_set(vpcpeerlinkexc.yfilter)) leaf_name_data.push_back(vpcpeerlinkexc.get_name_leafdata());
    if (ccmode.is_set || is_set(ccmode.yfilter)) leaf_name_data.push_back(ccmode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holddownTimer")
    {
        holddowntimer = value;
        holddowntimer.value_namespace = name_space;
        holddowntimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optMcFlood")
    {
        optmcflood = value;
        optmcflood.value_namespace = name_space;
        optmcflood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manyToOneEnh")
    {
        manytooneenh = value;
        manytooneenh.value_namespace = name_space;
        manytooneenh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcPeerLinkExc")
    {
        vpcpeerlinkexc = value;
        vpcpeerlinkexc.value_namespace = name_space;
        vpcpeerlinkexc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccMode")
    {
        ccmode = value;
        ccmode.value_namespace = name_space;
        ccmode.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holddownTimer")
    {
        holddowntimer.yfilter = yfilter;
    }
    if(value_path == "optMcFlood")
    {
        optmcflood.yfilter = yfilter;
    }
    if(value_path == "manyToOneEnh")
    {
        manytooneenh.yfilter = yfilter;
    }
    if(value_path == "vpcPeerLinkExc")
    {
        vpcpeerlinkexc.yfilter = yfilter;
    }
    if(value_path == "ccMode")
    {
        ccmode.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holddownTimer" || name == "optMcFlood" || name == "manyToOneEnh" || name == "vpcPeerLinkExc" || name == "ccMode")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems::GTimersItems()
    :
    fastleave{YType::boolean, "fastLeave"},
    grptimeout{YType::uint16, "grpTimeout"},
    maxgqmiss{YType::uint16, "maxGqMiss"}
{

    yang_name = "gTimers-items"; yang_parent_name = "gl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems::~GTimersItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems::has_data() const
{
    if (is_presence_container) return true;
    return fastleave.is_set
	|| grptimeout.is_set
	|| maxgqmiss.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastleave.yfilter)
	|| ydk::is_set(grptimeout.yfilter)
	|| ydk::is_set(maxgqmiss.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/gl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gTimers-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastleave.is_set || is_set(fastleave.yfilter)) leaf_name_data.push_back(fastleave.get_name_leafdata());
    if (grptimeout.is_set || is_set(grptimeout.yfilter)) leaf_name_data.push_back(grptimeout.get_name_leafdata());
    if (maxgqmiss.is_set || is_set(maxgqmiss.yfilter)) leaf_name_data.push_back(maxgqmiss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastLeave")
    {
        fastleave = value;
        fastleave.value_namespace = name_space;
        fastleave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpTimeout")
    {
        grptimeout = value;
        grptimeout.value_namespace = name_space;
        grptimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxGqMiss")
    {
        maxgqmiss = value;
        maxgqmiss.value_namespace = name_space;
        maxgqmiss.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastLeave")
    {
        fastleave.yfilter = yfilter;
    }
    if(value_path == "grpTimeout")
    {
        grptimeout.yfilter = yfilter;
    }
    if(value_path == "maxGqMiss")
    {
        maxgqmiss.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastLeave" || name == "grpTimeout" || name == "maxGqMiss")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems::GvlanItems()
    :
    disablenvestrtrport{YType::boolean, "disableNveStRtrPort"},
    vxlan{YType::boolean, "vxlan"}
{

    yang_name = "gvlan-items"; yang_parent_name = "gl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems::~GvlanItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems::has_data() const
{
    if (is_presence_container) return true;
    return disablenvestrtrport.is_set
	|| vxlan.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disablenvestrtrport.yfilter)
	|| ydk::is_set(vxlan.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/gl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gvlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disablenvestrtrport.is_set || is_set(disablenvestrtrport.yfilter)) leaf_name_data.push_back(disablenvestrtrport.get_name_leafdata());
    if (vxlan.is_set || is_set(vxlan.yfilter)) leaf_name_data.push_back(vxlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disableNveStRtrPort")
    {
        disablenvestrtrport = value;
        disablenvestrtrport.value_namespace = name_space;
        disablenvestrtrport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan")
    {
        vxlan = value;
        vxlan.value_namespace = name_space;
        vxlan.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disableNveStRtrPort")
    {
        disablenvestrtrport.yfilter = yfilter;
    }
    if(value_path == "vxlan")
    {
        vxlan.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disableNveStRtrPort" || name == "vxlan")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems::GdebugItems()
    :
    syslogthreshold{YType::uint16, "syslogThreshold"},
    selfmaccheck{YType::boolean, "selfMacCheck"}
{

    yang_name = "gdebug-items"; yang_parent_name = "gl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems::~GdebugItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems::has_data() const
{
    if (is_presence_container) return true;
    return syslogthreshold.is_set
	|| selfmaccheck.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(syslogthreshold.yfilter)
	|| ydk::is_set(selfmaccheck.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/gl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gdebug-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (syslogthreshold.is_set || is_set(syslogthreshold.yfilter)) leaf_name_data.push_back(syslogthreshold.get_name_leafdata());
    if (selfmaccheck.is_set || is_set(selfmaccheck.yfilter)) leaf_name_data.push_back(selfmaccheck.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "syslogThreshold")
    {
        syslogthreshold = value;
        syslogthreshold.value_namespace = name_space;
        syslogthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selfMacCheck")
    {
        selfmaccheck = value;
        selfmaccheck.value_namespace = name_space;
        selfmaccheck.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "syslogThreshold")
    {
        syslogthreshold.yfilter = yfilter;
    }
    if(value_path == "selfMacCheck")
    {
        selfmaccheck.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syslogThreshold" || name == "selfMacCheck")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MrouterItems()
    :
    vpcpeerlink{YType::boolean, "vpcPeerLink"}
        ,
    if_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems>())
    , mif_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems>())
{
    if_items->parent = this;
    mif_items->parent = this;

    yang_name = "mrouter-items"; yang_parent_name = "gl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::~MrouterItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::has_data() const
{
    if (is_presence_container) return true;
    return vpcpeerlink.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (mif_items !=  nullptr && mif_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpcpeerlink.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (mif_items !=  nullptr && mif_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/gl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrouter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpcpeerlink.is_set || is_set(vpcpeerlink.yfilter)) leaf_name_data.push_back(vpcpeerlink.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "mif-items")
    {
        if(mif_items == nullptr)
        {
            mif_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems>();
        }
        return mif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    if(mif_items != nullptr)
    {
        _children["mif-items"] = mif_items;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpcPeerLink")
    {
        vpcpeerlink = value;
        vpcpeerlink.value_namespace = name_space;
        vpcpeerlink.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpcPeerLink")
    {
        vpcpeerlink.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "mif-items" || name == "vpcPeerLink")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::IfItems()
    :
    tgtif_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "mrouter-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::~IfItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tgtif_list.len(); index++)
    {
        if(tgtif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<tgtif_list.len(); index++)
    {
        if(tgtif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/gl-items/mrouter-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TgtIf-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList>();
        ent_->parent = this;
        tgtif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tgtif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TgtIf-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList::TgtIfList()
    :
    id{YType::str, "id"},
    vsi{YType::boolean, "vsi"},
    accgrp{YType::boolean, "accGrp"},
    pfxlist{YType::boolean, "pfxList"}
{

    yang_name = "TgtIf-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList::~TgtIfList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vsi.is_set
	|| accgrp.is_set
	|| pfxlist.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vsi.yfilter)
	|| ydk::is_set(accgrp.yfilter)
	|| ydk::is_set(pfxlist.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/gl-items/mrouter-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TgtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vsi.is_set || is_set(vsi.yfilter)) leaf_name_data.push_back(vsi.get_name_leafdata());
    if (accgrp.is_set || is_set(accgrp.yfilter)) leaf_name_data.push_back(accgrp.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vsi")
    {
        vsi = value;
        vsi.value_namespace = name_space;
        vsi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accGrp")
    {
        accgrp = value;
        accgrp.value_namespace = name_space;
        accgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vsi")
    {
        vsi.yfilter = yfilter;
    }
    if(value_path == "accGrp")
    {
        accgrp.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vsi" || name == "accGrp" || name == "pfxList")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MifItems()
    :
    mif_list(this, {"intf"})
{

    yang_name = "mif-items"; yang_parent_name = "mrouter-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::~MifItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mif_list.len(); index++)
    {
        if(mif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::has_operation() const
{
    for (std::size_t index=0; index<mif_list.len(); index++)
    {
        if(mif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/gl-items/mrouter-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MIf-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList>();
        ent_->parent = this;
        mif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MIf-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList::MIfList()
    :
    intf{YType::str, "intf"},
    vsi{YType::boolean, "vsi"}
{

    yang_name = "MIf-list"; yang_parent_name = "mif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList::~MIfList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList::has_data() const
{
    if (is_presence_container) return true;
    return intf.is_set
	|| vsi.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(vsi.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/gl-items/mrouter-items/mif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MIf-list";
    ADD_KEY_TOKEN(intf, "intf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (vsi.is_set || is_set(vsi.yfilter)) leaf_name_data.push_back(vsi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vsi")
    {
        vsi = value;
        vsi.value_namespace = name_space;
        vsi.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "vsi")
    {
        vsi.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf" || name == "vsi")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems::ProxyItems()
    :
    maxresptime{YType::uint16, "maxRespTime"}
{

    yang_name = "proxy-items"; yang_parent_name = "gl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems::~ProxyItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems::has_data() const
{
    if (is_presence_container) return true;
    return maxresptime.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxresptime.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/gl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxresptime.is_set || is_set(maxresptime.yfilter)) leaf_name_data.push_back(maxresptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxRespTime")
    {
        maxresptime = value;
        maxresptime.value_namespace = name_space;
        maxresptime.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxRespTime")
    {
        maxresptime.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxRespTime")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::InststatsItems::InststatsItems()
    :
    totnummcgrp{YType::uint32, "totNumMcGrp"},
    invpktsrcvd{YType::uint32, "invPktsRcvd"},
    lpbkpktsrcvd{YType::uint32, "lpbkPktsRcvd"},
    pktsflooded{YType::uint32, "pktsFlooded"},
    mrdlpbkpktsrcvd{YType::uint32, "mrdLpbkPktsRcvd"},
    novlandbpktsrcvd{YType::uint32, "noVlanDbPktsRcvd"},
    vpcpeerpktssent{YType::uint32, "vpcPeerPktsSent"},
    vpcpeerpktsrcvd{YType::uint32, "vpcPeerPktsRcvd"},
    vpcpeerpktssentfail{YType::uint32, "vpcPeerPktsSentFail"},
    vpcpeerpktsrcvdfail{YType::uint32, "vpcPeerPktsRcvdFail"}
{

    yang_name = "inststats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::InststatsItems::~InststatsItems()
{
}

bool System::IgmpsnoopItems::InstItems::InststatsItems::has_data() const
{
    if (is_presence_container) return true;
    return totnummcgrp.is_set
	|| invpktsrcvd.is_set
	|| lpbkpktsrcvd.is_set
	|| pktsflooded.is_set
	|| mrdlpbkpktsrcvd.is_set
	|| novlandbpktsrcvd.is_set
	|| vpcpeerpktssent.is_set
	|| vpcpeerpktsrcvd.is_set
	|| vpcpeerpktssentfail.is_set
	|| vpcpeerpktsrcvdfail.is_set;
}

bool System::IgmpsnoopItems::InstItems::InststatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totnummcgrp.yfilter)
	|| ydk::is_set(invpktsrcvd.yfilter)
	|| ydk::is_set(lpbkpktsrcvd.yfilter)
	|| ydk::is_set(pktsflooded.yfilter)
	|| ydk::is_set(mrdlpbkpktsrcvd.yfilter)
	|| ydk::is_set(novlandbpktsrcvd.yfilter)
	|| ydk::is_set(vpcpeerpktssent.yfilter)
	|| ydk::is_set(vpcpeerpktsrcvd.yfilter)
	|| ydk::is_set(vpcpeerpktssentfail.yfilter)
	|| ydk::is_set(vpcpeerpktsrcvdfail.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::InststatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::InststatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inststats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::InststatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (totnummcgrp.is_set || is_set(totnummcgrp.yfilter)) leaf_name_data.push_back(totnummcgrp.get_name_leafdata());
    if (invpktsrcvd.is_set || is_set(invpktsrcvd.yfilter)) leaf_name_data.push_back(invpktsrcvd.get_name_leafdata());
    if (lpbkpktsrcvd.is_set || is_set(lpbkpktsrcvd.yfilter)) leaf_name_data.push_back(lpbkpktsrcvd.get_name_leafdata());
    if (pktsflooded.is_set || is_set(pktsflooded.yfilter)) leaf_name_data.push_back(pktsflooded.get_name_leafdata());
    if (mrdlpbkpktsrcvd.is_set || is_set(mrdlpbkpktsrcvd.yfilter)) leaf_name_data.push_back(mrdlpbkpktsrcvd.get_name_leafdata());
    if (novlandbpktsrcvd.is_set || is_set(novlandbpktsrcvd.yfilter)) leaf_name_data.push_back(novlandbpktsrcvd.get_name_leafdata());
    if (vpcpeerpktssent.is_set || is_set(vpcpeerpktssent.yfilter)) leaf_name_data.push_back(vpcpeerpktssent.get_name_leafdata());
    if (vpcpeerpktsrcvd.is_set || is_set(vpcpeerpktsrcvd.yfilter)) leaf_name_data.push_back(vpcpeerpktsrcvd.get_name_leafdata());
    if (vpcpeerpktssentfail.is_set || is_set(vpcpeerpktssentfail.yfilter)) leaf_name_data.push_back(vpcpeerpktssentfail.get_name_leafdata());
    if (vpcpeerpktsrcvdfail.is_set || is_set(vpcpeerpktsrcvdfail.yfilter)) leaf_name_data.push_back(vpcpeerpktsrcvdfail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::InststatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::InststatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::InststatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totNumMcGrp")
    {
        totnummcgrp = value;
        totnummcgrp.value_namespace = name_space;
        totnummcgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invPktsRcvd")
    {
        invpktsrcvd = value;
        invpktsrcvd.value_namespace = name_space;
        invpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpbkPktsRcvd")
    {
        lpbkpktsrcvd = value;
        lpbkpktsrcvd.value_namespace = name_space;
        lpbkpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktsFlooded")
    {
        pktsflooded = value;
        pktsflooded.value_namespace = name_space;
        pktsflooded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mrdLpbkPktsRcvd")
    {
        mrdlpbkpktsrcvd = value;
        mrdlpbkpktsrcvd.value_namespace = name_space;
        mrdlpbkpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noVlanDbPktsRcvd")
    {
        novlandbpktsrcvd = value;
        novlandbpktsrcvd.value_namespace = name_space;
        novlandbpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcPeerPktsSent")
    {
        vpcpeerpktssent = value;
        vpcpeerpktssent.value_namespace = name_space;
        vpcpeerpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcPeerPktsRcvd")
    {
        vpcpeerpktsrcvd = value;
        vpcpeerpktsrcvd.value_namespace = name_space;
        vpcpeerpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcPeerPktsSentFail")
    {
        vpcpeerpktssentfail = value;
        vpcpeerpktssentfail.value_namespace = name_space;
        vpcpeerpktssentfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcPeerPktsRcvdFail")
    {
        vpcpeerpktsrcvdfail = value;
        vpcpeerpktsrcvdfail.value_namespace = name_space;
        vpcpeerpktsrcvdfail.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::InststatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totNumMcGrp")
    {
        totnummcgrp.yfilter = yfilter;
    }
    if(value_path == "invPktsRcvd")
    {
        invpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lpbkPktsRcvd")
    {
        lpbkpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "pktsFlooded")
    {
        pktsflooded.yfilter = yfilter;
    }
    if(value_path == "mrdLpbkPktsRcvd")
    {
        mrdlpbkpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "noVlanDbPktsRcvd")
    {
        novlandbpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "vpcPeerPktsSent")
    {
        vpcpeerpktssent.yfilter = yfilter;
    }
    if(value_path == "vpcPeerPktsRcvd")
    {
        vpcpeerpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "vpcPeerPktsSentFail")
    {
        vpcpeerpktssentfail.yfilter = yfilter;
    }
    if(value_path == "vpcPeerPktsRcvdFail")
    {
        vpcpeerpktsrcvdfail.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::InststatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totNumMcGrp" || name == "invPktsRcvd" || name == "lpbkPktsRcvd" || name == "pktsFlooded" || name == "mrdLpbkPktsRcvd" || name == "noVlanDbPktsRcvd" || name == "vpcPeerPktsSent" || name == "vpcPeerPktsRcvd" || name == "vpcPeerPktsSentFail" || name == "vpcPeerPktsRcvdFail")
        return true;
    return false;
}

System::M6ribItems::M6ribItems()
    :
    inst_items(std::make_shared<System::M6ribItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "m6rib-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::M6ribItems::~M6ribItems()
{
}

bool System::M6ribItems::has_data() const
{
    if (is_presence_container) return true;
    return (inst_items !=  nullptr && inst_items->has_data());
}

bool System::M6ribItems::has_operation() const
{
    return is_set(yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::M6ribItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::M6ribItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "m6rib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::M6ribItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::M6ribItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items")
        return true;
    return false;
}

System::M6ribItems::InstItems::InstItems()
    :
    db_items(std::make_shared<System::M6ribItems::InstItems::DbItems>())
    , dom_items(std::make_shared<System::M6ribItems::InstItems::DomItems>())
    , routedb_items(std::make_shared<System::M6ribItems::InstItems::RoutedbItems>())
{
    db_items->parent = this;
    dom_items->parent = this;
    routedb_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "m6rib-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::M6ribItems::InstItems::~InstItems()
{
}

bool System::M6ribItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return (db_items !=  nullptr && db_items->has_data())
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (routedb_items !=  nullptr && routedb_items->has_data());
}

bool System::M6ribItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (routedb_items !=  nullptr && routedb_items->has_operation());
}

std::string System::M6ribItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/m6rib-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::M6ribItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::M6ribItems::InstItems::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::M6ribItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "routedb-items")
    {
        if(routedb_items == nullptr)
        {
            routedb_items = std::make_shared<System::M6ribItems::InstItems::RoutedbItems>();
        }
        return routedb_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(routedb_items != nullptr)
    {
        _children["routedb-items"] = routedb_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "dom-items" || name == "routedb-items")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::M6ribItems::InstItems::DbItems::~DbItems()
{
}

bool System::M6ribItems::InstItems::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/m6rib-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::M6ribItems::InstItems::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::get_children() const
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

void System::M6ribItems::InstItems::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"}
        ,
    client_items(std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::ClientItems>())
    , memest_items(std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::MemestItems>())
    , vrf_items(std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems>())
{
    client_items->parent = this;
    memest_items->parent = this;
    vrf_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::M6ribItems::InstItems::DbItems::DbList::~DbList()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (client_items !=  nullptr && client_items->has_data())
	|| (memest_items !=  nullptr && memest_items->has_data())
	|| (vrf_items !=  nullptr && vrf_items->has_data());
}

bool System::M6ribItems::InstItems::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (client_items !=  nullptr && client_items->has_operation())
	|| (memest_items !=  nullptr && memest_items->has_operation())
	|| (vrf_items !=  nullptr && vrf_items->has_operation());
}

std::string System::M6ribItems::InstItems::DbItems::DbList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/m6rib-items/inst-items/db-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::M6ribItems::InstItems::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-items")
    {
        if(client_items == nullptr)
        {
            client_items = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::ClientItems>();
        }
        return client_items;
    }

    if(child_yang_name == "memest-items")
    {
        if(memest_items == nullptr)
        {
            memest_items = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::MemestItems>();
        }
        return memest_items;
    }

    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems>();
        }
        return vrf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_items != nullptr)
    {
        _children["client-items"] = client_items;
    }

    if(memest_items != nullptr)
    {
        _children["memest-items"] = memest_items;
    }

    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-items" || name == "memest-items" || name == "vrf-items" || name == "type")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClientItems()
    :
    clntentity_list(this, {"name"})
{

    yang_name = "client-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::ClientItems::~ClientItems()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::ClientItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clntentity_list.len(); index++)
    {
        if(clntentity_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DbItems::DbList::ClientItems::has_operation() const
{
    for (std::size_t index=0; index<clntentity_list.len(); index++)
    {
        if(clntentity_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::ClientItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::ClientItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::ClientItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ClntEntity-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList>();
        ent_->parent = this;
        clntentity_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::ClientItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clntentity_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::ClientItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DbItems::DbList::ClientItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::ClientItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ClntEntity-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::ClntEntityList()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    pid{YType::uint32, "pid"},
    mtssapid{YType::uint32, "mtsSapId"},
    shmemname{YType::str, "shMemName"},
    notify{YType::boolean, "notify"},
    staletimerrunning{YType::boolean, "staleTimerRunning"},
    ssmowner{YType::boolean, "ssmOwner"},
    bidirowner{YType::boolean, "bidirOwner"},
    staticowner{YType::boolean, "staticOwner"},
    sharedonlyowner{YType::boolean, "sharedOnlyOwner"},
    localjoinowner{YType::boolean, "localJoinOwner"},
    externalowner{YType::boolean, "externalOwner"},
    attachedowner{YType::boolean, "attachedOwner"},
    fabricowner{YType::boolean, "fabricOwner"}
        ,
    cnotify_items(std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems>())
{
    cnotify_items->parent = this;

    yang_name = "ClntEntity-list"; yang_parent_name = "client-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::~ClntEntityList()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set
	|| pid.is_set
	|| mtssapid.is_set
	|| shmemname.is_set
	|| notify.is_set
	|| staletimerrunning.is_set
	|| ssmowner.is_set
	|| bidirowner.is_set
	|| staticowner.is_set
	|| sharedonlyowner.is_set
	|| localjoinowner.is_set
	|| externalowner.is_set
	|| attachedowner.is_set
	|| fabricowner.is_set
	|| (cnotify_items !=  nullptr && cnotify_items->has_data());
}

bool System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(mtssapid.yfilter)
	|| ydk::is_set(shmemname.yfilter)
	|| ydk::is_set(notify.yfilter)
	|| ydk::is_set(staletimerrunning.yfilter)
	|| ydk::is_set(ssmowner.yfilter)
	|| ydk::is_set(bidirowner.yfilter)
	|| ydk::is_set(staticowner.yfilter)
	|| ydk::is_set(sharedonlyowner.yfilter)
	|| ydk::is_set(localjoinowner.yfilter)
	|| ydk::is_set(externalowner.yfilter)
	|| ydk::is_set(attachedowner.yfilter)
	|| ydk::is_set(fabricowner.yfilter)
	|| (cnotify_items !=  nullptr && cnotify_items->has_operation());
}

std::string System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ClntEntity-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (mtssapid.is_set || is_set(mtssapid.yfilter)) leaf_name_data.push_back(mtssapid.get_name_leafdata());
    if (shmemname.is_set || is_set(shmemname.yfilter)) leaf_name_data.push_back(shmemname.get_name_leafdata());
    if (notify.is_set || is_set(notify.yfilter)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (staletimerrunning.is_set || is_set(staletimerrunning.yfilter)) leaf_name_data.push_back(staletimerrunning.get_name_leafdata());
    if (ssmowner.is_set || is_set(ssmowner.yfilter)) leaf_name_data.push_back(ssmowner.get_name_leafdata());
    if (bidirowner.is_set || is_set(bidirowner.yfilter)) leaf_name_data.push_back(bidirowner.get_name_leafdata());
    if (staticowner.is_set || is_set(staticowner.yfilter)) leaf_name_data.push_back(staticowner.get_name_leafdata());
    if (sharedonlyowner.is_set || is_set(sharedonlyowner.yfilter)) leaf_name_data.push_back(sharedonlyowner.get_name_leafdata());
    if (localjoinowner.is_set || is_set(localjoinowner.yfilter)) leaf_name_data.push_back(localjoinowner.get_name_leafdata());
    if (externalowner.is_set || is_set(externalowner.yfilter)) leaf_name_data.push_back(externalowner.get_name_leafdata());
    if (attachedowner.is_set || is_set(attachedowner.yfilter)) leaf_name_data.push_back(attachedowner.get_name_leafdata());
    if (fabricowner.is_set || is_set(fabricowner.yfilter)) leaf_name_data.push_back(fabricowner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnotify-items")
    {
        if(cnotify_items == nullptr)
        {
            cnotify_items = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems>();
        }
        return cnotify_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cnotify_items != nullptr)
    {
        _children["cnotify-items"] = cnotify_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtsSapId")
    {
        mtssapid = value;
        mtssapid.value_namespace = name_space;
        mtssapid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shMemName")
    {
        shmemname = value;
        shmemname.value_namespace = name_space;
        shmemname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify")
    {
        notify = value;
        notify.value_namespace = name_space;
        notify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleTimerRunning")
    {
        staletimerrunning = value;
        staletimerrunning.value_namespace = name_space;
        staletimerrunning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmOwner")
    {
        ssmowner = value;
        ssmowner.value_namespace = name_space;
        ssmowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidirOwner")
    {
        bidirowner = value;
        bidirowner.value_namespace = name_space;
        bidirowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staticOwner")
    {
        staticowner = value;
        staticowner.value_namespace = name_space;
        staticowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sharedOnlyOwner")
    {
        sharedonlyowner = value;
        sharedonlyowner.value_namespace = name_space;
        sharedonlyowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localJoinOwner")
    {
        localjoinowner = value;
        localjoinowner.value_namespace = name_space;
        localjoinowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "externalOwner")
    {
        externalowner = value;
        externalowner.value_namespace = name_space;
        externalowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachedOwner")
    {
        attachedowner = value;
        attachedowner.value_namespace = name_space;
        attachedowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricOwner")
    {
        fabricowner = value;
        fabricowner.value_namespace = name_space;
        fabricowner.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "mtsSapId")
    {
        mtssapid.yfilter = yfilter;
    }
    if(value_path == "shMemName")
    {
        shmemname.yfilter = yfilter;
    }
    if(value_path == "notify")
    {
        notify.yfilter = yfilter;
    }
    if(value_path == "staleTimerRunning")
    {
        staletimerrunning.yfilter = yfilter;
    }
    if(value_path == "ssmOwner")
    {
        ssmowner.yfilter = yfilter;
    }
    if(value_path == "bidirOwner")
    {
        bidirowner.yfilter = yfilter;
    }
    if(value_path == "staticOwner")
    {
        staticowner.yfilter = yfilter;
    }
    if(value_path == "sharedOnlyOwner")
    {
        sharedonlyowner.yfilter = yfilter;
    }
    if(value_path == "localJoinOwner")
    {
        localjoinowner.yfilter = yfilter;
    }
    if(value_path == "externalOwner")
    {
        externalowner.yfilter = yfilter;
    }
    if(value_path == "attachedOwner")
    {
        attachedowner.yfilter = yfilter;
    }
    if(value_path == "fabricOwner")
    {
        fabricowner.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnotify-items" || name == "name" || name == "id" || name == "pid" || name == "mtsSapId" || name == "shMemName" || name == "notify" || name == "staleTimerRunning" || name == "ssmOwner" || name == "bidirOwner" || name == "staticOwner" || name == "sharedOnlyOwner" || name == "localJoinOwner" || name == "externalOwner" || name == "attachedOwner" || name == "fabricOwner")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::CnotifyItems()
    :
    clientnotify_list(this, {"notifyname"})
{

    yang_name = "cnotify-items"; yang_parent_name = "ClntEntity-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::~CnotifyItems()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clientnotify_list.len(); index++)
    {
        if(clientnotify_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::has_operation() const
{
    for (std::size_t index=0; index<clientnotify_list.len(); index++)
    {
        if(clientnotify_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnotify-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ClientNotify-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::ClientNotifyList>();
        ent_->parent = this;
        clientnotify_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clientnotify_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ClientNotify-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::ClientNotifyList::ClientNotifyList()
    :
    notifyname{YType::str, "notifyName"},
    sent{YType::uint64, "sent"},
    fail{YType::uint64, "fail"},
    rcvd{YType::uint64, "rcvd"},
    ackrcvd{YType::uint64, "ackRcvd"},
    acksent{YType::uint64, "ackSent"},
    ackfail{YType::uint64, "ackFail"}
{

    yang_name = "ClientNotify-list"; yang_parent_name = "cnotify-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::ClientNotifyList::~ClientNotifyList()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::ClientNotifyList::has_data() const
{
    if (is_presence_container) return true;
    return notifyname.is_set
	|| sent.is_set
	|| fail.is_set
	|| rcvd.is_set
	|| ackrcvd.is_set
	|| acksent.is_set
	|| ackfail.is_set;
}

bool System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::ClientNotifyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(notifyname.yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(fail.yfilter)
	|| ydk::is_set(rcvd.yfilter)
	|| ydk::is_set(ackrcvd.yfilter)
	|| ydk::is_set(acksent.yfilter)
	|| ydk::is_set(ackfail.yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::ClientNotifyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ClientNotify-list";
    ADD_KEY_TOKEN(notifyname, "notifyName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::ClientNotifyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notifyname.is_set || is_set(notifyname.yfilter)) leaf_name_data.push_back(notifyname.get_name_leafdata());
    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (fail.is_set || is_set(fail.yfilter)) leaf_name_data.push_back(fail.get_name_leafdata());
    if (rcvd.is_set || is_set(rcvd.yfilter)) leaf_name_data.push_back(rcvd.get_name_leafdata());
    if (ackrcvd.is_set || is_set(ackrcvd.yfilter)) leaf_name_data.push_back(ackrcvd.get_name_leafdata());
    if (acksent.is_set || is_set(acksent.yfilter)) leaf_name_data.push_back(acksent.get_name_leafdata());
    if (ackfail.is_set || is_set(ackfail.yfilter)) leaf_name_data.push_back(ackfail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::ClientNotifyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::ClientNotifyList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::ClientNotifyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "notifyName")
    {
        notifyname = value;
        notifyname.value_namespace = name_space;
        notifyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fail")
    {
        fail = value;
        fail.value_namespace = name_space;
        fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvd")
    {
        rcvd = value;
        rcvd.value_namespace = name_space;
        rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ackRcvd")
    {
        ackrcvd = value;
        ackrcvd.value_namespace = name_space;
        ackrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ackSent")
    {
        acksent = value;
        acksent.value_namespace = name_space;
        acksent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ackFail")
    {
        ackfail = value;
        ackfail.value_namespace = name_space;
        ackfail.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::ClientNotifyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "notifyName")
    {
        notifyname.yfilter = yfilter;
    }
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "fail")
    {
        fail.yfilter = yfilter;
    }
    if(value_path == "rcvd")
    {
        rcvd.yfilter = yfilter;
    }
    if(value_path == "ackRcvd")
    {
        ackrcvd.yfilter = yfilter;
    }
    if(value_path == "ackSent")
    {
        acksent.yfilter = yfilter;
    }
    if(value_path == "ackFail")
    {
        ackfail.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::ClientNotifyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notifyName" || name == "sent" || name == "fail" || name == "rcvd" || name == "ackRcvd" || name == "ackSent" || name == "ackFail")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::MemestItems::MemestItems()
    :
    currmaxgrp_items(std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems>())
    , inusegrp_items(std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems>())
    , configmaxgrp_items(std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems>())
    , estgrp_items(std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems>())
{
    currmaxgrp_items->parent = this;
    inusegrp_items->parent = this;
    configmaxgrp_items->parent = this;
    estgrp_items->parent = this;

    yang_name = "memest-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::MemestItems::~MemestItems()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::has_data() const
{
    if (is_presence_container) return true;
    return (currmaxgrp_items !=  nullptr && currmaxgrp_items->has_data())
	|| (inusegrp_items !=  nullptr && inusegrp_items->has_data())
	|| (configmaxgrp_items !=  nullptr && configmaxgrp_items->has_data())
	|| (estgrp_items !=  nullptr && estgrp_items->has_data());
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::has_operation() const
{
    return is_set(yfilter)
	|| (currmaxgrp_items !=  nullptr && currmaxgrp_items->has_operation())
	|| (inusegrp_items !=  nullptr && inusegrp_items->has_operation())
	|| (configmaxgrp_items !=  nullptr && configmaxgrp_items->has_operation())
	|| (estgrp_items !=  nullptr && estgrp_items->has_operation());
}

std::string System::M6ribItems::InstItems::DbItems::DbList::MemestItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memest-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::MemestItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::MemestItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "currmaxgrp-items")
    {
        if(currmaxgrp_items == nullptr)
        {
            currmaxgrp_items = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems>();
        }
        return currmaxgrp_items;
    }

    if(child_yang_name == "inusegrp-items")
    {
        if(inusegrp_items == nullptr)
        {
            inusegrp_items = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems>();
        }
        return inusegrp_items;
    }

    if(child_yang_name == "configmaxgrp-items")
    {
        if(configmaxgrp_items == nullptr)
        {
            configmaxgrp_items = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems>();
        }
        return configmaxgrp_items;
    }

    if(child_yang_name == "estgrp-items")
    {
        if(estgrp_items == nullptr)
        {
            estgrp_items = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems>();
        }
        return estgrp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::MemestItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(currmaxgrp_items != nullptr)
    {
        _children["currmaxgrp-items"] = currmaxgrp_items;
    }

    if(inusegrp_items != nullptr)
    {
        _children["inusegrp-items"] = inusegrp_items;
    }

    if(configmaxgrp_items != nullptr)
    {
        _children["configmaxgrp-items"] = configmaxgrp_items;
    }

    if(estgrp_items != nullptr)
    {
        _children["estgrp-items"] = estgrp_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::MemestItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DbItems::DbList::MemestItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "currmaxgrp-items" || name == "inusegrp-items" || name == "configmaxgrp-items" || name == "estgrp-items")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrmaxgrpItems()
    :
    currmaxmb_list(this, {"grpcount", "srcpergrp", "oifperentry"})
{

    yang_name = "currmaxgrp-items"; yang_parent_name = "memest-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::~CurrmaxgrpItems()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<currmaxmb_list.len(); index++)
    {
        if(currmaxmb_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::has_operation() const
{
    for (std::size_t index=0; index<currmaxmb_list.len(); index++)
    {
        if(currmaxmb_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "currmaxgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CurrMaxMB-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrMaxMBList>();
        ent_->parent = this;
        currmaxmb_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : currmaxmb_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CurrMaxMB-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrMaxMBList::CurrMaxMBList()
    :
    grpcount{YType::uint32, "grpCount"},
    srcpergrp{YType::uint32, "srcPerGrp"},
    oifperentry{YType::uint32, "oifPerEntry"},
    max{YType::uint64, "max"}
{

    yang_name = "CurrMaxMB-list"; yang_parent_name = "currmaxgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrMaxMBList::~CurrMaxMBList()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrMaxMBList::has_data() const
{
    if (is_presence_container) return true;
    return grpcount.is_set
	|| srcpergrp.is_set
	|| oifperentry.is_set
	|| max.is_set;
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrMaxMBList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpcount.yfilter)
	|| ydk::is_set(srcpergrp.yfilter)
	|| ydk::is_set(oifperentry.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrMaxMBList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CurrMaxMB-list";
    ADD_KEY_TOKEN(grpcount, "grpCount");
    ADD_KEY_TOKEN(srcpergrp, "srcPerGrp");
    ADD_KEY_TOKEN(oifperentry, "oifPerEntry");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrMaxMBList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpcount.is_set || is_set(grpcount.yfilter)) leaf_name_data.push_back(grpcount.get_name_leafdata());
    if (srcpergrp.is_set || is_set(srcpergrp.yfilter)) leaf_name_data.push_back(srcpergrp.get_name_leafdata());
    if (oifperentry.is_set || is_set(oifperentry.yfilter)) leaf_name_data.push_back(oifperentry.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrMaxMBList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrMaxMBList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrMaxMBList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpCount")
    {
        grpcount = value;
        grpcount.value_namespace = name_space;
        grpcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPerGrp")
    {
        srcpergrp = value;
        srcpergrp.value_namespace = name_space;
        srcpergrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifPerEntry")
    {
        oifperentry = value;
        oifperentry.value_namespace = name_space;
        oifperentry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrMaxMBList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpCount")
    {
        grpcount.yfilter = yfilter;
    }
    if(value_path == "srcPerGrp")
    {
        srcpergrp.yfilter = yfilter;
    }
    if(value_path == "oifPerEntry")
    {
        oifperentry.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrMaxMBList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grpCount" || name == "srcPerGrp" || name == "oifPerEntry" || name == "max")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InusegrpItems()
    :
    inusekb_list(this, {"grpcount", "srcpergrp", "oifperentry"})
{

    yang_name = "inusegrp-items"; yang_parent_name = "memest-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::~InusegrpItems()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inusekb_list.len(); index++)
    {
        if(inusekb_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::has_operation() const
{
    for (std::size_t index=0; index<inusekb_list.len(); index++)
    {
        if(inusekb_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inusegrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InUseKB-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InUseKBList>();
        ent_->parent = this;
        inusekb_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : inusekb_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InUseKB-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InUseKBList::InUseKBList()
    :
    grpcount{YType::uint32, "grpCount"},
    srcpergrp{YType::uint32, "srcPerGrp"},
    oifperentry{YType::uint32, "oifPerEntry"},
    max{YType::uint64, "max"}
{

    yang_name = "InUseKB-list"; yang_parent_name = "inusegrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InUseKBList::~InUseKBList()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InUseKBList::has_data() const
{
    if (is_presence_container) return true;
    return grpcount.is_set
	|| srcpergrp.is_set
	|| oifperentry.is_set
	|| max.is_set;
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InUseKBList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpcount.yfilter)
	|| ydk::is_set(srcpergrp.yfilter)
	|| ydk::is_set(oifperentry.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InUseKBList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InUseKB-list";
    ADD_KEY_TOKEN(grpcount, "grpCount");
    ADD_KEY_TOKEN(srcpergrp, "srcPerGrp");
    ADD_KEY_TOKEN(oifperentry, "oifPerEntry");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InUseKBList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpcount.is_set || is_set(grpcount.yfilter)) leaf_name_data.push_back(grpcount.get_name_leafdata());
    if (srcpergrp.is_set || is_set(srcpergrp.yfilter)) leaf_name_data.push_back(srcpergrp.get_name_leafdata());
    if (oifperentry.is_set || is_set(oifperentry.yfilter)) leaf_name_data.push_back(oifperentry.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InUseKBList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InUseKBList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InUseKBList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpCount")
    {
        grpcount = value;
        grpcount.value_namespace = name_space;
        grpcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPerGrp")
    {
        srcpergrp = value;
        srcpergrp.value_namespace = name_space;
        srcpergrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifPerEntry")
    {
        oifperentry = value;
        oifperentry.value_namespace = name_space;
        oifperentry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InUseKBList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpCount")
    {
        grpcount.yfilter = yfilter;
    }
    if(value_path == "srcPerGrp")
    {
        srcpergrp.yfilter = yfilter;
    }
    if(value_path == "oifPerEntry")
    {
        oifperentry.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InUseKBList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grpCount" || name == "srcPerGrp" || name == "oifPerEntry" || name == "max")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfigmaxgrpItems()
    :
    configuredmaxmb_list(this, {"grpcount", "srcpergrp", "oifperentry"})
{

    yang_name = "configmaxgrp-items"; yang_parent_name = "memest-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::~ConfigmaxgrpItems()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<configuredmaxmb_list.len(); index++)
    {
        if(configuredmaxmb_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::has_operation() const
{
    for (std::size_t index=0; index<configuredmaxmb_list.len(); index++)
    {
        if(configuredmaxmb_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configmaxgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ConfiguredMaxMB-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfiguredMaxMBList>();
        ent_->parent = this;
        configuredmaxmb_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : configuredmaxmb_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ConfiguredMaxMB-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfiguredMaxMBList::ConfiguredMaxMBList()
    :
    grpcount{YType::uint32, "grpCount"},
    srcpergrp{YType::uint32, "srcPerGrp"},
    oifperentry{YType::uint32, "oifPerEntry"},
    max{YType::uint64, "max"}
{

    yang_name = "ConfiguredMaxMB-list"; yang_parent_name = "configmaxgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfiguredMaxMBList::~ConfiguredMaxMBList()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfiguredMaxMBList::has_data() const
{
    if (is_presence_container) return true;
    return grpcount.is_set
	|| srcpergrp.is_set
	|| oifperentry.is_set
	|| max.is_set;
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfiguredMaxMBList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpcount.yfilter)
	|| ydk::is_set(srcpergrp.yfilter)
	|| ydk::is_set(oifperentry.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfiguredMaxMBList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ConfiguredMaxMB-list";
    ADD_KEY_TOKEN(grpcount, "grpCount");
    ADD_KEY_TOKEN(srcpergrp, "srcPerGrp");
    ADD_KEY_TOKEN(oifperentry, "oifPerEntry");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfiguredMaxMBList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpcount.is_set || is_set(grpcount.yfilter)) leaf_name_data.push_back(grpcount.get_name_leafdata());
    if (srcpergrp.is_set || is_set(srcpergrp.yfilter)) leaf_name_data.push_back(srcpergrp.get_name_leafdata());
    if (oifperentry.is_set || is_set(oifperentry.yfilter)) leaf_name_data.push_back(oifperentry.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfiguredMaxMBList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfiguredMaxMBList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfiguredMaxMBList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpCount")
    {
        grpcount = value;
        grpcount.value_namespace = name_space;
        grpcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPerGrp")
    {
        srcpergrp = value;
        srcpergrp.value_namespace = name_space;
        srcpergrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifPerEntry")
    {
        oifperentry = value;
        oifperentry.value_namespace = name_space;
        oifperentry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfiguredMaxMBList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpCount")
    {
        grpcount.yfilter = yfilter;
    }
    if(value_path == "srcPerGrp")
    {
        srcpergrp.yfilter = yfilter;
    }
    if(value_path == "oifPerEntry")
    {
        oifperentry.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfiguredMaxMBList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grpCount" || name == "srcPerGrp" || name == "oifPerEntry" || name == "max")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstgrpItems()
    :
    estmaxmb_list(this, {"grpcount", "srcpergrp", "oifperentry"})
{

    yang_name = "estgrp-items"; yang_parent_name = "memest-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::~EstgrpItems()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<estmaxmb_list.len(); index++)
    {
        if(estmaxmb_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::has_operation() const
{
    for (std::size_t index=0; index<estmaxmb_list.len(); index++)
    {
        if(estmaxmb_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "estgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EstMaxMB-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstMaxMBList>();
        ent_->parent = this;
        estmaxmb_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : estmaxmb_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EstMaxMB-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstMaxMBList::EstMaxMBList()
    :
    grpcount{YType::uint32, "grpCount"},
    srcpergrp{YType::uint32, "srcPerGrp"},
    oifperentry{YType::uint32, "oifPerEntry"},
    max{YType::uint64, "max"}
{

    yang_name = "EstMaxMB-list"; yang_parent_name = "estgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstMaxMBList::~EstMaxMBList()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstMaxMBList::has_data() const
{
    if (is_presence_container) return true;
    return grpcount.is_set
	|| srcpergrp.is_set
	|| oifperentry.is_set
	|| max.is_set;
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstMaxMBList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpcount.yfilter)
	|| ydk::is_set(srcpergrp.yfilter)
	|| ydk::is_set(oifperentry.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstMaxMBList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EstMaxMB-list";
    ADD_KEY_TOKEN(grpcount, "grpCount");
    ADD_KEY_TOKEN(srcpergrp, "srcPerGrp");
    ADD_KEY_TOKEN(oifperentry, "oifPerEntry");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstMaxMBList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpcount.is_set || is_set(grpcount.yfilter)) leaf_name_data.push_back(grpcount.get_name_leafdata());
    if (srcpergrp.is_set || is_set(srcpergrp.yfilter)) leaf_name_data.push_back(srcpergrp.get_name_leafdata());
    if (oifperentry.is_set || is_set(oifperentry.yfilter)) leaf_name_data.push_back(oifperentry.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstMaxMBList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstMaxMBList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstMaxMBList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpCount")
    {
        grpcount = value;
        grpcount.value_namespace = name_space;
        grpcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPerGrp")
    {
        srcpergrp = value;
        srcpergrp.value_namespace = name_space;
        srcpergrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifPerEntry")
    {
        oifperentry = value;
        oifperentry.value_namespace = name_space;
        oifperentry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstMaxMBList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpCount")
    {
        grpcount.yfilter = yfilter;
    }
    if(value_path == "srcPerGrp")
    {
        srcpergrp.yfilter = yfilter;
    }
    if(value_path == "oifPerEntry")
    {
        oifperentry.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstMaxMBList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grpCount" || name == "srcPerGrp" || name == "oifPerEntry" || name == "max")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfItems()
    :
    vrf_list(this, {"name"})
{

    yang_name = "vrf-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::~VrfItems()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::has_operation() const
{
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vrf-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList>();
        ent_->parent = this;
        vrf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::get_children() const
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

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vrf-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::VrfList()
    :
    name{YType::str, "name"},
    cid{YType::uint32, "cid"},
    tableid{YType::str, "tableId"},
    totalnumroutes{YType::uint32, "totalNumRoutes"},
    totalnumgroups{YType::uint32, "totalNumGroups"},
    stargroute{YType::uint32, "starGRoute"},
    sgroute{YType::uint32, "sgRoute"},
    stargprfx{YType::uint32, "starGPrfx"}
        ,
    group_items(std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems>())
{
    group_items->parent = this;

    yang_name = "Vrf-list"; yang_parent_name = "vrf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::~VrfList()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| cid.is_set
	|| tableid.is_set
	|| totalnumroutes.is_set
	|| totalnumgroups.is_set
	|| stargroute.is_set
	|| sgroute.is_set
	|| stargprfx.is_set
	|| (group_items !=  nullptr && group_items->has_data());
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(cid.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(totalnumroutes.yfilter)
	|| ydk::is_set(totalnumgroups.yfilter)
	|| ydk::is_set(stargroute.yfilter)
	|| ydk::is_set(sgroute.yfilter)
	|| ydk::is_set(stargprfx.yfilter)
	|| (group_items !=  nullptr && group_items->has_operation());
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vrf-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cid.is_set || is_set(cid.yfilter)) leaf_name_data.push_back(cid.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (totalnumroutes.is_set || is_set(totalnumroutes.yfilter)) leaf_name_data.push_back(totalnumroutes.get_name_leafdata());
    if (totalnumgroups.is_set || is_set(totalnumgroups.yfilter)) leaf_name_data.push_back(totalnumgroups.get_name_leafdata());
    if (stargroute.is_set || is_set(stargroute.yfilter)) leaf_name_data.push_back(stargroute.get_name_leafdata());
    if (sgroute.is_set || is_set(sgroute.yfilter)) leaf_name_data.push_back(sgroute.get_name_leafdata());
    if (stargprfx.is_set || is_set(stargprfx.yfilter)) leaf_name_data.push_back(stargprfx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-items")
    {
        if(group_items == nullptr)
        {
            group_items = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems>();
        }
        return group_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_items != nullptr)
    {
        _children["group-items"] = group_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "totalNumRoutes")
    {
        totalnumroutes = value;
        totalnumroutes.value_namespace = name_space;
        totalnumroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalNumGroups")
    {
        totalnumgroups = value;
        totalnumgroups.value_namespace = name_space;
        totalnumgroups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "starGRoute")
    {
        stargroute = value;
        stargroute.value_namespace = name_space;
        stargroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgRoute")
    {
        sgroute = value;
        sgroute.value_namespace = name_space;
        sgroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "starGPrfx")
    {
        stargprfx = value;
        stargprfx.value_namespace = name_space;
        stargprfx.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "totalNumRoutes")
    {
        totalnumroutes.yfilter = yfilter;
    }
    if(value_path == "totalNumGroups")
    {
        totalnumgroups.yfilter = yfilter;
    }
    if(value_path == "starGRoute")
    {
        stargroute.yfilter = yfilter;
    }
    if(value_path == "sgRoute")
    {
        sgroute.yfilter = yfilter;
    }
    if(value_path == "starGPrfx")
    {
        stargprfx.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-items" || name == "name" || name == "cid" || name == "tableId" || name == "totalNumRoutes" || name == "totalNumGroups" || name == "starGRoute" || name == "sgRoute" || name == "starGPrfx")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupItems()
    :
    group_list(this, {"grpaddr"})
{

    yang_name = "group-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::~GroupItems()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::has_operation() const
{
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Group-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList>();
        ent_->parent = this;
        group_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::get_children() const
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

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Group-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::GroupList()
    :
    grpaddr{YType::str, "grpAddr"},
    grpmasklen{YType::uint32, "grpMasklen"},
    bidir{YType::boolean, "bidir"}
        ,
    source_items(std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems>())
{
    source_items->parent = this;

    yang_name = "Group-list"; yang_parent_name = "group-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::~GroupList()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::has_data() const
{
    if (is_presence_container) return true;
    return grpaddr.is_set
	|| grpmasklen.is_set
	|| bidir.is_set
	|| (source_items !=  nullptr && source_items->has_data());
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpaddr.yfilter)
	|| ydk::is_set(grpmasklen.yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| (source_items !=  nullptr && source_items->has_operation());
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Group-list";
    ADD_KEY_TOKEN(grpaddr, "grpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpaddr.is_set || is_set(grpaddr.yfilter)) leaf_name_data.push_back(grpaddr.get_name_leafdata());
    if (grpmasklen.is_set || is_set(grpmasklen.yfilter)) leaf_name_data.push_back(grpmasklen.get_name_leafdata());
    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-items")
    {
        if(source_items == nullptr)
        {
            source_items = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems>();
        }
        return source_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_items != nullptr)
    {
        _children["source-items"] = source_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-items" || name == "grpAddr" || name == "grpMasklen" || name == "bidir")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceItems()
    :
    source_list(this, {"srcaddr"})
{

    yang_name = "source-items"; yang_parent_name = "Group-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::~SourceItems()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_operation() const
{
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Source-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList>();
        ent_->parent = this;
        source_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_children() const
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

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Source-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::SourceList()
    :
    srcaddr{YType::str, "srcAddr"},
    pending{YType::boolean, "pending"},
    uptime{YType::str, "uptime"},
    oifcount{YType::uint32, "oifcount"},
    statspkts{YType::uint32, "statsPkts"},
    statsbytes{YType::uint32, "statsBytes"},
    statsratebuf{YType::str, "statsRateBuf"},
    lispsrcrloc{YType::str, "lispSrcRloc"},
    routeiif{YType::str, "routeIif"},
    rpfnbr{YType::str, "rpfNbr"},
    internal{YType::boolean, "internal"},
    rpfnbruptime{YType::str, "rpfNbrUptime"},
    fabricoif{YType::boolean, "fabricOif"},
    fabricloser{YType::boolean, "fabricLoser"},
    numvpcsvioifs{YType::uint32, "numVpcSviOifs"},
    routemdtiod{YType::boolean, "routeMdtIod"},
    mdtencapindex{YType::uint32, "mdtEncapIndex"}
        ,
    mpib_items(std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems>())
    , oif_items(std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>())
{
    mpib_items->parent = this;
    oif_items->parent = this;

    yang_name = "Source-list"; yang_parent_name = "source-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::~SourceList()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_data() const
{
    if (is_presence_container) return true;
    return srcaddr.is_set
	|| pending.is_set
	|| uptime.is_set
	|| oifcount.is_set
	|| statspkts.is_set
	|| statsbytes.is_set
	|| statsratebuf.is_set
	|| lispsrcrloc.is_set
	|| routeiif.is_set
	|| rpfnbr.is_set
	|| internal.is_set
	|| rpfnbruptime.is_set
	|| fabricoif.is_set
	|| fabricloser.is_set
	|| numvpcsvioifs.is_set
	|| routemdtiod.is_set
	|| mdtencapindex.is_set
	|| (mpib_items !=  nullptr && mpib_items->has_data())
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(pending.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(oifcount.yfilter)
	|| ydk::is_set(statspkts.yfilter)
	|| ydk::is_set(statsbytes.yfilter)
	|| ydk::is_set(statsratebuf.yfilter)
	|| ydk::is_set(lispsrcrloc.yfilter)
	|| ydk::is_set(routeiif.yfilter)
	|| ydk::is_set(rpfnbr.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(rpfnbruptime.yfilter)
	|| ydk::is_set(fabricoif.yfilter)
	|| ydk::is_set(fabricloser.yfilter)
	|| ydk::is_set(numvpcsvioifs.yfilter)
	|| ydk::is_set(routemdtiod.yfilter)
	|| ydk::is_set(mdtencapindex.yfilter)
	|| (mpib_items !=  nullptr && mpib_items->has_operation())
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Source-list";
    ADD_KEY_TOKEN(srcaddr, "srcAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (pending.is_set || is_set(pending.yfilter)) leaf_name_data.push_back(pending.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (oifcount.is_set || is_set(oifcount.yfilter)) leaf_name_data.push_back(oifcount.get_name_leafdata());
    if (statspkts.is_set || is_set(statspkts.yfilter)) leaf_name_data.push_back(statspkts.get_name_leafdata());
    if (statsbytes.is_set || is_set(statsbytes.yfilter)) leaf_name_data.push_back(statsbytes.get_name_leafdata());
    if (statsratebuf.is_set || is_set(statsratebuf.yfilter)) leaf_name_data.push_back(statsratebuf.get_name_leafdata());
    if (lispsrcrloc.is_set || is_set(lispsrcrloc.yfilter)) leaf_name_data.push_back(lispsrcrloc.get_name_leafdata());
    if (routeiif.is_set || is_set(routeiif.yfilter)) leaf_name_data.push_back(routeiif.get_name_leafdata());
    if (rpfnbr.is_set || is_set(rpfnbr.yfilter)) leaf_name_data.push_back(rpfnbr.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (rpfnbruptime.is_set || is_set(rpfnbruptime.yfilter)) leaf_name_data.push_back(rpfnbruptime.get_name_leafdata());
    if (fabricoif.is_set || is_set(fabricoif.yfilter)) leaf_name_data.push_back(fabricoif.get_name_leafdata());
    if (fabricloser.is_set || is_set(fabricloser.yfilter)) leaf_name_data.push_back(fabricloser.get_name_leafdata());
    if (numvpcsvioifs.is_set || is_set(numvpcsvioifs.yfilter)) leaf_name_data.push_back(numvpcsvioifs.get_name_leafdata());
    if (routemdtiod.is_set || is_set(routemdtiod.yfilter)) leaf_name_data.push_back(routemdtiod.get_name_leafdata());
    if (mdtencapindex.is_set || is_set(mdtencapindex.yfilter)) leaf_name_data.push_back(mdtencapindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpib-items")
    {
        if(mpib_items == nullptr)
        {
            mpib_items = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems>();
        }
        return mpib_items;
    }

    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpib_items != nullptr)
    {
        _children["mpib-items"] = mpib_items;
    }

    if(oif_items != nullptr)
    {
        _children["oif-items"] = oif_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending")
    {
        pending = value;
        pending.value_namespace = name_space;
        pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifcount")
    {
        oifcount = value;
        oifcount.value_namespace = name_space;
        oifcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsPkts")
    {
        statspkts = value;
        statspkts.value_namespace = name_space;
        statspkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsBytes")
    {
        statsbytes = value;
        statsbytes.value_namespace = name_space;
        statsbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsRateBuf")
    {
        statsratebuf = value;
        statsratebuf.value_namespace = name_space;
        statsratebuf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lispSrcRloc")
    {
        lispsrcrloc = value;
        lispsrcrloc.value_namespace = name_space;
        lispsrcrloc.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfNbrUptime")
    {
        rpfnbruptime = value;
        rpfnbruptime.value_namespace = name_space;
        rpfnbruptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricOif")
    {
        fabricoif = value;
        fabricoif.value_namespace = name_space;
        fabricoif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricLoser")
    {
        fabricloser = value;
        fabricloser.value_namespace = name_space;
        fabricloser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numVpcSviOifs")
    {
        numvpcsvioifs = value;
        numvpcsvioifs.value_namespace = name_space;
        numvpcsvioifs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeMdtIod")
    {
        routemdtiod = value;
        routemdtiod.value_namespace = name_space;
        routemdtiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdtEncapIndex")
    {
        mdtencapindex = value;
        mdtencapindex.value_namespace = name_space;
        mdtencapindex.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "pending")
    {
        pending.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "oifcount")
    {
        oifcount.yfilter = yfilter;
    }
    if(value_path == "statsPkts")
    {
        statspkts.yfilter = yfilter;
    }
    if(value_path == "statsBytes")
    {
        statsbytes.yfilter = yfilter;
    }
    if(value_path == "statsRateBuf")
    {
        statsratebuf.yfilter = yfilter;
    }
    if(value_path == "lispSrcRloc")
    {
        lispsrcrloc.yfilter = yfilter;
    }
    if(value_path == "routeIif")
    {
        routeiif.yfilter = yfilter;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "rpfNbrUptime")
    {
        rpfnbruptime.yfilter = yfilter;
    }
    if(value_path == "fabricOif")
    {
        fabricoif.yfilter = yfilter;
    }
    if(value_path == "fabricLoser")
    {
        fabricloser.yfilter = yfilter;
    }
    if(value_path == "numVpcSviOifs")
    {
        numvpcsvioifs.yfilter = yfilter;
    }
    if(value_path == "routeMdtIod")
    {
        routemdtiod.yfilter = yfilter;
    }
    if(value_path == "mdtEncapIndex")
    {
        mdtencapindex.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpib-items" || name == "oif-items" || name == "srcAddr" || name == "pending" || name == "uptime" || name == "oifcount" || name == "statsPkts" || name == "statsBytes" || name == "statsRateBuf" || name == "lispSrcRloc" || name == "routeIif" || name == "rpfNbr" || name == "internal" || name == "rpfNbrUptime" || name == "fabricOif" || name == "fabricLoser" || name == "numVpcSviOifs" || name == "routeMdtIod" || name == "mdtEncapIndex")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibItems()
    :
    mpib_list(this, {"mpibname"})
{

    yang_name = "mpib-items"; yang_parent_name = "Source-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::~MpibItems()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mpib_list.len(); index++)
    {
        if(mpib_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::has_operation() const
{
    for (std::size_t index=0; index<mpib_list.len(); index++)
    {
        if(mpib_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mpib-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList>();
        ent_->parent = this;
        mpib_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mpib_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mpib-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::MpibList()
    :
    mpibname{YType::str, "mpibName"},
    oifcount{YType::uint32, "oifCount"},
    staleroute{YType::boolean, "staleRoute"}
{

    yang_name = "Mpib-list"; yang_parent_name = "mpib-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::~MpibList()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::has_data() const
{
    if (is_presence_container) return true;
    return mpibname.is_set
	|| oifcount.is_set
	|| staleroute.is_set;
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpibname.yfilter)
	|| ydk::is_set(oifcount.yfilter)
	|| ydk::is_set(staleroute.yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mpib-list";
    ADD_KEY_TOKEN(mpibname, "mpibName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpibname.is_set || is_set(mpibname.yfilter)) leaf_name_data.push_back(mpibname.get_name_leafdata());
    if (oifcount.is_set || is_set(oifcount.yfilter)) leaf_name_data.push_back(oifcount.get_name_leafdata());
    if (staleroute.is_set || is_set(staleroute.yfilter)) leaf_name_data.push_back(staleroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpibName")
    {
        mpibname = value;
        mpibname.value_namespace = name_space;
        mpibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifCount")
    {
        oifcount = value;
        oifcount.value_namespace = name_space;
        oifcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleRoute")
    {
        staleroute = value;
        staleroute.value_namespace = name_space;
        staleroute.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpibName")
    {
        mpibname.yfilter = yfilter;
    }
    if(value_path == "oifCount")
    {
        oifcount.yfilter = yfilter;
    }
    if(value_path == "staleRoute")
    {
        staleroute.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpibName" || name == "oifCount" || name == "staleRoute")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifItems()
    :
    oif_list(this, {"oifname"})
{

    yang_name = "oif-items"; yang_parent_name = "Source-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::~OifItems()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Oif-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList>();
        ent_->parent = this;
        oif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_children() const
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

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Oif-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifList()
    :
    oifname{YType::str, "oifName"},
    oifuptime{YType::str, "oifUptime"},
    oifrpf{YType::boolean, "oifRPF"},
    oiflispencapentries{YType::uint32, "oifLispEncapEntries"}
        ,
    lispencap_items(std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems>())
    , oifmpib_items(std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems>())
{
    lispencap_items->parent = this;
    oifmpib_items->parent = this;

    yang_name = "Oif-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::~OifList()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_data() const
{
    if (is_presence_container) return true;
    return oifname.is_set
	|| oifuptime.is_set
	|| oifrpf.is_set
	|| oiflispencapentries.is_set
	|| (lispencap_items !=  nullptr && lispencap_items->has_data())
	|| (oifmpib_items !=  nullptr && oifmpib_items->has_data());
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oifname.yfilter)
	|| ydk::is_set(oifuptime.yfilter)
	|| ydk::is_set(oifrpf.yfilter)
	|| ydk::is_set(oiflispencapentries.yfilter)
	|| (lispencap_items !=  nullptr && lispencap_items->has_operation())
	|| (oifmpib_items !=  nullptr && oifmpib_items->has_operation());
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Oif-list";
    ADD_KEY_TOKEN(oifname, "oifName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oifname.is_set || is_set(oifname.yfilter)) leaf_name_data.push_back(oifname.get_name_leafdata());
    if (oifuptime.is_set || is_set(oifuptime.yfilter)) leaf_name_data.push_back(oifuptime.get_name_leafdata());
    if (oifrpf.is_set || is_set(oifrpf.yfilter)) leaf_name_data.push_back(oifrpf.get_name_leafdata());
    if (oiflispencapentries.is_set || is_set(oiflispencapentries.yfilter)) leaf_name_data.push_back(oiflispencapentries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lispencap-items")
    {
        if(lispencap_items == nullptr)
        {
            lispencap_items = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems>();
        }
        return lispencap_items;
    }

    if(child_yang_name == "oifmpib-items")
    {
        if(oifmpib_items == nullptr)
        {
            oifmpib_items = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems>();
        }
        return oifmpib_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lispencap_items != nullptr)
    {
        _children["lispencap-items"] = lispencap_items;
    }

    if(oifmpib_items != nullptr)
    {
        _children["oifmpib-items"] = oifmpib_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lispencap-items" || name == "oifmpib-items" || name == "oifName" || name == "oifUptime" || name == "oifRPF" || name == "oifLispEncapEntries")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispencapItems()
    :
    lispencap_list(this, {"index_"})
{

    yang_name = "lispencap-items"; yang_parent_name = "Oif-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::~LispencapItems()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lispencap_list.len(); index++)
    {
        if(lispencap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::has_operation() const
{
    for (std::size_t index=0; index<lispencap_list.len(); index++)
    {
        if(lispencap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lispencap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LispEncap-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList>();
        ent_->parent = this;
        lispencap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lispencap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LispEncap-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::LispEncapList()
    :
    index_{YType::uint32, "index"},
    srcrloc{YType::str, "srcRloc"},
    dstrloc{YType::str, "dstRloc"}
{

    yang_name = "LispEncap-list"; yang_parent_name = "lispencap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::~LispEncapList()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| srcrloc.is_set
	|| dstrloc.is_set;
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(srcrloc.yfilter)
	|| ydk::is_set(dstrloc.yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LispEncap-list";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (srcrloc.is_set || is_set(srcrloc.yfilter)) leaf_name_data.push_back(srcrloc.get_name_leafdata());
    if (dstrloc.is_set || is_set(dstrloc.yfilter)) leaf_name_data.push_back(dstrloc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcRloc")
    {
        srcrloc = value;
        srcrloc.value_namespace = name_space;
        srcrloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstRloc")
    {
        dstrloc = value;
        dstrloc.value_namespace = name_space;
        dstrloc.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "srcRloc")
    {
        srcrloc.yfilter = yfilter;
    }
    if(value_path == "dstRloc")
    {
        dstrloc.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "srcRloc" || name == "dstRloc")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifmpibItems()
    :
    oifmpib_list(this, {"oifmpibname"})
{

    yang_name = "oifmpib-items"; yang_parent_name = "Oif-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::~OifmpibItems()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oifmpib_list.len(); index++)
    {
        if(oifmpib_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::has_operation() const
{
    for (std::size_t index=0; index<oifmpib_list.len(); index++)
    {
        if(oifmpib_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oifmpib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifMpib-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList>();
        ent_->parent = this;
        oifmpib_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oifmpib_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifMpib-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::OifMpibList()
    :
    oifmpibname{YType::str, "oifMpibName"},
    staleoif{YType::boolean, "staleOif"},
    vpcsvi{YType::boolean, "vpcSvi"}
{

    yang_name = "OifMpib-list"; yang_parent_name = "oifmpib-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::~OifMpibList()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::has_data() const
{
    if (is_presence_container) return true;
    return oifmpibname.is_set
	|| staleoif.is_set
	|| vpcsvi.is_set;
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oifmpibname.yfilter)
	|| ydk::is_set(staleoif.yfilter)
	|| ydk::is_set(vpcsvi.yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifMpib-list";
    ADD_KEY_TOKEN(oifmpibname, "oifMpibName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oifmpibname.is_set || is_set(oifmpibname.yfilter)) leaf_name_data.push_back(oifmpibname.get_name_leafdata());
    if (staleoif.is_set || is_set(staleoif.yfilter)) leaf_name_data.push_back(staleoif.get_name_leafdata());
    if (vpcsvi.is_set || is_set(vpcsvi.yfilter)) leaf_name_data.push_back(vpcsvi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oifMpibName")
    {
        oifmpibname = value;
        oifmpibname.value_namespace = name_space;
        oifmpibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleOif")
    {
        staleoif = value;
        staleoif.value_namespace = name_space;
        staleoif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcSvi")
    {
        vpcsvi = value;
        vpcsvi.value_namespace = name_space;
        vpcsvi.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oifMpibName")
    {
        oifmpibname.yfilter = yfilter;
    }
    if(value_path == "staleOif")
    {
        staleoif.yfilter = yfilter;
    }
    if(value_path == "vpcSvi")
    {
        vpcsvi.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oifMpibName" || name == "staleOif" || name == "vpcSvi")
        return true;
    return false;
}

System::M6ribItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::M6ribItems::InstItems::DomItems::~DomItems()
{
}

bool System::M6ribItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/m6rib-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::M6ribItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DomItems::get_children() const
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

void System::M6ribItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    mtu{YType::uint32, "mtu"},
    autoenable{YType::boolean, "autoEnable"},
    lognbhchng{YType::boolean, "logNbhChng"},
    flushroutes{YType::boolean, "flushRoutes"},
    bfd{YType::boolean, "bfd"},
    jpdelay{YType::uint32, "jpDelay"},
    regratelmt{YType::uint32, "regRateLmt"}
        ,
    config_items(std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::ConfigItems>())
    , rpfmeter_items(std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems>())
    , lasthopmeter_items(std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems>())
    , eventhist_items(std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::EventhistItems>())
    , loglevel_items(std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems>())
    , notify_items(std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::NotifyItems>())
{
    config_items->parent = this;
    rpfmeter_items->parent = this;
    lasthopmeter_items->parent = this;
    eventhist_items->parent = this;
    loglevel_items->parent = this;
    notify_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::M6ribItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::M6ribItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| mtu.is_set
	|| autoenable.is_set
	|| lognbhchng.is_set
	|| flushroutes.is_set
	|| bfd.is_set
	|| jpdelay.is_set
	|| regratelmt.is_set
	|| (config_items !=  nullptr && config_items->has_data())
	|| (rpfmeter_items !=  nullptr && rpfmeter_items->has_data())
	|| (lasthopmeter_items !=  nullptr && lasthopmeter_items->has_data())
	|| (eventhist_items !=  nullptr && eventhist_items->has_data())
	|| (loglevel_items !=  nullptr && loglevel_items->has_data())
	|| (notify_items !=  nullptr && notify_items->has_data());
}

bool System::M6ribItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(autoenable.yfilter)
	|| ydk::is_set(lognbhchng.yfilter)
	|| ydk::is_set(flushroutes.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(jpdelay.yfilter)
	|| ydk::is_set(regratelmt.yfilter)
	|| (config_items !=  nullptr && config_items->has_operation())
	|| (rpfmeter_items !=  nullptr && rpfmeter_items->has_operation())
	|| (lasthopmeter_items !=  nullptr && lasthopmeter_items->has_operation())
	|| (eventhist_items !=  nullptr && eventhist_items->has_operation())
	|| (loglevel_items !=  nullptr && loglevel_items->has_operation())
	|| (notify_items !=  nullptr && notify_items->has_operation());
}

std::string System::M6ribItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/m6rib-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::M6ribItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (autoenable.is_set || is_set(autoenable.yfilter)) leaf_name_data.push_back(autoenable.get_name_leafdata());
    if (lognbhchng.is_set || is_set(lognbhchng.yfilter)) leaf_name_data.push_back(lognbhchng.get_name_leafdata());
    if (flushroutes.is_set || is_set(flushroutes.yfilter)) leaf_name_data.push_back(flushroutes.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (jpdelay.is_set || is_set(jpdelay.yfilter)) leaf_name_data.push_back(jpdelay.get_name_leafdata());
    if (regratelmt.is_set || is_set(regratelmt.yfilter)) leaf_name_data.push_back(regratelmt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-items")
    {
        if(config_items == nullptr)
        {
            config_items = std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::ConfigItems>();
        }
        return config_items;
    }

    if(child_yang_name == "rpfmeter-items")
    {
        if(rpfmeter_items == nullptr)
        {
            rpfmeter_items = std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems>();
        }
        return rpfmeter_items;
    }

    if(child_yang_name == "lasthopmeter-items")
    {
        if(lasthopmeter_items == nullptr)
        {
            lasthopmeter_items = std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems>();
        }
        return lasthopmeter_items;
    }

    if(child_yang_name == "eventhist-items")
    {
        if(eventhist_items == nullptr)
        {
            eventhist_items = std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::EventhistItems>();
        }
        return eventhist_items;
    }

    if(child_yang_name == "loglevel-items")
    {
        if(loglevel_items == nullptr)
        {
            loglevel_items = std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems>();
        }
        return loglevel_items;
    }

    if(child_yang_name == "notify-items")
    {
        if(notify_items == nullptr)
        {
            notify_items = std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::NotifyItems>();
        }
        return notify_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config_items != nullptr)
    {
        _children["config-items"] = config_items;
    }

    if(rpfmeter_items != nullptr)
    {
        _children["rpfmeter-items"] = rpfmeter_items;
    }

    if(lasthopmeter_items != nullptr)
    {
        _children["lasthopmeter-items"] = lasthopmeter_items;
    }

    if(eventhist_items != nullptr)
    {
        _children["eventhist-items"] = eventhist_items;
    }

    if(loglevel_items != nullptr)
    {
        _children["loglevel-items"] = loglevel_items;
    }

    if(notify_items != nullptr)
    {
        _children["notify-items"] = notify_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoEnable")
    {
        autoenable = value;
        autoenable.value_namespace = name_space;
        autoenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logNbhChng")
    {
        lognbhchng = value;
        lognbhchng.value_namespace = name_space;
        lognbhchng.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flushRoutes")
    {
        flushroutes = value;
        flushroutes.value_namespace = name_space;
        flushroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpDelay")
    {
        jpdelay = value;
        jpdelay.value_namespace = name_space;
        jpdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRateLmt")
    {
        regratelmt = value;
        regratelmt.value_namespace = name_space;
        regratelmt.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "autoEnable")
    {
        autoenable.yfilter = yfilter;
    }
    if(value_path == "logNbhChng")
    {
        lognbhchng.yfilter = yfilter;
    }
    if(value_path == "flushRoutes")
    {
        flushroutes.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "jpDelay")
    {
        jpdelay.yfilter = yfilter;
    }
    if(value_path == "regRateLmt")
    {
        regratelmt.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-items" || name == "rpfmeter-items" || name == "lasthopmeter-items" || name == "eventhist-items" || name == "loglevel-items" || name == "notify-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "mtu" || name == "autoEnable" || name == "logNbhChng" || name == "flushRoutes" || name == "bfd" || name == "jpDelay" || name == "regRateLmt")
        return true;
    return false;
}

System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::ConfigItems()
    :
    holdenable{YType::enumeration, "holdEnable"},
    holddown{YType::uint16, "holddown"},
    compressbit{YType::boolean, "compressBit"}
{

    yang_name = "config-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::~ConfigItems()
{
}

bool System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::has_data() const
{
    if (is_presence_container) return true;
    return holdenable.is_set
	|| holddown.is_set
	|| compressbit.is_set;
}

bool System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdenable.yfilter)
	|| ydk::is_set(holddown.yfilter)
	|| ydk::is_set(compressbit.yfilter);
}

std::string System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdenable.is_set || is_set(holdenable.yfilter)) leaf_name_data.push_back(holdenable.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (compressbit.is_set || is_set(compressbit.yfilter)) leaf_name_data.push_back(compressbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdEnable")
    {
        holdenable = value;
        holdenable.value_namespace = name_space;
        holdenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compressBit")
    {
        compressbit = value;
        compressbit.value_namespace = name_space;
        compressbit.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdEnable")
    {
        holdenable.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
    if(value_path == "compressBit")
    {
        compressbit.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdEnable" || name == "holddown" || name == "compressBit")
        return true;
    return false;
}

System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::RpfmeterItems()
    :
    hwdropall{YType::boolean, "hwDropAll"},
    kbps{YType::uint32, "kbps"},
    burstsize{YType::uint32, "burstSize"}
{

    yang_name = "rpfmeter-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::~RpfmeterItems()
{
}

bool System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::has_data() const
{
    if (is_presence_container) return true;
    return hwdropall.is_set
	|| kbps.is_set
	|| burstsize.is_set;
}

bool System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hwdropall.yfilter)
	|| ydk::is_set(kbps.yfilter)
	|| ydk::is_set(burstsize.yfilter);
}

std::string System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpfmeter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hwdropall.is_set || is_set(hwdropall.yfilter)) leaf_name_data.push_back(hwdropall.get_name_leafdata());
    if (kbps.is_set || is_set(kbps.yfilter)) leaf_name_data.push_back(kbps.get_name_leafdata());
    if (burstsize.is_set || is_set(burstsize.yfilter)) leaf_name_data.push_back(burstsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hwDropAll")
    {
        hwdropall = value;
        hwdropall.value_namespace = name_space;
        hwdropall.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kbps")
    {
        kbps = value;
        kbps.value_namespace = name_space;
        kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstSize")
    {
        burstsize = value;
        burstsize.value_namespace = name_space;
        burstsize.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hwDropAll")
    {
        hwdropall.yfilter = yfilter;
    }
    if(value_path == "kbps")
    {
        kbps.yfilter = yfilter;
    }
    if(value_path == "burstSize")
    {
        burstsize.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hwDropAll" || name == "kbps" || name == "burstSize")
        return true;
    return false;
}

System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::LasthopmeterItems()
    :
    kbps{YType::uint32, "kbps"},
    burstsize{YType::uint32, "burstSize"}
{

    yang_name = "lasthopmeter-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::~LasthopmeterItems()
{
}

bool System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::has_data() const
{
    if (is_presence_container) return true;
    return kbps.is_set
	|| burstsize.is_set;
}

bool System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kbps.yfilter)
	|| ydk::is_set(burstsize.yfilter);
}

std::string System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lasthopmeter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kbps.is_set || is_set(kbps.yfilter)) leaf_name_data.push_back(kbps.get_name_leafdata());
    if (burstsize.is_set || is_set(burstsize.yfilter)) leaf_name_data.push_back(burstsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kbps")
    {
        kbps = value;
        kbps.value_namespace = name_space;
        kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstSize")
    {
        burstsize = value;
        burstsize.value_namespace = name_space;
        burstsize.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kbps")
    {
        kbps.yfilter = yfilter;
    }
    if(value_path == "burstSize")
    {
        burstsize.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kbps" || name == "burstSize")
        return true;
    return false;
}

System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventhistItems()
    :
    eventhistory_list(this, {"type"})
{

    yang_name = "eventhist-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::~EventhistItems()
{
}

bool System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::has_operation() const
{
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventhist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventHistory-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList>();
        ent_->parent = this;
        eventhistory_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::get_children() const
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

void System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EventHistory-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::EventHistoryList()
    :
    type{YType::enumeration, "type"},
    size{YType::uint32, "size"}
{

    yang_name = "EventHistory-list"; yang_parent_name = "eventhist-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::~EventHistoryList()
{
}

bool System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| size.is_set;
}

bool System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EventHistory-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "size")
        return true;
    return false;
}

System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::LoglevelItems()
    :
    level{YType::uint16, "level"},
    type{YType::str, "type"}
{

    yang_name = "loglevel-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::~LoglevelItems()
{
}

bool System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| type.is_set;
}

bool System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loglevel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "type")
        return true;
    return false;
}

System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::NotifyItems()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "notify-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::~NotifyItems()
{
}

bool System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notify-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::RoutedbItems()
    :
    vrf_items(std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems>())
{
    vrf_items->parent = this;

    yang_name = "routedb-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::M6ribItems::InstItems::RoutedbItems::~RoutedbItems()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::has_data() const
{
    if (is_presence_container) return true;
    return (vrf_items !=  nullptr && vrf_items->has_data());
}

bool System::M6ribItems::InstItems::RoutedbItems::has_operation() const
{
    return is_set(yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation());
}

std::string System::M6ribItems::InstItems::RoutedbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/m6rib-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::M6ribItems::InstItems::RoutedbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routedb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems>();
        }
        return vrf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::RoutedbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::RoutedbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfItems()
    :
    vrf_list(this, {"name"})
{

    yang_name = "vrf-items"; yang_parent_name = "routedb-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::~VrfItems()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::has_operation() const
{
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/m6rib-items/inst-items/routedb-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vrf-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList>();
        ent_->parent = this;
        vrf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::get_children() const
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

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vrf-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::VrfList()
    :
    name{YType::str, "name"},
    cid{YType::uint32, "cid"},
    tableid{YType::str, "tableId"},
    totalnumroutes{YType::uint32, "totalNumRoutes"},
    totalnumgroups{YType::uint32, "totalNumGroups"},
    stargroute{YType::uint32, "starGRoute"},
    sgroute{YType::uint32, "sgRoute"},
    stargprfx{YType::uint32, "starGPrfx"}
        ,
    group_items(std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems>())
{
    group_items->parent = this;

    yang_name = "Vrf-list"; yang_parent_name = "vrf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::~VrfList()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| cid.is_set
	|| tableid.is_set
	|| totalnumroutes.is_set
	|| totalnumgroups.is_set
	|| stargroute.is_set
	|| sgroute.is_set
	|| stargprfx.is_set
	|| (group_items !=  nullptr && group_items->has_data());
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(cid.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(totalnumroutes.yfilter)
	|| ydk::is_set(totalnumgroups.yfilter)
	|| ydk::is_set(stargroute.yfilter)
	|| ydk::is_set(sgroute.yfilter)
	|| ydk::is_set(stargprfx.yfilter)
	|| (group_items !=  nullptr && group_items->has_operation());
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/m6rib-items/inst-items/routedb-items/vrf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vrf-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cid.is_set || is_set(cid.yfilter)) leaf_name_data.push_back(cid.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (totalnumroutes.is_set || is_set(totalnumroutes.yfilter)) leaf_name_data.push_back(totalnumroutes.get_name_leafdata());
    if (totalnumgroups.is_set || is_set(totalnumgroups.yfilter)) leaf_name_data.push_back(totalnumgroups.get_name_leafdata());
    if (stargroute.is_set || is_set(stargroute.yfilter)) leaf_name_data.push_back(stargroute.get_name_leafdata());
    if (sgroute.is_set || is_set(sgroute.yfilter)) leaf_name_data.push_back(sgroute.get_name_leafdata());
    if (stargprfx.is_set || is_set(stargprfx.yfilter)) leaf_name_data.push_back(stargprfx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-items")
    {
        if(group_items == nullptr)
        {
            group_items = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems>();
        }
        return group_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_items != nullptr)
    {
        _children["group-items"] = group_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "totalNumRoutes")
    {
        totalnumroutes = value;
        totalnumroutes.value_namespace = name_space;
        totalnumroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalNumGroups")
    {
        totalnumgroups = value;
        totalnumgroups.value_namespace = name_space;
        totalnumgroups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "starGRoute")
    {
        stargroute = value;
        stargroute.value_namespace = name_space;
        stargroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgRoute")
    {
        sgroute = value;
        sgroute.value_namespace = name_space;
        sgroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "starGPrfx")
    {
        stargprfx = value;
        stargprfx.value_namespace = name_space;
        stargprfx.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "totalNumRoutes")
    {
        totalnumroutes.yfilter = yfilter;
    }
    if(value_path == "totalNumGroups")
    {
        totalnumgroups.yfilter = yfilter;
    }
    if(value_path == "starGRoute")
    {
        stargroute.yfilter = yfilter;
    }
    if(value_path == "sgRoute")
    {
        sgroute.yfilter = yfilter;
    }
    if(value_path == "starGPrfx")
    {
        stargprfx.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-items" || name == "name" || name == "cid" || name == "tableId" || name == "totalNumRoutes" || name == "totalNumGroups" || name == "starGRoute" || name == "sgRoute" || name == "starGPrfx")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupItems()
    :
    group_list(this, {"grpaddr"})
{

    yang_name = "group-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::~GroupItems()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::has_operation() const
{
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Group-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList>();
        ent_->parent = this;
        group_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::get_children() const
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

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Group-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::GroupList()
    :
    grpaddr{YType::str, "grpAddr"},
    grpmasklen{YType::uint32, "grpMasklen"},
    bidir{YType::boolean, "bidir"}
        ,
    source_items(std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems>())
{
    source_items->parent = this;

    yang_name = "Group-list"; yang_parent_name = "group-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::~GroupList()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::has_data() const
{
    if (is_presence_container) return true;
    return grpaddr.is_set
	|| grpmasklen.is_set
	|| bidir.is_set
	|| (source_items !=  nullptr && source_items->has_data());
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpaddr.yfilter)
	|| ydk::is_set(grpmasklen.yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| (source_items !=  nullptr && source_items->has_operation());
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Group-list";
    ADD_KEY_TOKEN(grpaddr, "grpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpaddr.is_set || is_set(grpaddr.yfilter)) leaf_name_data.push_back(grpaddr.get_name_leafdata());
    if (grpmasklen.is_set || is_set(grpmasklen.yfilter)) leaf_name_data.push_back(grpmasklen.get_name_leafdata());
    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-items")
    {
        if(source_items == nullptr)
        {
            source_items = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems>();
        }
        return source_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_items != nullptr)
    {
        _children["source-items"] = source_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-items" || name == "grpAddr" || name == "grpMasklen" || name == "bidir")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceItems()
    :
    source_list(this, {"srcaddr"})
{

    yang_name = "source-items"; yang_parent_name = "Group-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::~SourceItems()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_operation() const
{
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Source-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList>();
        ent_->parent = this;
        source_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_children() const
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

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Source-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::SourceList()
    :
    srcaddr{YType::str, "srcAddr"},
    pending{YType::boolean, "pending"},
    uptime{YType::str, "uptime"},
    oifcount{YType::uint32, "oifcount"},
    statspkts{YType::uint32, "statsPkts"},
    statsbytes{YType::uint32, "statsBytes"},
    statsratebuf{YType::str, "statsRateBuf"},
    lispsrcrloc{YType::str, "lispSrcRloc"},
    routeiif{YType::str, "routeIif"},
    rpfnbr{YType::str, "rpfNbr"},
    internal{YType::boolean, "internal"},
    rpfnbruptime{YType::str, "rpfNbrUptime"},
    fabricoif{YType::boolean, "fabricOif"},
    fabricloser{YType::boolean, "fabricLoser"},
    numvpcsvioifs{YType::uint32, "numVpcSviOifs"},
    routemdtiod{YType::boolean, "routeMdtIod"},
    mdtencapindex{YType::uint32, "mdtEncapIndex"}
        ,
    mpib_items(std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems>())
    , oif_items(std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>())
{
    mpib_items->parent = this;
    oif_items->parent = this;

    yang_name = "Source-list"; yang_parent_name = "source-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::~SourceList()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_data() const
{
    if (is_presence_container) return true;
    return srcaddr.is_set
	|| pending.is_set
	|| uptime.is_set
	|| oifcount.is_set
	|| statspkts.is_set
	|| statsbytes.is_set
	|| statsratebuf.is_set
	|| lispsrcrloc.is_set
	|| routeiif.is_set
	|| rpfnbr.is_set
	|| internal.is_set
	|| rpfnbruptime.is_set
	|| fabricoif.is_set
	|| fabricloser.is_set
	|| numvpcsvioifs.is_set
	|| routemdtiod.is_set
	|| mdtencapindex.is_set
	|| (mpib_items !=  nullptr && mpib_items->has_data())
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(pending.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(oifcount.yfilter)
	|| ydk::is_set(statspkts.yfilter)
	|| ydk::is_set(statsbytes.yfilter)
	|| ydk::is_set(statsratebuf.yfilter)
	|| ydk::is_set(lispsrcrloc.yfilter)
	|| ydk::is_set(routeiif.yfilter)
	|| ydk::is_set(rpfnbr.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(rpfnbruptime.yfilter)
	|| ydk::is_set(fabricoif.yfilter)
	|| ydk::is_set(fabricloser.yfilter)
	|| ydk::is_set(numvpcsvioifs.yfilter)
	|| ydk::is_set(routemdtiod.yfilter)
	|| ydk::is_set(mdtencapindex.yfilter)
	|| (mpib_items !=  nullptr && mpib_items->has_operation())
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Source-list";
    ADD_KEY_TOKEN(srcaddr, "srcAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (pending.is_set || is_set(pending.yfilter)) leaf_name_data.push_back(pending.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (oifcount.is_set || is_set(oifcount.yfilter)) leaf_name_data.push_back(oifcount.get_name_leafdata());
    if (statspkts.is_set || is_set(statspkts.yfilter)) leaf_name_data.push_back(statspkts.get_name_leafdata());
    if (statsbytes.is_set || is_set(statsbytes.yfilter)) leaf_name_data.push_back(statsbytes.get_name_leafdata());
    if (statsratebuf.is_set || is_set(statsratebuf.yfilter)) leaf_name_data.push_back(statsratebuf.get_name_leafdata());
    if (lispsrcrloc.is_set || is_set(lispsrcrloc.yfilter)) leaf_name_data.push_back(lispsrcrloc.get_name_leafdata());
    if (routeiif.is_set || is_set(routeiif.yfilter)) leaf_name_data.push_back(routeiif.get_name_leafdata());
    if (rpfnbr.is_set || is_set(rpfnbr.yfilter)) leaf_name_data.push_back(rpfnbr.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (rpfnbruptime.is_set || is_set(rpfnbruptime.yfilter)) leaf_name_data.push_back(rpfnbruptime.get_name_leafdata());
    if (fabricoif.is_set || is_set(fabricoif.yfilter)) leaf_name_data.push_back(fabricoif.get_name_leafdata());
    if (fabricloser.is_set || is_set(fabricloser.yfilter)) leaf_name_data.push_back(fabricloser.get_name_leafdata());
    if (numvpcsvioifs.is_set || is_set(numvpcsvioifs.yfilter)) leaf_name_data.push_back(numvpcsvioifs.get_name_leafdata());
    if (routemdtiod.is_set || is_set(routemdtiod.yfilter)) leaf_name_data.push_back(routemdtiod.get_name_leafdata());
    if (mdtencapindex.is_set || is_set(mdtencapindex.yfilter)) leaf_name_data.push_back(mdtencapindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpib-items")
    {
        if(mpib_items == nullptr)
        {
            mpib_items = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems>();
        }
        return mpib_items;
    }

    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpib_items != nullptr)
    {
        _children["mpib-items"] = mpib_items;
    }

    if(oif_items != nullptr)
    {
        _children["oif-items"] = oif_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending")
    {
        pending = value;
        pending.value_namespace = name_space;
        pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifcount")
    {
        oifcount = value;
        oifcount.value_namespace = name_space;
        oifcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsPkts")
    {
        statspkts = value;
        statspkts.value_namespace = name_space;
        statspkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsBytes")
    {
        statsbytes = value;
        statsbytes.value_namespace = name_space;
        statsbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsRateBuf")
    {
        statsratebuf = value;
        statsratebuf.value_namespace = name_space;
        statsratebuf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lispSrcRloc")
    {
        lispsrcrloc = value;
        lispsrcrloc.value_namespace = name_space;
        lispsrcrloc.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfNbrUptime")
    {
        rpfnbruptime = value;
        rpfnbruptime.value_namespace = name_space;
        rpfnbruptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricOif")
    {
        fabricoif = value;
        fabricoif.value_namespace = name_space;
        fabricoif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricLoser")
    {
        fabricloser = value;
        fabricloser.value_namespace = name_space;
        fabricloser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numVpcSviOifs")
    {
        numvpcsvioifs = value;
        numvpcsvioifs.value_namespace = name_space;
        numvpcsvioifs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeMdtIod")
    {
        routemdtiod = value;
        routemdtiod.value_namespace = name_space;
        routemdtiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdtEncapIndex")
    {
        mdtencapindex = value;
        mdtencapindex.value_namespace = name_space;
        mdtencapindex.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "pending")
    {
        pending.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "oifcount")
    {
        oifcount.yfilter = yfilter;
    }
    if(value_path == "statsPkts")
    {
        statspkts.yfilter = yfilter;
    }
    if(value_path == "statsBytes")
    {
        statsbytes.yfilter = yfilter;
    }
    if(value_path == "statsRateBuf")
    {
        statsratebuf.yfilter = yfilter;
    }
    if(value_path == "lispSrcRloc")
    {
        lispsrcrloc.yfilter = yfilter;
    }
    if(value_path == "routeIif")
    {
        routeiif.yfilter = yfilter;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "rpfNbrUptime")
    {
        rpfnbruptime.yfilter = yfilter;
    }
    if(value_path == "fabricOif")
    {
        fabricoif.yfilter = yfilter;
    }
    if(value_path == "fabricLoser")
    {
        fabricloser.yfilter = yfilter;
    }
    if(value_path == "numVpcSviOifs")
    {
        numvpcsvioifs.yfilter = yfilter;
    }
    if(value_path == "routeMdtIod")
    {
        routemdtiod.yfilter = yfilter;
    }
    if(value_path == "mdtEncapIndex")
    {
        mdtencapindex.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpib-items" || name == "oif-items" || name == "srcAddr" || name == "pending" || name == "uptime" || name == "oifcount" || name == "statsPkts" || name == "statsBytes" || name == "statsRateBuf" || name == "lispSrcRloc" || name == "routeIif" || name == "rpfNbr" || name == "internal" || name == "rpfNbrUptime" || name == "fabricOif" || name == "fabricLoser" || name == "numVpcSviOifs" || name == "routeMdtIod" || name == "mdtEncapIndex")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibItems()
    :
    mpib_list(this, {"mpibname"})
{

    yang_name = "mpib-items"; yang_parent_name = "Source-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::~MpibItems()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mpib_list.len(); index++)
    {
        if(mpib_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::has_operation() const
{
    for (std::size_t index=0; index<mpib_list.len(); index++)
    {
        if(mpib_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mpib-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList>();
        ent_->parent = this;
        mpib_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mpib_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mpib-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::MpibList()
    :
    mpibname{YType::str, "mpibName"},
    oifcount{YType::uint32, "oifCount"},
    staleroute{YType::boolean, "staleRoute"}
{

    yang_name = "Mpib-list"; yang_parent_name = "mpib-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::~MpibList()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::has_data() const
{
    if (is_presence_container) return true;
    return mpibname.is_set
	|| oifcount.is_set
	|| staleroute.is_set;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpibname.yfilter)
	|| ydk::is_set(oifcount.yfilter)
	|| ydk::is_set(staleroute.yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mpib-list";
    ADD_KEY_TOKEN(mpibname, "mpibName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpibname.is_set || is_set(mpibname.yfilter)) leaf_name_data.push_back(mpibname.get_name_leafdata());
    if (oifcount.is_set || is_set(oifcount.yfilter)) leaf_name_data.push_back(oifcount.get_name_leafdata());
    if (staleroute.is_set || is_set(staleroute.yfilter)) leaf_name_data.push_back(staleroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpibName")
    {
        mpibname = value;
        mpibname.value_namespace = name_space;
        mpibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifCount")
    {
        oifcount = value;
        oifcount.value_namespace = name_space;
        oifcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleRoute")
    {
        staleroute = value;
        staleroute.value_namespace = name_space;
        staleroute.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpibName")
    {
        mpibname.yfilter = yfilter;
    }
    if(value_path == "oifCount")
    {
        oifcount.yfilter = yfilter;
    }
    if(value_path == "staleRoute")
    {
        staleroute.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpibName" || name == "oifCount" || name == "staleRoute")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifItems()
    :
    oif_list(this, {"oifname"})
{

    yang_name = "oif-items"; yang_parent_name = "Source-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::~OifItems()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Oif-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList>();
        ent_->parent = this;
        oif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_children() const
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

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Oif-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifList()
    :
    oifname{YType::str, "oifName"},
    oifuptime{YType::str, "oifUptime"},
    oifrpf{YType::boolean, "oifRPF"},
    oiflispencapentries{YType::uint32, "oifLispEncapEntries"}
        ,
    lispencap_items(std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems>())
    , oifmpib_items(std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems>())
{
    lispencap_items->parent = this;
    oifmpib_items->parent = this;

    yang_name = "Oif-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::~OifList()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_data() const
{
    if (is_presence_container) return true;
    return oifname.is_set
	|| oifuptime.is_set
	|| oifrpf.is_set
	|| oiflispencapentries.is_set
	|| (lispencap_items !=  nullptr && lispencap_items->has_data())
	|| (oifmpib_items !=  nullptr && oifmpib_items->has_data());
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oifname.yfilter)
	|| ydk::is_set(oifuptime.yfilter)
	|| ydk::is_set(oifrpf.yfilter)
	|| ydk::is_set(oiflispencapentries.yfilter)
	|| (lispencap_items !=  nullptr && lispencap_items->has_operation())
	|| (oifmpib_items !=  nullptr && oifmpib_items->has_operation());
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Oif-list";
    ADD_KEY_TOKEN(oifname, "oifName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oifname.is_set || is_set(oifname.yfilter)) leaf_name_data.push_back(oifname.get_name_leafdata());
    if (oifuptime.is_set || is_set(oifuptime.yfilter)) leaf_name_data.push_back(oifuptime.get_name_leafdata());
    if (oifrpf.is_set || is_set(oifrpf.yfilter)) leaf_name_data.push_back(oifrpf.get_name_leafdata());
    if (oiflispencapentries.is_set || is_set(oiflispencapentries.yfilter)) leaf_name_data.push_back(oiflispencapentries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lispencap-items")
    {
        if(lispencap_items == nullptr)
        {
            lispencap_items = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems>();
        }
        return lispencap_items;
    }

    if(child_yang_name == "oifmpib-items")
    {
        if(oifmpib_items == nullptr)
        {
            oifmpib_items = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems>();
        }
        return oifmpib_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lispencap_items != nullptr)
    {
        _children["lispencap-items"] = lispencap_items;
    }

    if(oifmpib_items != nullptr)
    {
        _children["oifmpib-items"] = oifmpib_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lispencap-items" || name == "oifmpib-items" || name == "oifName" || name == "oifUptime" || name == "oifRPF" || name == "oifLispEncapEntries")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispencapItems()
    :
    lispencap_list(this, {"index_"})
{

    yang_name = "lispencap-items"; yang_parent_name = "Oif-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::~LispencapItems()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lispencap_list.len(); index++)
    {
        if(lispencap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::has_operation() const
{
    for (std::size_t index=0; index<lispencap_list.len(); index++)
    {
        if(lispencap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lispencap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LispEncap-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList>();
        ent_->parent = this;
        lispencap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lispencap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LispEncap-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::LispEncapList()
    :
    index_{YType::uint32, "index"},
    srcrloc{YType::str, "srcRloc"},
    dstrloc{YType::str, "dstRloc"}
{

    yang_name = "LispEncap-list"; yang_parent_name = "lispencap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::~LispEncapList()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| srcrloc.is_set
	|| dstrloc.is_set;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(srcrloc.yfilter)
	|| ydk::is_set(dstrloc.yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LispEncap-list";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (srcrloc.is_set || is_set(srcrloc.yfilter)) leaf_name_data.push_back(srcrloc.get_name_leafdata());
    if (dstrloc.is_set || is_set(dstrloc.yfilter)) leaf_name_data.push_back(dstrloc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcRloc")
    {
        srcrloc = value;
        srcrloc.value_namespace = name_space;
        srcrloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstRloc")
    {
        dstrloc = value;
        dstrloc.value_namespace = name_space;
        dstrloc.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "srcRloc")
    {
        srcrloc.yfilter = yfilter;
    }
    if(value_path == "dstRloc")
    {
        dstrloc.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "srcRloc" || name == "dstRloc")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifmpibItems()
    :
    oifmpib_list(this, {"oifmpibname"})
{

    yang_name = "oifmpib-items"; yang_parent_name = "Oif-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::~OifmpibItems()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oifmpib_list.len(); index++)
    {
        if(oifmpib_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::has_operation() const
{
    for (std::size_t index=0; index<oifmpib_list.len(); index++)
    {
        if(oifmpib_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oifmpib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifMpib-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList>();
        ent_->parent = this;
        oifmpib_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oifmpib_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifMpib-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::OifMpibList()
    :
    oifmpibname{YType::str, "oifMpibName"},
    staleoif{YType::boolean, "staleOif"},
    vpcsvi{YType::boolean, "vpcSvi"}
{

    yang_name = "OifMpib-list"; yang_parent_name = "oifmpib-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::~OifMpibList()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::has_data() const
{
    if (is_presence_container) return true;
    return oifmpibname.is_set
	|| staleoif.is_set
	|| vpcsvi.is_set;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oifmpibname.yfilter)
	|| ydk::is_set(staleoif.yfilter)
	|| ydk::is_set(vpcsvi.yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifMpib-list";
    ADD_KEY_TOKEN(oifmpibname, "oifMpibName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oifmpibname.is_set || is_set(oifmpibname.yfilter)) leaf_name_data.push_back(oifmpibname.get_name_leafdata());
    if (staleoif.is_set || is_set(staleoif.yfilter)) leaf_name_data.push_back(staleoif.get_name_leafdata());
    if (vpcsvi.is_set || is_set(vpcsvi.yfilter)) leaf_name_data.push_back(vpcsvi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oifMpibName")
    {
        oifmpibname = value;
        oifmpibname.value_namespace = name_space;
        oifmpibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleOif")
    {
        staleoif = value;
        staleoif.value_namespace = name_space;
        staleoif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcSvi")
    {
        vpcsvi = value;
        vpcsvi.value_namespace = name_space;
        vpcsvi.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oifMpibName")
    {
        oifmpibname.yfilter = yfilter;
    }
    if(value_path == "staleOif")
    {
        staleoif.yfilter = yfilter;
    }
    if(value_path == "vpcSvi")
    {
        vpcsvi.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oifMpibName" || name == "staleOif" || name == "vpcSvi")
        return true;
    return false;
}

System::MacsecItems::MacsecItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::MacsecItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "macsec-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacsecItems::~MacsecItems()
{
}

bool System::MacsecItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::MacsecItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::MacsecItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacsecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacsecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacsecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::MacsecItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacsecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::MacsecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MacsecItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MacsecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::MacsecItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
{

    yang_name = "inst-items"; yang_parent_name = "macsec-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacsecItems::InstItems::~InstItems()
{
}

bool System::MacsecItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set;
}

bool System::MacsecItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter);
}

std::string System::MacsecItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macsec-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacsecItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacsecItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacsecItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacsecItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MacsecItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MacsecItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MacsecItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::McastfwdItems::McastfwdItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::McastfwdItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "mcastfwd-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::McastfwdItems::~McastfwdItems()
{
}

bool System::McastfwdItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::McastfwdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::McastfwdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::McastfwdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcastfwd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McastfwdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::McastfwdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::McastfwdItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McastfwdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::McastfwdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::McastfwdItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::McastfwdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::McastfwdItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"},
    jpdelay{YType::uint32, "jpDelay"},
    nrdelay{YType::uint16, "nrDelay"},
    nrnumrt{YType::uint16, "nrNumRt"},
    regstop{YType::boolean, "regStop"}
        ,
    dom_items(std::make_shared<System::McastfwdItems::InstItems::DomItems>())
    , eventhist_items(std::make_shared<System::McastfwdItems::InstItems::EventhistItems>())
{
    dom_items->parent = this;
    eventhist_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "mcastfwd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::McastfwdItems::InstItems::~InstItems()
{
}

bool System::McastfwdItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| jpdelay.is_set
	|| nrdelay.is_set
	|| nrnumrt.is_set
	|| regstop.is_set
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (eventhist_items !=  nullptr && eventhist_items->has_data());
}

bool System::McastfwdItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| ydk::is_set(jpdelay.yfilter)
	|| ydk::is_set(nrdelay.yfilter)
	|| ydk::is_set(nrnumrt.yfilter)
	|| ydk::is_set(regstop.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (eventhist_items !=  nullptr && eventhist_items->has_operation());
}

std::string System::McastfwdItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mcastfwd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::McastfwdItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McastfwdItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());
    if (jpdelay.is_set || is_set(jpdelay.yfilter)) leaf_name_data.push_back(jpdelay.get_name_leafdata());
    if (nrdelay.is_set || is_set(nrdelay.yfilter)) leaf_name_data.push_back(nrdelay.get_name_leafdata());
    if (nrnumrt.is_set || is_set(nrnumrt.yfilter)) leaf_name_data.push_back(nrnumrt.get_name_leafdata());
    if (regstop.is_set || is_set(regstop.yfilter)) leaf_name_data.push_back(regstop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::McastfwdItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::McastfwdItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "eventhist-items")
    {
        if(eventhist_items == nullptr)
        {
            eventhist_items = std::make_shared<System::McastfwdItems::InstItems::EventhistItems>();
        }
        return eventhist_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McastfwdItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(eventhist_items != nullptr)
    {
        _children["eventhist-items"] = eventhist_items;
    }

    return _children;
}

void System::McastfwdItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpDelay")
    {
        jpdelay = value;
        jpdelay.value_namespace = name_space;
        jpdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nrDelay")
    {
        nrdelay = value;
        nrdelay.value_namespace = name_space;
        nrdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nrNumRt")
    {
        nrnumrt = value;
        nrnumrt.value_namespace = name_space;
        nrnumrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStop")
    {
        regstop = value;
        regstop.value_namespace = name_space;
        regstop.value_namespace_prefix = name_space_prefix;
    }
}

void System::McastfwdItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
    if(value_path == "jpDelay")
    {
        jpdelay.yfilter = yfilter;
    }
    if(value_path == "nrDelay")
    {
        nrdelay.yfilter = yfilter;
    }
    if(value_path == "nrNumRt")
    {
        nrnumrt.yfilter = yfilter;
    }
    if(value_path == "regStop")
    {
        regstop.yfilter = yfilter;
    }
}

bool System::McastfwdItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "eventhist-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr" || name == "jpDelay" || name == "nrDelay" || name == "nrNumRt" || name == "regStop")
        return true;
    return false;
}

System::McastfwdItems::InstItems::DomItems::DomItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    mtu{YType::uint32, "mtu"},
    autoenable{YType::boolean, "autoEnable"},
    lognbhchng{YType::boolean, "logNbhChng"},
    flushroutes{YType::boolean, "flushRoutes"},
    bfd{YType::boolean, "bfd"},
    jpdelay{YType::uint32, "jpDelay"},
    regratelmt{YType::uint32, "regRateLmt"}
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::McastfwdItems::InstItems::DomItems::~DomItems()
{
}

bool System::McastfwdItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| mtu.is_set
	|| autoenable.is_set
	|| lognbhchng.is_set
	|| flushroutes.is_set
	|| bfd.is_set
	|| jpdelay.is_set
	|| regratelmt.is_set;
}

bool System::McastfwdItems::InstItems::DomItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(autoenable.yfilter)
	|| ydk::is_set(lognbhchng.yfilter)
	|| ydk::is_set(flushroutes.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(jpdelay.yfilter)
	|| ydk::is_set(regratelmt.yfilter);
}

std::string System::McastfwdItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mcastfwd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::McastfwdItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McastfwdItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (autoenable.is_set || is_set(autoenable.yfilter)) leaf_name_data.push_back(autoenable.get_name_leafdata());
    if (lognbhchng.is_set || is_set(lognbhchng.yfilter)) leaf_name_data.push_back(lognbhchng.get_name_leafdata());
    if (flushroutes.is_set || is_set(flushroutes.yfilter)) leaf_name_data.push_back(flushroutes.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (jpdelay.is_set || is_set(jpdelay.yfilter)) leaf_name_data.push_back(jpdelay.get_name_leafdata());
    if (regratelmt.is_set || is_set(regratelmt.yfilter)) leaf_name_data.push_back(regratelmt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::McastfwdItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McastfwdItems::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::McastfwdItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoEnable")
    {
        autoenable = value;
        autoenable.value_namespace = name_space;
        autoenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logNbhChng")
    {
        lognbhchng = value;
        lognbhchng.value_namespace = name_space;
        lognbhchng.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flushRoutes")
    {
        flushroutes = value;
        flushroutes.value_namespace = name_space;
        flushroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpDelay")
    {
        jpdelay = value;
        jpdelay.value_namespace = name_space;
        jpdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRateLmt")
    {
        regratelmt = value;
        regratelmt.value_namespace = name_space;
        regratelmt.value_namespace_prefix = name_space_prefix;
    }
}

void System::McastfwdItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "autoEnable")
    {
        autoenable.yfilter = yfilter;
    }
    if(value_path == "logNbhChng")
    {
        lognbhchng.yfilter = yfilter;
    }
    if(value_path == "flushRoutes")
    {
        flushroutes.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "jpDelay")
    {
        jpdelay.yfilter = yfilter;
    }
    if(value_path == "regRateLmt")
    {
        regratelmt.yfilter = yfilter;
    }
}

bool System::McastfwdItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "adminSt" || name == "ctrl" || name == "mtu" || name == "autoEnable" || name == "logNbhChng" || name == "flushRoutes" || name == "bfd" || name == "jpDelay" || name == "regRateLmt")
        return true;
    return false;
}

System::McastfwdItems::InstItems::EventhistItems::EventhistItems()
    :
    eventhistory_list(this, {"type"})
{

    yang_name = "eventhist-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::McastfwdItems::InstItems::EventhistItems::~EventhistItems()
{
}

bool System::McastfwdItems::InstItems::EventhistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::McastfwdItems::InstItems::EventhistItems::has_operation() const
{
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::McastfwdItems::InstItems::EventhistItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mcastfwd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::McastfwdItems::InstItems::EventhistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventhist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McastfwdItems::InstItems::EventhistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::McastfwdItems::InstItems::EventhistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventHistory-list")
    {
        auto ent_ = std::make_shared<System::McastfwdItems::InstItems::EventhistItems::EventHistoryList>();
        ent_->parent = this;
        eventhistory_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McastfwdItems::InstItems::EventhistItems::get_children() const
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

void System::McastfwdItems::InstItems::EventhistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::McastfwdItems::InstItems::EventhistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::McastfwdItems::InstItems::EventhistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EventHistory-list")
        return true;
    return false;
}

System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::EventHistoryList()
    :
    type{YType::enumeration, "type"},
    size{YType::uint32, "size"}
{

    yang_name = "EventHistory-list"; yang_parent_name = "eventhist-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::~EventHistoryList()
{
}

bool System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| size.is_set;
}

bool System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mcastfwd-items/inst-items/eventhist-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EventHistory-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "size")
        return true;
    return false;
}

System::MldsnoopItems::MldsnoopItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::MldsnoopItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "mldsnoop-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MldsnoopItems::~MldsnoopItems()
{
}

bool System::MldsnoopItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::MldsnoopItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::MldsnoopItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MldsnoopItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mldsnoop-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::MldsnoopItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::MldsnoopItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    allrtrmcastencap{YType::str, "allRtrMcastEncap"},
    flags{YType::str, "flags"}
        ,
    dom_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems>())
    , inststats_items(std::make_shared<System::MldsnoopItems::InstItems::InststatsItems>())
{
    dom_items->parent = this;
    inststats_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "mldsnoop-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MldsnoopItems::InstItems::~InstItems()
{
}

bool System::MldsnoopItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| allrtrmcastencap.is_set
	|| flags.is_set
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (inststats_items !=  nullptr && inststats_items->has_data());
}

bool System::MldsnoopItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(allrtrmcastencap.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (inststats_items !=  nullptr && inststats_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mldsnoop-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MldsnoopItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (allrtrmcastencap.is_set || is_set(allrtrmcastencap.yfilter)) leaf_name_data.push_back(allrtrmcastencap.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "inststats-items")
    {
        if(inststats_items == nullptr)
        {
            inststats_items = std::make_shared<System::MldsnoopItems::InstItems::InststatsItems>();
        }
        return inststats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(inststats_items != nullptr)
    {
        _children["inststats-items"] = inststats_items;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "allRtrMcastEncap")
    {
        allrtrmcastencap = value;
        allrtrmcastencap.value_namespace = name_space;
        allrtrmcastencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "allRtrMcastEncap")
    {
        allrtrmcastencap.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "inststats-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "allRtrMcastEncap" || name == "flags")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"encap"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MldsnoopItems::InstItems::DomItems::~DomItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mldsnoop-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MldsnoopItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::get_children() const
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

void System::MldsnoopItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DomList()
    :
    encap{YType::str, "encap"},
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    flags{YType::str, "flags"}
        ,
    db_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems>())
    , domstats_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems>())
    , strtrif_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems>())
    , rtrif_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems>())
    , querierp_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems>())
    , querierst_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems>())
{
    db_items->parent = this;
    domstats_items->parent = this;
    strtrif_items->parent = this;
    rtrif_items->parent = this;
    querierp_items->parent = this;
    querierst_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| name.is_set
	|| id.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| flags.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (domstats_items !=  nullptr && domstats_items->has_data())
	|| (strtrif_items !=  nullptr && strtrif_items->has_data())
	|| (rtrif_items !=  nullptr && rtrif_items->has_data())
	|| (querierp_items !=  nullptr && querierp_items->has_data())
	|| (querierst_items !=  nullptr && querierst_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (domstats_items !=  nullptr && domstats_items->has_operation())
	|| (strtrif_items !=  nullptr && strtrif_items->has_operation())
	|| (rtrif_items !=  nullptr && rtrif_items->has_operation())
	|| (querierp_items !=  nullptr && querierp_items->has_operation())
	|| (querierst_items !=  nullptr && querierst_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mldsnoop-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "domstats-items")
    {
        if(domstats_items == nullptr)
        {
            domstats_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems>();
        }
        return domstats_items;
    }

    if(child_yang_name == "strtrif-items")
    {
        if(strtrif_items == nullptr)
        {
            strtrif_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems>();
        }
        return strtrif_items;
    }

    if(child_yang_name == "rtrif-items")
    {
        if(rtrif_items == nullptr)
        {
            rtrif_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems>();
        }
        return rtrif_items;
    }

    if(child_yang_name == "querierp-items")
    {
        if(querierp_items == nullptr)
        {
            querierp_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems>();
        }
        return querierp_items;
    }

    if(child_yang_name == "querierst-items")
    {
        if(querierst_items == nullptr)
        {
            querierst_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems>();
        }
        return querierst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(domstats_items != nullptr)
    {
        _children["domstats-items"] = domstats_items;
    }

    if(strtrif_items != nullptr)
    {
        _children["strtrif-items"] = strtrif_items;
    }

    if(rtrif_items != nullptr)
    {
        _children["rtrif-items"] = rtrif_items;
    }

    if(querierp_items != nullptr)
    {
        _children["querierp-items"] = querierp_items;
    }

    if(querierst_items != nullptr)
    {
        _children["querierst-items"] = querierst_items;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "domstats-items" || name == "strtrif-items" || name == "rtrif-items" || name == "querierp-items" || name == "querierst-items" || name == "encap" || name == "name" || name == "id" || name == "adminSt" || name == "ctrl" || name == "flags")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::get_children() const
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

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"},
    totalmaccount{YType::uint32, "totalMacCount"}
        ,
    mcgrp_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems>())
{
    mcgrp_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| totalmaccount.is_set
	|| (mcgrp_items !=  nullptr && mcgrp_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(totalmaccount.yfilter)
	|| (mcgrp_items !=  nullptr && mcgrp_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (totalmaccount.is_set || is_set(totalmaccount.yfilter)) leaf_name_data.push_back(totalmaccount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcgrp-items")
    {
        if(mcgrp_items == nullptr)
        {
            mcgrp_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems>();
        }
        return mcgrp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mcgrp_items != nullptr)
    {
        _children["mcgrp-items"] = mcgrp_items;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "totalMacCount")
    {
        totalmaccount = value;
        totalmaccount.value_namespace = name_space;
        totalmaccount.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "totalMacCount")
    {
        totalmaccount.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcgrp-items" || name == "type" || name == "name" || name == "totalMacCount")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McgrpItems()
    :
    mcgrprec_list(this, {"addr"})
{

    yang_name = "mcgrp-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::~McgrpItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcgrprec_list.len(); index++)
    {
        if(mcgrprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::has_operation() const
{
    for (std::size_t index=0; index<mcgrprec_list.len(); index++)
    {
        if(mcgrprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McGrpRec-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList>();
        ent_->parent = this;
        mcgrprec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mcgrprec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McGrpRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::McGrpRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ver{YType::enumeration, "ver"}
        ,
    epg_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems>())
    , rep_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems>())
{
    epg_items->parent = this;
    rep_items->parent = this;

    yang_name = "McGrpRec-list"; yang_parent_name = "mcgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::~McGrpRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ver.is_set
	|| (epg_items !=  nullptr && epg_items->has_data())
	|| (rep_items !=  nullptr && rep_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| (epg_items !=  nullptr && epg_items->has_operation())
	|| (rep_items !=  nullptr && rep_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McGrpRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "epg-items")
    {
        if(epg_items == nullptr)
        {
            epg_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems>();
        }
        return epg_items;
    }

    if(child_yang_name == "rep-items")
    {
        if(rep_items == nullptr)
        {
            rep_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems>();
        }
        return rep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(epg_items != nullptr)
    {
        _children["epg-items"] = epg_items;
    }

    if(rep_items != nullptr)
    {
        _children["rep-items"] = rep_items;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "epg-items" || name == "rep-items" || name == "addr" || name == "name" || name == "ver")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgItems()
    :
    epgrec_list(this, {"fabencap"})
{

    yang_name = "epg-items"; yang_parent_name = "McGrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::~EpgItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<epgrec_list.len(); index++)
    {
        if(epgrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::has_operation() const
{
    for (std::size_t index=0; index<epgrec_list.len(); index++)
    {
        if(epgrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EpgRec-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList>();
        ent_->parent = this;
        epgrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : epgrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EpgRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::EpgRecList()
    :
    fabencap{YType::str, "fabEncap"},
    name{YType::str, "name"},
    id{YType::uint32, "id"}
        ,
    rep_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems>())
{
    rep_items->parent = this;

    yang_name = "EpgRec-list"; yang_parent_name = "epg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::~EpgRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::has_data() const
{
    if (is_presence_container) return true;
    return fabencap.is_set
	|| name.is_set
	|| id.is_set
	|| (rep_items !=  nullptr && rep_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fabencap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (rep_items !=  nullptr && rep_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EpgRec-list";
    ADD_KEY_TOKEN(fabencap, "fabEncap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabencap.is_set || is_set(fabencap.yfilter)) leaf_name_data.push_back(fabencap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rep-items")
    {
        if(rep_items == nullptr)
        {
            rep_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems>();
        }
        return rep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rep_items != nullptr)
    {
        _children["rep-items"] = rep_items;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fabEncap")
    {
        fabencap = value;
        fabencap.value_namespace = name_space;
        fabencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fabEncap")
    {
        fabencap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rep-items" || name == "fabEncap" || name == "name" || name == "id")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::RepItems()
    :
    reportrec_list(this, {"mcastsrc", "ver"})
{

    yang_name = "rep-items"; yang_parent_name = "EpgRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::~RepItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reportrec_list.len(); index++)
    {
        if(reportrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::has_operation() const
{
    for (std::size_t index=0; index<reportrec_list.len(); index++)
    {
        if(reportrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReportRec-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList>();
        ent_->parent = this;
        reportrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reportrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReportRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::ReportRecList()
    :
    mcastsrc{YType::str, "mcastSrc"},
    ver{YType::enumeration, "ver"},
    name{YType::str, "name"},
    filtmode{YType::enumeration, "filtMode"},
    flags{YType::str, "flags"}
        ,
    oif_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "ReportRec-list"; yang_parent_name = "rep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::~ReportRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::has_data() const
{
    if (is_presence_container) return true;
    return mcastsrc.is_set
	|| ver.is_set
	|| name.is_set
	|| filtmode.is_set
	|| flags.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcastsrc.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(filtmode.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReportRec-list";
    ADD_KEY_TOKEN(mcastsrc, "mcastSrc");
    ADD_KEY_TOKEN(ver, "ver");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcastsrc.is_set || is_set(mcastsrc.yfilter)) leaf_name_data.push_back(mcastsrc.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (filtmode.is_set || is_set(filtmode.yfilter)) leaf_name_data.push_back(filtmode.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oif_items != nullptr)
    {
        _children["oif-items"] = oif_items;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mcastSrc")
    {
        mcastsrc = value;
        mcastsrc.value_namespace = name_space;
        mcastsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filtMode")
    {
        filtmode = value;
        filtmode.value_namespace = name_space;
        filtmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mcastSrc")
    {
        mcastsrc.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "filtMode")
    {
        filtmode.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "mcastSrc" || name == "ver" || name == "name" || name == "filtMode" || name == "flags")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OifItems()
    :
    oifrec_list(this, {"id"})
{

    yang_name = "oif-items"; yang_parent_name = "ReportRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::~OifItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oifrec_list.len(); index++)
    {
        if(oifrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oifrec_list.len(); index++)
    {
        if(oifrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OIFRec-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList>();
        ent_->parent = this;
        oifrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oifrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OIFRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::OIFRecList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"}
        ,
    host_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems>())
{
    host_items->parent = this;

    yang_name = "OIFRec-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::~OIFRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| (host_items !=  nullptr && host_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (host_items !=  nullptr && host_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OIFRec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-items")
    {
        if(host_items == nullptr)
        {
            host_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems>();
        }
        return host_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host_items != nullptr)
    {
        _children["host-items"] = host_items;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-items" || name == "id" || name == "name")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostItems()
    :
    hostrec_list(this, {"addr"})
{

    yang_name = "host-items"; yang_parent_name = "OIFRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::~HostItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostrec_list.len(); index++)
    {
        if(hostrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_operation() const
{
    for (std::size_t index=0; index<hostrec_list.len(); index++)
    {
        if(hostrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "HostRec-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList>();
        ent_->parent = this;
        hostrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hostrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "HostRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::HostRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{

    yang_name = "HostRec-list"; yang_parent_name = "host-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::~HostRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "HostRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::RepItems()
    :
    reportrec_list(this, {"mcastsrc", "ver"})
{

    yang_name = "rep-items"; yang_parent_name = "McGrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::~RepItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reportrec_list.len(); index++)
    {
        if(reportrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::has_operation() const
{
    for (std::size_t index=0; index<reportrec_list.len(); index++)
    {
        if(reportrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReportRec-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList>();
        ent_->parent = this;
        reportrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reportrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReportRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::ReportRecList()
    :
    mcastsrc{YType::str, "mcastSrc"},
    ver{YType::enumeration, "ver"},
    name{YType::str, "name"},
    filtmode{YType::enumeration, "filtMode"},
    flags{YType::str, "flags"}
        ,
    oif_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "ReportRec-list"; yang_parent_name = "rep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::~ReportRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::has_data() const
{
    if (is_presence_container) return true;
    return mcastsrc.is_set
	|| ver.is_set
	|| name.is_set
	|| filtmode.is_set
	|| flags.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcastsrc.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(filtmode.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReportRec-list";
    ADD_KEY_TOKEN(mcastsrc, "mcastSrc");
    ADD_KEY_TOKEN(ver, "ver");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcastsrc.is_set || is_set(mcastsrc.yfilter)) leaf_name_data.push_back(mcastsrc.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (filtmode.is_set || is_set(filtmode.yfilter)) leaf_name_data.push_back(filtmode.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oif_items != nullptr)
    {
        _children["oif-items"] = oif_items;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mcastSrc")
    {
        mcastsrc = value;
        mcastsrc.value_namespace = name_space;
        mcastsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filtMode")
    {
        filtmode = value;
        filtmode.value_namespace = name_space;
        filtmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mcastSrc")
    {
        mcastsrc.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "filtMode")
    {
        filtmode.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "mcastSrc" || name == "ver" || name == "name" || name == "filtMode" || name == "flags")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OifItems()
    :
    oifrec_list(this, {"id"})
{

    yang_name = "oif-items"; yang_parent_name = "ReportRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::~OifItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oifrec_list.len(); index++)
    {
        if(oifrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oifrec_list.len(); index++)
    {
        if(oifrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OIFRec-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList>();
        ent_->parent = this;
        oifrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oifrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OIFRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::OIFRecList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"}
        ,
    host_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems>())
{
    host_items->parent = this;

    yang_name = "OIFRec-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::~OIFRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| (host_items !=  nullptr && host_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (host_items !=  nullptr && host_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OIFRec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-items")
    {
        if(host_items == nullptr)
        {
            host_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems>();
        }
        return host_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host_items != nullptr)
    {
        _children["host-items"] = host_items;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-items" || name == "id" || name == "name")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostItems()
    :
    hostrec_list(this, {"addr"})
{

    yang_name = "host-items"; yang_parent_name = "OIFRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::~HostItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostrec_list.len(); index++)
    {
        if(hostrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_operation() const
{
    for (std::size_t index=0; index<hostrec_list.len(); index++)
    {
        if(hostrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "HostRec-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList>();
        ent_->parent = this;
        hostrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hostrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "HostRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::HostRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{

    yang_name = "HostRec-list"; yang_parent_name = "host-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::~HostRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "HostRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::DomstatsItems()
{

    yang_name = "domstats-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::~DomstatsItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::has_operation() const
{
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StrtrifItems()
    :
    strtrif_list(this, {"id"})
{

    yang_name = "strtrif-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::~StrtrifItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<strtrif_list.len(); index++)
    {
        if(strtrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::has_operation() const
{
    for (std::size_t index=0; index<strtrif_list.len(); index++)
    {
        if(strtrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strtrif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StRtrIf-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList>();
        ent_->parent = this;
        strtrif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : strtrif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StRtrIf-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::StRtrIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    encap{YType::str, "encap"}
        ,
    rtvrfmbr_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "StRtrIf-list"; yang_parent_name = "strtrif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::~StRtrIfList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| encap.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StRtrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
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

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "encap")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "StRtrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "StRtrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::get_children() const
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

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrifItems()
    :
    rtrif_list(this, {"id"})
{

    yang_name = "rtrif-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::~RtrifItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtrif_list.len(); index++)
    {
        if(rtrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::has_operation() const
{
    for (std::size_t index=0; index<rtrif_list.len(); index++)
    {
        if(rtrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtrif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtrIf-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList>();
        ent_->parent = this;
        rtrif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtrif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtrIf-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::RtrIfList()
    :
    id{YType::str, "id"}
{

    yang_name = "RtrIf-list"; yang_parent_name = "rtrif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::~RtrIfList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::QuerierpItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ver{YType::enumeration, "ver"},
    addr{YType::str, "addr"},
    queryintvl{YType::uint16, "queryIntvl"},
    rspintvl{YType::uint16, "rspIntvl"},
    robustfac{YType::uint8, "robustFac"},
    startqueryintvl{YType::uint16, "startQueryIntvl"},
    startquerycnt{YType::uint8, "startQueryCnt"},
    lastmbrintvl{YType::uint16, "lastMbrIntvl"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "querierp-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::~QuerierpItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ver.is_set
	|| addr.is_set
	|| queryintvl.is_set
	|| rspintvl.is_set
	|| robustfac.is_set
	|| startqueryintvl.is_set
	|| startquerycnt.is_set
	|| lastmbrintvl.is_set
	|| timeout.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(queryintvl.yfilter)
	|| ydk::is_set(rspintvl.yfilter)
	|| ydk::is_set(robustfac.yfilter)
	|| ydk::is_set(startqueryintvl.yfilter)
	|| ydk::is_set(startquerycnt.yfilter)
	|| ydk::is_set(lastmbrintvl.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querierp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (queryintvl.is_set || is_set(queryintvl.yfilter)) leaf_name_data.push_back(queryintvl.get_name_leafdata());
    if (rspintvl.is_set || is_set(rspintvl.yfilter)) leaf_name_data.push_back(rspintvl.get_name_leafdata());
    if (robustfac.is_set || is_set(robustfac.yfilter)) leaf_name_data.push_back(robustfac.get_name_leafdata());
    if (startqueryintvl.is_set || is_set(startqueryintvl.yfilter)) leaf_name_data.push_back(startqueryintvl.get_name_leafdata());
    if (startquerycnt.is_set || is_set(startquerycnt.yfilter)) leaf_name_data.push_back(startquerycnt.get_name_leafdata());
    if (lastmbrintvl.is_set || is_set(lastmbrintvl.yfilter)) leaf_name_data.push_back(lastmbrintvl.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queryIntvl")
    {
        queryintvl = value;
        queryintvl.value_namespace = name_space;
        queryintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rspIntvl")
    {
        rspintvl = value;
        rspintvl.value_namespace = name_space;
        rspintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustFac")
    {
        robustfac = value;
        robustfac.value_namespace = name_space;
        robustfac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startQueryIntvl")
    {
        startqueryintvl = value;
        startqueryintvl.value_namespace = name_space;
        startqueryintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startQueryCnt")
    {
        startquerycnt = value;
        startquerycnt.value_namespace = name_space;
        startquerycnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastMbrIntvl")
    {
        lastmbrintvl = value;
        lastmbrintvl.value_namespace = name_space;
        lastmbrintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "queryIntvl")
    {
        queryintvl.yfilter = yfilter;
    }
    if(value_path == "rspIntvl")
    {
        rspintvl.yfilter = yfilter;
    }
    if(value_path == "robustFac")
    {
        robustfac.yfilter = yfilter;
    }
    if(value_path == "startQueryIntvl")
    {
        startqueryintvl.yfilter = yfilter;
    }
    if(value_path == "startQueryCnt")
    {
        startquerycnt.yfilter = yfilter;
    }
    if(value_path == "lastMbrIntvl")
    {
        lastmbrintvl.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ver" || name == "addr" || name == "queryIntvl" || name == "rspIntvl" || name == "robustFac" || name == "startQueryIntvl" || name == "startQueryCnt" || name == "lastMbrIntvl" || name == "timeout")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::QuerierstItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ver{YType::enumeration, "ver"},
    addr{YType::str, "addr"},
    queryintvl{YType::uint16, "queryIntvl"},
    rspintvl{YType::uint16, "rspIntvl"},
    robustfac{YType::uint8, "robustFac"},
    startqueryintvl{YType::uint16, "startQueryIntvl"},
    startquerycnt{YType::uint8, "startQueryCnt"},
    lastmbrintvl{YType::uint16, "lastMbrIntvl"},
    flags{YType::str, "flags"}
{

    yang_name = "querierst-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::~QuerierstItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ver.is_set
	|| addr.is_set
	|| queryintvl.is_set
	|| rspintvl.is_set
	|| robustfac.is_set
	|| startqueryintvl.is_set
	|| startquerycnt.is_set
	|| lastmbrintvl.is_set
	|| flags.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(queryintvl.yfilter)
	|| ydk::is_set(rspintvl.yfilter)
	|| ydk::is_set(robustfac.yfilter)
	|| ydk::is_set(startqueryintvl.yfilter)
	|| ydk::is_set(startquerycnt.yfilter)
	|| ydk::is_set(lastmbrintvl.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querierst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (queryintvl.is_set || is_set(queryintvl.yfilter)) leaf_name_data.push_back(queryintvl.get_name_leafdata());
    if (rspintvl.is_set || is_set(rspintvl.yfilter)) leaf_name_data.push_back(rspintvl.get_name_leafdata());
    if (robustfac.is_set || is_set(robustfac.yfilter)) leaf_name_data.push_back(robustfac.get_name_leafdata());
    if (startqueryintvl.is_set || is_set(startqueryintvl.yfilter)) leaf_name_data.push_back(startqueryintvl.get_name_leafdata());
    if (startquerycnt.is_set || is_set(startquerycnt.yfilter)) leaf_name_data.push_back(startquerycnt.get_name_leafdata());
    if (lastmbrintvl.is_set || is_set(lastmbrintvl.yfilter)) leaf_name_data.push_back(lastmbrintvl.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queryIntvl")
    {
        queryintvl = value;
        queryintvl.value_namespace = name_space;
        queryintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rspIntvl")
    {
        rspintvl = value;
        rspintvl.value_namespace = name_space;
        rspintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustFac")
    {
        robustfac = value;
        robustfac.value_namespace = name_space;
        robustfac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startQueryIntvl")
    {
        startqueryintvl = value;
        startqueryintvl.value_namespace = name_space;
        startqueryintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startQueryCnt")
    {
        startquerycnt = value;
        startquerycnt.value_namespace = name_space;
        startquerycnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastMbrIntvl")
    {
        lastmbrintvl = value;
        lastmbrintvl.value_namespace = name_space;
        lastmbrintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "queryIntvl")
    {
        queryintvl.yfilter = yfilter;
    }
    if(value_path == "rspIntvl")
    {
        rspintvl.yfilter = yfilter;
    }
    if(value_path == "robustFac")
    {
        robustfac.yfilter = yfilter;
    }
    if(value_path == "startQueryIntvl")
    {
        startqueryintvl.yfilter = yfilter;
    }
    if(value_path == "startQueryCnt")
    {
        startquerycnt.yfilter = yfilter;
    }
    if(value_path == "lastMbrIntvl")
    {
        lastmbrintvl.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ver" || name == "addr" || name == "queryIntvl" || name == "rspIntvl" || name == "robustFac" || name == "startQueryIntvl" || name == "startQueryCnt" || name == "lastMbrIntvl" || name == "flags")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::InststatsItems::InststatsItems()
{

    yang_name = "inststats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MldsnoopItems::InstItems::InststatsItems::~InststatsItems()
{
}

bool System::MldsnoopItems::InstItems::InststatsItems::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool System::MldsnoopItems::InstItems::InststatsItems::has_operation() const
{
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::InststatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mldsnoop-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MldsnoopItems::InstItems::InststatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inststats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::InststatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::InststatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::InststatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MldsnoopItems::InstItems::InststatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::InststatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::InststatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

System::MplsItems::MplsItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    if_items(std::make_shared<System::MplsItems::IfItems>())
{
    if_items->parent = this;

    yang_name = "mpls-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MplsItems::~MplsItems()
{
}

bool System::MplsItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::MplsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::MplsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MplsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::MplsItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["If-items"] = if_items;
    }

    return _children;
}

void System::MplsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MplsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MplsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::MplsItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "If-items"; yang_parent_name = "mpls-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MplsItems::IfItems::~IfItems()
{
}

bool System::MplsItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mpls-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MplsItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::MplsItems::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsItems::IfItems::get_children() const
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

void System::MplsItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::MplsItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    operst{YType::enumeration, "operSt"},
    deleted{YType::boolean, "deleted"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    rtvrfmbr_items(std::make_shared<System::MplsItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::MplsItems::IfItems::IfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "If-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MplsItems::IfItems::IfList::~IfList()
{
}

bool System::MplsItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| deleted.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::MplsItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(deleted.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::MplsItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mpls-items/If-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MplsItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (deleted.is_set || is_set(deleted.yfilter)) leaf_name_data.push_back(deleted.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::MplsItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::MplsItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
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

void System::MplsItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted")
    {
        deleted = value;
        deleted.value_namespace = name_space;
        deleted.value_namespace_prefix = name_space_prefix;
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

void System::MplsItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "deleted")
    {
        deleted.yfilter = yfilter;
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

bool System::MplsItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "operSt" || name == "deleted" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::MplsItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::MplsItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::MplsItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::MplsItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MplsItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MplsItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MplsItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::MplsItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::MplsItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MplsstaticItems::MplsstaticItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    af_items(std::make_shared<System::MplsstaticItems::AfItems>())
{
    af_items->parent = this;

    yang_name = "mplsstatic-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MplsstaticItems::~MplsstaticItems()
{
}

bool System::MplsstaticItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (af_items !=  nullptr && af_items->has_data());
}

bool System::MplsstaticItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (af_items !=  nullptr && af_items->has_operation());
}

std::string System::MplsstaticItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MplsstaticItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsstatic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::MplsstaticItems::AfItems>();
        }
        return af_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(af_items != nullptr)
    {
        _children["af-items"] = af_items;
    }

    return _children;
}

void System::MplsstaticItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MplsstaticItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MplsstaticItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfItems()
    :
    af_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "mplsstatic-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MplsstaticItems::AfItems::~AfItems()
{
}

bool System::MplsstaticItems::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af_list.len(); index++)
    {
        if(af_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::has_operation() const
{
    for (std::size_t index=0; index<af_list.len(); index++)
    {
        if(af_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mplsstatic-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MplsstaticItems::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Af-list")
    {
        auto ent_ = std::make_shared<System::MplsstaticItems::AfItems::AfList>();
        ent_->parent = this;
        af_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Af-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::AfList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    pfxlabel_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems>())
    , lsp_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems>())
{
    pfxlabel_items->parent = this;
    lsp_items->parent = this;

    yang_name = "Af-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MplsstaticItems::AfItems::AfList::~AfList()
{
}

bool System::MplsstaticItems::AfItems::AfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (pfxlabel_items !=  nullptr && pfxlabel_items->has_data())
	|| (lsp_items !=  nullptr && lsp_items->has_data());
}

bool System::MplsstaticItems::AfItems::AfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (pfxlabel_items !=  nullptr && pfxlabel_items->has_operation())
	|| (lsp_items !=  nullptr && lsp_items->has_operation());
}

std::string System::MplsstaticItems::AfItems::AfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mplsstatic-items/af-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MplsstaticItems::AfItems::AfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Af-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfxlabel-items")
    {
        if(pfxlabel_items == nullptr)
        {
            pfxlabel_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems>();
        }
        return pfxlabel_items;
    }

    if(child_yang_name == "lsp-items")
    {
        if(lsp_items == nullptr)
        {
            lsp_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems>();
        }
        return lsp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pfxlabel_items != nullptr)
    {
        _children["pfxlabel-items"] = pfxlabel_items;
    }

    if(lsp_items != nullptr)
    {
        _children["lsp-items"] = lsp_items;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MplsstaticItems::AfItems::AfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MplsstaticItems::AfItems::AfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfxlabel-items" || name == "lsp-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxlabelItems()
    :
    pfxlcllbl_list(this, {"label"})
{

    yang_name = "pfxlabel-items"; yang_parent_name = "Af-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::~PfxlabelItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxlcllbl_list.len(); index++)
    {
        if(pfxlcllbl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::has_operation() const
{
    for (std::size_t index=0; index<pfxlcllbl_list.len(); index++)
    {
        if(pfxlcllbl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::PfxlabelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxlabel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::PfxlabelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxLclLbl-list")
    {
        auto ent_ = std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList>();
        ent_->parent = this;
        pfxlcllbl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pfxlcllbl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxLclLbl-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::PfxLclLblList()
    :
    label{YType::uint32, "label"},
    pfx{YType::str, "pfx"}
        ,
    nh_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems>())
    , autoresolvenh_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems>())
    , backupnh_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems>())
{
    nh_items->parent = this;
    autoresolvenh_items->parent = this;
    backupnh_items->parent = this;

    yang_name = "PfxLclLbl-list"; yang_parent_name = "pfxlabel-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::~PfxLclLblList()
{
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| pfx.is_set
	|| (nh_items !=  nullptr && nh_items->has_data())
	|| (autoresolvenh_items !=  nullptr && autoresolvenh_items->has_data())
	|| (backupnh_items !=  nullptr && backupnh_items->has_data());
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation())
	|| (autoresolvenh_items !=  nullptr && autoresolvenh_items->has_operation())
	|| (backupnh_items !=  nullptr && backupnh_items->has_operation());
}

std::string System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxLclLbl-list";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems>();
        }
        return nh_items;
    }

    if(child_yang_name == "autoresolvenh-items")
    {
        if(autoresolvenh_items == nullptr)
        {
            autoresolvenh_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems>();
        }
        return autoresolvenh_items;
    }

    if(child_yang_name == "backupnh-items")
    {
        if(backupnh_items == nullptr)
        {
            backupnh_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems>();
        }
        return backupnh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nh_items != nullptr)
    {
        _children["nh-items"] = nh_items;
    }

    if(autoresolvenh_items != nullptr)
    {
        _children["autoresolvenh-items"] = autoresolvenh_items;
    }

    if(backupnh_items != nullptr)
    {
        _children["backupnh-items"] = backupnh_items;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "autoresolvenh-items" || name == "backupnh-items" || name == "label" || name == "pfx")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::NhItems()
    :
    outlbl{YType::uint32, "outLbl"},
    nhaddr{YType::str, "nhAddr"}
{

    yang_name = "nh-items"; yang_parent_name = "PfxLclLbl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::~NhItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    return outlbl.is_set
	|| nhaddr.is_set;
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outlbl.yfilter)
	|| ydk::is_set(nhaddr.yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outlbl.is_set || is_set(outlbl.yfilter)) leaf_name_data.push_back(outlbl.get_name_leafdata());
    if (nhaddr.is_set || is_set(nhaddr.yfilter)) leaf_name_data.push_back(nhaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outLbl")
    {
        outlbl = value;
        outlbl.value_namespace = name_space;
        outlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhAddr")
    {
        nhaddr = value;
        nhaddr.value_namespace = name_space;
        nhaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outLbl")
    {
        outlbl.yfilter = yfilter;
    }
    if(value_path == "nhAddr")
    {
        nhaddr.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outLbl" || name == "nhAddr")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::AutoresolvenhItems()
    :
    outlbl{YType::uint32, "outLbl"}
{

    yang_name = "autoresolvenh-items"; yang_parent_name = "PfxLclLbl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::~AutoresolvenhItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::has_data() const
{
    if (is_presence_container) return true;
    return outlbl.is_set;
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outlbl.yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoresolvenh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outlbl.is_set || is_set(outlbl.yfilter)) leaf_name_data.push_back(outlbl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outLbl")
    {
        outlbl = value;
        outlbl.value_namespace = name_space;
        outlbl.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outLbl")
    {
        outlbl.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outLbl")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::BackupnhItems()
    :
    outlbl{YType::uint32, "outLbl"},
    nhaddr{YType::str, "nhAddr"},
    if_{YType::str, "if"}
{

    yang_name = "backupnh-items"; yang_parent_name = "PfxLclLbl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::~BackupnhItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::has_data() const
{
    if (is_presence_container) return true;
    return outlbl.is_set
	|| nhaddr.is_set
	|| if_.is_set;
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outlbl.yfilter)
	|| ydk::is_set(nhaddr.yfilter)
	|| ydk::is_set(if_.yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backupnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outlbl.is_set || is_set(outlbl.yfilter)) leaf_name_data.push_back(outlbl.get_name_leafdata());
    if (nhaddr.is_set || is_set(nhaddr.yfilter)) leaf_name_data.push_back(nhaddr.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outLbl")
    {
        outlbl = value;
        outlbl.value_namespace = name_space;
        outlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhAddr")
    {
        nhaddr = value;
        nhaddr.value_namespace = name_space;
        nhaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outLbl")
    {
        outlbl.yfilter = yfilter;
    }
    if(value_path == "nhAddr")
    {
        nhaddr.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outLbl" || name == "nhAddr" || name == "if")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::LspItems()
    :
    namedlsp_list(this, {"name"})
{

    yang_name = "lsp-items"; yang_parent_name = "Af-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::~LspItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<namedlsp_list.len(); index++)
    {
        if(namedlsp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::has_operation() const
{
    for (std::size_t index=0; index<namedlsp_list.len(); index++)
    {
        if(namedlsp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NamedLSP-list")
    {
        auto ent_ = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList>();
        ent_->parent = this;
        namedlsp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : namedlsp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::AfList::LspItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NamedLSP-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::NamedLSPList()
    :
    name{YType::str, "name"}
        ,
    xclabel_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems>())
    , pollabel_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems>())
{
    xclabel_items->parent = this;
    pollabel_items->parent = this;

    yang_name = "NamedLSP-list"; yang_parent_name = "lsp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::~NamedLSPList()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (xclabel_items !=  nullptr && xclabel_items->has_data())
	|| (pollabel_items !=  nullptr && pollabel_items->has_data());
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (xclabel_items !=  nullptr && xclabel_items->has_operation())
	|| (pollabel_items !=  nullptr && pollabel_items->has_operation());
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NamedLSP-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xclabel-items")
    {
        if(xclabel_items == nullptr)
        {
            xclabel_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems>();
        }
        return xclabel_items;
    }

    if(child_yang_name == "pollabel-items")
    {
        if(pollabel_items == nullptr)
        {
            pollabel_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems>();
        }
        return pollabel_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xclabel_items != nullptr)
    {
        _children["xclabel-items"] = xclabel_items;
    }

    if(pollabel_items != nullptr)
    {
        _children["pollabel-items"] = pollabel_items;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xclabel-items" || name == "pollabel-items" || name == "name")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XclabelItems()
    :
    xclcllbl_list(this, {"label"})
{

    yang_name = "xclabel-items"; yang_parent_name = "NamedLSP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::~XclabelItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<xclcllbl_list.len(); index++)
    {
        if(xclcllbl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::has_operation() const
{
    for (std::size_t index=0; index<xclcllbl_list.len(); index++)
    {
        if(xclcllbl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xclabel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "XcLclLbl-list")
    {
        auto ent_ = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList>();
        ent_->parent = this;
        xclcllbl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : xclcllbl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "XcLclLbl-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::XcLclLblList()
    :
    label{YType::uint32, "label"},
    name{YType::str, "name"}
        ,
    nh_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems>())
{
    nh_items->parent = this;

    yang_name = "XcLclLbl-list"; yang_parent_name = "xclabel-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::~XcLclLblList()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| name.is_set
	|| (nh_items !=  nullptr && nh_items->has_data());
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation());
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "XcLclLbl-list";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems>();
        }
        return nh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nh_items != nullptr)
    {
        _children["nh-items"] = nh_items;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "label" || name == "name")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::NhItems()
    :
    xcnh_list(this, {"pathid"})
{

    yang_name = "nh-items"; yang_parent_name = "XcLclLbl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::~NhItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<xcnh_list.len(); index++)
    {
        if(xcnh_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<xcnh_list.len(); index++)
    {
        if(xcnh_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "XcNh-list")
    {
        auto ent_ = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList>();
        ent_->parent = this;
        xcnh_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : xcnh_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "XcNh-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::XcNhList()
    :
    pathid{YType::uint16, "pathId"},
    outlblstack{YType::str, "outLblStack"},
    nhaddr{YType::str, "nhAddr"}
{

    yang_name = "XcNh-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::~XcNhList()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::has_data() const
{
    if (is_presence_container) return true;
    return pathid.is_set
	|| outlblstack.is_set
	|| nhaddr.is_set;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(outlblstack.yfilter)
	|| ydk::is_set(nhaddr.yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "XcNh-list";
    ADD_KEY_TOKEN(pathid, "pathId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (outlblstack.is_set || is_set(outlblstack.yfilter)) leaf_name_data.push_back(outlblstack.get_name_leafdata());
    if (nhaddr.is_set || is_set(nhaddr.yfilter)) leaf_name_data.push_back(nhaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pathId")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outLblStack")
    {
        outlblstack = value;
        outlblstack.value_namespace = name_space;
        outlblstack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhAddr")
    {
        nhaddr = value;
        nhaddr.value_namespace = name_space;
        nhaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pathId")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "outLblStack")
    {
        outlblstack.yfilter = yfilter;
    }
    if(value_path == "nhAddr")
    {
        nhaddr.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pathId" || name == "outLblStack" || name == "nhAddr")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PollabelItems()
    :
    policylcllbl_list(this, {"label"})
{

    yang_name = "pollabel-items"; yang_parent_name = "NamedLSP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::~PollabelItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policylcllbl_list.len(); index++)
    {
        if(policylcllbl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::has_operation() const
{
    for (std::size_t index=0; index<policylcllbl_list.len(); index++)
    {
        if(policylcllbl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pollabel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PolicyLclLbl-list")
    {
        auto ent_ = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList>();
        ent_->parent = this;
        policylcllbl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policylcllbl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PolicyLclLbl-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::PolicyLclLblList()
    :
    label{YType::uint32, "label"},
    pfx{YType::str, "pfx"},
    name{YType::str, "name"}
        ,
    nh_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems>())
{
    nh_items->parent = this;

    yang_name = "PolicyLclLbl-list"; yang_parent_name = "pollabel-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::~PolicyLclLblList()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| pfx.is_set
	|| name.is_set
	|| (nh_items !=  nullptr && nh_items->has_data());
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation());
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PolicyLclLbl-list";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems>();
        }
        return nh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nh_items != nullptr)
    {
        _children["nh-items"] = nh_items;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "label" || name == "pfx" || name == "name")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::NhItems()
    :
    polnh_list(this, {"pathid"})
{

    yang_name = "nh-items"; yang_parent_name = "PolicyLclLbl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::~NhItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<polnh_list.len(); index++)
    {
        if(polnh_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<polnh_list.len(); index++)
    {
        if(polnh_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PolNh-list")
    {
        auto ent_ = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList>();
        ent_->parent = this;
        polnh_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : polnh_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PolNh-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::PolNhList()
    :
    pathid{YType::uint16, "pathId"},
    outlblstack{YType::str, "outLblStack"},
    nhaddr{YType::str, "nhAddr"}
{

    yang_name = "PolNh-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::~PolNhList()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::has_data() const
{
    if (is_presence_container) return true;
    return pathid.is_set
	|| outlblstack.is_set
	|| nhaddr.is_set;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(outlblstack.yfilter)
	|| ydk::is_set(nhaddr.yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PolNh-list";
    ADD_KEY_TOKEN(pathid, "pathId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (outlblstack.is_set || is_set(outlblstack.yfilter)) leaf_name_data.push_back(outlblstack.get_name_leafdata());
    if (nhaddr.is_set || is_set(nhaddr.yfilter)) leaf_name_data.push_back(nhaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pathId")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outLblStack")
    {
        outlblstack = value;
        outlblstack.value_namespace = name_space;
        outlblstack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhAddr")
    {
        nhaddr = value;
        nhaddr.value_namespace = name_space;
        nhaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pathId")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "outLblStack")
    {
        outlblstack.yfilter = yfilter;
    }
    if(value_path == "nhAddr")
    {
        nhaddr.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pathId" || name == "outLblStack" || name == "nhAddr")
        return true;
    return false;
}

System::LabeltableItems::LabeltableItems()
    :
    operlabels{YType::uint32, "operLabels"},
    operipv4prefixes{YType::uint32, "operIPv4Prefixes"},
    operipv6prefixes{YType::uint32, "operIPv6Prefixes"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    client_items(std::make_shared<System::LabeltableItems::ClientItems>())
    , lblrange_items(std::make_shared<System::LabeltableItems::LblrangeItems>())
    , lbl_items(std::make_shared<System::LabeltableItems::LblItems>())
{
    client_items->parent = this;
    lblrange_items->parent = this;
    lbl_items->parent = this;

    yang_name = "labeltable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LabeltableItems::~LabeltableItems()
{
}

bool System::LabeltableItems::has_data() const
{
    if (is_presence_container) return true;
    return operlabels.is_set
	|| operipv4prefixes.is_set
	|| operipv6prefixes.is_set
	|| name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (client_items !=  nullptr && client_items->has_data())
	|| (lblrange_items !=  nullptr && lblrange_items->has_data())
	|| (lbl_items !=  nullptr && lbl_items->has_data());
}

bool System::LabeltableItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operlabels.yfilter)
	|| ydk::is_set(operipv4prefixes.yfilter)
	|| ydk::is_set(operipv6prefixes.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (client_items !=  nullptr && client_items->has_operation())
	|| (lblrange_items !=  nullptr && lblrange_items->has_operation())
	|| (lbl_items !=  nullptr && lbl_items->has_operation());
}

std::string System::LabeltableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LabeltableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeltable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operlabels.is_set || is_set(operlabels.yfilter)) leaf_name_data.push_back(operlabels.get_name_leafdata());
    if (operipv4prefixes.is_set || is_set(operipv4prefixes.yfilter)) leaf_name_data.push_back(operipv4prefixes.get_name_leafdata());
    if (operipv6prefixes.is_set || is_set(operipv6prefixes.yfilter)) leaf_name_data.push_back(operipv6prefixes.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-items")
    {
        if(client_items == nullptr)
        {
            client_items = std::make_shared<System::LabeltableItems::ClientItems>();
        }
        return client_items;
    }

    if(child_yang_name == "lblrange-items")
    {
        if(lblrange_items == nullptr)
        {
            lblrange_items = std::make_shared<System::LabeltableItems::LblrangeItems>();
        }
        return lblrange_items;
    }

    if(child_yang_name == "lbl-items")
    {
        if(lbl_items == nullptr)
        {
            lbl_items = std::make_shared<System::LabeltableItems::LblItems>();
        }
        return lbl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_items != nullptr)
    {
        _children["client-items"] = client_items;
    }

    if(lblrange_items != nullptr)
    {
        _children["lblrange-items"] = lblrange_items;
    }

    if(lbl_items != nullptr)
    {
        _children["lbl-items"] = lbl_items;
    }

    return _children;
}

void System::LabeltableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operLabels")
    {
        operlabels = value;
        operlabels.value_namespace = name_space;
        operlabels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operIPv4Prefixes")
    {
        operipv4prefixes = value;
        operipv4prefixes.value_namespace = name_space;
        operipv4prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operIPv6Prefixes")
    {
        operipv6prefixes = value;
        operipv6prefixes.value_namespace = name_space;
        operipv6prefixes.value_namespace_prefix = name_space_prefix;
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

void System::LabeltableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operLabels")
    {
        operlabels.yfilter = yfilter;
    }
    if(value_path == "operIPv4Prefixes")
    {
        operipv4prefixes.yfilter = yfilter;
    }
    if(value_path == "operIPv6Prefixes")
    {
        operipv6prefixes.yfilter = yfilter;
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

bool System::LabeltableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-items" || name == "lblrange-items" || name == "lbl-items" || name == "operLabels" || name == "operIPv4Prefixes" || name == "operIPv6Prefixes" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::LabeltableItems::ClientItems::ClientItems()
    :
    clients_list(this, {"name"})
{

    yang_name = "client-items"; yang_parent_name = "labeltable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LabeltableItems::ClientItems::~ClientItems()
{
}

bool System::LabeltableItems::ClientItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clients_list.len(); index++)
    {
        if(clients_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LabeltableItems::ClientItems::has_operation() const
{
    for (std::size_t index=0; index<clients_list.len(); index++)
    {
        if(clients_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LabeltableItems::ClientItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/labeltable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LabeltableItems::ClientItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::ClientItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::ClientItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Clients-list")
    {
        auto ent_ = std::make_shared<System::LabeltableItems::ClientItems::ClientsList>();
        ent_->parent = this;
        clients_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::ClientItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clients_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::LabeltableItems::ClientItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LabeltableItems::ClientItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LabeltableItems::ClientItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Clients-list")
        return true;
    return false;
}

System::LabeltableItems::ClientItems::ClientsList::ClientsList()
    :
    name{YType::str, "name"},
    index_{YType::uint32, "index"},
    uuid{YType::uint32, "uuid"},
    mtssap{YType::uint32, "mtsSap"},
    staletime{YType::str, "staleTime"},
    flag{YType::str, "flag"},
    regmsg{YType::uint32, "regMsg"},
    convmsg{YType::uint32, "convMsg"},
    fecmsg{YType::uint32, "fecMsg"},
    fecadd{YType::uint32, "fecAdd"},
    ileadd{YType::uint32, "ileAdd"},
    fecdel{YType::uint32, "fecDel"},
    iledel{YType::uint32, "ileDel"},
    lastxid{YType::uint32, "lastXid"},
    fecack{YType::uint32, "fecAck"}
{

    yang_name = "Clients-list"; yang_parent_name = "client-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LabeltableItems::ClientItems::ClientsList::~ClientsList()
{
}

bool System::LabeltableItems::ClientItems::ClientsList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| index_.is_set
	|| uuid.is_set
	|| mtssap.is_set
	|| staletime.is_set
	|| flag.is_set
	|| regmsg.is_set
	|| convmsg.is_set
	|| fecmsg.is_set
	|| fecadd.is_set
	|| ileadd.is_set
	|| fecdel.is_set
	|| iledel.is_set
	|| lastxid.is_set
	|| fecack.is_set;
}

bool System::LabeltableItems::ClientItems::ClientsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(uuid.yfilter)
	|| ydk::is_set(mtssap.yfilter)
	|| ydk::is_set(staletime.yfilter)
	|| ydk::is_set(flag.yfilter)
	|| ydk::is_set(regmsg.yfilter)
	|| ydk::is_set(convmsg.yfilter)
	|| ydk::is_set(fecmsg.yfilter)
	|| ydk::is_set(fecadd.yfilter)
	|| ydk::is_set(ileadd.yfilter)
	|| ydk::is_set(fecdel.yfilter)
	|| ydk::is_set(iledel.yfilter)
	|| ydk::is_set(lastxid.yfilter)
	|| ydk::is_set(fecack.yfilter);
}

std::string System::LabeltableItems::ClientItems::ClientsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/labeltable-items/client-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LabeltableItems::ClientItems::ClientsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Clients-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::ClientItems::ClientsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());
    if (mtssap.is_set || is_set(mtssap.yfilter)) leaf_name_data.push_back(mtssap.get_name_leafdata());
    if (staletime.is_set || is_set(staletime.yfilter)) leaf_name_data.push_back(staletime.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());
    if (regmsg.is_set || is_set(regmsg.yfilter)) leaf_name_data.push_back(regmsg.get_name_leafdata());
    if (convmsg.is_set || is_set(convmsg.yfilter)) leaf_name_data.push_back(convmsg.get_name_leafdata());
    if (fecmsg.is_set || is_set(fecmsg.yfilter)) leaf_name_data.push_back(fecmsg.get_name_leafdata());
    if (fecadd.is_set || is_set(fecadd.yfilter)) leaf_name_data.push_back(fecadd.get_name_leafdata());
    if (ileadd.is_set || is_set(ileadd.yfilter)) leaf_name_data.push_back(ileadd.get_name_leafdata());
    if (fecdel.is_set || is_set(fecdel.yfilter)) leaf_name_data.push_back(fecdel.get_name_leafdata());
    if (iledel.is_set || is_set(iledel.yfilter)) leaf_name_data.push_back(iledel.get_name_leafdata());
    if (lastxid.is_set || is_set(lastxid.yfilter)) leaf_name_data.push_back(lastxid.get_name_leafdata());
    if (fecack.is_set || is_set(fecack.yfilter)) leaf_name_data.push_back(fecack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::ClientItems::ClientsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::ClientItems::ClientsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::ClientItems::ClientsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uuid")
    {
        uuid = value;
        uuid.value_namespace = name_space;
        uuid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtsSap")
    {
        mtssap = value;
        mtssap.value_namespace = name_space;
        mtssap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleTime")
    {
        staletime = value;
        staletime.value_namespace = name_space;
        staletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regMsg")
    {
        regmsg = value;
        regmsg.value_namespace = name_space;
        regmsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "convMsg")
    {
        convmsg = value;
        convmsg.value_namespace = name_space;
        convmsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecMsg")
    {
        fecmsg = value;
        fecmsg.value_namespace = name_space;
        fecmsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecAdd")
    {
        fecadd = value;
        fecadd.value_namespace = name_space;
        fecadd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ileAdd")
    {
        ileadd = value;
        ileadd.value_namespace = name_space;
        ileadd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecDel")
    {
        fecdel = value;
        fecdel.value_namespace = name_space;
        fecdel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ileDel")
    {
        iledel = value;
        iledel.value_namespace = name_space;
        iledel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastXid")
    {
        lastxid = value;
        lastxid.value_namespace = name_space;
        lastxid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecAck")
    {
        fecack = value;
        fecack.value_namespace = name_space;
        fecack.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::ClientItems::ClientsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
    if(value_path == "mtsSap")
    {
        mtssap.yfilter = yfilter;
    }
    if(value_path == "staleTime")
    {
        staletime.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
    if(value_path == "regMsg")
    {
        regmsg.yfilter = yfilter;
    }
    if(value_path == "convMsg")
    {
        convmsg.yfilter = yfilter;
    }
    if(value_path == "fecMsg")
    {
        fecmsg.yfilter = yfilter;
    }
    if(value_path == "fecAdd")
    {
        fecadd.yfilter = yfilter;
    }
    if(value_path == "ileAdd")
    {
        ileadd.yfilter = yfilter;
    }
    if(value_path == "fecDel")
    {
        fecdel.yfilter = yfilter;
    }
    if(value_path == "ileDel")
    {
        iledel.yfilter = yfilter;
    }
    if(value_path == "lastXid")
    {
        lastxid.yfilter = yfilter;
    }
    if(value_path == "fecAck")
    {
        fecack.yfilter = yfilter;
    }
}

bool System::LabeltableItems::ClientItems::ClientsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "index" || name == "uuid" || name == "mtsSap" || name == "staleTime" || name == "flag" || name == "regMsg" || name == "convMsg" || name == "fecMsg" || name == "fecAdd" || name == "ileAdd" || name == "fecDel" || name == "ileDel" || name == "lastXid" || name == "fecAck")
        return true;
    return false;
}

System::LabeltableItems::LblrangeItems::LblrangeItems()
    :
    dynlblmin{YType::uint32, "dynLblMin"},
    dynlblmax{YType::uint32, "dynLblMax"},
    staticlblmin{YType::uint32, "staticLblMin"},
    staticlblmax{YType::uint32, "staticLblMax"},
    operdynlblmin{YType::uint32, "operDynLblMin"},
    operdynlblmax{YType::uint32, "operDynLblMax"},
    operstaticlblmin{YType::uint32, "operStaticLblMin"},
    operstaticlblmax{YType::uint32, "operStaticLblMax"},
    operstaticlblsoutofrange{YType::uint32, "operStaticLblsOutOfRange"}
{

    yang_name = "lblrange-items"; yang_parent_name = "labeltable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LabeltableItems::LblrangeItems::~LblrangeItems()
{
}

bool System::LabeltableItems::LblrangeItems::has_data() const
{
    if (is_presence_container) return true;
    return dynlblmin.is_set
	|| dynlblmax.is_set
	|| staticlblmin.is_set
	|| staticlblmax.is_set
	|| operdynlblmin.is_set
	|| operdynlblmax.is_set
	|| operstaticlblmin.is_set
	|| operstaticlblmax.is_set
	|| operstaticlblsoutofrange.is_set;
}

bool System::LabeltableItems::LblrangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynlblmin.yfilter)
	|| ydk::is_set(dynlblmax.yfilter)
	|| ydk::is_set(staticlblmin.yfilter)
	|| ydk::is_set(staticlblmax.yfilter)
	|| ydk::is_set(operdynlblmin.yfilter)
	|| ydk::is_set(operdynlblmax.yfilter)
	|| ydk::is_set(operstaticlblmin.yfilter)
	|| ydk::is_set(operstaticlblmax.yfilter)
	|| ydk::is_set(operstaticlblsoutofrange.yfilter);
}

std::string System::LabeltableItems::LblrangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/labeltable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LabeltableItems::LblrangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lblrange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblrangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynlblmin.is_set || is_set(dynlblmin.yfilter)) leaf_name_data.push_back(dynlblmin.get_name_leafdata());
    if (dynlblmax.is_set || is_set(dynlblmax.yfilter)) leaf_name_data.push_back(dynlblmax.get_name_leafdata());
    if (staticlblmin.is_set || is_set(staticlblmin.yfilter)) leaf_name_data.push_back(staticlblmin.get_name_leafdata());
    if (staticlblmax.is_set || is_set(staticlblmax.yfilter)) leaf_name_data.push_back(staticlblmax.get_name_leafdata());
    if (operdynlblmin.is_set || is_set(operdynlblmin.yfilter)) leaf_name_data.push_back(operdynlblmin.get_name_leafdata());
    if (operdynlblmax.is_set || is_set(operdynlblmax.yfilter)) leaf_name_data.push_back(operdynlblmax.get_name_leafdata());
    if (operstaticlblmin.is_set || is_set(operstaticlblmin.yfilter)) leaf_name_data.push_back(operstaticlblmin.get_name_leafdata());
    if (operstaticlblmax.is_set || is_set(operstaticlblmax.yfilter)) leaf_name_data.push_back(operstaticlblmax.get_name_leafdata());
    if (operstaticlblsoutofrange.is_set || is_set(operstaticlblsoutofrange.yfilter)) leaf_name_data.push_back(operstaticlblsoutofrange.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblrangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblrangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::LblrangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynLblMin")
    {
        dynlblmin = value;
        dynlblmin.value_namespace = name_space;
        dynlblmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynLblMax")
    {
        dynlblmax = value;
        dynlblmax.value_namespace = name_space;
        dynlblmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staticLblMin")
    {
        staticlblmin = value;
        staticlblmin.value_namespace = name_space;
        staticlblmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staticLblMax")
    {
        staticlblmax = value;
        staticlblmax.value_namespace = name_space;
        staticlblmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDynLblMin")
    {
        operdynlblmin = value;
        operdynlblmin.value_namespace = name_space;
        operdynlblmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDynLblMax")
    {
        operdynlblmax = value;
        operdynlblmax.value_namespace = name_space;
        operdynlblmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStaticLblMin")
    {
        operstaticlblmin = value;
        operstaticlblmin.value_namespace = name_space;
        operstaticlblmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStaticLblMax")
    {
        operstaticlblmax = value;
        operstaticlblmax.value_namespace = name_space;
        operstaticlblmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStaticLblsOutOfRange")
    {
        operstaticlblsoutofrange = value;
        operstaticlblsoutofrange.value_namespace = name_space;
        operstaticlblsoutofrange.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblrangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynLblMin")
    {
        dynlblmin.yfilter = yfilter;
    }
    if(value_path == "dynLblMax")
    {
        dynlblmax.yfilter = yfilter;
    }
    if(value_path == "staticLblMin")
    {
        staticlblmin.yfilter = yfilter;
    }
    if(value_path == "staticLblMax")
    {
        staticlblmax.yfilter = yfilter;
    }
    if(value_path == "operDynLblMin")
    {
        operdynlblmin.yfilter = yfilter;
    }
    if(value_path == "operDynLblMax")
    {
        operdynlblmax.yfilter = yfilter;
    }
    if(value_path == "operStaticLblMin")
    {
        operstaticlblmin.yfilter = yfilter;
    }
    if(value_path == "operStaticLblMax")
    {
        operstaticlblmax.yfilter = yfilter;
    }
    if(value_path == "operStaticLblsOutOfRange")
    {
        operstaticlblsoutofrange.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblrangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynLblMin" || name == "dynLblMax" || name == "staticLblMin" || name == "staticLblMax" || name == "operDynLblMin" || name == "operDynLblMax" || name == "operStaticLblMin" || name == "operStaticLblMax" || name == "operStaticLblsOutOfRange")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LblItems()
    :
    labels_list(this, {"label"})
{

    yang_name = "lbl-items"; yang_parent_name = "labeltable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LabeltableItems::LblItems::~LblItems()
{
}

bool System::LabeltableItems::LblItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<labels_list.len(); index++)
    {
        if(labels_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LabeltableItems::LblItems::has_operation() const
{
    for (std::size_t index=0; index<labels_list.len(); index++)
    {
        if(labels_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LabeltableItems::LblItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/labeltable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LabeltableItems::LblItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Labels-list")
    {
        auto ent_ = std::make_shared<System::LabeltableItems::LblItems::LabelsList>();
        ent_->parent = this;
        labels_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : labels_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::LabeltableItems::LblItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LabeltableItems::LblItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LabeltableItems::LblItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Labels-list")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::LabelsList()
    :
    label{YType::uint32, "label"},
    fectype{YType::str, "fecType"},
    labelbytestats{YType::uint64, "labelByteStats"},
    labelpacketstats{YType::uint64, "labelPacketStats"}
        ,
    fecipv4_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecIPv4Items>())
    , fecipv6_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecIPv6Items>())
    , fecpolicyipv4_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items>())
    , fecpolicyipv6_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items>())
    , fecnone_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecNoneItems>())
    , fecsrte_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecSRTEItems>())
    , fecperce_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecPerCEItems>())
    , fecreserved_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecReservedItems>())
    , fecdeagg_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecDeaggItems>())
    , fecadjsid_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems>())
    , nhlfe_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::NhlfeItems>())
{
    fecipv4_items->parent = this;
    fecipv6_items->parent = this;
    fecpolicyipv4_items->parent = this;
    fecpolicyipv6_items->parent = this;
    fecnone_items->parent = this;
    fecsrte_items->parent = this;
    fecperce_items->parent = this;
    fecreserved_items->parent = this;
    fecdeagg_items->parent = this;
    fecadjsid_items->parent = this;
    nhlfe_items->parent = this;

    yang_name = "Labels-list"; yang_parent_name = "lbl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LabeltableItems::LblItems::LabelsList::~LabelsList()
{
}

bool System::LabeltableItems::LblItems::LabelsList::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| fectype.is_set
	|| labelbytestats.is_set
	|| labelpacketstats.is_set
	|| (fecipv4_items !=  nullptr && fecipv4_items->has_data())
	|| (fecipv6_items !=  nullptr && fecipv6_items->has_data())
	|| (fecpolicyipv4_items !=  nullptr && fecpolicyipv4_items->has_data())
	|| (fecpolicyipv6_items !=  nullptr && fecpolicyipv6_items->has_data())
	|| (fecnone_items !=  nullptr && fecnone_items->has_data())
	|| (fecsrte_items !=  nullptr && fecsrte_items->has_data())
	|| (fecperce_items !=  nullptr && fecperce_items->has_data())
	|| (fecreserved_items !=  nullptr && fecreserved_items->has_data())
	|| (fecdeagg_items !=  nullptr && fecdeagg_items->has_data())
	|| (fecadjsid_items !=  nullptr && fecadjsid_items->has_data())
	|| (nhlfe_items !=  nullptr && nhlfe_items->has_data());
}

bool System::LabeltableItems::LblItems::LabelsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(labelbytestats.yfilter)
	|| ydk::is_set(labelpacketstats.yfilter)
	|| (fecipv4_items !=  nullptr && fecipv4_items->has_operation())
	|| (fecipv6_items !=  nullptr && fecipv6_items->has_operation())
	|| (fecpolicyipv4_items !=  nullptr && fecpolicyipv4_items->has_operation())
	|| (fecpolicyipv6_items !=  nullptr && fecpolicyipv6_items->has_operation())
	|| (fecnone_items !=  nullptr && fecnone_items->has_operation())
	|| (fecsrte_items !=  nullptr && fecsrte_items->has_operation())
	|| (fecperce_items !=  nullptr && fecperce_items->has_operation())
	|| (fecreserved_items !=  nullptr && fecreserved_items->has_operation())
	|| (fecdeagg_items !=  nullptr && fecdeagg_items->has_operation())
	|| (fecadjsid_items !=  nullptr && fecadjsid_items->has_operation())
	|| (nhlfe_items !=  nullptr && nhlfe_items->has_operation());
}

std::string System::LabeltableItems::LblItems::LabelsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/labeltable-items/lbl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LabeltableItems::LblItems::LabelsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Labels-list";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (labelbytestats.is_set || is_set(labelbytestats.yfilter)) leaf_name_data.push_back(labelbytestats.get_name_leafdata());
    if (labelpacketstats.is_set || is_set(labelpacketstats.yfilter)) leaf_name_data.push_back(labelpacketstats.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FecIPv4-items")
    {
        if(fecipv4_items == nullptr)
        {
            fecipv4_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecIPv4Items>();
        }
        return fecipv4_items;
    }

    if(child_yang_name == "FecIPv6-items")
    {
        if(fecipv6_items == nullptr)
        {
            fecipv6_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecIPv6Items>();
        }
        return fecipv6_items;
    }

    if(child_yang_name == "FecPolicyIPv4-items")
    {
        if(fecpolicyipv4_items == nullptr)
        {
            fecpolicyipv4_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items>();
        }
        return fecpolicyipv4_items;
    }

    if(child_yang_name == "FecPolicyIPv6-items")
    {
        if(fecpolicyipv6_items == nullptr)
        {
            fecpolicyipv6_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items>();
        }
        return fecpolicyipv6_items;
    }

    if(child_yang_name == "FecNone-items")
    {
        if(fecnone_items == nullptr)
        {
            fecnone_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecNoneItems>();
        }
        return fecnone_items;
    }

    if(child_yang_name == "FecSRTE-items")
    {
        if(fecsrte_items == nullptr)
        {
            fecsrte_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecSRTEItems>();
        }
        return fecsrte_items;
    }

    if(child_yang_name == "FecPerCE-items")
    {
        if(fecperce_items == nullptr)
        {
            fecperce_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecPerCEItems>();
        }
        return fecperce_items;
    }

    if(child_yang_name == "FecReserved-items")
    {
        if(fecreserved_items == nullptr)
        {
            fecreserved_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecReservedItems>();
        }
        return fecreserved_items;
    }

    if(child_yang_name == "FecDeagg-items")
    {
        if(fecdeagg_items == nullptr)
        {
            fecdeagg_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecDeaggItems>();
        }
        return fecdeagg_items;
    }

    if(child_yang_name == "FecAdjSID-items")
    {
        if(fecadjsid_items == nullptr)
        {
            fecadjsid_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems>();
        }
        return fecadjsid_items;
    }

    if(child_yang_name == "Nhlfe-items")
    {
        if(nhlfe_items == nullptr)
        {
            nhlfe_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::NhlfeItems>();
        }
        return nhlfe_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fecipv4_items != nullptr)
    {
        _children["FecIPv4-items"] = fecipv4_items;
    }

    if(fecipv6_items != nullptr)
    {
        _children["FecIPv6-items"] = fecipv6_items;
    }

    if(fecpolicyipv4_items != nullptr)
    {
        _children["FecPolicyIPv4-items"] = fecpolicyipv4_items;
    }

    if(fecpolicyipv6_items != nullptr)
    {
        _children["FecPolicyIPv6-items"] = fecpolicyipv6_items;
    }

    if(fecnone_items != nullptr)
    {
        _children["FecNone-items"] = fecnone_items;
    }

    if(fecsrte_items != nullptr)
    {
        _children["FecSRTE-items"] = fecsrte_items;
    }

    if(fecperce_items != nullptr)
    {
        _children["FecPerCE-items"] = fecperce_items;
    }

    if(fecreserved_items != nullptr)
    {
        _children["FecReserved-items"] = fecreserved_items;
    }

    if(fecdeagg_items != nullptr)
    {
        _children["FecDeagg-items"] = fecdeagg_items;
    }

    if(fecadjsid_items != nullptr)
    {
        _children["FecAdjSID-items"] = fecadjsid_items;
    }

    if(nhlfe_items != nullptr)
    {
        _children["Nhlfe-items"] = nhlfe_items;
    }

    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labelByteStats")
    {
        labelbytestats = value;
        labelbytestats.value_namespace = name_space;
        labelbytestats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labelPacketStats")
    {
        labelpacketstats = value;
        labelpacketstats.value_namespace = name_space;
        labelpacketstats.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "labelByteStats")
    {
        labelbytestats.yfilter = yfilter;
    }
    if(value_path == "labelPacketStats")
    {
        labelpacketstats.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FecIPv4-items" || name == "FecIPv6-items" || name == "FecPolicyIPv4-items" || name == "FecPolicyIPv6-items" || name == "FecNone-items" || name == "FecSRTE-items" || name == "FecPerCE-items" || name == "FecReserved-items" || name == "FecDeagg-items" || name == "FecAdjSID-items" || name == "Nhlfe-items" || name == "label" || name == "fecType" || name == "labelByteStats" || name == "labelPacketStats")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::FecIPv4Items()
    :
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"},
    prefix{YType::str, "prefix"},
    masklength{YType::uint8, "maskLength"}
{

    yang_name = "FecIPv4-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::~FecIPv4Items()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::has_data() const
{
    if (is_presence_container) return true;
    return fectype.is_set
	|| state.is_set
	|| tableid.is_set
	|| prefix.is_set
	|| masklength.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(masklength.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecIPv4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (masklength.is_set || is_set(masklength.yfilter)) leaf_name_data.push_back(masklength.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maskLength")
    {
        masklength = value;
        masklength.value_namespace = name_space;
        masklength.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "maskLength")
    {
        masklength.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecType" || name == "state" || name == "tableId" || name == "prefix" || name == "maskLength")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::FecIPv6Items()
    :
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"},
    prefix{YType::str, "prefix"},
    masklength{YType::uint8, "maskLength"}
{

    yang_name = "FecIPv6-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::~FecIPv6Items()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::has_data() const
{
    if (is_presence_container) return true;
    return fectype.is_set
	|| state.is_set
	|| tableid.is_set
	|| prefix.is_set
	|| masklength.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(masklength.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecIPv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (masklength.is_set || is_set(masklength.yfilter)) leaf_name_data.push_back(masklength.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maskLength")
    {
        masklength = value;
        masklength.value_namespace = name_space;
        masklength.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "maskLength")
    {
        masklength.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecType" || name == "state" || name == "tableId" || name == "prefix" || name == "maskLength")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::FecPolicyIPv4Items()
    :
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"},
    prefix{YType::str, "prefix"},
    masklength{YType::uint8, "maskLength"}
{

    yang_name = "FecPolicyIPv4-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::~FecPolicyIPv4Items()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::has_data() const
{
    if (is_presence_container) return true;
    return fectype.is_set
	|| state.is_set
	|| tableid.is_set
	|| prefix.is_set
	|| masklength.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(masklength.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecPolicyIPv4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (masklength.is_set || is_set(masklength.yfilter)) leaf_name_data.push_back(masklength.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maskLength")
    {
        masklength = value;
        masklength.value_namespace = name_space;
        masklength.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "maskLength")
    {
        masklength.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecType" || name == "state" || name == "tableId" || name == "prefix" || name == "maskLength")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::FecPolicyIPv6Items()
    :
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"},
    prefix{YType::str, "prefix"},
    masklength{YType::uint8, "maskLength"}
{

    yang_name = "FecPolicyIPv6-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::~FecPolicyIPv6Items()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::has_data() const
{
    if (is_presence_container) return true;
    return fectype.is_set
	|| state.is_set
	|| tableid.is_set
	|| prefix.is_set
	|| masklength.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(masklength.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecPolicyIPv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (masklength.is_set || is_set(masklength.yfilter)) leaf_name_data.push_back(masklength.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maskLength")
    {
        masklength = value;
        masklength.value_namespace = name_space;
        masklength.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "maskLength")
    {
        masklength.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecType" || name == "state" || name == "tableId" || name == "prefix" || name == "maskLength")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecNoneItems::FecNoneItems()
    :
    label{YType::uint32, "label"},
    fectype{YType::str, "fecType"},
    state{YType::str, "state"}
{

    yang_name = "FecNone-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecNoneItems::~FecNoneItems()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecNoneItems::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| fectype.is_set
	|| state.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecNoneItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecNoneItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecNone-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecNoneItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::FecNoneItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::FecNoneItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::FecNoneItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecNoneItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecNoneItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "fecType" || name == "state")
        return true;
    return false;
}


}
}

