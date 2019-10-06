
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_19.hpp"
#include "Cisco_NX_OS_device_20.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::PeerlinkItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    id{YType::str, "id"},
    adminst{YType::enumeration, "adminSt"}
        ,
    rtvrfmbr_items(std::make_shared<System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "peerlink-items"; yang_parent_name = "keepalive-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::~PeerlinkItems()
{
}

bool System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| id.is_set
	|| adminst.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vpc-items/inst-items/dom-items/keepalive-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peerlink-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::get_children() const
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

void System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "name" || name == "descr" || name == "id" || name == "adminSt")
        return true;
    return false;
}

System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "peerlink-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vpc-items/inst-items/dom-items/keepalive-items/peerlink-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "peerlink-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vpc-items/inst-items/dom-items/keepalive-items/peerlink-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::get_children() const
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

void System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vpc-items/inst-items/dom-items/keepalive-items/peerlink-items/rtnwPathToIf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::VpcItems::InstItems::DomItems::ParamsItems::ParamsItems()
    :
    appparams_list(this, {"appid"})
{

    yang_name = "params-items"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcItems::InstItems::DomItems::ParamsItems::~ParamsItems()
{
}

bool System::VpcItems::InstItems::DomItems::ParamsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<appparams_list.len(); index++)
    {
        if(appparams_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VpcItems::InstItems::DomItems::ParamsItems::has_operation() const
{
    for (std::size_t index=0; index<appparams_list.len(); index++)
    {
        if(appparams_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VpcItems::InstItems::DomItems::ParamsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vpc-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcItems::InstItems::DomItems::ParamsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "params-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::DomItems::ParamsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::DomItems::ParamsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AppParams-list")
    {
        auto ent_ = std::make_shared<System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList>();
        ent_->parent = this;
        appparams_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::DomItems::ParamsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : appparams_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VpcItems::InstItems::DomItems::ParamsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VpcItems::InstItems::DomItems::ParamsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VpcItems::InstItems::DomItems::ParamsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AppParams-list")
        return true;
    return false;
}

System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::AppParamsList()
    :
    appid{YType::uint32, "appId"},
    locrsncode{YType::uint32, "locRsnCode"},
    locparamlen{YType::uint32, "locParamLen"},
    locparamval{YType::str, "locParamVal"},
    remrsncode{YType::uint32, "remRsnCode"},
    remparamlen{YType::uint32, "remParamLen"},
    remparamval{YType::str, "remParamVal"}
        ,
    param_items(std::make_shared<System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems>())
{
    param_items->parent = this;

    yang_name = "AppParams-list"; yang_parent_name = "params-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::~AppParamsList()
{
}

bool System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::has_data() const
{
    if (is_presence_container) return true;
    return appid.is_set
	|| locrsncode.is_set
	|| locparamlen.is_set
	|| locparamval.is_set
	|| remrsncode.is_set
	|| remparamlen.is_set
	|| remparamval.is_set
	|| (param_items !=  nullptr && param_items->has_data());
}

bool System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appid.yfilter)
	|| ydk::is_set(locrsncode.yfilter)
	|| ydk::is_set(locparamlen.yfilter)
	|| ydk::is_set(locparamval.yfilter)
	|| ydk::is_set(remrsncode.yfilter)
	|| ydk::is_set(remparamlen.yfilter)
	|| ydk::is_set(remparamval.yfilter)
	|| (param_items !=  nullptr && param_items->has_operation());
}

std::string System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vpc-items/inst-items/dom-items/params-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AppParams-list";
    ADD_KEY_TOKEN(appid, "appId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appid.is_set || is_set(appid.yfilter)) leaf_name_data.push_back(appid.get_name_leafdata());
    if (locrsncode.is_set || is_set(locrsncode.yfilter)) leaf_name_data.push_back(locrsncode.get_name_leafdata());
    if (locparamlen.is_set || is_set(locparamlen.yfilter)) leaf_name_data.push_back(locparamlen.get_name_leafdata());
    if (locparamval.is_set || is_set(locparamval.yfilter)) leaf_name_data.push_back(locparamval.get_name_leafdata());
    if (remrsncode.is_set || is_set(remrsncode.yfilter)) leaf_name_data.push_back(remrsncode.get_name_leafdata());
    if (remparamlen.is_set || is_set(remparamlen.yfilter)) leaf_name_data.push_back(remparamlen.get_name_leafdata());
    if (remparamval.is_set || is_set(remparamval.yfilter)) leaf_name_data.push_back(remparamval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "param-items")
    {
        if(param_items == nullptr)
        {
            param_items = std::make_shared<System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems>();
        }
        return param_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(param_items != nullptr)
    {
        _children["param-items"] = param_items;
    }

    return _children;
}

void System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "appId")
    {
        appid = value;
        appid.value_namespace = name_space;
        appid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locRsnCode")
    {
        locrsncode = value;
        locrsncode.value_namespace = name_space;
        locrsncode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locParamLen")
    {
        locparamlen = value;
        locparamlen.value_namespace = name_space;
        locparamlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locParamVal")
    {
        locparamval = value;
        locparamval.value_namespace = name_space;
        locparamval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remRsnCode")
    {
        remrsncode = value;
        remrsncode.value_namespace = name_space;
        remrsncode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remParamLen")
    {
        remparamlen = value;
        remparamlen.value_namespace = name_space;
        remparamlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remParamVal")
    {
        remparamval = value;
        remparamval.value_namespace = name_space;
        remparamval.value_namespace_prefix = name_space_prefix;
    }
}

void System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "appId")
    {
        appid.yfilter = yfilter;
    }
    if(value_path == "locRsnCode")
    {
        locrsncode.yfilter = yfilter;
    }
    if(value_path == "locParamLen")
    {
        locparamlen.yfilter = yfilter;
    }
    if(value_path == "locParamVal")
    {
        locparamval.yfilter = yfilter;
    }
    if(value_path == "remRsnCode")
    {
        remrsncode.yfilter = yfilter;
    }
    if(value_path == "remParamLen")
    {
        remparamlen.yfilter = yfilter;
    }
    if(value_path == "remParamVal")
    {
        remparamval.yfilter = yfilter;
    }
}

bool System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "param-items" || name == "appId" || name == "locRsnCode" || name == "locParamLen" || name == "locParamVal" || name == "remRsnCode" || name == "remParamLen" || name == "remParamVal")
        return true;
    return false;
}

System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::ParamItems()
    :
    appparaminfo_list(this, {"paramname"})
{

    yang_name = "param-items"; yang_parent_name = "AppParams-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::~ParamItems()
{
}

bool System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<appparaminfo_list.len(); index++)
    {
        if(appparaminfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::has_operation() const
{
    for (std::size_t index=0; index<appparaminfo_list.len(); index++)
    {
        if(appparaminfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "param-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AppParamInfo-list")
    {
        auto ent_ = std::make_shared<System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::AppParamInfoList>();
        ent_->parent = this;
        appparaminfo_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : appparaminfo_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AppParamInfo-list")
        return true;
    return false;
}

System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::AppParamInfoList()
    :
    paramname{YType::str, "paramName"},
    paramtype{YType::enumeration, "paramType"},
    locparamval{YType::str, "locParamVal"},
    remparamval{YType::str, "remParamVal"}
{

    yang_name = "AppParamInfo-list"; yang_parent_name = "param-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::~AppParamInfoList()
{
}

bool System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::has_data() const
{
    if (is_presence_container) return true;
    return paramname.is_set
	|| paramtype.is_set
	|| locparamval.is_set
	|| remparamval.is_set;
}

bool System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(paramname.yfilter)
	|| ydk::is_set(paramtype.yfilter)
	|| ydk::is_set(locparamval.yfilter)
	|| ydk::is_set(remparamval.yfilter);
}

std::string System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AppParamInfo-list";
    ADD_KEY_TOKEN(paramname, "paramName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (paramname.is_set || is_set(paramname.yfilter)) leaf_name_data.push_back(paramname.get_name_leafdata());
    if (paramtype.is_set || is_set(paramtype.yfilter)) leaf_name_data.push_back(paramtype.get_name_leafdata());
    if (locparamval.is_set || is_set(locparamval.yfilter)) leaf_name_data.push_back(locparamval.get_name_leafdata());
    if (remparamval.is_set || is_set(remparamval.yfilter)) leaf_name_data.push_back(remparamval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "paramName")
    {
        paramname = value;
        paramname.value_namespace = name_space;
        paramname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paramType")
    {
        paramtype = value;
        paramtype.value_namespace = name_space;
        paramtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locParamVal")
    {
        locparamval = value;
        locparamval.value_namespace = name_space;
        locparamval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remParamVal")
    {
        remparamval = value;
        remparamval.value_namespace = name_space;
        remparamval.value_namespace_prefix = name_space_prefix;
    }
}

void System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "paramName")
    {
        paramname.yfilter = yfilter;
    }
    if(value_path == "paramType")
    {
        paramtype.yfilter = yfilter;
    }
    if(value_path == "locParamVal")
    {
        locparamval.yfilter = yfilter;
    }
    if(value_path == "remParamVal")
    {
        remparamval.yfilter = yfilter;
    }
}

bool System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paramName" || name == "paramType" || name == "locParamVal" || name == "remParamVal")
        return true;
    return false;
}

System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems::RsvpcInstPolConsItems()
    :
    tdn{YType::str, "tDn"},
    protgep{YType::str, "protGEp"}
{

    yang_name = "rsvpcInstPolCons-items"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems::~RsvpcInstPolConsItems()
{
}

bool System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| protgep.is_set;
}

bool System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(protgep.yfilter);
}

std::string System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vpc-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpcInstPolCons-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (protgep.is_set || is_set(protgep.yfilter)) leaf_name_data.push_back(protgep.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protGEp")
    {
        protgep = value;
        protgep.value_namespace = name_space;
        protgep.value_namespace_prefix = name_space_prefix;
    }
}

void System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "protGEp")
    {
        protgep.yfilter = yfilter;
    }
}

bool System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "protGEp")
        return true;
    return false;
}

System::EpnsItems::EpnsItems()
    :
    epcount{YType::uint32, "epCount"}
{

    yang_name = "epns-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EpnsItems::~EpnsItems()
{
}

bool System::EpnsItems::has_data() const
{
    if (is_presence_container) return true;
    return epcount.is_set;
}

bool System::EpnsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(epcount.yfilter);
}

std::string System::EpnsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EpnsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epns-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpnsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (epcount.is_set || is_set(epcount.yfilter)) leaf_name_data.push_back(epcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpnsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpnsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EpnsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "epCount")
    {
        epcount = value;
        epcount.value_namespace = name_space;
        epcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpnsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "epCount")
    {
        epcount.yfilter = yfilter;
    }
}

bool System::EpnsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "epCount")
        return true;
    return false;
}

System::GoldItems::GoldItems()
    :
    description{YType::str, "description"}
        ,
    module_items(std::make_shared<System::GoldItems::ModuleItems>())
{
    module_items->parent = this;

    yang_name = "gold-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::GoldItems::~GoldItems()
{
}

bool System::GoldItems::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| (module_items !=  nullptr && module_items->has_data());
}

bool System::GoldItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (module_items !=  nullptr && module_items->has_operation());
}

std::string System::GoldItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::GoldItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gold-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::GoldItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::GoldItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "module-items")
    {
        if(module_items == nullptr)
        {
            module_items = std::make_shared<System::GoldItems::ModuleItems>();
        }
        return module_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::GoldItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(module_items != nullptr)
    {
        _children["module-items"] = module_items;
    }

    return _children;
}

void System::GoldItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void System::GoldItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool System::GoldItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "module-items" || name == "description")
        return true;
    return false;
}

System::GoldItems::ModuleItems::ModuleItems()
    :
    module_list(this, {"id"})
{

    yang_name = "module-items"; yang_parent_name = "gold-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::GoldItems::ModuleItems::~ModuleItems()
{
}

bool System::GoldItems::ModuleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<module_list.len(); index++)
    {
        if(module_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::GoldItems::ModuleItems::has_operation() const
{
    for (std::size_t index=0; index<module_list.len(); index++)
    {
        if(module_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::GoldItems::ModuleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/gold-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::GoldItems::ModuleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::GoldItems::ModuleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::GoldItems::ModuleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Module-list")
    {
        auto ent_ = std::make_shared<System::GoldItems::ModuleItems::ModuleList>();
        ent_->parent = this;
        module_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::GoldItems::ModuleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : module_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::GoldItems::ModuleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::GoldItems::ModuleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::GoldItems::ModuleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Module-list")
        return true;
    return false;
}

System::GoldItems::ModuleItems::ModuleList::ModuleList()
    :
    id{YType::uint32, "id"},
    description{YType::str, "description"},
    diagbootlevel{YType::enumeration, "diagBootLevel"},
    diagstatus{YType::enumeration, "diagStatus"}
        ,
    test_items(std::make_shared<System::GoldItems::ModuleItems::ModuleList::TestItems>())
{
    test_items->parent = this;

    yang_name = "Module-list"; yang_parent_name = "module-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::GoldItems::ModuleItems::ModuleList::~ModuleList()
{
}

bool System::GoldItems::ModuleItems::ModuleList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| description.is_set
	|| diagbootlevel.is_set
	|| diagstatus.is_set
	|| (test_items !=  nullptr && test_items->has_data());
}

bool System::GoldItems::ModuleItems::ModuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(diagbootlevel.yfilter)
	|| ydk::is_set(diagstatus.yfilter)
	|| (test_items !=  nullptr && test_items->has_operation());
}

std::string System::GoldItems::ModuleItems::ModuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/gold-items/module-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::GoldItems::ModuleItems::ModuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Module-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::GoldItems::ModuleItems::ModuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (diagbootlevel.is_set || is_set(diagbootlevel.yfilter)) leaf_name_data.push_back(diagbootlevel.get_name_leafdata());
    if (diagstatus.is_set || is_set(diagstatus.yfilter)) leaf_name_data.push_back(diagstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::GoldItems::ModuleItems::ModuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test-items")
    {
        if(test_items == nullptr)
        {
            test_items = std::make_shared<System::GoldItems::ModuleItems::ModuleList::TestItems>();
        }
        return test_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::GoldItems::ModuleItems::ModuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(test_items != nullptr)
    {
        _children["test-items"] = test_items;
    }

    return _children;
}

void System::GoldItems::ModuleItems::ModuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagBootLevel")
    {
        diagbootlevel = value;
        diagbootlevel.value_namespace = name_space;
        diagbootlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagStatus")
    {
        diagstatus = value;
        diagstatus.value_namespace = name_space;
        diagstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::GoldItems::ModuleItems::ModuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "diagBootLevel")
    {
        diagbootlevel.yfilter = yfilter;
    }
    if(value_path == "diagStatus")
    {
        diagstatus.yfilter = yfilter;
    }
}

bool System::GoldItems::ModuleItems::ModuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test-items" || name == "id" || name == "description" || name == "diagBootLevel" || name == "diagStatus")
        return true;
    return false;
}

System::GoldItems::ModuleItems::ModuleList::TestItems::TestItems()
    :
    test_list(this, {"id"})
{

    yang_name = "test-items"; yang_parent_name = "Module-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::GoldItems::ModuleItems::ModuleList::TestItems::~TestItems()
{
}

bool System::GoldItems::ModuleItems::ModuleList::TestItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<test_list.len(); index++)
    {
        if(test_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::GoldItems::ModuleItems::ModuleList::TestItems::has_operation() const
{
    for (std::size_t index=0; index<test_list.len(); index++)
    {
        if(test_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::GoldItems::ModuleItems::ModuleList::TestItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::GoldItems::ModuleItems::ModuleList::TestItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::GoldItems::ModuleItems::ModuleList::TestItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Test-list")
    {
        auto ent_ = std::make_shared<System::GoldItems::ModuleItems::ModuleList::TestItems::TestList>();
        ent_->parent = this;
        test_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::GoldItems::ModuleItems::ModuleList::TestItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : test_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::GoldItems::ModuleItems::ModuleList::TestItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::GoldItems::ModuleItems::ModuleList::TestItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::GoldItems::ModuleItems::ModuleList::TestItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Test-list")
        return true;
    return false;
}

System::GoldItems::ModuleItems::ModuleList::TestItems::TestList::TestList()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    firstfailtime{YType::str, "firstFailTime"},
    lastfailtime{YType::str, "lastFailTime"},
    lastexecutiontime{YType::str, "lastExecutionTime"},
    lastpasstime{YType::str, "lastPassTime"},
    nextexecutiontime{YType::str, "nextExecutionTime"},
    result{YType::enumeration, "result"},
    resultreason{YType::str, "resultReason"},
    runcount{YType::uint32, "runCount"},
    failcount{YType::uint32, "failCount"},
    consecutivefailcount{YType::uint32, "consecutiveFailCount"},
    portsaborted{YType::str, "portsAborted"},
    portserrordisabled{YType::str, "portsErrorDisabled"},
    portsfailing{YType::str, "portsFailing"},
    portsincomplete{YType::str, "portsIncomplete"},
    portspassing{YType::str, "portsPassing"},
    portsuntested{YType::str, "portsUntested"},
    testattributes{YType::str, "testAttributes"},
    testinterval{YType::str, "testInterval"}
{

    yang_name = "Test-list"; yang_parent_name = "test-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::GoldItems::ModuleItems::ModuleList::TestItems::TestList::~TestList()
{
}

bool System::GoldItems::ModuleItems::ModuleList::TestItems::TestList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| firstfailtime.is_set
	|| lastfailtime.is_set
	|| lastexecutiontime.is_set
	|| lastpasstime.is_set
	|| nextexecutiontime.is_set
	|| result.is_set
	|| resultreason.is_set
	|| runcount.is_set
	|| failcount.is_set
	|| consecutivefailcount.is_set
	|| portsaborted.is_set
	|| portserrordisabled.is_set
	|| portsfailing.is_set
	|| portsincomplete.is_set
	|| portspassing.is_set
	|| portsuntested.is_set
	|| testattributes.is_set
	|| testinterval.is_set;
}

bool System::GoldItems::ModuleItems::ModuleList::TestItems::TestList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(firstfailtime.yfilter)
	|| ydk::is_set(lastfailtime.yfilter)
	|| ydk::is_set(lastexecutiontime.yfilter)
	|| ydk::is_set(lastpasstime.yfilter)
	|| ydk::is_set(nextexecutiontime.yfilter)
	|| ydk::is_set(result.yfilter)
	|| ydk::is_set(resultreason.yfilter)
	|| ydk::is_set(runcount.yfilter)
	|| ydk::is_set(failcount.yfilter)
	|| ydk::is_set(consecutivefailcount.yfilter)
	|| ydk::is_set(portsaborted.yfilter)
	|| ydk::is_set(portserrordisabled.yfilter)
	|| ydk::is_set(portsfailing.yfilter)
	|| ydk::is_set(portsincomplete.yfilter)
	|| ydk::is_set(portspassing.yfilter)
	|| ydk::is_set(portsuntested.yfilter)
	|| ydk::is_set(testattributes.yfilter)
	|| ydk::is_set(testinterval.yfilter);
}

std::string System::GoldItems::ModuleItems::ModuleList::TestItems::TestList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Test-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::GoldItems::ModuleItems::ModuleList::TestItems::TestList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (firstfailtime.is_set || is_set(firstfailtime.yfilter)) leaf_name_data.push_back(firstfailtime.get_name_leafdata());
    if (lastfailtime.is_set || is_set(lastfailtime.yfilter)) leaf_name_data.push_back(lastfailtime.get_name_leafdata());
    if (lastexecutiontime.is_set || is_set(lastexecutiontime.yfilter)) leaf_name_data.push_back(lastexecutiontime.get_name_leafdata());
    if (lastpasstime.is_set || is_set(lastpasstime.yfilter)) leaf_name_data.push_back(lastpasstime.get_name_leafdata());
    if (nextexecutiontime.is_set || is_set(nextexecutiontime.yfilter)) leaf_name_data.push_back(nextexecutiontime.get_name_leafdata());
    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());
    if (resultreason.is_set || is_set(resultreason.yfilter)) leaf_name_data.push_back(resultreason.get_name_leafdata());
    if (runcount.is_set || is_set(runcount.yfilter)) leaf_name_data.push_back(runcount.get_name_leafdata());
    if (failcount.is_set || is_set(failcount.yfilter)) leaf_name_data.push_back(failcount.get_name_leafdata());
    if (consecutivefailcount.is_set || is_set(consecutivefailcount.yfilter)) leaf_name_data.push_back(consecutivefailcount.get_name_leafdata());
    if (portsaborted.is_set || is_set(portsaborted.yfilter)) leaf_name_data.push_back(portsaborted.get_name_leafdata());
    if (portserrordisabled.is_set || is_set(portserrordisabled.yfilter)) leaf_name_data.push_back(portserrordisabled.get_name_leafdata());
    if (portsfailing.is_set || is_set(portsfailing.yfilter)) leaf_name_data.push_back(portsfailing.get_name_leafdata());
    if (portsincomplete.is_set || is_set(portsincomplete.yfilter)) leaf_name_data.push_back(portsincomplete.get_name_leafdata());
    if (portspassing.is_set || is_set(portspassing.yfilter)) leaf_name_data.push_back(portspassing.get_name_leafdata());
    if (portsuntested.is_set || is_set(portsuntested.yfilter)) leaf_name_data.push_back(portsuntested.get_name_leafdata());
    if (testattributes.is_set || is_set(testattributes.yfilter)) leaf_name_data.push_back(testattributes.get_name_leafdata());
    if (testinterval.is_set || is_set(testinterval.yfilter)) leaf_name_data.push_back(testinterval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::GoldItems::ModuleItems::ModuleList::TestItems::TestList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::GoldItems::ModuleItems::ModuleList::TestItems::TestList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::GoldItems::ModuleItems::ModuleList::TestItems::TestList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "firstFailTime")
    {
        firstfailtime = value;
        firstfailtime.value_namespace = name_space;
        firstfailtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastFailTime")
    {
        lastfailtime = value;
        lastfailtime.value_namespace = name_space;
        lastfailtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastExecutionTime")
    {
        lastexecutiontime = value;
        lastexecutiontime.value_namespace = name_space;
        lastexecutiontime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastPassTime")
    {
        lastpasstime = value;
        lastpasstime.value_namespace = name_space;
        lastpasstime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextExecutionTime")
    {
        nextexecutiontime = value;
        nextexecutiontime.value_namespace = name_space;
        nextexecutiontime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resultReason")
    {
        resultreason = value;
        resultreason.value_namespace = name_space;
        resultreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runCount")
    {
        runcount = value;
        runcount.value_namespace = name_space;
        runcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failCount")
    {
        failcount = value;
        failcount.value_namespace = name_space;
        failcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "consecutiveFailCount")
    {
        consecutivefailcount = value;
        consecutivefailcount.value_namespace = name_space;
        consecutivefailcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portsAborted")
    {
        portsaborted = value;
        portsaborted.value_namespace = name_space;
        portsaborted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portsErrorDisabled")
    {
        portserrordisabled = value;
        portserrordisabled.value_namespace = name_space;
        portserrordisabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portsFailing")
    {
        portsfailing = value;
        portsfailing.value_namespace = name_space;
        portsfailing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portsIncomplete")
    {
        portsincomplete = value;
        portsincomplete.value_namespace = name_space;
        portsincomplete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portsPassing")
    {
        portspassing = value;
        portspassing.value_namespace = name_space;
        portspassing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portsUntested")
    {
        portsuntested = value;
        portsuntested.value_namespace = name_space;
        portsuntested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "testAttributes")
    {
        testattributes = value;
        testattributes.value_namespace = name_space;
        testattributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "testInterval")
    {
        testinterval = value;
        testinterval.value_namespace = name_space;
        testinterval.value_namespace_prefix = name_space_prefix;
    }
}

void System::GoldItems::ModuleItems::ModuleList::TestItems::TestList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "firstFailTime")
    {
        firstfailtime.yfilter = yfilter;
    }
    if(value_path == "lastFailTime")
    {
        lastfailtime.yfilter = yfilter;
    }
    if(value_path == "lastExecutionTime")
    {
        lastexecutiontime.yfilter = yfilter;
    }
    if(value_path == "lastPassTime")
    {
        lastpasstime.yfilter = yfilter;
    }
    if(value_path == "nextExecutionTime")
    {
        nextexecutiontime.yfilter = yfilter;
    }
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
    if(value_path == "resultReason")
    {
        resultreason.yfilter = yfilter;
    }
    if(value_path == "runCount")
    {
        runcount.yfilter = yfilter;
    }
    if(value_path == "failCount")
    {
        failcount.yfilter = yfilter;
    }
    if(value_path == "consecutiveFailCount")
    {
        consecutivefailcount.yfilter = yfilter;
    }
    if(value_path == "portsAborted")
    {
        portsaborted.yfilter = yfilter;
    }
    if(value_path == "portsErrorDisabled")
    {
        portserrordisabled.yfilter = yfilter;
    }
    if(value_path == "portsFailing")
    {
        portsfailing.yfilter = yfilter;
    }
    if(value_path == "portsIncomplete")
    {
        portsincomplete.yfilter = yfilter;
    }
    if(value_path == "portsPassing")
    {
        portspassing.yfilter = yfilter;
    }
    if(value_path == "portsUntested")
    {
        portsuntested.yfilter = yfilter;
    }
    if(value_path == "testAttributes")
    {
        testattributes.yfilter = yfilter;
    }
    if(value_path == "testInterval")
    {
        testinterval.yfilter = yfilter;
    }
}

bool System::GoldItems::ModuleItems::ModuleList::TestItems::TestList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "firstFailTime" || name == "lastFailTime" || name == "lastExecutionTime" || name == "lastPassTime" || name == "nextExecutionTime" || name == "result" || name == "resultReason" || name == "runCount" || name == "failCount" || name == "consecutiveFailCount" || name == "portsAborted" || name == "portsErrorDisabled" || name == "portsFailing" || name == "portsIncomplete" || name == "portsPassing" || name == "portsUntested" || name == "testAttributes" || name == "testInterval")
        return true;
    return false;
}

System::IgmpItems::IgmpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::IgmpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "igmp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpItems::~IgmpItems()
{
}

bool System::IgmpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::IgmpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::IgmpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::IgmpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::IgmpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::IgmpItems::InstItems::InstItems()
    :
    heavytemplate{YType::boolean, "heavyTemplate"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    instctrl{YType::str, "instCtrl"},
    bootupdelay{YType::uint16, "bootupDelay"},
    flushroute{YType::boolean, "flushRoute"},
    rtralert{YType::boolean, "rtrAlert"},
    anyquerydest{YType::boolean, "anyQueryDest"}
        ,
    extdom_items(std::make_shared<System::IgmpItems::InstItems::ExtdomItems>())
    , dom_items(std::make_shared<System::IgmpItems::InstItems::DomItems>())
    , routedb_items(std::make_shared<System::IgmpItems::InstItems::RoutedbItems>())
{
    extdom_items->parent = this;
    dom_items->parent = this;
    routedb_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "igmp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpItems::InstItems::~InstItems()
{
}

bool System::IgmpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return heavytemplate.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| instctrl.is_set
	|| bootupdelay.is_set
	|| flushroute.is_set
	|| rtralert.is_set
	|| anyquerydest.is_set
	|| (extdom_items !=  nullptr && extdom_items->has_data())
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (routedb_items !=  nullptr && routedb_items->has_data());
}

bool System::IgmpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(heavytemplate.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(instctrl.yfilter)
	|| ydk::is_set(bootupdelay.yfilter)
	|| ydk::is_set(flushroute.yfilter)
	|| ydk::is_set(rtralert.yfilter)
	|| ydk::is_set(anyquerydest.yfilter)
	|| (extdom_items !=  nullptr && extdom_items->has_operation())
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (routedb_items !=  nullptr && routedb_items->has_operation());
}

std::string System::IgmpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (heavytemplate.is_set || is_set(heavytemplate.yfilter)) leaf_name_data.push_back(heavytemplate.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (instctrl.is_set || is_set(instctrl.yfilter)) leaf_name_data.push_back(instctrl.get_name_leafdata());
    if (bootupdelay.is_set || is_set(bootupdelay.yfilter)) leaf_name_data.push_back(bootupdelay.get_name_leafdata());
    if (flushroute.is_set || is_set(flushroute.yfilter)) leaf_name_data.push_back(flushroute.get_name_leafdata());
    if (rtralert.is_set || is_set(rtralert.yfilter)) leaf_name_data.push_back(rtralert.get_name_leafdata());
    if (anyquerydest.is_set || is_set(anyquerydest.yfilter)) leaf_name_data.push_back(anyquerydest.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extdom-items")
    {
        if(extdom_items == nullptr)
        {
            extdom_items = std::make_shared<System::IgmpItems::InstItems::ExtdomItems>();
        }
        return extdom_items;
    }

    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::IgmpItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "routedb-items")
    {
        if(routedb_items == nullptr)
        {
            routedb_items = std::make_shared<System::IgmpItems::InstItems::RoutedbItems>();
        }
        return routedb_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(extdom_items != nullptr)
    {
        _children["extdom-items"] = extdom_items;
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

void System::IgmpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "heavyTemplate")
    {
        heavytemplate = value;
        heavytemplate.value_namespace = name_space;
        heavytemplate.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "instCtrl")
    {
        instctrl = value;
        instctrl.value_namespace = name_space;
        instctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootupDelay")
    {
        bootupdelay = value;
        bootupdelay.value_namespace = name_space;
        bootupdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flushRoute")
    {
        flushroute = value;
        flushroute.value_namespace = name_space;
        flushroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrAlert")
    {
        rtralert = value;
        rtralert.value_namespace = name_space;
        rtralert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anyQueryDest")
    {
        anyquerydest = value;
        anyquerydest.value_namespace = name_space;
        anyquerydest.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "heavyTemplate")
    {
        heavytemplate.yfilter = yfilter;
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
    if(value_path == "instCtrl")
    {
        instctrl.yfilter = yfilter;
    }
    if(value_path == "bootupDelay")
    {
        bootupdelay.yfilter = yfilter;
    }
    if(value_path == "flushRoute")
    {
        flushroute.yfilter = yfilter;
    }
    if(value_path == "rtrAlert")
    {
        rtralert.yfilter = yfilter;
    }
    if(value_path == "anyQueryDest")
    {
        anyquerydest.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extdom-items" || name == "dom-items" || name == "routedb-items" || name == "heavyTemplate" || name == "name" || name == "adminSt" || name == "ctrl" || name == "instCtrl" || name == "bootupDelay" || name == "flushRoute" || name == "rtrAlert" || name == "anyQueryDest")
        return true;
    return false;
}

System::IgmpItems::InstItems::ExtdomItems::ExtdomItems()
    :
    extdom_list(this, {"id"})
{

    yang_name = "extdom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpItems::InstItems::ExtdomItems::~ExtdomItems()
{
}

bool System::IgmpItems::InstItems::ExtdomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extdom_list.len(); index++)
    {
        if(extdom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::ExtdomItems::has_operation() const
{
    for (std::size_t index=0; index<extdom_list.len(); index++)
    {
        if(extdom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::ExtdomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpItems::InstItems::ExtdomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extdom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::ExtdomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::ExtdomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtDom-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::ExtdomItems::ExtDomList>();
        ent_->parent = this;
        extdom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::ExtdomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extdom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpItems::InstItems::ExtdomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::ExtdomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::ExtdomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtDom-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtDomList()
    :
    id{YType::uint32, "id"},
    ver{YType::enumeration, "ver"},
    name{YType::str, "name"}
        ,
    extif_items(std::make_shared<System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems>())
{
    extif_items->parent = this;

    yang_name = "ExtDom-list"; yang_parent_name = "extdom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpItems::InstItems::ExtdomItems::ExtDomList::~ExtDomList()
{
}

bool System::IgmpItems::InstItems::ExtdomItems::ExtDomList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ver.is_set
	|| name.is_set
	|| (extif_items !=  nullptr && extif_items->has_data());
}

bool System::IgmpItems::InstItems::ExtdomItems::ExtDomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (extif_items !=  nullptr && extif_items->has_operation());
}

std::string System::IgmpItems::InstItems::ExtdomItems::ExtDomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmp-items/inst-items/extdom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpItems::InstItems::ExtdomItems::ExtDomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtDom-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::ExtdomItems::ExtDomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::ExtdomItems::ExtDomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extif-items")
    {
        if(extif_items == nullptr)
        {
            extif_items = std::make_shared<System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems>();
        }
        return extif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::ExtdomItems::ExtDomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(extif_items != nullptr)
    {
        _children["extif-items"] = extif_items;
    }

    return _children;
}

void System::IgmpItems::InstItems::ExtdomItems::ExtDomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
}

void System::IgmpItems::InstItems::ExtdomItems::ExtDomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::ExtdomItems::ExtDomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extif-items" || name == "id" || name == "ver" || name == "name")
        return true;
    return false;
}

System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtifItems()
    :
    extif_list(this, {"id"})
{

    yang_name = "extif-items"; yang_parent_name = "ExtDom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::~ExtifItems()
{
}

bool System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extif_list.len(); index++)
    {
        if(extif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::has_operation() const
{
    for (std::size_t index=0; index<extif_list.len(); index++)
    {
        if(extif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtIf-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList>();
        ent_->parent = this;
        extif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtIf-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::ExtIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    rtvrfmbr_items(std::make_shared<System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "ExtIf-list"; yang_parent_name = "extif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::~ExtIfList()
{
}

bool System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::get_children() const
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

void System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "ExtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "ExtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::get_children() const
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

void System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpItems::InstItems::DomItems::~DomItems()
{
}

bool System::IgmpItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::get_children() const
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

void System::IgmpItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"}
        ,
    db_items(std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::DbItems>())
    , eventhist_items(std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::EventHistItems>())
    , if_items(std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems>())
    , ssmxlate_items(std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems>())
{
    db_items->parent = this;
    eventhist_items->parent = this;
    if_items->parent = this;
    ssmxlate_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (eventhist_items !=  nullptr && eventhist_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data())
	|| (ssmxlate_items !=  nullptr && ssmxlate_items->has_data());
}

bool System::IgmpItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (eventhist_items !=  nullptr && eventhist_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (ssmxlate_items !=  nullptr && ssmxlate_items->has_operation());
}

std::string System::IgmpItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmp-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "eventHist-items")
    {
        if(eventhist_items == nullptr)
        {
            eventhist_items = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::EventHistItems>();
        }
        return eventhist_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "ssmxlate-items")
    {
        if(ssmxlate_items == nullptr)
        {
            ssmxlate_items = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems>();
        }
        return ssmxlate_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(eventhist_items != nullptr)
    {
        _children["eventHist-items"] = eventhist_items;
    }

    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    if(ssmxlate_items != nullptr)
    {
        _children["ssmxlate-items"] = ssmxlate_items;
    }

    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "eventHist-items" || name == "if-items" || name == "ssmxlate-items" || name == "name")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::DbItems::get_children() const
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

void System::IgmpItems::InstItems::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    src_items(std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems>())
{
    src_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (src_items !=  nullptr && src_items->has_data());
}

bool System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (src_items !=  nullptr && src_items->has_operation());
}

std::string System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "src-items")
    {
        if(src_items == nullptr)
        {
            src_items = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems>();
        }
        return src_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(src_items != nullptr)
    {
        _children["src-items"] = src_items;
    }

    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::SrcItems()
    :
    route_list(this, {"src", "grp"})
{

    yang_name = "src-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::~SrcItems()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList>();
        ent_->parent = this;
        route_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::RouteList()
    :
    src{YType::str, "src"},
    grp{YType::str, "grp"}
        ,
    oif_items(std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "src-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::~RouteList()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return src.is_set
	|| grp.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(grp.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(src, "src");
    ADD_KEY_TOKEN(grp, "grp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (grp.is_set || is_set(grp.yfilter)) leaf_name_data.push_back(grp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oif_items != nullptr)
    {
        _children["oif-items"] = oif_items;
    }

    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grp")
    {
        grp = value;
        grp.value_namespace = name_space;
        grp.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "grp")
    {
        grp.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "src" || name == "grp")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifItems()
    :
    oif_list(this, {"oif"})
{

    yang_name = "oif-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::~OifItems()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Oif-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList>();
        ent_->parent = this;
        oif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::get_children() const
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

void System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Oif-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::OifList()
    :
    oif{YType::str, "oif"},
    expiryts{YType::str, "expiryTs"},
    createts{YType::str, "createTs"},
    lastrep{YType::str, "lastRep"},
    type{YType::str, "type"}
{

    yang_name = "Oif-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::~OifList()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::has_data() const
{
    if (is_presence_container) return true;
    return oif.is_set
	|| expiryts.is_set
	|| createts.is_set
	|| lastrep.is_set
	|| type.is_set;
}

bool System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oif.yfilter)
	|| ydk::is_set(expiryts.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(lastrep.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Oif-list";
    ADD_KEY_TOKEN(oif, "oif");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oif.is_set || is_set(oif.yfilter)) leaf_name_data.push_back(oif.get_name_leafdata());
    if (expiryts.is_set || is_set(expiryts.yfilter)) leaf_name_data.push_back(expiryts.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (lastrep.is_set || is_set(lastrep.yfilter)) leaf_name_data.push_back(lastrep.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oif")
    {
        oif = value;
        oif.value_namespace = name_space;
        oif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiryTs")
    {
        expiryts = value;
        expiryts.value_namespace = name_space;
        expiryts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastRep")
    {
        lastrep = value;
        lastrep.value_namespace = name_space;
        lastrep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oif")
    {
        oif.yfilter = yfilter;
    }
    if(value_path == "expiryTs")
    {
        expiryts.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "lastRep")
    {
        lastrep.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif" || name == "expiryTs" || name == "createTs" || name == "lastRep" || name == "type")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistItems()
    :
    eventhistory_list(this, {"type"})
{

    yang_name = "eventHist-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::~EventHistItems()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::has_operation() const
{
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventHist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventHistory-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList>();
        ent_->parent = this;
        eventhistory_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::get_children() const
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

void System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EventHistory-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::EventHistoryList()
    :
    type{YType::enumeration, "type"},
    size{YType::uint32, "size"}
{

    yang_name = "EventHistory-list"; yang_parent_name = "eventHist-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::~EventHistoryList()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| size.is_set;
}

bool System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EventHistory-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "size")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::get_children() const
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

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    ifctrl{YType::str, "ifCtrl"},
    ver{YType::enumeration, "ver"},
    grptimeout{YType::uint16, "grpTimeout"},
    actquer{YType::str, "actQuer"},
    nextquertime{YType::str, "nextQuerTime"},
    flags{YType::str, "flags"},
    entrycount{YType::uint32, "entryCount"},
    stentrycount{YType::uint32, "stEntryCount"},
    querexpiry{YType::str, "querExpiry"},
    reportll{YType::boolean, "reportLl"},
    immediateleave{YType::boolean, "immediateLeave"},
    allowv3asm{YType::boolean, "allowv3Asm"}
        ,
    ifstats_items(std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems>())
    , jointype_items(std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems>())
    , limit_items(std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems>())
    , reppol_items(std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems>())
    , streppol_items(std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems>())
    , querierp_items(std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems>())
    , rtvrfmbr_items(std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    ifstats_items->parent = this;
    jointype_items->parent = this;
    limit_items->parent = this;
    reppol_items->parent = this;
    streppol_items->parent = this;
    querierp_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| ifctrl.is_set
	|| ver.is_set
	|| grptimeout.is_set
	|| actquer.is_set
	|| nextquertime.is_set
	|| flags.is_set
	|| entrycount.is_set
	|| stentrycount.is_set
	|| querexpiry.is_set
	|| reportll.is_set
	|| immediateleave.is_set
	|| allowv3asm.is_set
	|| (ifstats_items !=  nullptr && ifstats_items->has_data())
	|| (jointype_items !=  nullptr && jointype_items->has_data())
	|| (limit_items !=  nullptr && limit_items->has_data())
	|| (reppol_items !=  nullptr && reppol_items->has_data())
	|| (streppol_items !=  nullptr && streppol_items->has_data())
	|| (querierp_items !=  nullptr && querierp_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ifctrl.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(grptimeout.yfilter)
	|| ydk::is_set(actquer.yfilter)
	|| ydk::is_set(nextquertime.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(entrycount.yfilter)
	|| ydk::is_set(stentrycount.yfilter)
	|| ydk::is_set(querexpiry.yfilter)
	|| ydk::is_set(reportll.yfilter)
	|| ydk::is_set(immediateleave.yfilter)
	|| ydk::is_set(allowv3asm.yfilter)
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation())
	|| (jointype_items !=  nullptr && jointype_items->has_operation())
	|| (limit_items !=  nullptr && limit_items->has_operation())
	|| (reppol_items !=  nullptr && reppol_items->has_operation())
	|| (streppol_items !=  nullptr && streppol_items->has_operation())
	|| (querierp_items !=  nullptr && querierp_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ifctrl.is_set || is_set(ifctrl.yfilter)) leaf_name_data.push_back(ifctrl.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (grptimeout.is_set || is_set(grptimeout.yfilter)) leaf_name_data.push_back(grptimeout.get_name_leafdata());
    if (actquer.is_set || is_set(actquer.yfilter)) leaf_name_data.push_back(actquer.get_name_leafdata());
    if (nextquertime.is_set || is_set(nextquertime.yfilter)) leaf_name_data.push_back(nextquertime.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (entrycount.is_set || is_set(entrycount.yfilter)) leaf_name_data.push_back(entrycount.get_name_leafdata());
    if (stentrycount.is_set || is_set(stentrycount.yfilter)) leaf_name_data.push_back(stentrycount.get_name_leafdata());
    if (querexpiry.is_set || is_set(querexpiry.yfilter)) leaf_name_data.push_back(querexpiry.get_name_leafdata());
    if (reportll.is_set || is_set(reportll.yfilter)) leaf_name_data.push_back(reportll.get_name_leafdata());
    if (immediateleave.is_set || is_set(immediateleave.yfilter)) leaf_name_data.push_back(immediateleave.get_name_leafdata());
    if (allowv3asm.is_set || is_set(allowv3asm.yfilter)) leaf_name_data.push_back(allowv3asm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfStats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems>();
        }
        return ifstats_items;
    }

    if(child_yang_name == "jointype-items")
    {
        if(jointype_items == nullptr)
        {
            jointype_items = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems>();
        }
        return jointype_items;
    }

    if(child_yang_name == "limit-items")
    {
        if(limit_items == nullptr)
        {
            limit_items = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems>();
        }
        return limit_items;
    }

    if(child_yang_name == "reppol-items")
    {
        if(reppol_items == nullptr)
        {
            reppol_items = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems>();
        }
        return reppol_items;
    }

    if(child_yang_name == "streppol-items")
    {
        if(streppol_items == nullptr)
        {
            streppol_items = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems>();
        }
        return streppol_items;
    }

    if(child_yang_name == "querierp-items")
    {
        if(querierp_items == nullptr)
        {
            querierp_items = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems>();
        }
        return querierp_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ifstats_items != nullptr)
    {
        _children["IfStats-items"] = ifstats_items;
    }

    if(jointype_items != nullptr)
    {
        _children["jointype-items"] = jointype_items;
    }

    if(limit_items != nullptr)
    {
        _children["limit-items"] = limit_items;
    }

    if(reppol_items != nullptr)
    {
        _children["reppol-items"] = reppol_items;
    }

    if(streppol_items != nullptr)
    {
        _children["streppol-items"] = streppol_items;
    }

    if(querierp_items != nullptr)
    {
        _children["querierp-items"] = querierp_items;
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

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ifCtrl")
    {
        ifctrl = value;
        ifctrl.value_namespace = name_space;
        ifctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpTimeout")
    {
        grptimeout = value;
        grptimeout.value_namespace = name_space;
        grptimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actQuer")
    {
        actquer = value;
        actquer.value_namespace = name_space;
        actquer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextQuerTime")
    {
        nextquertime = value;
        nextquertime.value_namespace = name_space;
        nextquertime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entryCount")
    {
        entrycount = value;
        entrycount.value_namespace = name_space;
        entrycount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stEntryCount")
    {
        stentrycount = value;
        stentrycount.value_namespace = name_space;
        stentrycount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "querExpiry")
    {
        querexpiry = value;
        querexpiry.value_namespace = name_space;
        querexpiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reportLl")
    {
        reportll = value;
        reportll.value_namespace = name_space;
        reportll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "immediateLeave")
    {
        immediateleave = value;
        immediateleave.value_namespace = name_space;
        immediateleave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowv3Asm")
    {
        allowv3asm = value;
        allowv3asm.value_namespace = name_space;
        allowv3asm.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ifCtrl")
    {
        ifctrl.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "grpTimeout")
    {
        grptimeout.yfilter = yfilter;
    }
    if(value_path == "actQuer")
    {
        actquer.yfilter = yfilter;
    }
    if(value_path == "nextQuerTime")
    {
        nextquertime.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "entryCount")
    {
        entrycount.yfilter = yfilter;
    }
    if(value_path == "stEntryCount")
    {
        stentrycount.yfilter = yfilter;
    }
    if(value_path == "querExpiry")
    {
        querexpiry.yfilter = yfilter;
    }
    if(value_path == "reportLl")
    {
        reportll.yfilter = yfilter;
    }
    if(value_path == "immediateLeave")
    {
        immediateleave.yfilter = yfilter;
    }
    if(value_path == "allowv3Asm")
    {
        allowv3asm.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfStats-items" || name == "jointype-items" || name == "limit-items" || name == "reppol-items" || name == "streppol-items" || name == "querierp-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "ifCtrl" || name == "ver" || name == "grpTimeout" || name == "actQuer" || name == "nextQuerTime" || name == "flags" || name == "entryCount" || name == "stEntryCount" || name == "querExpiry" || name == "reportLl" || name == "immediateLeave" || name == "allowv3Asm")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems::IfStatsItems()
    :
    v2quersent{YType::uint32, "v2querSent"},
    v2querrcvd{YType::uint32, "v2querRcvd"},
    v3quersent{YType::uint32, "v3querSent"},
    v3querrcvd{YType::uint32, "v3querRcvd"},
    v2rprtsent{YType::uint32, "v2rprtSent"},
    v2rprtrcvd{YType::uint32, "v2rprtRcvd"},
    v3rprtsent{YType::uint32, "v3rprtSent"},
    v3rprtrcvd{YType::uint32, "v3rprtRcvd"},
    v2leavesent{YType::uint32, "v2leaveSent"},
    v2leavercvd{YType::uint32, "v2leaveRcvd"}
{

    yang_name = "IfStats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems::~IfStatsItems()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems::has_data() const
{
    if (is_presence_container) return true;
    return v2quersent.is_set
	|| v2querrcvd.is_set
	|| v3quersent.is_set
	|| v3querrcvd.is_set
	|| v2rprtsent.is_set
	|| v2rprtrcvd.is_set
	|| v3rprtsent.is_set
	|| v3rprtrcvd.is_set
	|| v2leavesent.is_set
	|| v2leavercvd.is_set;
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(v2quersent.yfilter)
	|| ydk::is_set(v2querrcvd.yfilter)
	|| ydk::is_set(v3quersent.yfilter)
	|| ydk::is_set(v3querrcvd.yfilter)
	|| ydk::is_set(v2rprtsent.yfilter)
	|| ydk::is_set(v2rprtrcvd.yfilter)
	|| ydk::is_set(v3rprtsent.yfilter)
	|| ydk::is_set(v3rprtrcvd.yfilter)
	|| ydk::is_set(v2leavesent.yfilter)
	|| ydk::is_set(v2leavercvd.yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfStats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v2quersent.is_set || is_set(v2quersent.yfilter)) leaf_name_data.push_back(v2quersent.get_name_leafdata());
    if (v2querrcvd.is_set || is_set(v2querrcvd.yfilter)) leaf_name_data.push_back(v2querrcvd.get_name_leafdata());
    if (v3quersent.is_set || is_set(v3quersent.yfilter)) leaf_name_data.push_back(v3quersent.get_name_leafdata());
    if (v3querrcvd.is_set || is_set(v3querrcvd.yfilter)) leaf_name_data.push_back(v3querrcvd.get_name_leafdata());
    if (v2rprtsent.is_set || is_set(v2rprtsent.yfilter)) leaf_name_data.push_back(v2rprtsent.get_name_leafdata());
    if (v2rprtrcvd.is_set || is_set(v2rprtrcvd.yfilter)) leaf_name_data.push_back(v2rprtrcvd.get_name_leafdata());
    if (v3rprtsent.is_set || is_set(v3rprtsent.yfilter)) leaf_name_data.push_back(v3rprtsent.get_name_leafdata());
    if (v3rprtrcvd.is_set || is_set(v3rprtrcvd.yfilter)) leaf_name_data.push_back(v3rprtrcvd.get_name_leafdata());
    if (v2leavesent.is_set || is_set(v2leavesent.yfilter)) leaf_name_data.push_back(v2leavesent.get_name_leafdata());
    if (v2leavercvd.is_set || is_set(v2leavercvd.yfilter)) leaf_name_data.push_back(v2leavercvd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "v2querSent")
    {
        v2quersent = value;
        v2quersent.value_namespace = name_space;
        v2quersent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2querRcvd")
    {
        v2querrcvd = value;
        v2querrcvd.value_namespace = name_space;
        v2querrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3querSent")
    {
        v3quersent = value;
        v3quersent.value_namespace = name_space;
        v3quersent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3querRcvd")
    {
        v3querrcvd = value;
        v3querrcvd.value_namespace = name_space;
        v3querrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2rprtSent")
    {
        v2rprtsent = value;
        v2rprtsent.value_namespace = name_space;
        v2rprtsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2rprtRcvd")
    {
        v2rprtrcvd = value;
        v2rprtrcvd.value_namespace = name_space;
        v2rprtrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3rprtSent")
    {
        v3rprtsent = value;
        v3rprtsent.value_namespace = name_space;
        v3rprtsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3rprtRcvd")
    {
        v3rprtrcvd = value;
        v3rprtrcvd.value_namespace = name_space;
        v3rprtrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2leaveSent")
    {
        v2leavesent = value;
        v2leavesent.value_namespace = name_space;
        v2leavesent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2leaveRcvd")
    {
        v2leavercvd = value;
        v2leavercvd.value_namespace = name_space;
        v2leavercvd.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "v2querSent")
    {
        v2quersent.yfilter = yfilter;
    }
    if(value_path == "v2querRcvd")
    {
        v2querrcvd.yfilter = yfilter;
    }
    if(value_path == "v3querSent")
    {
        v3quersent.yfilter = yfilter;
    }
    if(value_path == "v3querRcvd")
    {
        v3querrcvd.yfilter = yfilter;
    }
    if(value_path == "v2rprtSent")
    {
        v2rprtsent.yfilter = yfilter;
    }
    if(value_path == "v2rprtRcvd")
    {
        v2rprtrcvd.yfilter = yfilter;
    }
    if(value_path == "v3rprtSent")
    {
        v3rprtsent.yfilter = yfilter;
    }
    if(value_path == "v3rprtRcvd")
    {
        v3rprtrcvd.yfilter = yfilter;
    }
    if(value_path == "v2leaveSent")
    {
        v2leavesent.yfilter = yfilter;
    }
    if(value_path == "v2leaveRcvd")
    {
        v2leavercvd.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v2querSent" || name == "v2querRcvd" || name == "v3querSent" || name == "v3querRcvd" || name == "v2rprtSent" || name == "v2rprtRcvd" || name == "v3rprtSent" || name == "v3rprtRcvd" || name == "v2leaveSent" || name == "v2leaveRcvd")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JointypeItems()
    :
    jointype_list(this, {"type"})
{

    yang_name = "jointype-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::~JointypeItems()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<jointype_list.len(); index++)
    {
        if(jointype_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::has_operation() const
{
    for (std::size_t index=0; index<jointype_list.len(); index++)
    {
        if(jointype_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jointype-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "JoinType-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList>();
        ent_->parent = this;
        jointype_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : jointype_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "JoinType-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::JoinTypeList()
    :
    type{YType::enumeration, "type"}
        ,
    ver_items(std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems>())
{
    ver_items->parent = this;

    yang_name = "JoinType-list"; yang_parent_name = "jointype-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::~JoinTypeList()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (ver_items !=  nullptr && ver_items->has_data());
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ver_items !=  nullptr && ver_items->has_operation());
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "JoinType-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ver-items")
    {
        if(ver_items == nullptr)
        {
            ver_items = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems>();
        }
        return ver_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ver_items != nullptr)
    {
        _children["ver-items"] = ver_items;
    }

    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ver-items" || name == "type")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VerItems()
    :
    version_list(this, {"version"})
{

    yang_name = "ver-items"; yang_parent_name = "JoinType-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::~VerItems()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<version_list.len(); index++)
    {
        if(version_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::has_operation() const
{
    for (std::size_t index=0; index<version_list.len(); index++)
    {
        if(version_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ver-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Version-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList>();
        ent_->parent = this;
        version_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : version_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Version-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::VersionList()
    :
    version{YType::enumeration, "version"}
        ,
    group_items(std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems>())
{
    group_items->parent = this;

    yang_name = "Version-list"; yang_parent_name = "ver-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::~VersionList()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| (group_items !=  nullptr && group_items->has_data());
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| (group_items !=  nullptr && group_items->has_operation());
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Version-list";
    ADD_KEY_TOKEN(version, "version");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-items")
    {
        if(group_items == nullptr)
        {
            group_items = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems>();
        }
        return group_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_items != nullptr)
    {
        _children["group-items"] = group_items;
    }

    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-items" || name == "version")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupItems()
    :
    group_list(this, {"grp"})
{

    yang_name = "group-items"; yang_parent_name = "Version-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::~GroupItems()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::has_operation() const
{
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Group-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList>();
        ent_->parent = this;
        group_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::get_children() const
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

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Group-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::GroupList()
    :
    grp{YType::str, "grp"},
    usestaticoif{YType::boolean, "useStaticOif"}
        ,
    source_items(std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems>())
{
    source_items->parent = this;

    yang_name = "Group-list"; yang_parent_name = "group-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::~GroupList()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::has_data() const
{
    if (is_presence_container) return true;
    return grp.is_set
	|| usestaticoif.is_set
	|| (source_items !=  nullptr && source_items->has_data());
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grp.yfilter)
	|| ydk::is_set(usestaticoif.yfilter)
	|| (source_items !=  nullptr && source_items->has_operation());
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Group-list";
    ADD_KEY_TOKEN(grp, "grp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grp.is_set || is_set(grp.yfilter)) leaf_name_data.push_back(grp.get_name_leafdata());
    if (usestaticoif.is_set || is_set(usestaticoif.yfilter)) leaf_name_data.push_back(usestaticoif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-items")
    {
        if(source_items == nullptr)
        {
            source_items = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems>();
        }
        return source_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_items != nullptr)
    {
        _children["source-items"] = source_items;
    }

    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grp")
    {
        grp = value;
        grp.value_namespace = name_space;
        grp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useStaticOif")
    {
        usestaticoif = value;
        usestaticoif.value_namespace = name_space;
        usestaticoif.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grp")
    {
        grp.yfilter = yfilter;
    }
    if(value_path == "useStaticOif")
    {
        usestaticoif.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-items" || name == "grp" || name == "useStaticOif")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceItems()
    :
    source_list(this, {"src"})
{

    yang_name = "source-items"; yang_parent_name = "Group-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::~SourceItems()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::has_operation() const
{
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Source-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceList>();
        ent_->parent = this;
        source_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::get_children() const
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

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Source-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceList::SourceList()
    :
    src{YType::str, "src"},
    usestaticoif{YType::boolean, "useStaticOif"}
{

    yang_name = "Source-list"; yang_parent_name = "source-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceList::~SourceList()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceList::has_data() const
{
    if (is_presence_container) return true;
    return src.is_set
	|| usestaticoif.is_set;
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(usestaticoif.yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Source-list";
    ADD_KEY_TOKEN(src, "src");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (usestaticoif.is_set || is_set(usestaticoif.yfilter)) leaf_name_data.push_back(usestaticoif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useStaticOif")
    {
        usestaticoif = value;
        usestaticoif.value_namespace = name_space;
        usestaticoif.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "useStaticOif")
    {
        usestaticoif.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src" || name == "useStaticOif")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems::LimitItems()
    :
    rsvdentries{YType::enumeration, "rsvdEntries"},
    regentries{YType::enumeration, "regEntries"},
    availrsvdentries{YType::uint32, "availRsvdEntries"},
    availregentries{YType::uint32, "availRegEntries"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    max{YType::uint32, "max"},
    rsvd{YType::uint32, "rsvd"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "limit-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems::~LimitItems()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems::has_data() const
{
    if (is_presence_container) return true;
    return rsvdentries.is_set
	|| regentries.is_set
	|| availrsvdentries.is_set
	|| availregentries.is_set
	|| name.is_set
	|| descr.is_set
	|| max.is_set
	|| rsvd.is_set
	|| rtmap.is_set;
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rsvdentries.yfilter)
	|| ydk::is_set(regentries.yfilter)
	|| ydk::is_set(availrsvdentries.yfilter)
	|| ydk::is_set(availregentries.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(rsvd.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsvdentries.is_set || is_set(rsvdentries.yfilter)) leaf_name_data.push_back(rsvdentries.get_name_leafdata());
    if (regentries.is_set || is_set(regentries.yfilter)) leaf_name_data.push_back(regentries.get_name_leafdata());
    if (availrsvdentries.is_set || is_set(availrsvdentries.yfilter)) leaf_name_data.push_back(availrsvdentries.get_name_leafdata());
    if (availregentries.is_set || is_set(availregentries.yfilter)) leaf_name_data.push_back(availregentries.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (rsvd.is_set || is_set(rsvd.yfilter)) leaf_name_data.push_back(rsvd.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsvdEntries")
    {
        rsvdentries = value;
        rsvdentries.value_namespace = name_space;
        rsvdentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regEntries")
    {
        regentries = value;
        regentries.value_namespace = name_space;
        regentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "availRsvdEntries")
    {
        availrsvdentries = value;
        availrsvdentries.value_namespace = name_space;
        availrsvdentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "availRegEntries")
    {
        availregentries = value;
        availregentries.value_namespace = name_space;
        availregentries.value_namespace_prefix = name_space_prefix;
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

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsvdEntries")
    {
        rsvdentries.yfilter = yfilter;
    }
    if(value_path == "regEntries")
    {
        regentries.yfilter = yfilter;
    }
    if(value_path == "availRsvdEntries")
    {
        availrsvdentries.yfilter = yfilter;
    }
    if(value_path == "availRegEntries")
    {
        availregentries.yfilter = yfilter;
    }
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

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvdEntries" || name == "regEntries" || name == "availRsvdEntries" || name == "availRegEntries" || name == "name" || name == "descr" || name == "max" || name == "rsvd" || name == "rtMap")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems::ReppolItems()
    :
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    useaccessgrpcommand{YType::boolean, "useAccessGrpCommand"}
{

    yang_name = "reppol-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems::~ReppolItems()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| pfxlist.is_set
	|| useaccessgrpcommand.is_set;
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(useaccessgrpcommand.yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reppol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (useaccessgrpcommand.is_set || is_set(useaccessgrpcommand.yfilter)) leaf_name_data.push_back(useaccessgrpcommand.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "useAccessGrpCommand")
    {
        useaccessgrpcommand = value;
        useaccessgrpcommand.value_namespace = name_space;
        useaccessgrpcommand.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "useAccessGrpCommand")
    {
        useaccessgrpcommand.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap" || name == "pfxList" || name == "useAccessGrpCommand")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StreppolItems()
    :
    strepp_list(this, {"jointype"})
{

    yang_name = "streppol-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::~StreppolItems()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<strepp_list.len(); index++)
    {
        if(strepp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::has_operation() const
{
    for (std::size_t index=0; index<strepp_list.len(); index++)
    {
        if(strepp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "streppol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StRepP-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StRepPList>();
        ent_->parent = this;
        strepp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : strepp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StRepP-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StRepPList::StRepPList()
    :
    jointype{YType::enumeration, "joinType"},
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    useaccessgrpcommand{YType::boolean, "useAccessGrpCommand"}
{

    yang_name = "StRepP-list"; yang_parent_name = "streppol-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StRepPList::~StRepPList()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StRepPList::has_data() const
{
    if (is_presence_container) return true;
    return jointype.is_set
	|| rtmap.is_set
	|| pfxlist.is_set
	|| useaccessgrpcommand.is_set;
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StRepPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(jointype.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(useaccessgrpcommand.yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StRepPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StRepP-list";
    ADD_KEY_TOKEN(jointype, "joinType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StRepPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (jointype.is_set || is_set(jointype.yfilter)) leaf_name_data.push_back(jointype.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (useaccessgrpcommand.is_set || is_set(useaccessgrpcommand.yfilter)) leaf_name_data.push_back(useaccessgrpcommand.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StRepPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StRepPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StRepPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "joinType")
    {
        jointype = value;
        jointype.value_namespace = name_space;
        jointype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "useAccessGrpCommand")
    {
        useaccessgrpcommand = value;
        useaccessgrpcommand.value_namespace = name_space;
        useaccessgrpcommand.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StRepPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "joinType")
    {
        jointype.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "useAccessGrpCommand")
    {
        useaccessgrpcommand.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StRepPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "joinType" || name == "rtMap" || name == "pfxList" || name == "useAccessGrpCommand")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems::QuerierpItems()
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
    queriertimeout{YType::uint16, "querierTimeout"},
    lastmbrcnt{YType::uint16, "lastMbrCnt"},
    lastmbrresptime{YType::uint16, "lastMbrRespTime"}
{

    yang_name = "querierp-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems::~QuerierpItems()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems::has_data() const
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
	|| queriertimeout.is_set
	|| lastmbrcnt.is_set
	|| lastmbrresptime.is_set;
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems::has_operation() const
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
	|| ydk::is_set(queriertimeout.yfilter)
	|| ydk::is_set(lastmbrcnt.yfilter)
	|| ydk::is_set(lastmbrresptime.yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querierp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems::get_name_leaf_data() const
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
    if (queriertimeout.is_set || is_set(queriertimeout.yfilter)) leaf_name_data.push_back(queriertimeout.get_name_leafdata());
    if (lastmbrcnt.is_set || is_set(lastmbrcnt.yfilter)) leaf_name_data.push_back(lastmbrcnt.get_name_leafdata());
    if (lastmbrresptime.is_set || is_set(lastmbrresptime.yfilter)) leaf_name_data.push_back(lastmbrresptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "querierTimeout")
    {
        queriertimeout = value;
        queriertimeout.value_namespace = name_space;
        queriertimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastMbrCnt")
    {
        lastmbrcnt = value;
        lastmbrcnt.value_namespace = name_space;
        lastmbrcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastMbrRespTime")
    {
        lastmbrresptime = value;
        lastmbrresptime.value_namespace = name_space;
        lastmbrresptime.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "querierTimeout")
    {
        queriertimeout.yfilter = yfilter;
    }
    if(value_path == "lastMbrCnt")
    {
        lastmbrcnt.yfilter = yfilter;
    }
    if(value_path == "lastMbrRespTime")
    {
        lastmbrresptime.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ver" || name == "addr" || name == "queryIntvl" || name == "rspIntvl" || name == "robustFac" || name == "startQueryIntvl" || name == "startQueryCnt" || name == "querierTimeout" || name == "lastMbrCnt" || name == "lastMbrRespTime")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SsmxlateItems()
    :
    ssmxlate_list(this, {"srcaddr", "grppfx"})
{

    yang_name = "ssmxlate-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::~SsmxlateItems()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ssmxlate_list.len(); index++)
    {
        if(ssmxlate_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::has_operation() const
{
    for (std::size_t index=0; index<ssmxlate_list.len(); index++)
    {
        if(ssmxlate_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssmxlate-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SSMXlate-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList>();
        ent_->parent = this;
        ssmxlate_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ssmxlate_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SSMXlate-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList::SSMXlateList()
    :
    srcaddr{YType::str, "srcAddr"},
    grppfx{YType::str, "grpPfx"}
{

    yang_name = "SSMXlate-list"; yang_parent_name = "ssmxlate-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList::~SSMXlateList()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList::has_data() const
{
    if (is_presence_container) return true;
    return srcaddr.is_set
	|| grppfx.is_set;
}

bool System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(grppfx.yfilter);
}

std::string System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SSMXlate-list";
    ADD_KEY_TOKEN(srcaddr, "srcAddr");
    ADD_KEY_TOKEN(grppfx, "grpPfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (grppfx.is_set || is_set(grppfx.yfilter)) leaf_name_data.push_back(grppfx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpPfx")
    {
        grppfx = value;
        grppfx.value_namespace = name_space;
        grppfx.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "grpPfx")
    {
        grppfx.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcAddr" || name == "grpPfx")
        return true;
    return false;
}

System::IgmpItems::InstItems::RoutedbItems::RoutedbItems()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"}
        ,
    vrf_items(std::make_shared<System::IgmpItems::InstItems::RoutedbItems::VrfItems>())
{
    vrf_items->parent = this;

    yang_name = "routedb-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpItems::InstItems::RoutedbItems::~RoutedbItems()
{
}

bool System::IgmpItems::InstItems::RoutedbItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| (vrf_items !=  nullptr && vrf_items->has_data());
}

bool System::IgmpItems::InstItems::RoutedbItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation());
}

std::string System::IgmpItems::InstItems::RoutedbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpItems::InstItems::RoutedbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routedb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::RoutedbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::RoutedbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::IgmpItems::InstItems::RoutedbItems::VrfItems>();
        }
        return vrf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::RoutedbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    return _children;
}

void System::IgmpItems::InstItems::RoutedbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::RoutedbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::RoutedbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items" || name == "name" || name == "type")
        return true;
    return false;
}

System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfItems()
    :
    vrf_list(this, {"name"})
{

    yang_name = "vrf-items"; yang_parent_name = "routedb-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpItems::InstItems::RoutedbItems::VrfItems::~VrfItems()
{
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::has_operation() const
{
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::RoutedbItems::VrfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmp-items/inst-items/routedb-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpItems::InstItems::RoutedbItems::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::RoutedbItems::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::RoutedbItems::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vrf-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList>();
        ent_->parent = this;
        vrf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::RoutedbItems::VrfItems::get_children() const
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

void System::IgmpItems::InstItems::RoutedbItems::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::RoutedbItems::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vrf-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::VrfList()
    :
    name{YType::str, "name"}
        ,
    group_items(std::make_shared<System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems>())
{
    group_items->parent = this;

    yang_name = "Vrf-list"; yang_parent_name = "vrf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::~VrfList()
{
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (group_items !=  nullptr && group_items->has_data());
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (group_items !=  nullptr && group_items->has_operation());
}

std::string System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmp-items/inst-items/routedb-items/vrf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vrf-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-items")
    {
        if(group_items == nullptr)
        {
            group_items = std::make_shared<System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems>();
        }
        return group_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_items != nullptr)
    {
        _children["group-items"] = group_items;
    }

    return _children;
}

void System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-items" || name == "name")
        return true;
    return false;
}

System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupItems()
    :
    routegroup_list(this, {"grpaddr"})
{

    yang_name = "group-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::~GroupItems()
{
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<routegroup_list.len(); index++)
    {
        if(routegroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::has_operation() const
{
    for (std::size_t index=0; index<routegroup_list.len(); index++)
    {
        if(routegroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RouteGroup-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList>();
        ent_->parent = this;
        routegroup_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : routegroup_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RouteGroup-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::RouteGroupList()
    :
    grpaddr{YType::str, "grpAddr"}
        ,
    source_items(std::make_shared<System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems>())
{
    source_items->parent = this;

    yang_name = "RouteGroup-list"; yang_parent_name = "group-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::~RouteGroupList()
{
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::has_data() const
{
    if (is_presence_container) return true;
    return grpaddr.is_set
	|| (source_items !=  nullptr && source_items->has_data());
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpaddr.yfilter)
	|| (source_items !=  nullptr && source_items->has_operation());
}

std::string System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RouteGroup-list";
    ADD_KEY_TOKEN(grpaddr, "grpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpaddr.is_set || is_set(grpaddr.yfilter)) leaf_name_data.push_back(grpaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-items")
    {
        if(source_items == nullptr)
        {
            source_items = std::make_shared<System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems>();
        }
        return source_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_items != nullptr)
    {
        _children["source-items"] = source_items;
    }

    return _children;
}

void System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpAddr")
    {
        grpaddr = value;
        grpaddr.value_namespace = name_space;
        grpaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpAddr")
    {
        grpaddr.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-items" || name == "grpAddr")
        return true;
    return false;
}

System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::SourceItems()
    :
    routesource_list(this, {"srcaddr"})
{

    yang_name = "source-items"; yang_parent_name = "RouteGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::~SourceItems()
{
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<routesource_list.len(); index++)
    {
        if(routesource_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::has_operation() const
{
    for (std::size_t index=0; index<routesource_list.len(); index++)
    {
        if(routesource_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RouteSource-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList>();
        ent_->parent = this;
        routesource_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : routesource_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RouteSource-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::RouteSourceList()
    :
    srcaddr{YType::str, "srcAddr"},
    oifcount{YType::uint32, "oifcount"}
        ,
    oif_items(std::make_shared<System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "RouteSource-list"; yang_parent_name = "source-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::~RouteSourceList()
{
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::has_data() const
{
    if (is_presence_container) return true;
    return srcaddr.is_set
	|| oifcount.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(oifcount.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RouteSource-list";
    ADD_KEY_TOKEN(srcaddr, "srcAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (oifcount.is_set || is_set(oifcount.yfilter)) leaf_name_data.push_back(oifcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oif_items != nullptr)
    {
        _children["oif-items"] = oif_items;
    }

    return _children;
}

void System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifcount")
    {
        oifcount = value;
        oifcount.value_namespace = name_space;
        oifcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "oifcount")
    {
        oifcount.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "srcAddr" || name == "oifcount")
        return true;
    return false;
}

System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::OifItems()
    :
    routeoif_list(this, {"oif"})
{

    yang_name = "oif-items"; yang_parent_name = "RouteSource-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::~OifItems()
{
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<routeoif_list.len(); index++)
    {
        if(routeoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<routeoif_list.len(); index++)
    {
        if(routeoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RouteOif-list")
    {
        auto ent_ = std::make_shared<System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList>();
        ent_->parent = this;
        routeoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : routeoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RouteOif-list")
        return true;
    return false;
}

System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList::RouteOifList()
    :
    oif{YType::str, "oif"},
    local{YType::boolean, "local"},
    static_{YType::boolean, "static"},
    hostproxy{YType::boolean, "hostProxy"},
    uptime{YType::str, "uptime"},
    expiryts{YType::str, "expiryTs"},
    createts{YType::str, "createTs"},
    lastrep{YType::str, "lastRep"},
    type{YType::str, "type"}
{

    yang_name = "RouteOif-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList::~RouteOifList()
{
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList::has_data() const
{
    if (is_presence_container) return true;
    return oif.is_set
	|| local.is_set
	|| static_.is_set
	|| hostproxy.is_set
	|| uptime.is_set
	|| expiryts.is_set
	|| createts.is_set
	|| lastrep.is_set
	|| type.is_set;
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oif.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(hostproxy.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(expiryts.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(lastrep.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RouteOif-list";
    ADD_KEY_TOKEN(oif, "oif");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oif.is_set || is_set(oif.yfilter)) leaf_name_data.push_back(oif.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (hostproxy.is_set || is_set(hostproxy.yfilter)) leaf_name_data.push_back(hostproxy.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (expiryts.is_set || is_set(expiryts.yfilter)) leaf_name_data.push_back(expiryts.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (lastrep.is_set || is_set(lastrep.yfilter)) leaf_name_data.push_back(lastrep.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oif")
    {
        oif = value;
        oif.value_namespace = name_space;
        oif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostProxy")
    {
        hostproxy = value;
        hostproxy.value_namespace = name_space;
        hostproxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiryTs")
    {
        expiryts = value;
        expiryts.value_namespace = name_space;
        expiryts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastRep")
    {
        lastrep = value;
        lastrep.value_namespace = name_space;
        lastrep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oif")
    {
        oif.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "hostProxy")
    {
        hostproxy.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "expiryTs")
    {
        expiryts.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "lastRep")
    {
        lastrep.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif" || name == "local" || name == "static" || name == "hostProxy" || name == "uptime" || name == "expiryTs" || name == "createTs" || name == "lastRep" || name == "type")
        return true;
    return false;
}

System::CtrlrfwstatuscontItems::CtrlrfwstatuscontItems()
    :
    ctrlrrunning_items(std::make_shared<System::CtrlrfwstatuscontItems::CtrlrrunningItems>())
    , upgjob_items(std::make_shared<System::CtrlrfwstatuscontItems::UpgjobItems>())
{
    ctrlrrunning_items->parent = this;
    upgjob_items->parent = this;

    yang_name = "ctrlrfwstatuscont-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CtrlrfwstatuscontItems::~CtrlrfwstatuscontItems()
{
}

bool System::CtrlrfwstatuscontItems::has_data() const
{
    if (is_presence_container) return true;
    return (ctrlrrunning_items !=  nullptr && ctrlrrunning_items->has_data())
	|| (upgjob_items !=  nullptr && upgjob_items->has_data());
}

bool System::CtrlrfwstatuscontItems::has_operation() const
{
    return is_set(yfilter)
	|| (ctrlrrunning_items !=  nullptr && ctrlrrunning_items->has_operation())
	|| (upgjob_items !=  nullptr && upgjob_items->has_operation());
}

std::string System::CtrlrfwstatuscontItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CtrlrfwstatuscontItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctrlrfwstatuscont-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtrlrfwstatuscontItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtrlrfwstatuscontItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ctrlrrunning-items")
    {
        if(ctrlrrunning_items == nullptr)
        {
            ctrlrrunning_items = std::make_shared<System::CtrlrfwstatuscontItems::CtrlrrunningItems>();
        }
        return ctrlrrunning_items;
    }

    if(child_yang_name == "upgjob-items")
    {
        if(upgjob_items == nullptr)
        {
            upgjob_items = std::make_shared<System::CtrlrfwstatuscontItems::UpgjobItems>();
        }
        return upgjob_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtrlrfwstatuscontItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ctrlrrunning_items != nullptr)
    {
        _children["ctrlrrunning-items"] = ctrlrrunning_items;
    }

    if(upgjob_items != nullptr)
    {
        _children["upgjob-items"] = upgjob_items;
    }

    return _children;
}

void System::CtrlrfwstatuscontItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtrlrfwstatuscontItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtrlrfwstatuscontItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ctrlrrunning-items" || name == "upgjob-items")
        return true;
    return false;
}

System::CtrlrfwstatuscontItems::CtrlrrunningItems::CtrlrrunningItems()
    :
    version{YType::str, "version"},
    internallabel{YType::str, "internalLabel"},
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"},
    ts{YType::str, "ts"},
    descr{YType::str, "descr"}
{

    yang_name = "ctrlrrunning-items"; yang_parent_name = "ctrlrfwstatuscont-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CtrlrfwstatuscontItems::CtrlrrunningItems::~CtrlrrunningItems()
{
}

bool System::CtrlrfwstatuscontItems::CtrlrrunningItems::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| internallabel.is_set
	|| type.is_set
	|| mode.is_set
	|| ts.is_set
	|| descr.is_set;
}

bool System::CtrlrfwstatuscontItems::CtrlrrunningItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(internallabel.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CtrlrfwstatuscontItems::CtrlrrunningItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ctrlrfwstatuscont-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CtrlrfwstatuscontItems::CtrlrrunningItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctrlrrunning-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtrlrfwstatuscontItems::CtrlrrunningItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (internallabel.is_set || is_set(internallabel.yfilter)) leaf_name_data.push_back(internallabel.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (ts.is_set || is_set(ts.yfilter)) leaf_name_data.push_back(ts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtrlrfwstatuscontItems::CtrlrrunningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtrlrfwstatuscontItems::CtrlrrunningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CtrlrfwstatuscontItems::CtrlrrunningItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internalLabel")
    {
        internallabel = value;
        internallabel.value_namespace = name_space;
        internallabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ts")
    {
        ts = value;
        ts.value_namespace = name_space;
        ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtrlrfwstatuscontItems::CtrlrrunningItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "internalLabel")
    {
        internallabel.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "ts")
    {
        ts.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CtrlrfwstatuscontItems::CtrlrrunningItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "internalLabel" || name == "type" || name == "mode" || name == "ts" || name == "descr")
        return true;
    return false;
}

System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobItems()
    :
    grpprikey{YType::str, "grpPriKey"},
    internallabel{YType::str, "internalLabel"}
        ,
    node_items(std::make_shared<System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems>())
    , upgjobfault_items(std::make_shared<System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems>())
{
    node_items->parent = this;
    upgjobfault_items->parent = this;

    yang_name = "upgjob-items"; yang_parent_name = "ctrlrfwstatuscont-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CtrlrfwstatuscontItems::UpgjobItems::~UpgjobItems()
{
}

bool System::CtrlrfwstatuscontItems::UpgjobItems::has_data() const
{
    if (is_presence_container) return true;
    return grpprikey.is_set
	|| internallabel.is_set
	|| (node_items !=  nullptr && node_items->has_data())
	|| (upgjobfault_items !=  nullptr && upgjobfault_items->has_data());
}

bool System::CtrlrfwstatuscontItems::UpgjobItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpprikey.yfilter)
	|| ydk::is_set(internallabel.yfilter)
	|| (node_items !=  nullptr && node_items->has_operation())
	|| (upgjobfault_items !=  nullptr && upgjobfault_items->has_operation());
}

std::string System::CtrlrfwstatuscontItems::UpgjobItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ctrlrfwstatuscont-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CtrlrfwstatuscontItems::UpgjobItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upgjob-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtrlrfwstatuscontItems::UpgjobItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpprikey.is_set || is_set(grpprikey.yfilter)) leaf_name_data.push_back(grpprikey.get_name_leafdata());
    if (internallabel.is_set || is_set(internallabel.yfilter)) leaf_name_data.push_back(internallabel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtrlrfwstatuscontItems::UpgjobItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-items")
    {
        if(node_items == nullptr)
        {
            node_items = std::make_shared<System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems>();
        }
        return node_items;
    }

    if(child_yang_name == "upgjobfault-items")
    {
        if(upgjobfault_items == nullptr)
        {
            upgjobfault_items = std::make_shared<System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems>();
        }
        return upgjobfault_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtrlrfwstatuscontItems::UpgjobItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_items != nullptr)
    {
        _children["node-items"] = node_items;
    }

    if(upgjobfault_items != nullptr)
    {
        _children["upgjobfault-items"] = upgjobfault_items;
    }

    return _children;
}

void System::CtrlrfwstatuscontItems::UpgjobItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpPriKey")
    {
        grpprikey = value;
        grpprikey.value_namespace = name_space;
        grpprikey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internalLabel")
    {
        internallabel = value;
        internallabel.value_namespace = name_space;
        internallabel.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtrlrfwstatuscontItems::UpgjobItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpPriKey")
    {
        grpprikey.yfilter = yfilter;
    }
    if(value_path == "internalLabel")
    {
        internallabel.yfilter = yfilter;
    }
}

bool System::CtrlrfwstatuscontItems::UpgjobItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-items" || name == "upgjobfault-items" || name == "grpPriKey" || name == "internalLabel")
        return true;
    return false;
}

System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeItems()
    :
    nodeinmaint_list(this, {"nodeid"})
{

    yang_name = "node-items"; yang_parent_name = "upgjob-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::~NodeItems()
{
}

bool System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nodeinmaint_list.len(); index++)
    {
        if(nodeinmaint_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::has_operation() const
{
    for (std::size_t index=0; index<nodeinmaint_list.len(); index++)
    {
        if(nodeinmaint_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ctrlrfwstatuscont-items/upgjob-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodeInMaint-list")
    {
        auto ent_ = std::make_shared<System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList>();
        ent_->parent = this;
        nodeinmaint_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nodeinmaint_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NodeInMaint-list")
        return true;
    return false;
}

System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::NodeInMaintList()
    :
    nodeid{YType::uint32, "nodeId"},
    windowstarttime{YType::str, "windowStartTime"},
    windowtimecap{YType::str, "windowTimeCap"}
{

    yang_name = "NodeInMaint-list"; yang_parent_name = "node-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::~NodeInMaintList()
{
}

bool System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::has_data() const
{
    if (is_presence_container) return true;
    return nodeid.is_set
	|| windowstarttime.is_set
	|| windowtimecap.is_set;
}

bool System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nodeid.yfilter)
	|| ydk::is_set(windowstarttime.yfilter)
	|| ydk::is_set(windowtimecap.yfilter);
}

std::string System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ctrlrfwstatuscont-items/upgjob-items/node-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NodeInMaint-list";
    ADD_KEY_TOKEN(nodeid, "nodeId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nodeid.is_set || is_set(nodeid.yfilter)) leaf_name_data.push_back(nodeid.get_name_leafdata());
    if (windowstarttime.is_set || is_set(windowstarttime.yfilter)) leaf_name_data.push_back(windowstarttime.get_name_leafdata());
    if (windowtimecap.is_set || is_set(windowtimecap.yfilter)) leaf_name_data.push_back(windowtimecap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nodeId")
    {
        nodeid = value;
        nodeid.value_namespace = name_space;
        nodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "windowStartTime")
    {
        windowstarttime = value;
        windowstarttime.value_namespace = name_space;
        windowstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "windowTimeCap")
    {
        windowtimecap = value;
        windowtimecap.value_namespace = name_space;
        windowtimecap.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nodeId")
    {
        nodeid.yfilter = yfilter;
    }
    if(value_path == "windowStartTime")
    {
        windowstarttime.yfilter = yfilter;
    }
    if(value_path == "windowTimeCap")
    {
        windowtimecap.yfilter = yfilter;
    }
}

bool System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodeId" || name == "windowStartTime" || name == "windowTimeCap")
        return true;
    return false;
}

System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems::UpgjobfaultItems()
    :
    faultdelegatekey{YType::str, "faultDelegateKey"}
{

    yang_name = "upgjobfault-items"; yang_parent_name = "upgjob-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems::~UpgjobfaultItems()
{
}

bool System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems::has_data() const
{
    if (is_presence_container) return true;
    return faultdelegatekey.is_set;
}

bool System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(faultdelegatekey.yfilter);
}

std::string System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ctrlrfwstatuscont-items/upgjob-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upgjobfault-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (faultdelegatekey.is_set || is_set(faultdelegatekey.yfilter)) leaf_name_data.push_back(faultdelegatekey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "faultDelegateKey")
    {
        faultdelegatekey = value;
        faultdelegatekey.value_namespace = name_space;
        faultdelegatekey.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "faultDelegateKey")
    {
        faultdelegatekey.yfilter = yfilter;
    }
}

bool System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "faultDelegateKey")
        return true;
    return false;
}

System::FwstatuscontItems::FwstatuscontItems()
    :
    running_items(std::make_shared<System::FwstatuscontItems::RunningItems>())
    , upgjob_items(std::make_shared<System::FwstatuscontItems::UpgjobItems>())
{
    running_items->parent = this;
    upgjob_items->parent = this;

    yang_name = "fwstatuscont-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FwstatuscontItems::~FwstatuscontItems()
{
}

bool System::FwstatuscontItems::has_data() const
{
    if (is_presence_container) return true;
    return (running_items !=  nullptr && running_items->has_data())
	|| (upgjob_items !=  nullptr && upgjob_items->has_data());
}

bool System::FwstatuscontItems::has_operation() const
{
    return is_set(yfilter)
	|| (running_items !=  nullptr && running_items->has_operation())
	|| (upgjob_items !=  nullptr && upgjob_items->has_operation());
}

std::string System::FwstatuscontItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FwstatuscontItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwstatuscont-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FwstatuscontItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FwstatuscontItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "running-items")
    {
        if(running_items == nullptr)
        {
            running_items = std::make_shared<System::FwstatuscontItems::RunningItems>();
        }
        return running_items;
    }

    if(child_yang_name == "upgjob-items")
    {
        if(upgjob_items == nullptr)
        {
            upgjob_items = std::make_shared<System::FwstatuscontItems::UpgjobItems>();
        }
        return upgjob_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FwstatuscontItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(running_items != nullptr)
    {
        _children["running-items"] = running_items;
    }

    if(upgjob_items != nullptr)
    {
        _children["upgjob-items"] = upgjob_items;
    }

    return _children;
}

void System::FwstatuscontItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FwstatuscontItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FwstatuscontItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-items" || name == "upgjob-items")
        return true;
    return false;
}

System::FwstatuscontItems::RunningItems::RunningItems()
    :
    pever{YType::str, "peVer"},
    biosver{YType::str, "biosVer"},
    biosts{YType::str, "biosTs"},
    ksfile{YType::str, "ksFile"},
    sysfile{YType::str, "sysFile"},
    version{YType::str, "version"},
    internallabel{YType::str, "internalLabel"},
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"},
    ts{YType::str, "ts"},
    descr{YType::str, "descr"}
{

    yang_name = "running-items"; yang_parent_name = "fwstatuscont-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FwstatuscontItems::RunningItems::~RunningItems()
{
}

bool System::FwstatuscontItems::RunningItems::has_data() const
{
    if (is_presence_container) return true;
    return pever.is_set
	|| biosver.is_set
	|| biosts.is_set
	|| ksfile.is_set
	|| sysfile.is_set
	|| version.is_set
	|| internallabel.is_set
	|| type.is_set
	|| mode.is_set
	|| ts.is_set
	|| descr.is_set;
}

bool System::FwstatuscontItems::RunningItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pever.yfilter)
	|| ydk::is_set(biosver.yfilter)
	|| ydk::is_set(biosts.yfilter)
	|| ydk::is_set(ksfile.yfilter)
	|| ydk::is_set(sysfile.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(internallabel.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::FwstatuscontItems::RunningItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fwstatuscont-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FwstatuscontItems::RunningItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "running-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FwstatuscontItems::RunningItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pever.is_set || is_set(pever.yfilter)) leaf_name_data.push_back(pever.get_name_leafdata());
    if (biosver.is_set || is_set(biosver.yfilter)) leaf_name_data.push_back(biosver.get_name_leafdata());
    if (biosts.is_set || is_set(biosts.yfilter)) leaf_name_data.push_back(biosts.get_name_leafdata());
    if (ksfile.is_set || is_set(ksfile.yfilter)) leaf_name_data.push_back(ksfile.get_name_leafdata());
    if (sysfile.is_set || is_set(sysfile.yfilter)) leaf_name_data.push_back(sysfile.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (internallabel.is_set || is_set(internallabel.yfilter)) leaf_name_data.push_back(internallabel.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (ts.is_set || is_set(ts.yfilter)) leaf_name_data.push_back(ts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FwstatuscontItems::RunningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FwstatuscontItems::RunningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FwstatuscontItems::RunningItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peVer")
    {
        pever = value;
        pever.value_namespace = name_space;
        pever.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "biosVer")
    {
        biosver = value;
        biosver.value_namespace = name_space;
        biosver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "biosTs")
    {
        biosts = value;
        biosts.value_namespace = name_space;
        biosts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ksFile")
    {
        ksfile = value;
        ksfile.value_namespace = name_space;
        ksfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysFile")
    {
        sysfile = value;
        sysfile.value_namespace = name_space;
        sysfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internalLabel")
    {
        internallabel = value;
        internallabel.value_namespace = name_space;
        internallabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ts")
    {
        ts = value;
        ts.value_namespace = name_space;
        ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::FwstatuscontItems::RunningItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peVer")
    {
        pever.yfilter = yfilter;
    }
    if(value_path == "biosVer")
    {
        biosver.yfilter = yfilter;
    }
    if(value_path == "biosTs")
    {
        biosts.yfilter = yfilter;
    }
    if(value_path == "ksFile")
    {
        ksfile.yfilter = yfilter;
    }
    if(value_path == "sysFile")
    {
        sysfile.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "internalLabel")
    {
        internallabel.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "ts")
    {
        ts.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::FwstatuscontItems::RunningItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peVer" || name == "biosVer" || name == "biosTs" || name == "ksFile" || name == "sysFile" || name == "version" || name == "internalLabel" || name == "type" || name == "mode" || name == "ts" || name == "descr")
        return true;
    return false;
}

System::FwstatuscontItems::UpgjobItems::UpgjobItems()
    :
    grpprikey{YType::str, "grpPriKey"},
    internallabel{YType::str, "internalLabel"}
        ,
    node_items(std::make_shared<System::FwstatuscontItems::UpgjobItems::NodeItems>())
    , upgjobfault_items(std::make_shared<System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems>())
{
    node_items->parent = this;
    upgjobfault_items->parent = this;

    yang_name = "upgjob-items"; yang_parent_name = "fwstatuscont-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FwstatuscontItems::UpgjobItems::~UpgjobItems()
{
}

bool System::FwstatuscontItems::UpgjobItems::has_data() const
{
    if (is_presence_container) return true;
    return grpprikey.is_set
	|| internallabel.is_set
	|| (node_items !=  nullptr && node_items->has_data())
	|| (upgjobfault_items !=  nullptr && upgjobfault_items->has_data());
}

bool System::FwstatuscontItems::UpgjobItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpprikey.yfilter)
	|| ydk::is_set(internallabel.yfilter)
	|| (node_items !=  nullptr && node_items->has_operation())
	|| (upgjobfault_items !=  nullptr && upgjobfault_items->has_operation());
}

std::string System::FwstatuscontItems::UpgjobItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fwstatuscont-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FwstatuscontItems::UpgjobItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upgjob-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FwstatuscontItems::UpgjobItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpprikey.is_set || is_set(grpprikey.yfilter)) leaf_name_data.push_back(grpprikey.get_name_leafdata());
    if (internallabel.is_set || is_set(internallabel.yfilter)) leaf_name_data.push_back(internallabel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FwstatuscontItems::UpgjobItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-items")
    {
        if(node_items == nullptr)
        {
            node_items = std::make_shared<System::FwstatuscontItems::UpgjobItems::NodeItems>();
        }
        return node_items;
    }

    if(child_yang_name == "upgjobfault-items")
    {
        if(upgjobfault_items == nullptr)
        {
            upgjobfault_items = std::make_shared<System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems>();
        }
        return upgjobfault_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FwstatuscontItems::UpgjobItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_items != nullptr)
    {
        _children["node-items"] = node_items;
    }

    if(upgjobfault_items != nullptr)
    {
        _children["upgjobfault-items"] = upgjobfault_items;
    }

    return _children;
}

void System::FwstatuscontItems::UpgjobItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpPriKey")
    {
        grpprikey = value;
        grpprikey.value_namespace = name_space;
        grpprikey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internalLabel")
    {
        internallabel = value;
        internallabel.value_namespace = name_space;
        internallabel.value_namespace_prefix = name_space_prefix;
    }
}

void System::FwstatuscontItems::UpgjobItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpPriKey")
    {
        grpprikey.yfilter = yfilter;
    }
    if(value_path == "internalLabel")
    {
        internallabel.yfilter = yfilter;
    }
}

bool System::FwstatuscontItems::UpgjobItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-items" || name == "upgjobfault-items" || name == "grpPriKey" || name == "internalLabel")
        return true;
    return false;
}

System::FwstatuscontItems::UpgjobItems::NodeItems::NodeItems()
    :
    nodeinmaint_list(this, {"nodeid"})
{

    yang_name = "node-items"; yang_parent_name = "upgjob-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FwstatuscontItems::UpgjobItems::NodeItems::~NodeItems()
{
}

bool System::FwstatuscontItems::UpgjobItems::NodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nodeinmaint_list.len(); index++)
    {
        if(nodeinmaint_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FwstatuscontItems::UpgjobItems::NodeItems::has_operation() const
{
    for (std::size_t index=0; index<nodeinmaint_list.len(); index++)
    {
        if(nodeinmaint_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FwstatuscontItems::UpgjobItems::NodeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fwstatuscont-items/upgjob-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FwstatuscontItems::UpgjobItems::NodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FwstatuscontItems::UpgjobItems::NodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FwstatuscontItems::UpgjobItems::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodeInMaint-list")
    {
        auto ent_ = std::make_shared<System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList>();
        ent_->parent = this;
        nodeinmaint_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FwstatuscontItems::UpgjobItems::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nodeinmaint_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FwstatuscontItems::UpgjobItems::NodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FwstatuscontItems::UpgjobItems::NodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FwstatuscontItems::UpgjobItems::NodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NodeInMaint-list")
        return true;
    return false;
}

System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::NodeInMaintList()
    :
    nodeid{YType::uint32, "nodeId"},
    windowstarttime{YType::str, "windowStartTime"},
    windowtimecap{YType::str, "windowTimeCap"}
{

    yang_name = "NodeInMaint-list"; yang_parent_name = "node-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::~NodeInMaintList()
{
}

bool System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::has_data() const
{
    if (is_presence_container) return true;
    return nodeid.is_set
	|| windowstarttime.is_set
	|| windowtimecap.is_set;
}

bool System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nodeid.yfilter)
	|| ydk::is_set(windowstarttime.yfilter)
	|| ydk::is_set(windowtimecap.yfilter);
}

std::string System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fwstatuscont-items/upgjob-items/node-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NodeInMaint-list";
    ADD_KEY_TOKEN(nodeid, "nodeId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nodeid.is_set || is_set(nodeid.yfilter)) leaf_name_data.push_back(nodeid.get_name_leafdata());
    if (windowstarttime.is_set || is_set(windowstarttime.yfilter)) leaf_name_data.push_back(windowstarttime.get_name_leafdata());
    if (windowtimecap.is_set || is_set(windowtimecap.yfilter)) leaf_name_data.push_back(windowtimecap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nodeId")
    {
        nodeid = value;
        nodeid.value_namespace = name_space;
        nodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "windowStartTime")
    {
        windowstarttime = value;
        windowstarttime.value_namespace = name_space;
        windowstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "windowTimeCap")
    {
        windowtimecap = value;
        windowtimecap.value_namespace = name_space;
        windowtimecap.value_namespace_prefix = name_space_prefix;
    }
}

void System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nodeId")
    {
        nodeid.yfilter = yfilter;
    }
    if(value_path == "windowStartTime")
    {
        windowstarttime.yfilter = yfilter;
    }
    if(value_path == "windowTimeCap")
    {
        windowtimecap.yfilter = yfilter;
    }
}

bool System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodeId" || name == "windowStartTime" || name == "windowTimeCap")
        return true;
    return false;
}

System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems::UpgjobfaultItems()
    :
    faultdelegatekey{YType::str, "faultDelegateKey"}
{

    yang_name = "upgjobfault-items"; yang_parent_name = "upgjob-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems::~UpgjobfaultItems()
{
}

bool System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems::has_data() const
{
    if (is_presence_container) return true;
    return faultdelegatekey.is_set;
}

bool System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(faultdelegatekey.yfilter);
}

std::string System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fwstatuscont-items/upgjob-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upgjobfault-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (faultdelegatekey.is_set || is_set(faultdelegatekey.yfilter)) leaf_name_data.push_back(faultdelegatekey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "faultDelegateKey")
    {
        faultdelegatekey = value;
        faultdelegatekey.value_namespace = name_space;
        faultdelegatekey.value_namespace_prefix = name_space_prefix;
    }
}

void System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "faultDelegateKey")
    {
        faultdelegatekey.yfilter = yfilter;
    }
}

bool System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "faultDelegateKey")
        return true;
    return false;
}

System::CatfwstatuscontItems::CatfwstatuscontItems()
    :
    catupgjob_items(std::make_shared<System::CatfwstatuscontItems::CatupgjobItems>())
{
    catupgjob_items->parent = this;

    yang_name = "catfwstatuscont-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CatfwstatuscontItems::~CatfwstatuscontItems()
{
}

bool System::CatfwstatuscontItems::has_data() const
{
    if (is_presence_container) return true;
    return (catupgjob_items !=  nullptr && catupgjob_items->has_data());
}

bool System::CatfwstatuscontItems::has_operation() const
{
    return is_set(yfilter)
	|| (catupgjob_items !=  nullptr && catupgjob_items->has_operation());
}

std::string System::CatfwstatuscontItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CatfwstatuscontItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catfwstatuscont-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CatfwstatuscontItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CatfwstatuscontItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catupgjob-items")
    {
        if(catupgjob_items == nullptr)
        {
            catupgjob_items = std::make_shared<System::CatfwstatuscontItems::CatupgjobItems>();
        }
        return catupgjob_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CatfwstatuscontItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(catupgjob_items != nullptr)
    {
        _children["catupgjob-items"] = catupgjob_items;
    }

    return _children;
}

void System::CatfwstatuscontItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CatfwstatuscontItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CatfwstatuscontItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catupgjob-items")
        return true;
    return false;
}

System::CatfwstatuscontItems::CatupgjobItems::CatupgjobItems()
{

    yang_name = "catupgjob-items"; yang_parent_name = "catfwstatuscont-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CatfwstatuscontItems::CatupgjobItems::~CatupgjobItems()
{
}

bool System::CatfwstatuscontItems::CatupgjobItems::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool System::CatfwstatuscontItems::CatupgjobItems::has_operation() const
{
    return is_set(yfilter);
}

std::string System::CatfwstatuscontItems::CatupgjobItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/catfwstatuscont-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CatfwstatuscontItems::CatupgjobItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catupgjob-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CatfwstatuscontItems::CatupgjobItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CatfwstatuscontItems::CatupgjobItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CatfwstatuscontItems::CatupgjobItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CatfwstatuscontItems::CatupgjobItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CatfwstatuscontItems::CatupgjobItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CatfwstatuscontItems::CatupgjobItems::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

System::IsisItems::IsisItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::IsisItems::InstItems>())
    , syslog_items(std::make_shared<System::IsisItems::SyslogItems>())
    , if_items(std::make_shared<System::IsisItems::IfItems>())
{
    inst_items->parent = this;
    syslog_items->parent = this;
    if_items->parent = this;

    yang_name = "isis-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IsisItems::~IsisItems()
{
}

bool System::IsisItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data())
	|| (syslog_items !=  nullptr && syslog_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::IsisItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation())
	|| (syslog_items !=  nullptr && syslog_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::IsisItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IsisItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::IsisItems::InstItems>();
        }
        return inst_items;
    }

    if(child_yang_name == "syslog-items")
    {
        if(syslog_items == nullptr)
        {
            syslog_items = std::make_shared<System::IsisItems::SyslogItems>();
        }
        return syslog_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::IsisItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    if(syslog_items != nullptr)
    {
        _children["syslog-items"] = syslog_items;
    }

    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::IsisItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "syslog-items" || name == "if-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::IsisItems::InstItems::InstItems()
    :
    inst_list(this, {"name"})
{

    yang_name = "inst-items"; yang_parent_name = "isis-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IsisItems::InstItems::~InstItems()
{
}

bool System::IsisItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::has_operation() const
{
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/isis-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IsisItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Inst-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList>();
        ent_->parent = this;
        inst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : inst_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Inst-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::InstList()
    :
    name{YType::str, "name"},
    operst{YType::enumeration, "operSt"},
    flushroutes{YType::boolean, "flushRoutes"},
    isolate{YType::boolean, "isolate"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    dom_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems>())
    , evthstry_items(std::make_shared<System::IsisItems::InstItems::InstList::EvthstryItems>())
{
    dom_items->parent = this;
    evthstry_items->parent = this;

    yang_name = "Inst-list"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IsisItems::InstItems::InstList::~InstList()
{
}

bool System::IsisItems::InstItems::InstList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| operst.is_set
	|| flushroutes.is_set
	|| isolate.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (evthstry_items !=  nullptr && evthstry_items->has_data());
}

bool System::IsisItems::InstItems::InstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flushroutes.yfilter)
	|| ydk::is_set(isolate.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (evthstry_items !=  nullptr && evthstry_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/isis-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IsisItems::InstItems::InstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Inst-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flushroutes.is_set || is_set(flushroutes.yfilter)) leaf_name_data.push_back(flushroutes.get_name_leafdata());
    if (isolate.is_set || is_set(isolate.yfilter)) leaf_name_data.push_back(isolate.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "evthstry-items")
    {
        if(evthstry_items == nullptr)
        {
            evthstry_items = std::make_shared<System::IsisItems::InstItems::InstList::EvthstryItems>();
        }
        return evthstry_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(evthstry_items != nullptr)
    {
        _children["evthstry-items"] = evthstry_items;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flushRoutes")
    {
        flushroutes = value;
        flushroutes.value_namespace = name_space;
        flushroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isolate")
    {
        isolate = value;
        isolate.value_namespace = name_space;
        isolate.value_namespace_prefix = name_space_prefix;
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

void System::IsisItems::InstItems::InstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flushRoutes")
    {
        flushroutes.yfilter = yfilter;
    }
    if(value_path == "isolate")
    {
        isolate.yfilter = yfilter;
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

bool System::IsisItems::InstItems::InstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "evthstry-items" || name == "name" || name == "operSt" || name == "flushRoutes" || name == "isolate" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::~DomItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::get_children() const
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

void System::IsisItems::InstItems::InstList::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    net{YType::str, "net"},
    mtu{YType::uint32, "mtu"},
    bwref{YType::uint32, "bwRef"},
    bwrefunit{YType::enumeration, "bwRefUnit"},
    metricstyle{YType::enumeration, "metricStyle"},
    istype{YType::enumeration, "isType"},
    lsplifetime{YType::uint32, "lspLifetime"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    authchecklvl1{YType::boolean, "authCheckLvl1"},
    authchecklvl2{YType::boolean, "authCheckLvl2"},
    authtypelvl1{YType::enumeration, "authTypeLvl1"},
    authtypelvl2{YType::enumeration, "authTypeLvl2"},
    authkeylvl1{YType::str, "authKeyLvl1"},
    authkeylvl2{YType::str, "authKeyLvl2"},
    passivedflt{YType::enumeration, "passiveDflt"},
    operst{YType::enumeration, "operSt"}
        ,
    db_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems>())
    , overload_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems>())
    , lvl_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems>())
    , af_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems>())
    , distrls_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DistrlsItems>())
    , fmtree_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems>())
    , gr_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems>())
    , if_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems>())
    , defrtleak_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems>())
{
    db_items->parent = this;
    overload_items->parent = this;
    lvl_items->parent = this;
    af_items->parent = this;
    distrls_items->parent = this;
    fmtree_items->parent = this;
    gr_items->parent = this;
    if_items->parent = this;
    defrtleak_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::~DomList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| net.is_set
	|| mtu.is_set
	|| bwref.is_set
	|| bwrefunit.is_set
	|| metricstyle.is_set
	|| istype.is_set
	|| lsplifetime.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| authchecklvl1.is_set
	|| authchecklvl2.is_set
	|| authtypelvl1.is_set
	|| authtypelvl2.is_set
	|| authkeylvl1.is_set
	|| authkeylvl2.is_set
	|| passivedflt.is_set
	|| operst.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (overload_items !=  nullptr && overload_items->has_data())
	|| (lvl_items !=  nullptr && lvl_items->has_data())
	|| (af_items !=  nullptr && af_items->has_data())
	|| (distrls_items !=  nullptr && distrls_items->has_data())
	|| (fmtree_items !=  nullptr && fmtree_items->has_data())
	|| (gr_items !=  nullptr && gr_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data())
	|| (defrtleak_items !=  nullptr && defrtleak_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(net.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(bwref.yfilter)
	|| ydk::is_set(bwrefunit.yfilter)
	|| ydk::is_set(metricstyle.yfilter)
	|| ydk::is_set(istype.yfilter)
	|| ydk::is_set(lsplifetime.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(authchecklvl1.yfilter)
	|| ydk::is_set(authchecklvl2.yfilter)
	|| ydk::is_set(authtypelvl1.yfilter)
	|| ydk::is_set(authtypelvl2.yfilter)
	|| ydk::is_set(authkeylvl1.yfilter)
	|| ydk::is_set(authkeylvl2.yfilter)
	|| ydk::is_set(passivedflt.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (overload_items !=  nullptr && overload_items->has_operation())
	|| (lvl_items !=  nullptr && lvl_items->has_operation())
	|| (af_items !=  nullptr && af_items->has_operation())
	|| (distrls_items !=  nullptr && distrls_items->has_operation())
	|| (fmtree_items !=  nullptr && fmtree_items->has_operation())
	|| (gr_items !=  nullptr && gr_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (defrtleak_items !=  nullptr && defrtleak_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (net.is_set || is_set(net.yfilter)) leaf_name_data.push_back(net.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (bwref.is_set || is_set(bwref.yfilter)) leaf_name_data.push_back(bwref.get_name_leafdata());
    if (bwrefunit.is_set || is_set(bwrefunit.yfilter)) leaf_name_data.push_back(bwrefunit.get_name_leafdata());
    if (metricstyle.is_set || is_set(metricstyle.yfilter)) leaf_name_data.push_back(metricstyle.get_name_leafdata());
    if (istype.is_set || is_set(istype.yfilter)) leaf_name_data.push_back(istype.get_name_leafdata());
    if (lsplifetime.is_set || is_set(lsplifetime.yfilter)) leaf_name_data.push_back(lsplifetime.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (authchecklvl1.is_set || is_set(authchecklvl1.yfilter)) leaf_name_data.push_back(authchecklvl1.get_name_leafdata());
    if (authchecklvl2.is_set || is_set(authchecklvl2.yfilter)) leaf_name_data.push_back(authchecklvl2.get_name_leafdata());
    if (authtypelvl1.is_set || is_set(authtypelvl1.yfilter)) leaf_name_data.push_back(authtypelvl1.get_name_leafdata());
    if (authtypelvl2.is_set || is_set(authtypelvl2.yfilter)) leaf_name_data.push_back(authtypelvl2.get_name_leafdata());
    if (authkeylvl1.is_set || is_set(authkeylvl1.yfilter)) leaf_name_data.push_back(authkeylvl1.get_name_leafdata());
    if (authkeylvl2.is_set || is_set(authkeylvl2.yfilter)) leaf_name_data.push_back(authkeylvl2.get_name_leafdata());
    if (passivedflt.is_set || is_set(passivedflt.yfilter)) leaf_name_data.push_back(passivedflt.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "overload-items")
    {
        if(overload_items == nullptr)
        {
            overload_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems>();
        }
        return overload_items;
    }

    if(child_yang_name == "lvl-items")
    {
        if(lvl_items == nullptr)
        {
            lvl_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems>();
        }
        return lvl_items;
    }

    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems>();
        }
        return af_items;
    }

    if(child_yang_name == "distrls-items")
    {
        if(distrls_items == nullptr)
        {
            distrls_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DistrlsItems>();
        }
        return distrls_items;
    }

    if(child_yang_name == "fmtree-items")
    {
        if(fmtree_items == nullptr)
        {
            fmtree_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems>();
        }
        return fmtree_items;
    }

    if(child_yang_name == "gr-items")
    {
        if(gr_items == nullptr)
        {
            gr_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems>();
        }
        return gr_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "defrtleak-items")
    {
        if(defrtleak_items == nullptr)
        {
            defrtleak_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems>();
        }
        return defrtleak_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(overload_items != nullptr)
    {
        _children["overload-items"] = overload_items;
    }

    if(lvl_items != nullptr)
    {
        _children["lvl-items"] = lvl_items;
    }

    if(af_items != nullptr)
    {
        _children["af-items"] = af_items;
    }

    if(distrls_items != nullptr)
    {
        _children["distrls-items"] = distrls_items;
    }

    if(fmtree_items != nullptr)
    {
        _children["fmtree-items"] = fmtree_items;
    }

    if(gr_items != nullptr)
    {
        _children["gr-items"] = gr_items;
    }

    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    if(defrtleak_items != nullptr)
    {
        _children["defrtleak-items"] = defrtleak_items;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net")
    {
        net = value;
        net.value_namespace = name_space;
        net.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bwRef")
    {
        bwref = value;
        bwref.value_namespace = name_space;
        bwref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bwRefUnit")
    {
        bwrefunit = value;
        bwrefunit.value_namespace = name_space;
        bwrefunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metricStyle")
    {
        metricstyle = value;
        metricstyle.value_namespace = name_space;
        metricstyle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isType")
    {
        istype = value;
        istype.value_namespace = name_space;
        istype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspLifetime")
    {
        lsplifetime = value;
        lsplifetime.value_namespace = name_space;
        lsplifetime.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "authCheckLvl1")
    {
        authchecklvl1 = value;
        authchecklvl1.value_namespace = name_space;
        authchecklvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authCheckLvl2")
    {
        authchecklvl2 = value;
        authchecklvl2.value_namespace = name_space;
        authchecklvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authTypeLvl1")
    {
        authtypelvl1 = value;
        authtypelvl1.value_namespace = name_space;
        authtypelvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authTypeLvl2")
    {
        authtypelvl2 = value;
        authtypelvl2.value_namespace = name_space;
        authtypelvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authKeyLvl1")
    {
        authkeylvl1 = value;
        authkeylvl1.value_namespace = name_space;
        authkeylvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authKeyLvl2")
    {
        authkeylvl2 = value;
        authkeylvl2.value_namespace = name_space;
        authkeylvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passiveDflt")
    {
        passivedflt = value;
        passivedflt.value_namespace = name_space;
        passivedflt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "net")
    {
        net.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "bwRef")
    {
        bwref.yfilter = yfilter;
    }
    if(value_path == "bwRefUnit")
    {
        bwrefunit.yfilter = yfilter;
    }
    if(value_path == "metricStyle")
    {
        metricstyle.yfilter = yfilter;
    }
    if(value_path == "isType")
    {
        istype.yfilter = yfilter;
    }
    if(value_path == "lspLifetime")
    {
        lsplifetime.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "authCheckLvl1")
    {
        authchecklvl1.yfilter = yfilter;
    }
    if(value_path == "authCheckLvl2")
    {
        authchecklvl2.yfilter = yfilter;
    }
    if(value_path == "authTypeLvl1")
    {
        authtypelvl1.yfilter = yfilter;
    }
    if(value_path == "authTypeLvl2")
    {
        authtypelvl2.yfilter = yfilter;
    }
    if(value_path == "authKeyLvl1")
    {
        authkeylvl1.yfilter = yfilter;
    }
    if(value_path == "authKeyLvl2")
    {
        authkeylvl2.yfilter = yfilter;
    }
    if(value_path == "passiveDflt")
    {
        passivedflt.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "overload-items" || name == "lvl-items" || name == "af-items" || name == "distrls-items" || name == "fmtree-items" || name == "gr-items" || name == "if-items" || name == "defrtleak-items" || name == "name" || name == "net" || name == "mtu" || name == "bwRef" || name == "bwRefUnit" || name == "metricStyle" || name == "isType" || name == "lspLifetime" || name == "adminSt" || name == "ctrl" || name == "authCheckLvl1" || name == "authCheckLvl2" || name == "authTypeLvl1" || name == "authTypeLvl2" || name == "authKeyLvl1" || name == "authKeyLvl2" || name == "passiveDflt" || name == "operSt")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::get_children() const
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    grp_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems>())
    , node_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems>())
    , lsp_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems>())
    , nh_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems>())
    , rt_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems>())
    , dtep_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems>())
{
    grp_items->parent = this;
    node_items->parent = this;
    lsp_items->parent = this;
    nh_items->parent = this;
    rt_items->parent = this;
    dtep_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (grp_items !=  nullptr && grp_items->has_data())
	|| (node_items !=  nullptr && node_items->has_data())
	|| (lsp_items !=  nullptr && lsp_items->has_data())
	|| (nh_items !=  nullptr && nh_items->has_data())
	|| (rt_items !=  nullptr && rt_items->has_data())
	|| (dtep_items !=  nullptr && dtep_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (grp_items !=  nullptr && grp_items->has_operation())
	|| (node_items !=  nullptr && node_items->has_operation())
	|| (lsp_items !=  nullptr && lsp_items->has_operation())
	|| (nh_items !=  nullptr && nh_items->has_operation())
	|| (rt_items !=  nullptr && rt_items->has_operation())
	|| (dtep_items !=  nullptr && dtep_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "grp-items")
    {
        if(grp_items == nullptr)
        {
            grp_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems>();
        }
        return grp_items;
    }

    if(child_yang_name == "node-items")
    {
        if(node_items == nullptr)
        {
            node_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems>();
        }
        return node_items;
    }

    if(child_yang_name == "lsp-items")
    {
        if(lsp_items == nullptr)
        {
            lsp_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems>();
        }
        return lsp_items;
    }

    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems>();
        }
        return nh_items;
    }

    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems>();
        }
        return rt_items;
    }

    if(child_yang_name == "dtep-items")
    {
        if(dtep_items == nullptr)
        {
            dtep_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems>();
        }
        return dtep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(grp_items != nullptr)
    {
        _children["grp-items"] = grp_items;
    }

    if(node_items != nullptr)
    {
        _children["node-items"] = node_items;
    }

    if(lsp_items != nullptr)
    {
        _children["lsp-items"] = lsp_items;
    }

    if(nh_items != nullptr)
    {
        _children["nh-items"] = nh_items;
    }

    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    if(dtep_items != nullptr)
    {
        _children["dtep-items"] = dtep_items;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grp-items" || name == "node-items" || name == "lsp-items" || name == "nh-items" || name == "rt-items" || name == "dtep-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpItems()
    :
    grprec_list(this, {"addr"})
{

    yang_name = "grp-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::~GrpItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<grprec_list.len(); index++)
    {
        if(grprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::has_operation() const
{
    for (std::size_t index=0; index<grprec_list.len(); index++)
    {
        if(grprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "GrpRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList>();
        ent_->parent = this;
        grprec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : grprec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "GrpRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::GrpRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
        ,
    ftagoif_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems>())
    , bd_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems>())
    , node_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems>())
    , oifleaf_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems>())
    , oifspine_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems>())
{
    ftagoif_items->parent = this;
    bd_items->parent = this;
    node_items->parent = this;
    oifleaf_items->parent = this;
    oifspine_items->parent = this;

    yang_name = "GrpRec-list"; yang_parent_name = "grp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::~GrpRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| (ftagoif_items !=  nullptr && ftagoif_items->has_data())
	|| (bd_items !=  nullptr && bd_items->has_data())
	|| (node_items !=  nullptr && node_items->has_data())
	|| (oifleaf_items !=  nullptr && oifleaf_items->has_data())
	|| (oifspine_items !=  nullptr && oifspine_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ftagoif_items !=  nullptr && ftagoif_items->has_operation())
	|| (bd_items !=  nullptr && bd_items->has_operation())
	|| (node_items !=  nullptr && node_items->has_operation())
	|| (oifleaf_items !=  nullptr && oifleaf_items->has_operation())
	|| (oifspine_items !=  nullptr && oifspine_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "GrpRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ftagoif-items")
    {
        if(ftagoif_items == nullptr)
        {
            ftagoif_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems>();
        }
        return ftagoif_items;
    }

    if(child_yang_name == "bd-items")
    {
        if(bd_items == nullptr)
        {
            bd_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems>();
        }
        return bd_items;
    }

    if(child_yang_name == "node-items")
    {
        if(node_items == nullptr)
        {
            node_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems>();
        }
        return node_items;
    }

    if(child_yang_name == "oifleaf-items")
    {
        if(oifleaf_items == nullptr)
        {
            oifleaf_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems>();
        }
        return oifleaf_items;
    }

    if(child_yang_name == "oifspine-items")
    {
        if(oifspine_items == nullptr)
        {
            oifspine_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems>();
        }
        return oifspine_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ftagoif_items != nullptr)
    {
        _children["ftagoif-items"] = ftagoif_items;
    }

    if(bd_items != nullptr)
    {
        _children["bd-items"] = bd_items;
    }

    if(node_items != nullptr)
    {
        _children["node-items"] = node_items;
    }

    if(oifleaf_items != nullptr)
    {
        _children["oifleaf-items"] = oifleaf_items;
    }

    if(oifspine_items != nullptr)
    {
        _children["oifspine-items"] = oifspine_items;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ftagoif-items" || name == "bd-items" || name == "node-items" || name == "oifleaf-items" || name == "oifspine-items" || name == "addr" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagoifItems()
    :
    ftagoifrec_list(this, {"id"})
{

    yang_name = "ftagoif-items"; yang_parent_name = "GrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::~FtagoifItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ftagoifrec_list.len(); index++)
    {
        if(ftagoifrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::has_operation() const
{
    for (std::size_t index=0; index<ftagoifrec_list.len(); index++)
    {
        if(ftagoifrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ftagoif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FtagOifRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList>();
        ent_->parent = this;
        ftagoifrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ftagoifrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FtagOifRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::FtagOifRecList()
    :
    id{YType::uint8, "id"},
    name{YType::str, "name"}
        ,
    oifleaf_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems>())
    , oifspine_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems>())
{
    oifleaf_items->parent = this;
    oifspine_items->parent = this;

    yang_name = "FtagOifRec-list"; yang_parent_name = "ftagoif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::~FtagOifRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| (oifleaf_items !=  nullptr && oifleaf_items->has_data())
	|| (oifspine_items !=  nullptr && oifspine_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (oifleaf_items !=  nullptr && oifleaf_items->has_operation())
	|| (oifspine_items !=  nullptr && oifspine_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FtagOifRec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oifleaf-items")
    {
        if(oifleaf_items == nullptr)
        {
            oifleaf_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems>();
        }
        return oifleaf_items;
    }

    if(child_yang_name == "oifspine-items")
    {
        if(oifspine_items == nullptr)
        {
            oifspine_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems>();
        }
        return oifspine_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oifleaf_items != nullptr)
    {
        _children["oifleaf-items"] = oifleaf_items;
    }

    if(oifspine_items != nullptr)
    {
        _children["oifspine-items"] = oifspine_items;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oifleaf-items" || name == "oifspine-items" || name == "id" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifleafItems()
    :
    oiflistleaf_list(this, {"idx"})
{

    yang_name = "oifleaf-items"; yang_parent_name = "FtagOifRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::~OifleafItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oiflistleaf_list.len(); index++)
    {
        if(oiflistleaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::has_operation() const
{
    for (std::size_t index=0; index<oiflistleaf_list.len(); index++)
    {
        if(oiflistleaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oifleaf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListLeaf-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList>();
        ent_->parent = this;
        oiflistleaf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oiflistleaf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifListLeaf-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::OifListLeafList()
    :
    idx{YType::uint8, "idx"},
    name{YType::str, "name"}
{

    yang_name = "OifListLeaf-list"; yang_parent_name = "oifleaf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::~OifListLeafList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifListLeaf-list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifspineItems()
    :
    oiflistspine_list(this, {"idx"})
{

    yang_name = "oifspine-items"; yang_parent_name = "FtagOifRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::~OifspineItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oiflistspine_list.len(); index++)
    {
        if(oiflistspine_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::has_operation() const
{
    for (std::size_t index=0; index<oiflistspine_list.len(); index++)
    {
        if(oiflistspine_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oifspine-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListSpine-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList>();
        ent_->parent = this;
        oiflistspine_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oiflistspine_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifListSpine-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::OifListSpineList()
    :
    idx{YType::uint8, "idx"},
    name{YType::str, "name"}
{

    yang_name = "OifListSpine-list"; yang_parent_name = "oifspine-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::~OifListSpineList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifListSpine-list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdItems()
    :
    bdidrec_list(this, {"encap"})
{

    yang_name = "bd-items"; yang_parent_name = "GrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::~BdItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bdidrec_list.len(); index++)
    {
        if(bdidrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::has_operation() const
{
    for (std::size_t index=0; index<bdidrec_list.len(); index++)
    {
        if(bdidrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BdIdRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList>();
        ent_->parent = this;
        bdidrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bdidrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BdIdRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::BdIdRecList()
    :
    encap{YType::str, "encap"},
    name{YType::str, "name"}
{

    yang_name = "BdIdRec-list"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::~BdIdRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BdIdRec-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encap" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeItems()
    :
    nodeidrec_list(this, {"addr"})
{

    yang_name = "node-items"; yang_parent_name = "GrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::~NodeItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nodeidrec_list.len(); index++)
    {
        if(nodeidrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::has_operation() const
{
    for (std::size_t index=0; index<nodeidrec_list.len(); index++)
    {
        if(nodeidrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodeIdRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList>();
        ent_->parent = this;
        nodeidrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nodeidrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NodeIdRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::NodeIdRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{

    yang_name = "NodeIdRec-list"; yang_parent_name = "node-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::~NodeIdRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NodeIdRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifleafItems()
    :
    oiflistleaf_list(this, {"idx"})
{

    yang_name = "oifleaf-items"; yang_parent_name = "GrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::~OifleafItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oiflistleaf_list.len(); index++)
    {
        if(oiflistleaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::has_operation() const
{
    for (std::size_t index=0; index<oiflistleaf_list.len(); index++)
    {
        if(oiflistleaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oifleaf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListLeaf-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList>();
        ent_->parent = this;
        oiflistleaf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oiflistleaf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifListLeaf-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::OifListLeafList()
    :
    idx{YType::uint8, "idx"},
    name{YType::str, "name"}
{

    yang_name = "OifListLeaf-list"; yang_parent_name = "oifleaf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::~OifListLeafList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifListLeaf-list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifspineItems()
    :
    oiflistspine_list(this, {"idx"})
{

    yang_name = "oifspine-items"; yang_parent_name = "GrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::~OifspineItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oiflistspine_list.len(); index++)
    {
        if(oiflistspine_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::has_operation() const
{
    for (std::size_t index=0; index<oiflistspine_list.len(); index++)
    {
        if(oiflistspine_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oifspine-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListSpine-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList>();
        ent_->parent = this;
        oiflistspine_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oiflistspine_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifListSpine-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::OifListSpineList()
    :
    idx{YType::uint8, "idx"},
    name{YType::str, "name"}
{

    yang_name = "OifListSpine-list"; yang_parent_name = "oifspine-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::~OifListSpineList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifListSpine-list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeItems()
    :
    noderec_list(this, {"sysid"})
{

    yang_name = "node-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::~NodeItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<noderec_list.len(); index++)
    {
        if(noderec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::has_operation() const
{
    for (std::size_t index=0; index<noderec_list.len(); index++)
    {
        if(noderec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodeRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList>();
        ent_->parent = this;
        noderec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : noderec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NodeRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::NodeRecList()
    :
    sysid{YType::str, "sysId"},
    addr{YType::str, "addr"},
    name{YType::str, "name"}
        ,
    grp_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems>())
{
    grp_items->parent = this;

    yang_name = "NodeRec-list"; yang_parent_name = "node-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::~NodeRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::has_data() const
{
    if (is_presence_container) return true;
    return sysid.is_set
	|| addr.is_set
	|| name.is_set
	|| (grp_items !=  nullptr && grp_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sysid.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (grp_items !=  nullptr && grp_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NodeRec-list";
    ADD_KEY_TOKEN(sysid, "sysId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sysid.is_set || is_set(sysid.yfilter)) leaf_name_data.push_back(sysid.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "grp-items")
    {
        if(grp_items == nullptr)
        {
            grp_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems>();
        }
        return grp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(grp_items != nullptr)
    {
        _children["grp-items"] = grp_items;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sysId")
    {
        sysid = value;
        sysid.value_namespace = name_space;
        sysid.value_namespace_prefix = name_space_prefix;
    }
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sysId")
    {
        sysid.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grp-items" || name == "sysId" || name == "addr" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpItems()
    :
    grpidrec_list(this, {"addr"})
{

    yang_name = "grp-items"; yang_parent_name = "NodeRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::~GrpItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<grpidrec_list.len(); index++)
    {
        if(grpidrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::has_operation() const
{
    for (std::size_t index=0; index<grpidrec_list.len(); index++)
    {
        if(grpidrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "GrpIdRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList>();
        ent_->parent = this;
        grpidrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : grpidrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "GrpIdRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::GrpIdRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{

    yang_name = "GrpIdRec-list"; yang_parent_name = "grp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::~GrpIdRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "GrpIdRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspItems()
    :
    lsprec_list(this, {"sysid", "lanid", "frag"})
{

    yang_name = "lsp-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::~LspItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsprec_list.len(); index++)
    {
        if(lsprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::has_operation() const
{
    for (std::size_t index=0; index<lsprec_list.len(); index++)
    {
        if(lsprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LspRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList>();
        ent_->parent = this;
        lsprec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsprec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LspRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::LspRecList()
    :
    sysid{YType::str, "sysId"},
    lanid{YType::uint8, "lanId"},
    frag{YType::uint8, "frag"},
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    extisrec_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems>())
    , tlvrec_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems>())
    , iprec_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems>())
{
    extisrec_items->parent = this;
    tlvrec_items->parent = this;
    iprec_items->parent = this;

    yang_name = "LspRec-list"; yang_parent_name = "lsp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::~LspRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::has_data() const
{
    if (is_presence_container) return true;
    return sysid.is_set
	|| lanid.is_set
	|| frag.is_set
	|| type.is_set
	|| name.is_set
	|| (extisrec_items !=  nullptr && extisrec_items->has_data())
	|| (tlvrec_items !=  nullptr && tlvrec_items->has_data())
	|| (iprec_items !=  nullptr && iprec_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sysid.yfilter)
	|| ydk::is_set(lanid.yfilter)
	|| ydk::is_set(frag.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (extisrec_items !=  nullptr && extisrec_items->has_operation())
	|| (tlvrec_items !=  nullptr && tlvrec_items->has_operation())
	|| (iprec_items !=  nullptr && iprec_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LspRec-list";
    ADD_KEY_TOKEN(sysid, "sysId");
    ADD_KEY_TOKEN(lanid, "lanId");
    ADD_KEY_TOKEN(frag, "frag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sysid.is_set || is_set(sysid.yfilter)) leaf_name_data.push_back(sysid.get_name_leafdata());
    if (lanid.is_set || is_set(lanid.yfilter)) leaf_name_data.push_back(lanid.get_name_leafdata());
    if (frag.is_set || is_set(frag.yfilter)) leaf_name_data.push_back(frag.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extisrec-items")
    {
        if(extisrec_items == nullptr)
        {
            extisrec_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems>();
        }
        return extisrec_items;
    }

    if(child_yang_name == "tlvRec-items")
    {
        if(tlvrec_items == nullptr)
        {
            tlvrec_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems>();
        }
        return tlvrec_items;
    }

    if(child_yang_name == "iprec-items")
    {
        if(iprec_items == nullptr)
        {
            iprec_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems>();
        }
        return iprec_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(extisrec_items != nullptr)
    {
        _children["extisrec-items"] = extisrec_items;
    }

    if(tlvrec_items != nullptr)
    {
        _children["tlvRec-items"] = tlvrec_items;
    }

    if(iprec_items != nullptr)
    {
        _children["iprec-items"] = iprec_items;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sysId")
    {
        sysid = value;
        sysid.value_namespace = name_space;
        sysid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lanId")
    {
        lanid = value;
        lanid.value_namespace = name_space;
        lanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frag")
    {
        frag = value;
        frag.value_namespace = name_space;
        frag.value_namespace_prefix = name_space_prefix;
    }
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sysId")
    {
        sysid.yfilter = yfilter;
    }
    if(value_path == "lanId")
    {
        lanid.yfilter = yfilter;
    }
    if(value_path == "frag")
    {
        frag.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extisrec-items" || name == "tlvRec-items" || name == "iprec-items" || name == "sysId" || name == "lanId" || name == "frag" || name == "type" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtisrecItems()
    :
    extisrec_list(this, {"name"})
{

    yang_name = "extisrec-items"; yang_parent_name = "LspRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::~ExtisrecItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extisrec_list.len(); index++)
    {
        if(extisrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::has_operation() const
{
    for (std::size_t index=0; index<extisrec_list.len(); index++)
    {
        if(extisrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extisrec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtIsRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList>();
        ent_->parent = this;
        extisrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extisrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtIsRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::ExtIsRecList()
    :
    name{YType::str, "name"}
{

    yang_name = "ExtIsRec-list"; yang_parent_name = "extisrec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::~ExtIsRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtIsRec-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecItems()
    :
    tlvrec_list(this, {"type"})
{

    yang_name = "tlvRec-items"; yang_parent_name = "LspRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::~TlvRecItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tlvrec_list.len(); index++)
    {
        if(tlvrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::has_operation() const
{
    for (std::size_t index=0; index<tlvrec_list.len(); index++)
    {
        if(tlvrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlvRec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TlvRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList>();
        ent_->parent = this;
        tlvrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tlvrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TlvRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::TlvRecList()
    :
    type{YType::uint8, "type"},
    value_{YType::str, "value"},
    name{YType::str, "name"}
{

    yang_name = "TlvRec-list"; yang_parent_name = "tlvRec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::~TlvRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| value_.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TlvRec-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IprecItems()
    :
    iprec_list(this, {"pfx"})
{

    yang_name = "iprec-items"; yang_parent_name = "LspRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::~IprecItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iprec_list.len(); index++)
    {
        if(iprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::has_operation() const
{
    for (std::size_t index=0; index<iprec_list.len(); index++)
    {
        if(iprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iprec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList>();
        ent_->parent = this;
        iprec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iprec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::IpRecList()
    :
    pfx{YType::str, "pfx"},
    name{YType::str, "name"}
{

    yang_name = "IpRec-list"; yang_parent_name = "iprec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::~IpRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpRec-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfx" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NhItems()
    :
    nexthop_list(this, {"nhif", "addr"})
{

    yang_name = "nh-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::~NhItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nexthop-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList>();
        ent_->parent = this;
        nexthop_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nexthop_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nexthop-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList::NexthopList()
    :
    nhif{YType::str, "nhIf"},
    addr{YType::str, "addr"},
    if_{YType::uint32, "if"},
    name{YType::str, "name"}
{

    yang_name = "Nexthop-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList::~NexthopList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList::has_data() const
{
    if (is_presence_container) return true;
    return nhif.is_set
	|| addr.is_set
	|| if_.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhif.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nexthop-list";
    ADD_KEY_TOKEN(nhif, "nhIf");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhif.is_set || is_set(nhif.yfilter)) leaf_name_data.push_back(nhif.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhIf")
    {
        nhif = value;
        nhif.value_namespace = name_space;
        nhif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhIf")
    {
        nhif.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhIf" || name == "addr" || name == "if" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RtItems()
    :
    route_list(this, {"pfx"})
{

    yang_name = "rt-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::~RtItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList>();
        ent_->parent = this;
        route_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RouteList()
    :
    pfx{YType::str, "pfx"},
    name{YType::str, "name"}
        ,
    rsnhatt_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems>())
{
    rsnhatt_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::~RouteList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| name.is_set
	|| (rsnhatt_items !=  nullptr && rsnhatt_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rsnhatt_items !=  nullptr && rsnhatt_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsnhAtt-items")
    {
        if(rsnhatt_items == nullptr)
        {
            rsnhatt_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems>();
        }
        return rsnhatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsnhatt_items != nullptr)
    {
        _children["rsnhAtt-items"] = rsnhatt_items;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsnhAtt-items" || name == "pfx" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsnhAttItems()
    :
    rsnhatt_list(this, {"tdn"})
{

    yang_name = "rsnhAtt-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::~RsnhAttItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsnhatt_list.len(); index++)
    {
        if(rsnhatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsnhatt_list.len(); index++)
    {
        if(rsnhatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsnhAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsNhAtt-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList>();
        ent_->parent = this;
        rsnhatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsnhatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsNhAtt-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::RsNhAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsNhAtt-list"; yang_parent_name = "rsnhAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::~RsNhAttList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsNhAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DtepItems()
    :
    dtep_list(this, {"id"})
{

    yang_name = "dtep-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::~DtepItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dtep_list.len(); index++)
    {
        if(dtep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::has_operation() const
{
    for (std::size_t index=0; index<dtep_list.len(); index++)
    {
        if(dtep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dtep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DTEp-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList>();
        ent_->parent = this;
        dtep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dtep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DTEp-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList::DTEpList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    encapt{YType::enumeration, "encapt"},
    type{YType::str, "type"},
    role{YType::enumeration, "role"}
{

    yang_name = "DTEp-list"; yang_parent_name = "dtep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList::~DTEpList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| encapt.is_set
	|| type.is_set
	|| role.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(encapt.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(role.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DTEp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (encapt.is_set || is_set(encapt.yfilter)) leaf_name_data.push_back(encapt.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "encapt")
    {
        encapt = value;
        encapt.value_namespace = name_space;
        encapt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "encapt")
    {
        encapt.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "encapt" || name == "type" || name == "role")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems::OverloadItems()
    :
    adminst{YType::enumeration, "adminSt"},
    startuptime{YType::uint32, "startupTime"},
    bgpasnum{YType::uint16, "bgpAsNum"},
    suppress{YType::str, "suppress"}
{

    yang_name = "overload-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems::~OverloadItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| startuptime.is_set
	|| bgpasnum.is_set
	|| suppress.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(startuptime.yfilter)
	|| ydk::is_set(bgpasnum.yfilter)
	|| ydk::is_set(suppress.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (startuptime.is_set || is_set(startuptime.yfilter)) leaf_name_data.push_back(startuptime.get_name_leafdata());
    if (bgpasnum.is_set || is_set(bgpasnum.yfilter)) leaf_name_data.push_back(bgpasnum.get_name_leafdata());
    if (suppress.is_set || is_set(suppress.yfilter)) leaf_name_data.push_back(suppress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startupTime")
    {
        startuptime = value;
        startuptime.value_namespace = name_space;
        startuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpAsNum")
    {
        bgpasnum = value;
        bgpasnum.value_namespace = name_space;
        bgpasnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress")
    {
        suppress = value;
        suppress.value_namespace = name_space;
        suppress.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "startupTime")
    {
        startuptime.yfilter = yfilter;
    }
    if(value_path == "bgpAsNum")
    {
        bgpasnum.yfilter = yfilter;
    }
    if(value_path == "suppress")
    {
        suppress.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminSt" || name == "startupTime" || name == "bgpAsNum" || name == "suppress")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::LvlItems()
    :
    domlvl_list(this, {"type"})
{

    yang_name = "lvl-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::~LvlItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domlvl_list.len(); index++)
    {
        if(domlvl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::has_operation() const
{
    for (std::size_t index=0; index<domlvl_list.len(); index++)
    {
        if(domlvl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lvl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomLvl-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList>();
        ent_->parent = this;
        domlvl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domlvl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomLvl-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DomLvlList()
    :
    type{YType::enumeration, "type"},
    ctrl{YType::str, "ctrl"},
    name{YType::str, "name"}
        ,
    db_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems>())
    , lspgen_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems>())
    , spfcomp_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems>())
{
    db_items->parent = this;
    lspgen_items->parent = this;
    spfcomp_items->parent = this;

    yang_name = "DomLvl-list"; yang_parent_name = "lvl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::~DomLvlList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ctrl.is_set
	|| name.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (lspgen_items !=  nullptr && lspgen_items->has_data())
	|| (spfcomp_items !=  nullptr && spfcomp_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (lspgen_items !=  nullptr && lspgen_items->has_operation())
	|| (spfcomp_items !=  nullptr && spfcomp_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomLvl-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "lspgen-items")
    {
        if(lspgen_items == nullptr)
        {
            lspgen_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems>();
        }
        return lspgen_items;
    }

    if(child_yang_name == "spfcomp-items")
    {
        if(spfcomp_items == nullptr)
        {
            spfcomp_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems>();
        }
        return spfcomp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(lspgen_items != nullptr)
    {
        _children["lspgen-items"] = lspgen_items;
    }

    if(spfcomp_items != nullptr)
    {
        _children["spfcomp-items"] = spfcomp_items;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "lspgen-items" || name == "spfcomp-items" || name == "type" || name == "ctrl" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "DomLvl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::~DbItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::get_children() const
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    grp_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems>())
    , node_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems>())
    , lsp_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems>())
    , nh_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems>())
    , rt_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems>())
    , dtep_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems>())
{
    grp_items->parent = this;
    node_items->parent = this;
    lsp_items->parent = this;
    nh_items->parent = this;
    rt_items->parent = this;
    dtep_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::~DbList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (grp_items !=  nullptr && grp_items->has_data())
	|| (node_items !=  nullptr && node_items->has_data())
	|| (lsp_items !=  nullptr && lsp_items->has_data())
	|| (nh_items !=  nullptr && nh_items->has_data())
	|| (rt_items !=  nullptr && rt_items->has_data())
	|| (dtep_items !=  nullptr && dtep_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (grp_items !=  nullptr && grp_items->has_operation())
	|| (node_items !=  nullptr && node_items->has_operation())
	|| (lsp_items !=  nullptr && lsp_items->has_operation())
	|| (nh_items !=  nullptr && nh_items->has_operation())
	|| (rt_items !=  nullptr && rt_items->has_operation())
	|| (dtep_items !=  nullptr && dtep_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "grp-items")
    {
        if(grp_items == nullptr)
        {
            grp_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems>();
        }
        return grp_items;
    }

    if(child_yang_name == "node-items")
    {
        if(node_items == nullptr)
        {
            node_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems>();
        }
        return node_items;
    }

    if(child_yang_name == "lsp-items")
    {
        if(lsp_items == nullptr)
        {
            lsp_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems>();
        }
        return lsp_items;
    }

    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems>();
        }
        return nh_items;
    }

    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems>();
        }
        return rt_items;
    }

    if(child_yang_name == "dtep-items")
    {
        if(dtep_items == nullptr)
        {
            dtep_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems>();
        }
        return dtep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(grp_items != nullptr)
    {
        _children["grp-items"] = grp_items;
    }

    if(node_items != nullptr)
    {
        _children["node-items"] = node_items;
    }

    if(lsp_items != nullptr)
    {
        _children["lsp-items"] = lsp_items;
    }

    if(nh_items != nullptr)
    {
        _children["nh-items"] = nh_items;
    }

    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    if(dtep_items != nullptr)
    {
        _children["dtep-items"] = dtep_items;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grp-items" || name == "node-items" || name == "lsp-items" || name == "nh-items" || name == "rt-items" || name == "dtep-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpItems()
    :
    grprec_list(this, {"addr"})
{

    yang_name = "grp-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::~GrpItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<grprec_list.len(); index++)
    {
        if(grprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::has_operation() const
{
    for (std::size_t index=0; index<grprec_list.len(); index++)
    {
        if(grprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "GrpRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList>();
        ent_->parent = this;
        grprec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : grprec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "GrpRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::GrpRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
        ,
    ftagoif_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems>())
    , bd_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems>())
    , node_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems>())
    , oifleaf_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems>())
    , oifspine_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems>())
{
    ftagoif_items->parent = this;
    bd_items->parent = this;
    node_items->parent = this;
    oifleaf_items->parent = this;
    oifspine_items->parent = this;

    yang_name = "GrpRec-list"; yang_parent_name = "grp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::~GrpRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| (ftagoif_items !=  nullptr && ftagoif_items->has_data())
	|| (bd_items !=  nullptr && bd_items->has_data())
	|| (node_items !=  nullptr && node_items->has_data())
	|| (oifleaf_items !=  nullptr && oifleaf_items->has_data())
	|| (oifspine_items !=  nullptr && oifspine_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ftagoif_items !=  nullptr && ftagoif_items->has_operation())
	|| (bd_items !=  nullptr && bd_items->has_operation())
	|| (node_items !=  nullptr && node_items->has_operation())
	|| (oifleaf_items !=  nullptr && oifleaf_items->has_operation())
	|| (oifspine_items !=  nullptr && oifspine_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "GrpRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ftagoif-items")
    {
        if(ftagoif_items == nullptr)
        {
            ftagoif_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems>();
        }
        return ftagoif_items;
    }

    if(child_yang_name == "bd-items")
    {
        if(bd_items == nullptr)
        {
            bd_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems>();
        }
        return bd_items;
    }

    if(child_yang_name == "node-items")
    {
        if(node_items == nullptr)
        {
            node_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems>();
        }
        return node_items;
    }

    if(child_yang_name == "oifleaf-items")
    {
        if(oifleaf_items == nullptr)
        {
            oifleaf_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems>();
        }
        return oifleaf_items;
    }

    if(child_yang_name == "oifspine-items")
    {
        if(oifspine_items == nullptr)
        {
            oifspine_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems>();
        }
        return oifspine_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ftagoif_items != nullptr)
    {
        _children["ftagoif-items"] = ftagoif_items;
    }

    if(bd_items != nullptr)
    {
        _children["bd-items"] = bd_items;
    }

    if(node_items != nullptr)
    {
        _children["node-items"] = node_items;
    }

    if(oifleaf_items != nullptr)
    {
        _children["oifleaf-items"] = oifleaf_items;
    }

    if(oifspine_items != nullptr)
    {
        _children["oifspine-items"] = oifspine_items;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ftagoif-items" || name == "bd-items" || name == "node-items" || name == "oifleaf-items" || name == "oifspine-items" || name == "addr" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagoifItems()
    :
    ftagoifrec_list(this, {"id"})
{

    yang_name = "ftagoif-items"; yang_parent_name = "GrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::~FtagoifItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ftagoifrec_list.len(); index++)
    {
        if(ftagoifrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::has_operation() const
{
    for (std::size_t index=0; index<ftagoifrec_list.len(); index++)
    {
        if(ftagoifrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ftagoif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FtagOifRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList>();
        ent_->parent = this;
        ftagoifrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ftagoifrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FtagOifRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::FtagOifRecList()
    :
    id{YType::uint8, "id"},
    name{YType::str, "name"}
        ,
    oifleaf_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems>())
    , oifspine_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems>())
{
    oifleaf_items->parent = this;
    oifspine_items->parent = this;

    yang_name = "FtagOifRec-list"; yang_parent_name = "ftagoif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::~FtagOifRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| (oifleaf_items !=  nullptr && oifleaf_items->has_data())
	|| (oifspine_items !=  nullptr && oifspine_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (oifleaf_items !=  nullptr && oifleaf_items->has_operation())
	|| (oifspine_items !=  nullptr && oifspine_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FtagOifRec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oifleaf-items")
    {
        if(oifleaf_items == nullptr)
        {
            oifleaf_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems>();
        }
        return oifleaf_items;
    }

    if(child_yang_name == "oifspine-items")
    {
        if(oifspine_items == nullptr)
        {
            oifspine_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems>();
        }
        return oifspine_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oifleaf_items != nullptr)
    {
        _children["oifleaf-items"] = oifleaf_items;
    }

    if(oifspine_items != nullptr)
    {
        _children["oifspine-items"] = oifspine_items;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oifleaf-items" || name == "oifspine-items" || name == "id" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifleafItems()
    :
    oiflistleaf_list(this, {"idx"})
{

    yang_name = "oifleaf-items"; yang_parent_name = "FtagOifRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::~OifleafItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oiflistleaf_list.len(); index++)
    {
        if(oiflistleaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::has_operation() const
{
    for (std::size_t index=0; index<oiflistleaf_list.len(); index++)
    {
        if(oiflistleaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oifleaf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListLeaf-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList>();
        ent_->parent = this;
        oiflistleaf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oiflistleaf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifListLeaf-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::OifListLeafList()
    :
    idx{YType::uint8, "idx"},
    name{YType::str, "name"}
{

    yang_name = "OifListLeaf-list"; yang_parent_name = "oifleaf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::~OifListLeafList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifListLeaf-list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifspineItems()
    :
    oiflistspine_list(this, {"idx"})
{

    yang_name = "oifspine-items"; yang_parent_name = "FtagOifRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::~OifspineItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oiflistspine_list.len(); index++)
    {
        if(oiflistspine_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::has_operation() const
{
    for (std::size_t index=0; index<oiflistspine_list.len(); index++)
    {
        if(oiflistspine_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oifspine-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListSpine-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList>();
        ent_->parent = this;
        oiflistspine_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oiflistspine_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifListSpine-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::OifListSpineList()
    :
    idx{YType::uint8, "idx"},
    name{YType::str, "name"}
{

    yang_name = "OifListSpine-list"; yang_parent_name = "oifspine-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::~OifListSpineList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifListSpine-list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdItems()
    :
    bdidrec_list(this, {"encap"})
{

    yang_name = "bd-items"; yang_parent_name = "GrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::~BdItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bdidrec_list.len(); index++)
    {
        if(bdidrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::has_operation() const
{
    for (std::size_t index=0; index<bdidrec_list.len(); index++)
    {
        if(bdidrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BdIdRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList>();
        ent_->parent = this;
        bdidrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bdidrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BdIdRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::BdIdRecList()
    :
    encap{YType::str, "encap"},
    name{YType::str, "name"}
{

    yang_name = "BdIdRec-list"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::~BdIdRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BdIdRec-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encap" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeItems()
    :
    nodeidrec_list(this, {"addr"})
{

    yang_name = "node-items"; yang_parent_name = "GrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::~NodeItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nodeidrec_list.len(); index++)
    {
        if(nodeidrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::has_operation() const
{
    for (std::size_t index=0; index<nodeidrec_list.len(); index++)
    {
        if(nodeidrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodeIdRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList>();
        ent_->parent = this;
        nodeidrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nodeidrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NodeIdRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::NodeIdRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{

    yang_name = "NodeIdRec-list"; yang_parent_name = "node-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::~NodeIdRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NodeIdRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifleafItems()
    :
    oiflistleaf_list(this, {"idx"})
{

    yang_name = "oifleaf-items"; yang_parent_name = "GrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::~OifleafItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oiflistleaf_list.len(); index++)
    {
        if(oiflistleaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::has_operation() const
{
    for (std::size_t index=0; index<oiflistleaf_list.len(); index++)
    {
        if(oiflistleaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oifleaf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListLeaf-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList>();
        ent_->parent = this;
        oiflistleaf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oiflistleaf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifListLeaf-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::OifListLeafList()
    :
    idx{YType::uint8, "idx"},
    name{YType::str, "name"}
{

    yang_name = "OifListLeaf-list"; yang_parent_name = "oifleaf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::~OifListLeafList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifListLeaf-list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifspineItems()
    :
    oiflistspine_list(this, {"idx"})
{

    yang_name = "oifspine-items"; yang_parent_name = "GrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::~OifspineItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oiflistspine_list.len(); index++)
    {
        if(oiflistspine_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::has_operation() const
{
    for (std::size_t index=0; index<oiflistspine_list.len(); index++)
    {
        if(oiflistspine_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oifspine-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListSpine-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList>();
        ent_->parent = this;
        oiflistspine_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oiflistspine_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifListSpine-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::OifListSpineList()
    :
    idx{YType::uint8, "idx"},
    name{YType::str, "name"}
{

    yang_name = "OifListSpine-list"; yang_parent_name = "oifspine-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::~OifListSpineList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifListSpine-list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeItems()
    :
    noderec_list(this, {"sysid"})
{

    yang_name = "node-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::~NodeItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<noderec_list.len(); index++)
    {
        if(noderec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::has_operation() const
{
    for (std::size_t index=0; index<noderec_list.len(); index++)
    {
        if(noderec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodeRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList>();
        ent_->parent = this;
        noderec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : noderec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NodeRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::NodeRecList()
    :
    sysid{YType::str, "sysId"},
    addr{YType::str, "addr"},
    name{YType::str, "name"}
        ,
    grp_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems>())
{
    grp_items->parent = this;

    yang_name = "NodeRec-list"; yang_parent_name = "node-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::~NodeRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::has_data() const
{
    if (is_presence_container) return true;
    return sysid.is_set
	|| addr.is_set
	|| name.is_set
	|| (grp_items !=  nullptr && grp_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sysid.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (grp_items !=  nullptr && grp_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NodeRec-list";
    ADD_KEY_TOKEN(sysid, "sysId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sysid.is_set || is_set(sysid.yfilter)) leaf_name_data.push_back(sysid.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "grp-items")
    {
        if(grp_items == nullptr)
        {
            grp_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems>();
        }
        return grp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(grp_items != nullptr)
    {
        _children["grp-items"] = grp_items;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sysId")
    {
        sysid = value;
        sysid.value_namespace = name_space;
        sysid.value_namespace_prefix = name_space_prefix;
    }
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sysId")
    {
        sysid.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grp-items" || name == "sysId" || name == "addr" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpItems()
    :
    grpidrec_list(this, {"addr"})
{

    yang_name = "grp-items"; yang_parent_name = "NodeRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::~GrpItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<grpidrec_list.len(); index++)
    {
        if(grpidrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::has_operation() const
{
    for (std::size_t index=0; index<grpidrec_list.len(); index++)
    {
        if(grpidrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "GrpIdRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList>();
        ent_->parent = this;
        grpidrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : grpidrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "GrpIdRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::GrpIdRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{

    yang_name = "GrpIdRec-list"; yang_parent_name = "grp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::~GrpIdRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "GrpIdRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspItems()
    :
    lsprec_list(this, {"sysid", "lanid", "frag"})
{

    yang_name = "lsp-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::~LspItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsprec_list.len(); index++)
    {
        if(lsprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::has_operation() const
{
    for (std::size_t index=0; index<lsprec_list.len(); index++)
    {
        if(lsprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LspRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList>();
        ent_->parent = this;
        lsprec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsprec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LspRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::LspRecList()
    :
    sysid{YType::str, "sysId"},
    lanid{YType::uint8, "lanId"},
    frag{YType::uint8, "frag"},
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    extisrec_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems>())
    , tlvrec_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems>())
    , iprec_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems>())
{
    extisrec_items->parent = this;
    tlvrec_items->parent = this;
    iprec_items->parent = this;

    yang_name = "LspRec-list"; yang_parent_name = "lsp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::~LspRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::has_data() const
{
    if (is_presence_container) return true;
    return sysid.is_set
	|| lanid.is_set
	|| frag.is_set
	|| type.is_set
	|| name.is_set
	|| (extisrec_items !=  nullptr && extisrec_items->has_data())
	|| (tlvrec_items !=  nullptr && tlvrec_items->has_data())
	|| (iprec_items !=  nullptr && iprec_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sysid.yfilter)
	|| ydk::is_set(lanid.yfilter)
	|| ydk::is_set(frag.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (extisrec_items !=  nullptr && extisrec_items->has_operation())
	|| (tlvrec_items !=  nullptr && tlvrec_items->has_operation())
	|| (iprec_items !=  nullptr && iprec_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LspRec-list";
    ADD_KEY_TOKEN(sysid, "sysId");
    ADD_KEY_TOKEN(lanid, "lanId");
    ADD_KEY_TOKEN(frag, "frag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sysid.is_set || is_set(sysid.yfilter)) leaf_name_data.push_back(sysid.get_name_leafdata());
    if (lanid.is_set || is_set(lanid.yfilter)) leaf_name_data.push_back(lanid.get_name_leafdata());
    if (frag.is_set || is_set(frag.yfilter)) leaf_name_data.push_back(frag.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extisrec-items")
    {
        if(extisrec_items == nullptr)
        {
            extisrec_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems>();
        }
        return extisrec_items;
    }

    if(child_yang_name == "tlvRec-items")
    {
        if(tlvrec_items == nullptr)
        {
            tlvrec_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems>();
        }
        return tlvrec_items;
    }

    if(child_yang_name == "iprec-items")
    {
        if(iprec_items == nullptr)
        {
            iprec_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems>();
        }
        return iprec_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(extisrec_items != nullptr)
    {
        _children["extisrec-items"] = extisrec_items;
    }

    if(tlvrec_items != nullptr)
    {
        _children["tlvRec-items"] = tlvrec_items;
    }

    if(iprec_items != nullptr)
    {
        _children["iprec-items"] = iprec_items;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sysId")
    {
        sysid = value;
        sysid.value_namespace = name_space;
        sysid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lanId")
    {
        lanid = value;
        lanid.value_namespace = name_space;
        lanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frag")
    {
        frag = value;
        frag.value_namespace = name_space;
        frag.value_namespace_prefix = name_space_prefix;
    }
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sysId")
    {
        sysid.yfilter = yfilter;
    }
    if(value_path == "lanId")
    {
        lanid.yfilter = yfilter;
    }
    if(value_path == "frag")
    {
        frag.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extisrec-items" || name == "tlvRec-items" || name == "iprec-items" || name == "sysId" || name == "lanId" || name == "frag" || name == "type" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtisrecItems()
    :
    extisrec_list(this, {"name"})
{

    yang_name = "extisrec-items"; yang_parent_name = "LspRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::~ExtisrecItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extisrec_list.len(); index++)
    {
        if(extisrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::has_operation() const
{
    for (std::size_t index=0; index<extisrec_list.len(); index++)
    {
        if(extisrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extisrec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtIsRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList>();
        ent_->parent = this;
        extisrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extisrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtIsRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::ExtIsRecList()
    :
    name{YType::str, "name"}
{

    yang_name = "ExtIsRec-list"; yang_parent_name = "extisrec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::~ExtIsRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtIsRec-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}


}
}

