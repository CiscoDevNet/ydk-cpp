
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_22.hpp"
#include "Cisco_NX_OS_device_23.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::NatItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::InstItems::DomItems::~DomItems()
{
}

bool System::NatItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NatItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NatItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nat-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::NatItems::InstItems::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::DomItems::get_children() const
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

void System::NatItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NatItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NatItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::NatItems::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    encap{YType::str, "encap"}
        ,
    if_items(std::make_shared<System::NatItems::InstItems::DomItems::DomList::IfItems>())
    , xlate_items(std::make_shared<System::NatItems::InstItems::DomItems::DomList::XlateItems>())
    , natalias_items(std::make_shared<System::NatItems::InstItems::DomItems::DomList::NataliasItems>())
    , proto_items(std::make_shared<System::NatItems::InstItems::DomItems::DomList::ProtoItems>())
{
    if_items->parent = this;
    xlate_items->parent = this;
    natalias_items->parent = this;
    proto_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::NatItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| encap.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (xlate_items !=  nullptr && xlate_items->has_data())
	|| (natalias_items !=  nullptr && natalias_items->has_data())
	|| (proto_items !=  nullptr && proto_items->has_data());
}

bool System::NatItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (xlate_items !=  nullptr && xlate_items->has_operation())
	|| (natalias_items !=  nullptr && natalias_items->has_operation())
	|| (proto_items !=  nullptr && proto_items->has_operation());
}

std::string System::NatItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nat-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::NatItems::InstItems::DomItems::DomList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "xlate-items")
    {
        if(xlate_items == nullptr)
        {
            xlate_items = std::make_shared<System::NatItems::InstItems::DomItems::DomList::XlateItems>();
        }
        return xlate_items;
    }

    if(child_yang_name == "natalias-items")
    {
        if(natalias_items == nullptr)
        {
            natalias_items = std::make_shared<System::NatItems::InstItems::DomItems::DomList::NataliasItems>();
        }
        return natalias_items;
    }

    if(child_yang_name == "proto-items")
    {
        if(proto_items == nullptr)
        {
            proto_items = std::make_shared<System::NatItems::InstItems::DomItems::DomList::ProtoItems>();
        }
        return proto_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    if(xlate_items != nullptr)
    {
        _children["xlate-items"] = xlate_items;
    }

    if(natalias_items != nullptr)
    {
        _children["natalias-items"] = natalias_items;
    }

    if(proto_items != nullptr)
    {
        _children["proto-items"] = proto_items;
    }

    return _children;
}

void System::NatItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "xlate-items" || name == "natalias-items" || name == "proto-items" || name == "name" || name == "encap")
        return true;
    return false;
}

System::NatItems::InstItems::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::NatItems::InstItems::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NatItems::InstItems::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NatItems::InstItems::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::NatItems::InstItems::DomItems::DomList::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::DomItems::DomList::IfItems::get_children() const
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

void System::NatItems::InstItems::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NatItems::InstItems::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NatItems::InstItems::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    natif{YType::enumeration, "natIf"},
    configerrif{YType::enumeration, "configErrIf"}
        ,
    rtvrfmbr_items(std::make_shared<System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| natif.is_set
	|| configerrif.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(natif.yfilter)
	|| ydk::is_set(configerrif.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (natif.is_set || is_set(natif.yfilter)) leaf_name_data.push_back(natif.get_name_leafdata());
    if (configerrif.is_set || is_set(configerrif.yfilter)) leaf_name_data.push_back(configerrif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::get_children() const
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

void System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "natIf")
    {
        natif = value;
        natif.value_namespace = name_space;
        natif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configErrIf")
    {
        configerrif = value;
        configerrif.value_namespace = name_space;
        configerrif.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "natIf")
    {
        natif.yfilter = yfilter;
    }
    if(value_path == "configErrIf")
    {
        configerrif.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "natIf" || name == "configErrIf")
        return true;
    return false;
}

System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::NatItems::InstItems::DomItems::DomList::XlateItems::XlateItems()
    :
    ipnat_list(this, {"xlatetype"})
{

    yang_name = "xlate-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::DomItems::DomList::XlateItems::~XlateItems()
{
}

bool System::NatItems::InstItems::DomItems::DomList::XlateItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipnat_list.len(); index++)
    {
        if(ipnat_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NatItems::InstItems::DomItems::DomList::XlateItems::has_operation() const
{
    for (std::size_t index=0; index<ipnat_list.len(); index++)
    {
        if(ipnat_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NatItems::InstItems::DomItems::DomList::XlateItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xlate-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::DomItems::DomList::XlateItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::DomItems::DomList::XlateItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpNat-list")
    {
        auto ent_ = std::make_shared<System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList>();
        ent_->parent = this;
        ipnat_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::DomItems::DomList::XlateItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipnat_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NatItems::InstItems::DomItems::DomList::XlateItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NatItems::InstItems::DomItems::DomList::XlateItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NatItems::InstItems::DomItems::DomList::XlateItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpNat-list")
        return true;
    return false;
}

System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::IpNatList()
    :
    xlatetype{YType::enumeration, "xlateType"}
        ,
    protocol_items(std::make_shared<System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems>())
    , list_items(std::make_shared<System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems>())
{
    protocol_items->parent = this;
    list_items->parent = this;

    yang_name = "IpNat-list"; yang_parent_name = "xlate-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::~IpNatList()
{
}

bool System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::has_data() const
{
    if (is_presence_container) return true;
    return xlatetype.is_set
	|| (protocol_items !=  nullptr && protocol_items->has_data())
	|| (list_items !=  nullptr && list_items->has_data());
}

bool System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xlatetype.yfilter)
	|| (protocol_items !=  nullptr && protocol_items->has_operation())
	|| (list_items !=  nullptr && list_items->has_operation());
}

std::string System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpNat-list";
    ADD_KEY_TOKEN(xlatetype, "xlateType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xlatetype.is_set || is_set(xlatetype.yfilter)) leaf_name_data.push_back(xlatetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-items")
    {
        if(protocol_items == nullptr)
        {
            protocol_items = std::make_shared<System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems>();
        }
        return protocol_items;
    }

    if(child_yang_name == "list-items")
    {
        if(list_items == nullptr)
        {
            list_items = std::make_shared<System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems>();
        }
        return list_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol_items != nullptr)
    {
        _children["protocol-items"] = protocol_items;
    }

    if(list_items != nullptr)
    {
        _children["list-items"] = list_items;
    }

    return _children;
}

void System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xlateType")
    {
        xlatetype = value;
        xlatetype.value_namespace = name_space;
        xlatetype.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xlateType")
    {
        xlatetype.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-items" || name == "list-items" || name == "xlateType")
        return true;
    return false;
}

System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::ProtocolItems()
    :
    staticnat_list(this, {"protocol", "localip", "localport", "globalip", "globalport"})
{

    yang_name = "protocol-items"; yang_parent_name = "IpNat-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::~ProtocolItems()
{
}

bool System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<staticnat_list.len(); index++)
    {
        if(staticnat_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::has_operation() const
{
    for (std::size_t index=0; index<staticnat_list.len(); index++)
    {
        if(staticnat_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StaticNat-list")
    {
        auto ent_ = std::make_shared<System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::StaticNatList>();
        ent_->parent = this;
        staticnat_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : staticnat_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StaticNat-list")
        return true;
    return false;
}

System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::StaticNatList::StaticNatList()
    :
    protocol{YType::enumeration, "protocol"},
    localip{YType::str, "localIp"},
    localport{YType::uint32, "localPort"},
    globalip{YType::str, "globalIp"},
    globalport{YType::uint32, "globalPort"},
    noalias{YType::boolean, "noAlias"},
    configerrstaticnat{YType::enumeration, "configErrStaticNat"},
    groupid{YType::uint32, "groupId"},
    dynamic{YType::boolean, "dynamic"},
    matchinvrf{YType::boolean, "matchInVrf"},
    addroute{YType::boolean, "addRoute"}
{

    yang_name = "StaticNat-list"; yang_parent_name = "protocol-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::StaticNatList::~StaticNatList()
{
}

bool System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::StaticNatList::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| localip.is_set
	|| localport.is_set
	|| globalip.is_set
	|| globalport.is_set
	|| noalias.is_set
	|| configerrstaticnat.is_set
	|| groupid.is_set
	|| dynamic.is_set
	|| matchinvrf.is_set
	|| addroute.is_set;
}

bool System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::StaticNatList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(localip.yfilter)
	|| ydk::is_set(localport.yfilter)
	|| ydk::is_set(globalip.yfilter)
	|| ydk::is_set(globalport.yfilter)
	|| ydk::is_set(noalias.yfilter)
	|| ydk::is_set(configerrstaticnat.yfilter)
	|| ydk::is_set(groupid.yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(matchinvrf.yfilter)
	|| ydk::is_set(addroute.yfilter);
}

std::string System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::StaticNatList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StaticNat-list";
    ADD_KEY_TOKEN(protocol, "protocol");
    ADD_KEY_TOKEN(localip, "localIp");
    ADD_KEY_TOKEN(localport, "localPort");
    ADD_KEY_TOKEN(globalip, "globalIp");
    ADD_KEY_TOKEN(globalport, "globalPort");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::StaticNatList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (localip.is_set || is_set(localip.yfilter)) leaf_name_data.push_back(localip.get_name_leafdata());
    if (localport.is_set || is_set(localport.yfilter)) leaf_name_data.push_back(localport.get_name_leafdata());
    if (globalip.is_set || is_set(globalip.yfilter)) leaf_name_data.push_back(globalip.get_name_leafdata());
    if (globalport.is_set || is_set(globalport.yfilter)) leaf_name_data.push_back(globalport.get_name_leafdata());
    if (noalias.is_set || is_set(noalias.yfilter)) leaf_name_data.push_back(noalias.get_name_leafdata());
    if (configerrstaticnat.is_set || is_set(configerrstaticnat.yfilter)) leaf_name_data.push_back(configerrstaticnat.get_name_leafdata());
    if (groupid.is_set || is_set(groupid.yfilter)) leaf_name_data.push_back(groupid.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (matchinvrf.is_set || is_set(matchinvrf.yfilter)) leaf_name_data.push_back(matchinvrf.get_name_leafdata());
    if (addroute.is_set || is_set(addroute.yfilter)) leaf_name_data.push_back(addroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::StaticNatList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::StaticNatList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::StaticNatList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "globalIp")
    {
        globalip = value;
        globalip.value_namespace = name_space;
        globalip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "globalPort")
    {
        globalport = value;
        globalport.value_namespace = name_space;
        globalport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noAlias")
    {
        noalias = value;
        noalias.value_namespace = name_space;
        noalias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configErrStaticNat")
    {
        configerrstaticnat = value;
        configerrstaticnat.value_namespace = name_space;
        configerrstaticnat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupId")
    {
        groupid = value;
        groupid.value_namespace = name_space;
        groupid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchInVrf")
    {
        matchinvrf = value;
        matchinvrf.value_namespace = name_space;
        matchinvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addRoute")
    {
        addroute = value;
        addroute.value_namespace = name_space;
        addroute.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::StaticNatList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "localIp")
    {
        localip.yfilter = yfilter;
    }
    if(value_path == "localPort")
    {
        localport.yfilter = yfilter;
    }
    if(value_path == "globalIp")
    {
        globalip.yfilter = yfilter;
    }
    if(value_path == "globalPort")
    {
        globalport.yfilter = yfilter;
    }
    if(value_path == "noAlias")
    {
        noalias.yfilter = yfilter;
    }
    if(value_path == "configErrStaticNat")
    {
        configerrstaticnat.yfilter = yfilter;
    }
    if(value_path == "groupId")
    {
        groupid.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "matchInVrf")
    {
        matchinvrf.yfilter = yfilter;
    }
    if(value_path == "addRoute")
    {
        addroute.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::StaticNatList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "localIp" || name == "localPort" || name == "globalIp" || name == "globalPort" || name == "noAlias" || name == "configErrStaticNat" || name == "groupId" || name == "dynamic" || name == "matchInVrf" || name == "addRoute")
        return true;
    return false;
}

System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::ListItems()
    :
    dynamicnat_list(this, {"aclname"})
{

    yang_name = "list-items"; yang_parent_name = "IpNat-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::~ListItems()
{
}

bool System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dynamicnat_list.len(); index++)
    {
        if(dynamicnat_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::has_operation() const
{
    for (std::size_t index=0; index<dynamicnat_list.len(); index++)
    {
        if(dynamicnat_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DynamicNat-list")
    {
        auto ent_ = std::make_shared<System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::DynamicNatList>();
        ent_->parent = this;
        dynamicnat_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dynamicnat_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DynamicNat-list")
        return true;
    return false;
}

System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::DynamicNatList::DynamicNatList()
    :
    aclname{YType::str, "aclName"},
    interface{YType::str, "interface"},
    poolname{YType::str, "poolName"},
    overload{YType::boolean, "overload"},
    configerrdynamicnat{YType::enumeration, "configErrDynamicNat"},
    groupid{YType::uint32, "groupId"},
    dynamic{YType::boolean, "dynamic"},
    matchinvrf{YType::boolean, "matchInVrf"},
    addroute{YType::boolean, "addRoute"}
{

    yang_name = "DynamicNat-list"; yang_parent_name = "list-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::DynamicNatList::~DynamicNatList()
{
}

bool System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::DynamicNatList::has_data() const
{
    if (is_presence_container) return true;
    return aclname.is_set
	|| interface.is_set
	|| poolname.is_set
	|| overload.is_set
	|| configerrdynamicnat.is_set
	|| groupid.is_set
	|| dynamic.is_set
	|| matchinvrf.is_set
	|| addroute.is_set;
}

bool System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::DynamicNatList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aclname.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(poolname.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(configerrdynamicnat.yfilter)
	|| ydk::is_set(groupid.yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(matchinvrf.yfilter)
	|| ydk::is_set(addroute.yfilter);
}

std::string System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::DynamicNatList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DynamicNat-list";
    ADD_KEY_TOKEN(aclname, "aclName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::DynamicNatList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aclname.is_set || is_set(aclname.yfilter)) leaf_name_data.push_back(aclname.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (poolname.is_set || is_set(poolname.yfilter)) leaf_name_data.push_back(poolname.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (configerrdynamicnat.is_set || is_set(configerrdynamicnat.yfilter)) leaf_name_data.push_back(configerrdynamicnat.get_name_leafdata());
    if (groupid.is_set || is_set(groupid.yfilter)) leaf_name_data.push_back(groupid.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (matchinvrf.is_set || is_set(matchinvrf.yfilter)) leaf_name_data.push_back(matchinvrf.get_name_leafdata());
    if (addroute.is_set || is_set(addroute.yfilter)) leaf_name_data.push_back(addroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::DynamicNatList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::DynamicNatList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::DynamicNatList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aclName")
    {
        aclname = value;
        aclname.value_namespace = name_space;
        aclname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poolName")
    {
        poolname = value;
        poolname.value_namespace = name_space;
        poolname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configErrDynamicNat")
    {
        configerrdynamicnat = value;
        configerrdynamicnat.value_namespace = name_space;
        configerrdynamicnat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupId")
    {
        groupid = value;
        groupid.value_namespace = name_space;
        groupid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchInVrf")
    {
        matchinvrf = value;
        matchinvrf.value_namespace = name_space;
        matchinvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addRoute")
    {
        addroute = value;
        addroute.value_namespace = name_space;
        addroute.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::DynamicNatList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aclName")
    {
        aclname.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "poolName")
    {
        poolname.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "configErrDynamicNat")
    {
        configerrdynamicnat.yfilter = yfilter;
    }
    if(value_path == "groupId")
    {
        groupid.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "matchInVrf")
    {
        matchinvrf.yfilter = yfilter;
    }
    if(value_path == "addRoute")
    {
        addroute.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::DynamicNatList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aclName" || name == "interface" || name == "poolName" || name == "overload" || name == "configErrDynamicNat" || name == "groupId" || name == "dynamic" || name == "matchInVrf" || name == "addRoute")
        return true;
    return false;
}

System::NatItems::InstItems::DomItems::DomList::NataliasItems::NataliasItems()
    :
    ipnatalias_list(this, {"ipaddr"})
{

    yang_name = "natalias-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::DomItems::DomList::NataliasItems::~NataliasItems()
{
}

bool System::NatItems::InstItems::DomItems::DomList::NataliasItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipnatalias_list.len(); index++)
    {
        if(ipnatalias_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NatItems::InstItems::DomItems::DomList::NataliasItems::has_operation() const
{
    for (std::size_t index=0; index<ipnatalias_list.len(); index++)
    {
        if(ipnatalias_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NatItems::InstItems::DomItems::DomList::NataliasItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "natalias-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::DomItems::DomList::NataliasItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::DomItems::DomList::NataliasItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpNatAlias-list")
    {
        auto ent_ = std::make_shared<System::NatItems::InstItems::DomItems::DomList::NataliasItems::IpNatAliasList>();
        ent_->parent = this;
        ipnatalias_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::DomItems::DomList::NataliasItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipnatalias_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NatItems::InstItems::DomItems::DomList::NataliasItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NatItems::InstItems::DomItems::DomList::NataliasItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NatItems::InstItems::DomItems::DomList::NataliasItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpNatAlias-list")
        return true;
    return false;
}

System::NatItems::InstItems::DomItems::DomList::NataliasItems::IpNatAliasList::IpNatAliasList()
    :
    ipaddr{YType::str, "ipAddr"},
    interfacename{YType::str, "interfaceName"}
{

    yang_name = "IpNatAlias-list"; yang_parent_name = "natalias-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::DomItems::DomList::NataliasItems::IpNatAliasList::~IpNatAliasList()
{
}

bool System::NatItems::InstItems::DomItems::DomList::NataliasItems::IpNatAliasList::has_data() const
{
    if (is_presence_container) return true;
    return ipaddr.is_set
	|| interfacename.is_set;
}

bool System::NatItems::InstItems::DomItems::DomList::NataliasItems::IpNatAliasList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipaddr.yfilter)
	|| ydk::is_set(interfacename.yfilter);
}

std::string System::NatItems::InstItems::DomItems::DomList::NataliasItems::IpNatAliasList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpNatAlias-list";
    ADD_KEY_TOKEN(ipaddr, "ipAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::DomItems::DomList::NataliasItems::IpNatAliasList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipaddr.is_set || is_set(ipaddr.yfilter)) leaf_name_data.push_back(ipaddr.get_name_leafdata());
    if (interfacename.is_set || is_set(interfacename.yfilter)) leaf_name_data.push_back(interfacename.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::DomItems::DomList::NataliasItems::IpNatAliasList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::DomItems::DomList::NataliasItems::IpNatAliasList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NatItems::InstItems::DomItems::DomList::NataliasItems::IpNatAliasList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipAddr")
    {
        ipaddr = value;
        ipaddr.value_namespace = name_space;
        ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaceName")
    {
        interfacename = value;
        interfacename.value_namespace = name_space;
        interfacename.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::DomItems::DomList::NataliasItems::IpNatAliasList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipAddr")
    {
        ipaddr.yfilter = yfilter;
    }
    if(value_path == "interfaceName")
    {
        interfacename.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::DomItems::DomList::NataliasItems::IpNatAliasList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipAddr" || name == "interfaceName")
        return true;
    return false;
}

System::NatItems::InstItems::DomItems::DomList::ProtoItems::ProtoItems()
    :
    translationdb_list(this, {"protocol", "insideglobaladdress", "insideglobalport", "insidelocaladdress", "insidelocalport", "outsidelocaladdress", "outsidelocalport", "outsideglobaladdress", "outsideglobalport"})
{

    yang_name = "proto-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::DomItems::DomList::ProtoItems::~ProtoItems()
{
}

bool System::NatItems::InstItems::DomItems::DomList::ProtoItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<translationdb_list.len(); index++)
    {
        if(translationdb_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NatItems::InstItems::DomItems::DomList::ProtoItems::has_operation() const
{
    for (std::size_t index=0; index<translationdb_list.len(); index++)
    {
        if(translationdb_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NatItems::InstItems::DomItems::DomList::ProtoItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proto-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::DomItems::DomList::ProtoItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::DomItems::DomList::ProtoItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TranslationDb-list")
    {
        auto ent_ = std::make_shared<System::NatItems::InstItems::DomItems::DomList::ProtoItems::TranslationDbList>();
        ent_->parent = this;
        translationdb_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::DomItems::DomList::ProtoItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : translationdb_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NatItems::InstItems::DomItems::DomList::ProtoItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NatItems::InstItems::DomItems::DomList::ProtoItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NatItems::InstItems::DomItems::DomList::ProtoItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TranslationDb-list")
        return true;
    return false;
}

System::NatItems::InstItems::DomItems::DomList::ProtoItems::TranslationDbList::TranslationDbList()
    :
    protocol{YType::str, "protocol"},
    insideglobaladdress{YType::str, "insideGlobalAddress"},
    insideglobalport{YType::uint32, "insideGlobalPort"},
    insidelocaladdress{YType::str, "insideLocalAddress"},
    insidelocalport{YType::uint32, "insideLocalPort"},
    outsidelocaladdress{YType::str, "outsideLocalAddress"},
    outsidelocalport{YType::uint32, "outsideLocalPort"},
    outsideglobaladdress{YType::str, "outsideGlobalAddress"},
    outsideglobalport{YType::uint32, "outsideGlobalPort"},
    groupid{YType::uint32, "groupId"},
    entryid{YType::uint32, "entryId"},
    instats{YType::uint32, "inStats"},
    outstats{YType::uint32, "outStats"},
    timeleft{YType::uint32, "timeLeft"},
    syntimer{YType::uint32, "synTimer"},
    fintimer{YType::uint32, "finTimer"}
{

    yang_name = "TranslationDb-list"; yang_parent_name = "proto-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::DomItems::DomList::ProtoItems::TranslationDbList::~TranslationDbList()
{
}

bool System::NatItems::InstItems::DomItems::DomList::ProtoItems::TranslationDbList::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| insideglobaladdress.is_set
	|| insideglobalport.is_set
	|| insidelocaladdress.is_set
	|| insidelocalport.is_set
	|| outsidelocaladdress.is_set
	|| outsidelocalport.is_set
	|| outsideglobaladdress.is_set
	|| outsideglobalport.is_set
	|| groupid.is_set
	|| entryid.is_set
	|| instats.is_set
	|| outstats.is_set
	|| timeleft.is_set
	|| syntimer.is_set
	|| fintimer.is_set;
}

bool System::NatItems::InstItems::DomItems::DomList::ProtoItems::TranslationDbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(insideglobaladdress.yfilter)
	|| ydk::is_set(insideglobalport.yfilter)
	|| ydk::is_set(insidelocaladdress.yfilter)
	|| ydk::is_set(insidelocalport.yfilter)
	|| ydk::is_set(outsidelocaladdress.yfilter)
	|| ydk::is_set(outsidelocalport.yfilter)
	|| ydk::is_set(outsideglobaladdress.yfilter)
	|| ydk::is_set(outsideglobalport.yfilter)
	|| ydk::is_set(groupid.yfilter)
	|| ydk::is_set(entryid.yfilter)
	|| ydk::is_set(instats.yfilter)
	|| ydk::is_set(outstats.yfilter)
	|| ydk::is_set(timeleft.yfilter)
	|| ydk::is_set(syntimer.yfilter)
	|| ydk::is_set(fintimer.yfilter);
}

std::string System::NatItems::InstItems::DomItems::DomList::ProtoItems::TranslationDbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TranslationDb-list";
    ADD_KEY_TOKEN(protocol, "protocol");
    ADD_KEY_TOKEN(insideglobaladdress, "insideGlobalAddress");
    ADD_KEY_TOKEN(insideglobalport, "insideGlobalPort");
    ADD_KEY_TOKEN(insidelocaladdress, "insideLocalAddress");
    ADD_KEY_TOKEN(insidelocalport, "insideLocalPort");
    ADD_KEY_TOKEN(outsidelocaladdress, "outsideLocalAddress");
    ADD_KEY_TOKEN(outsidelocalport, "outsideLocalPort");
    ADD_KEY_TOKEN(outsideglobaladdress, "outsideGlobalAddress");
    ADD_KEY_TOKEN(outsideglobalport, "outsideGlobalPort");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::DomItems::DomList::ProtoItems::TranslationDbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (insideglobaladdress.is_set || is_set(insideglobaladdress.yfilter)) leaf_name_data.push_back(insideglobaladdress.get_name_leafdata());
    if (insideglobalport.is_set || is_set(insideglobalport.yfilter)) leaf_name_data.push_back(insideglobalport.get_name_leafdata());
    if (insidelocaladdress.is_set || is_set(insidelocaladdress.yfilter)) leaf_name_data.push_back(insidelocaladdress.get_name_leafdata());
    if (insidelocalport.is_set || is_set(insidelocalport.yfilter)) leaf_name_data.push_back(insidelocalport.get_name_leafdata());
    if (outsidelocaladdress.is_set || is_set(outsidelocaladdress.yfilter)) leaf_name_data.push_back(outsidelocaladdress.get_name_leafdata());
    if (outsidelocalport.is_set || is_set(outsidelocalport.yfilter)) leaf_name_data.push_back(outsidelocalport.get_name_leafdata());
    if (outsideglobaladdress.is_set || is_set(outsideglobaladdress.yfilter)) leaf_name_data.push_back(outsideglobaladdress.get_name_leafdata());
    if (outsideglobalport.is_set || is_set(outsideglobalport.yfilter)) leaf_name_data.push_back(outsideglobalport.get_name_leafdata());
    if (groupid.is_set || is_set(groupid.yfilter)) leaf_name_data.push_back(groupid.get_name_leafdata());
    if (entryid.is_set || is_set(entryid.yfilter)) leaf_name_data.push_back(entryid.get_name_leafdata());
    if (instats.is_set || is_set(instats.yfilter)) leaf_name_data.push_back(instats.get_name_leafdata());
    if (outstats.is_set || is_set(outstats.yfilter)) leaf_name_data.push_back(outstats.get_name_leafdata());
    if (timeleft.is_set || is_set(timeleft.yfilter)) leaf_name_data.push_back(timeleft.get_name_leafdata());
    if (syntimer.is_set || is_set(syntimer.yfilter)) leaf_name_data.push_back(syntimer.get_name_leafdata());
    if (fintimer.is_set || is_set(fintimer.yfilter)) leaf_name_data.push_back(fintimer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::DomItems::DomList::ProtoItems::TranslationDbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::DomItems::DomList::ProtoItems::TranslationDbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NatItems::InstItems::DomItems::DomList::ProtoItems::TranslationDbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insideGlobalAddress")
    {
        insideglobaladdress = value;
        insideglobaladdress.value_namespace = name_space;
        insideglobaladdress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insideGlobalPort")
    {
        insideglobalport = value;
        insideglobalport.value_namespace = name_space;
        insideglobalport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insideLocalAddress")
    {
        insidelocaladdress = value;
        insidelocaladdress.value_namespace = name_space;
        insidelocaladdress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insideLocalPort")
    {
        insidelocalport = value;
        insidelocalport.value_namespace = name_space;
        insidelocalport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outsideLocalAddress")
    {
        outsidelocaladdress = value;
        outsidelocaladdress.value_namespace = name_space;
        outsidelocaladdress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outsideLocalPort")
    {
        outsidelocalport = value;
        outsidelocalport.value_namespace = name_space;
        outsidelocalport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outsideGlobalAddress")
    {
        outsideglobaladdress = value;
        outsideglobaladdress.value_namespace = name_space;
        outsideglobaladdress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outsideGlobalPort")
    {
        outsideglobalport = value;
        outsideglobalport.value_namespace = name_space;
        outsideglobalport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupId")
    {
        groupid = value;
        groupid.value_namespace = name_space;
        groupid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entryId")
    {
        entryid = value;
        entryid.value_namespace = name_space;
        entryid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inStats")
    {
        instats = value;
        instats.value_namespace = name_space;
        instats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outStats")
    {
        outstats = value;
        outstats.value_namespace = name_space;
        outstats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeLeft")
    {
        timeleft = value;
        timeleft.value_namespace = name_space;
        timeleft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synTimer")
    {
        syntimer = value;
        syntimer.value_namespace = name_space;
        syntimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finTimer")
    {
        fintimer = value;
        fintimer.value_namespace = name_space;
        fintimer.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::DomItems::DomList::ProtoItems::TranslationDbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "insideGlobalAddress")
    {
        insideglobaladdress.yfilter = yfilter;
    }
    if(value_path == "insideGlobalPort")
    {
        insideglobalport.yfilter = yfilter;
    }
    if(value_path == "insideLocalAddress")
    {
        insidelocaladdress.yfilter = yfilter;
    }
    if(value_path == "insideLocalPort")
    {
        insidelocalport.yfilter = yfilter;
    }
    if(value_path == "outsideLocalAddress")
    {
        outsidelocaladdress.yfilter = yfilter;
    }
    if(value_path == "outsideLocalPort")
    {
        outsidelocalport.yfilter = yfilter;
    }
    if(value_path == "outsideGlobalAddress")
    {
        outsideglobaladdress.yfilter = yfilter;
    }
    if(value_path == "outsideGlobalPort")
    {
        outsideglobalport.yfilter = yfilter;
    }
    if(value_path == "groupId")
    {
        groupid.yfilter = yfilter;
    }
    if(value_path == "entryId")
    {
        entryid.yfilter = yfilter;
    }
    if(value_path == "inStats")
    {
        instats.yfilter = yfilter;
    }
    if(value_path == "outStats")
    {
        outstats.yfilter = yfilter;
    }
    if(value_path == "timeLeft")
    {
        timeleft.yfilter = yfilter;
    }
    if(value_path == "synTimer")
    {
        syntimer.yfilter = yfilter;
    }
    if(value_path == "finTimer")
    {
        fintimer.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::DomItems::DomList::ProtoItems::TranslationDbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "insideGlobalAddress" || name == "insideGlobalPort" || name == "insideLocalAddress" || name == "insideLocalPort" || name == "outsideLocalAddress" || name == "outsideLocalPort" || name == "outsideGlobalAddress" || name == "outsideGlobalPort" || name == "groupId" || name == "entryId" || name == "inStats" || name == "outStats" || name == "timeLeft" || name == "synTimer" || name == "finTimer")
        return true;
    return false;
}

System::NatItems::InstItems::PoolItems::PoolItems()
    :
    pool_list(this, {"poolname"})
{

    yang_name = "pool-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::InstItems::PoolItems::~PoolItems()
{
}

bool System::NatItems::InstItems::PoolItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pool_list.len(); index++)
    {
        if(pool_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NatItems::InstItems::PoolItems::has_operation() const
{
    for (std::size_t index=0; index<pool_list.len(); index++)
    {
        if(pool_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NatItems::InstItems::PoolItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nat-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::InstItems::PoolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::PoolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::PoolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Pool-list")
    {
        auto ent_ = std::make_shared<System::NatItems::InstItems::PoolItems::PoolList>();
        ent_->parent = this;
        pool_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::PoolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pool_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NatItems::InstItems::PoolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NatItems::InstItems::PoolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NatItems::InstItems::PoolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Pool-list")
        return true;
    return false;
}

System::NatItems::InstItems::PoolItems::PoolList::PoolList()
    :
    poolname{YType::str, "poolname"},
    mask{YType::str, "mask"},
    prefixlen{YType::uint32, "prefixlen"},
    noalias{YType::boolean, "noalias"}
        ,
    startip_items(std::make_shared<System::NatItems::InstItems::PoolItems::PoolList::StartipItems>())
{
    startip_items->parent = this;

    yang_name = "Pool-list"; yang_parent_name = "pool-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::InstItems::PoolItems::PoolList::~PoolList()
{
}

bool System::NatItems::InstItems::PoolItems::PoolList::has_data() const
{
    if (is_presence_container) return true;
    return poolname.is_set
	|| mask.is_set
	|| prefixlen.is_set
	|| noalias.is_set
	|| (startip_items !=  nullptr && startip_items->has_data());
}

bool System::NatItems::InstItems::PoolItems::PoolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(poolname.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(prefixlen.yfilter)
	|| ydk::is_set(noalias.yfilter)
	|| (startip_items !=  nullptr && startip_items->has_operation());
}

std::string System::NatItems::InstItems::PoolItems::PoolList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nat-items/inst-items/pool-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::InstItems::PoolItems::PoolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Pool-list";
    ADD_KEY_TOKEN(poolname, "poolname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::PoolItems::PoolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (poolname.is_set || is_set(poolname.yfilter)) leaf_name_data.push_back(poolname.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefixlen.is_set || is_set(prefixlen.yfilter)) leaf_name_data.push_back(prefixlen.get_name_leafdata());
    if (noalias.is_set || is_set(noalias.yfilter)) leaf_name_data.push_back(noalias.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::PoolItems::PoolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "startip-items")
    {
        if(startip_items == nullptr)
        {
            startip_items = std::make_shared<System::NatItems::InstItems::PoolItems::PoolList::StartipItems>();
        }
        return startip_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::PoolItems::PoolList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(startip_items != nullptr)
    {
        _children["startip-items"] = startip_items;
    }

    return _children;
}

void System::NatItems::InstItems::PoolItems::PoolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "poolname")
    {
        poolname = value;
        poolname.value_namespace = name_space;
        poolname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixlen")
    {
        prefixlen = value;
        prefixlen.value_namespace = name_space;
        prefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noalias")
    {
        noalias = value;
        noalias.value_namespace = name_space;
        noalias.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::PoolItems::PoolList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "poolname")
    {
        poolname.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "prefixlen")
    {
        prefixlen.yfilter = yfilter;
    }
    if(value_path == "noalias")
    {
        noalias.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::PoolItems::PoolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "startip-items" || name == "poolname" || name == "mask" || name == "prefixlen" || name == "noalias")
        return true;
    return false;
}

System::NatItems::InstItems::PoolItems::PoolList::StartipItems::StartipItems()
    :
    pooladdress_list(this, {"startip", "endip"})
{

    yang_name = "startip-items"; yang_parent_name = "Pool-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::PoolItems::PoolList::StartipItems::~StartipItems()
{
}

bool System::NatItems::InstItems::PoolItems::PoolList::StartipItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pooladdress_list.len(); index++)
    {
        if(pooladdress_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NatItems::InstItems::PoolItems::PoolList::StartipItems::has_operation() const
{
    for (std::size_t index=0; index<pooladdress_list.len(); index++)
    {
        if(pooladdress_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NatItems::InstItems::PoolItems::PoolList::StartipItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "startip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::PoolItems::PoolList::StartipItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::PoolItems::PoolList::StartipItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PoolAddress-list")
    {
        auto ent_ = std::make_shared<System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList>();
        ent_->parent = this;
        pooladdress_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::PoolItems::PoolList::StartipItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pooladdress_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NatItems::InstItems::PoolItems::PoolList::StartipItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NatItems::InstItems::PoolItems::PoolList::StartipItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NatItems::InstItems::PoolItems::PoolList::StartipItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PoolAddress-list")
        return true;
    return false;
}

System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::PoolAddressList()
    :
    startip{YType::str, "startip"},
    endip{YType::str, "endip"},
    configerr{YType::enumeration, "configErr"},
    pooladdrdeleted{YType::boolean, "poolAddrDeleted"}
{

    yang_name = "PoolAddress-list"; yang_parent_name = "startip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::~PoolAddressList()
{
}

bool System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::has_data() const
{
    if (is_presence_container) return true;
    return startip.is_set
	|| endip.is_set
	|| configerr.is_set
	|| pooladdrdeleted.is_set;
}

bool System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(startip.yfilter)
	|| ydk::is_set(endip.yfilter)
	|| ydk::is_set(configerr.yfilter)
	|| ydk::is_set(pooladdrdeleted.yfilter);
}

std::string System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PoolAddress-list";
    ADD_KEY_TOKEN(startip, "startip");
    ADD_KEY_TOKEN(endip, "endip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (startip.is_set || is_set(startip.yfilter)) leaf_name_data.push_back(startip.get_name_leafdata());
    if (endip.is_set || is_set(endip.yfilter)) leaf_name_data.push_back(endip.get_name_leafdata());
    if (configerr.is_set || is_set(configerr.yfilter)) leaf_name_data.push_back(configerr.get_name_leafdata());
    if (pooladdrdeleted.is_set || is_set(pooladdrdeleted.yfilter)) leaf_name_data.push_back(pooladdrdeleted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "startip")
    {
        startip = value;
        startip.value_namespace = name_space;
        startip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endip")
    {
        endip = value;
        endip.value_namespace = name_space;
        endip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configErr")
    {
        configerr = value;
        configerr.value_namespace = name_space;
        configerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poolAddrDeleted")
    {
        pooladdrdeleted = value;
        pooladdrdeleted.value_namespace = name_space;
        pooladdrdeleted.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "startip")
    {
        startip.yfilter = yfilter;
    }
    if(value_path == "endip")
    {
        endip.yfilter = yfilter;
    }
    if(value_path == "configErr")
    {
        configerr.yfilter = yfilter;
    }
    if(value_path == "poolAddrDeleted")
    {
        pooladdrdeleted.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "startip" || name == "endip" || name == "configErr" || name == "poolAddrDeleted")
        return true;
    return false;
}

System::OdcreqItems::OdcreqItems()
    :
    odevcmdreq_list(this, {"devid", "sessid", "cmdid"})
{

    yang_name = "odcreq-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OdcreqItems::~OdcreqItems()
{
}

bool System::OdcreqItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odevcmdreq_list.len(); index++)
    {
        if(odevcmdreq_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OdcreqItems::has_operation() const
{
    for (std::size_t index=0; index<odevcmdreq_list.len(); index++)
    {
        if(odevcmdreq_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OdcreqItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OdcreqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odcreq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OdcreqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OdcreqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ODevCmdReq-list")
    {
        auto ent_ = std::make_shared<System::OdcreqItems::ODevCmdReqList>();
        ent_->parent = this;
        odevcmdreq_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OdcreqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odevcmdreq_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OdcreqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OdcreqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OdcreqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ODevCmdReq-list")
        return true;
    return false;
}

System::OdcreqItems::ODevCmdReqList::ODevCmdReqList()
    :
    devid{YType::uint32, "devId"},
    sessid{YType::uint32, "sessId"},
    cmdid{YType::uint32, "cmdId"},
    req{YType::str, "req"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
{

    yang_name = "ODevCmdReq-list"; yang_parent_name = "odcreq-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OdcreqItems::ODevCmdReqList::~ODevCmdReqList()
{
}

bool System::OdcreqItems::ODevCmdReqList::has_data() const
{
    if (is_presence_container) return true;
    return devid.is_set
	|| sessid.is_set
	|| cmdid.is_set
	|| req.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::OdcreqItems::ODevCmdReqList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(sessid.yfilter)
	|| ydk::is_set(cmdid.yfilter)
	|| ydk::is_set(req.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::OdcreqItems::ODevCmdReqList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/odcreq-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OdcreqItems::ODevCmdReqList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ODevCmdReq-list";
    ADD_KEY_TOKEN(devid, "devId");
    ADD_KEY_TOKEN(sessid, "sessId");
    ADD_KEY_TOKEN(cmdid, "cmdId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OdcreqItems::ODevCmdReqList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (sessid.is_set || is_set(sessid.yfilter)) leaf_name_data.push_back(sessid.get_name_leafdata());
    if (cmdid.is_set || is_set(cmdid.yfilter)) leaf_name_data.push_back(cmdid.get_name_leafdata());
    if (req.is_set || is_set(req.yfilter)) leaf_name_data.push_back(req.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OdcreqItems::ODevCmdReqList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OdcreqItems::ODevCmdReqList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OdcreqItems::ODevCmdReqList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessId")
    {
        sessid = value;
        sessid.value_namespace = name_space;
        sessid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmdId")
    {
        cmdid = value;
        cmdid.value_namespace = name_space;
        cmdid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req")
    {
        req = value;
        req.value_namespace = name_space;
        req.value_namespace_prefix = name_space_prefix;
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

void System::OdcreqItems::ODevCmdReqList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "sessId")
    {
        sessid.yfilter = yfilter;
    }
    if(value_path == "cmdId")
    {
        cmdid.yfilter = yfilter;
    }
    if(value_path == "req")
    {
        req.yfilter = yfilter;
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

bool System::OdcreqItems::ODevCmdReqList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "devId" || name == "sessId" || name == "cmdId" || name == "req" || name == "name" || name == "id")
        return true;
    return false;
}

System::OdcrespItems::OdcrespItems()
    :
    odevcmdresp_list(this, {"devid", "sessid", "cmdid"})
{

    yang_name = "odcresp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OdcrespItems::~OdcrespItems()
{
}

bool System::OdcrespItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odevcmdresp_list.len(); index++)
    {
        if(odevcmdresp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OdcrespItems::has_operation() const
{
    for (std::size_t index=0; index<odevcmdresp_list.len(); index++)
    {
        if(odevcmdresp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OdcrespItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OdcrespItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odcresp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OdcrespItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OdcrespItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ODevCmdResp-list")
    {
        auto ent_ = std::make_shared<System::OdcrespItems::ODevCmdRespList>();
        ent_->parent = this;
        odevcmdresp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OdcrespItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odevcmdresp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OdcrespItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OdcrespItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OdcrespItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ODevCmdResp-list")
        return true;
    return false;
}

System::OdcrespItems::ODevCmdRespList::ODevCmdRespList()
    :
    devid{YType::uint32, "devId"},
    sessid{YType::uint32, "sessId"},
    cmdid{YType::uint32, "cmdId"},
    resp{YType::str, "resp"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
{

    yang_name = "ODevCmdResp-list"; yang_parent_name = "odcresp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OdcrespItems::ODevCmdRespList::~ODevCmdRespList()
{
}

bool System::OdcrespItems::ODevCmdRespList::has_data() const
{
    if (is_presence_container) return true;
    return devid.is_set
	|| sessid.is_set
	|| cmdid.is_set
	|| resp.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::OdcrespItems::ODevCmdRespList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(sessid.yfilter)
	|| ydk::is_set(cmdid.yfilter)
	|| ydk::is_set(resp.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::OdcrespItems::ODevCmdRespList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/odcresp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OdcrespItems::ODevCmdRespList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ODevCmdResp-list";
    ADD_KEY_TOKEN(devid, "devId");
    ADD_KEY_TOKEN(sessid, "sessId");
    ADD_KEY_TOKEN(cmdid, "cmdId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OdcrespItems::ODevCmdRespList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (sessid.is_set || is_set(sessid.yfilter)) leaf_name_data.push_back(sessid.get_name_leafdata());
    if (cmdid.is_set || is_set(cmdid.yfilter)) leaf_name_data.push_back(cmdid.get_name_leafdata());
    if (resp.is_set || is_set(resp.yfilter)) leaf_name_data.push_back(resp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OdcrespItems::ODevCmdRespList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OdcrespItems::ODevCmdRespList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OdcrespItems::ODevCmdRespList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessId")
    {
        sessid = value;
        sessid.value_namespace = name_space;
        sessid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmdId")
    {
        cmdid = value;
        cmdid.value_namespace = name_space;
        cmdid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resp")
    {
        resp = value;
        resp.value_namespace = name_space;
        resp.value_namespace_prefix = name_space_prefix;
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

void System::OdcrespItems::ODevCmdRespList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "sessId")
    {
        sessid.yfilter = yfilter;
    }
    if(value_path == "cmdId")
    {
        cmdid.yfilter = yfilter;
    }
    if(value_path == "resp")
    {
        resp.yfilter = yfilter;
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

bool System::OdcrespItems::ODevCmdRespList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "devId" || name == "sessId" || name == "cmdId" || name == "resp" || name == "name" || name == "id")
        return true;
    return false;
}

System::OspfItems::OspfItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::OspfItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "ospf-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OspfItems::~OspfItems()
{
}

bool System::OspfItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::OspfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::OspfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OspfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::OspfItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::OspfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::OspfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::OspfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::OspfItems::InstItems::InstItems()
    :
    inst_list(this, {"name"})
{

    yang_name = "inst-items"; yang_parent_name = "ospf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OspfItems::InstItems::~InstItems()
{
}

bool System::OspfItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::has_operation() const
{
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ospf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OspfItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Inst-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList>();
        ent_->parent = this;
        inst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::get_children() const
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

void System::OspfItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Inst-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::InstList()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"},
    memalert{YType::enumeration, "memAlert"}
        ,
    dom_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems>())
    , evtlogs_items(std::make_shared<System::OspfItems::InstItems::InstList::EvtlogsItems>())
{
    dom_items->parent = this;
    evtlogs_items->parent = this;

    yang_name = "Inst-list"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OspfItems::InstItems::InstList::~InstList()
{
}

bool System::OspfItems::InstItems::InstList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| memalert.is_set
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (evtlogs_items !=  nullptr && evtlogs_items->has_data());
}

bool System::OspfItems::InstItems::InstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| ydk::is_set(memalert.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (evtlogs_items !=  nullptr && evtlogs_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ospf-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OspfItems::InstItems::InstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Inst-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());
    if (memalert.is_set || is_set(memalert.yfilter)) leaf_name_data.push_back(memalert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "evtlogs-items")
    {
        if(evtlogs_items == nullptr)
        {
            evtlogs_items = std::make_shared<System::OspfItems::InstItems::InstList::EvtlogsItems>();
        }
        return evtlogs_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(evtlogs_items != nullptr)
    {
        _children["evtlogs-items"] = evtlogs_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "memAlert")
    {
        memalert = value;
        memalert.value_namespace = name_space;
        memalert.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "memAlert")
    {
        memalert.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "evtlogs-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr" || name == "memAlert")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::~DomItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::get_children() const
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

void System::OspfItems::InstItems::InstList::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    rtrid{YType::str, "rtrId"},
    ctrl{YType::str, "ctrl"},
    adminst{YType::enumeration, "adminSt"},
    dist{YType::uint8, "dist"},
    maxecmp{YType::uint8, "maxEcmp"},
    bwref{YType::uint32, "bwRef"},
    bwrefunit{YType::enumeration, "bwRefUnit"},
    defmetric{YType::uint32, "defMetric"},
    rfc1583compat{YType::boolean, "rfc1583Compat"},
    adjchangeloglevel{YType::enumeration, "adjChangeLogLevel"},
    operst{YType::enumeration, "operSt"},
    operrtrid{YType::str, "operRtrId"},
    opersrgbstart{YType::uint32, "operSrgbStart"},
    opersrgbend{YType::uint32, "operSrgbEnd"},
    operstsgmntrtgmpls{YType::enumeration, "operStSgmntRtgMpls"},
    discardroute{YType::str, "discardRoute"},
    downbitignore{YType::boolean, "downbitIgnore"},
    capvrflite{YType::enumeration, "capVrfLite"}
        ,
    area_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems>())
    , db_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems>())
    , spfcomp_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems>())
    , lsactrl_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems>())
    , domstats_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems>())
    , gr_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems>())
    , if_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems>())
    , maxlsap_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems>())
    , maxmetriclsap_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems>())
    , defrtleak_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems>())
    , interleak_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems>())
    , leakctrl_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems>())
    , ribleak_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems>())
    , extrtsum_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems>())
    , trstats_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems>())
{
    area_items->parent = this;
    db_items->parent = this;
    spfcomp_items->parent = this;
    lsactrl_items->parent = this;
    domstats_items->parent = this;
    gr_items->parent = this;
    if_items->parent = this;
    maxlsap_items->parent = this;
    maxmetriclsap_items->parent = this;
    defrtleak_items->parent = this;
    interleak_items->parent = this;
    leakctrl_items->parent = this;
    ribleak_items->parent = this;
    extrtsum_items->parent = this;
    trstats_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::~DomList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| rtrid.is_set
	|| ctrl.is_set
	|| adminst.is_set
	|| dist.is_set
	|| maxecmp.is_set
	|| bwref.is_set
	|| bwrefunit.is_set
	|| defmetric.is_set
	|| rfc1583compat.is_set
	|| adjchangeloglevel.is_set
	|| operst.is_set
	|| operrtrid.is_set
	|| opersrgbstart.is_set
	|| opersrgbend.is_set
	|| operstsgmntrtgmpls.is_set
	|| discardroute.is_set
	|| downbitignore.is_set
	|| capvrflite.is_set
	|| (area_items !=  nullptr && area_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (spfcomp_items !=  nullptr && spfcomp_items->has_data())
	|| (lsactrl_items !=  nullptr && lsactrl_items->has_data())
	|| (domstats_items !=  nullptr && domstats_items->has_data())
	|| (gr_items !=  nullptr && gr_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data())
	|| (maxlsap_items !=  nullptr && maxlsap_items->has_data())
	|| (maxmetriclsap_items !=  nullptr && maxmetriclsap_items->has_data())
	|| (defrtleak_items !=  nullptr && defrtleak_items->has_data())
	|| (interleak_items !=  nullptr && interleak_items->has_data())
	|| (leakctrl_items !=  nullptr && leakctrl_items->has_data())
	|| (ribleak_items !=  nullptr && ribleak_items->has_data())
	|| (extrtsum_items !=  nullptr && extrtsum_items->has_data())
	|| (trstats_items !=  nullptr && trstats_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rtrid.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(dist.yfilter)
	|| ydk::is_set(maxecmp.yfilter)
	|| ydk::is_set(bwref.yfilter)
	|| ydk::is_set(bwrefunit.yfilter)
	|| ydk::is_set(defmetric.yfilter)
	|| ydk::is_set(rfc1583compat.yfilter)
	|| ydk::is_set(adjchangeloglevel.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operrtrid.yfilter)
	|| ydk::is_set(opersrgbstart.yfilter)
	|| ydk::is_set(opersrgbend.yfilter)
	|| ydk::is_set(operstsgmntrtgmpls.yfilter)
	|| ydk::is_set(discardroute.yfilter)
	|| ydk::is_set(downbitignore.yfilter)
	|| ydk::is_set(capvrflite.yfilter)
	|| (area_items !=  nullptr && area_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (spfcomp_items !=  nullptr && spfcomp_items->has_operation())
	|| (lsactrl_items !=  nullptr && lsactrl_items->has_operation())
	|| (domstats_items !=  nullptr && domstats_items->has_operation())
	|| (gr_items !=  nullptr && gr_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (maxlsap_items !=  nullptr && maxlsap_items->has_operation())
	|| (maxmetriclsap_items !=  nullptr && maxmetriclsap_items->has_operation())
	|| (defrtleak_items !=  nullptr && defrtleak_items->has_operation())
	|| (interleak_items !=  nullptr && interleak_items->has_operation())
	|| (leakctrl_items !=  nullptr && leakctrl_items->has_operation())
	|| (ribleak_items !=  nullptr && ribleak_items->has_operation())
	|| (extrtsum_items !=  nullptr && extrtsum_items->has_operation())
	|| (trstats_items !=  nullptr && trstats_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rtrid.is_set || is_set(rtrid.yfilter)) leaf_name_data.push_back(rtrid.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (dist.is_set || is_set(dist.yfilter)) leaf_name_data.push_back(dist.get_name_leafdata());
    if (maxecmp.is_set || is_set(maxecmp.yfilter)) leaf_name_data.push_back(maxecmp.get_name_leafdata());
    if (bwref.is_set || is_set(bwref.yfilter)) leaf_name_data.push_back(bwref.get_name_leafdata());
    if (bwrefunit.is_set || is_set(bwrefunit.yfilter)) leaf_name_data.push_back(bwrefunit.get_name_leafdata());
    if (defmetric.is_set || is_set(defmetric.yfilter)) leaf_name_data.push_back(defmetric.get_name_leafdata());
    if (rfc1583compat.is_set || is_set(rfc1583compat.yfilter)) leaf_name_data.push_back(rfc1583compat.get_name_leafdata());
    if (adjchangeloglevel.is_set || is_set(adjchangeloglevel.yfilter)) leaf_name_data.push_back(adjchangeloglevel.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operrtrid.is_set || is_set(operrtrid.yfilter)) leaf_name_data.push_back(operrtrid.get_name_leafdata());
    if (opersrgbstart.is_set || is_set(opersrgbstart.yfilter)) leaf_name_data.push_back(opersrgbstart.get_name_leafdata());
    if (opersrgbend.is_set || is_set(opersrgbend.yfilter)) leaf_name_data.push_back(opersrgbend.get_name_leafdata());
    if (operstsgmntrtgmpls.is_set || is_set(operstsgmntrtgmpls.yfilter)) leaf_name_data.push_back(operstsgmntrtgmpls.get_name_leafdata());
    if (discardroute.is_set || is_set(discardroute.yfilter)) leaf_name_data.push_back(discardroute.get_name_leafdata());
    if (downbitignore.is_set || is_set(downbitignore.yfilter)) leaf_name_data.push_back(downbitignore.get_name_leafdata());
    if (capvrflite.is_set || is_set(capvrflite.yfilter)) leaf_name_data.push_back(capvrflite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-items")
    {
        if(area_items == nullptr)
        {
            area_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems>();
        }
        return area_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "spfcomp-items")
    {
        if(spfcomp_items == nullptr)
        {
            spfcomp_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems>();
        }
        return spfcomp_items;
    }

    if(child_yang_name == "lsactrl-items")
    {
        if(lsactrl_items == nullptr)
        {
            lsactrl_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems>();
        }
        return lsactrl_items;
    }

    if(child_yang_name == "domstats-items")
    {
        if(domstats_items == nullptr)
        {
            domstats_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems>();
        }
        return domstats_items;
    }

    if(child_yang_name == "gr-items")
    {
        if(gr_items == nullptr)
        {
            gr_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems>();
        }
        return gr_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "maxlsap-items")
    {
        if(maxlsap_items == nullptr)
        {
            maxlsap_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems>();
        }
        return maxlsap_items;
    }

    if(child_yang_name == "maxmetriclsap-items")
    {
        if(maxmetriclsap_items == nullptr)
        {
            maxmetriclsap_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems>();
        }
        return maxmetriclsap_items;
    }

    if(child_yang_name == "defrtleak-items")
    {
        if(defrtleak_items == nullptr)
        {
            defrtleak_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems>();
        }
        return defrtleak_items;
    }

    if(child_yang_name == "interleak-items")
    {
        if(interleak_items == nullptr)
        {
            interleak_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems>();
        }
        return interleak_items;
    }

    if(child_yang_name == "leakctrl-items")
    {
        if(leakctrl_items == nullptr)
        {
            leakctrl_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems>();
        }
        return leakctrl_items;
    }

    if(child_yang_name == "ribleak-items")
    {
        if(ribleak_items == nullptr)
        {
            ribleak_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems>();
        }
        return ribleak_items;
    }

    if(child_yang_name == "extrtsum-items")
    {
        if(extrtsum_items == nullptr)
        {
            extrtsum_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems>();
        }
        return extrtsum_items;
    }

    if(child_yang_name == "trstats-items")
    {
        if(trstats_items == nullptr)
        {
            trstats_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems>();
        }
        return trstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(area_items != nullptr)
    {
        _children["area-items"] = area_items;
    }

    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(spfcomp_items != nullptr)
    {
        _children["spfcomp-items"] = spfcomp_items;
    }

    if(lsactrl_items != nullptr)
    {
        _children["lsactrl-items"] = lsactrl_items;
    }

    if(domstats_items != nullptr)
    {
        _children["domstats-items"] = domstats_items;
    }

    if(gr_items != nullptr)
    {
        _children["gr-items"] = gr_items;
    }

    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    if(maxlsap_items != nullptr)
    {
        _children["maxlsap-items"] = maxlsap_items;
    }

    if(maxmetriclsap_items != nullptr)
    {
        _children["maxmetriclsap-items"] = maxmetriclsap_items;
    }

    if(defrtleak_items != nullptr)
    {
        _children["defrtleak-items"] = defrtleak_items;
    }

    if(interleak_items != nullptr)
    {
        _children["interleak-items"] = interleak_items;
    }

    if(leakctrl_items != nullptr)
    {
        _children["leakctrl-items"] = leakctrl_items;
    }

    if(ribleak_items != nullptr)
    {
        _children["ribleak-items"] = ribleak_items;
    }

    if(extrtsum_items != nullptr)
    {
        _children["extrtsum-items"] = extrtsum_items;
    }

    if(trstats_items != nullptr)
    {
        _children["trstats-items"] = trstats_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrId")
    {
        rtrid = value;
        rtrid.value_namespace = name_space;
        rtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist")
    {
        dist = value;
        dist.value_namespace = name_space;
        dist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxEcmp")
    {
        maxecmp = value;
        maxecmp.value_namespace = name_space;
        maxecmp.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "defMetric")
    {
        defmetric = value;
        defmetric.value_namespace = name_space;
        defmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rfc1583Compat")
    {
        rfc1583compat = value;
        rfc1583compat.value_namespace = name_space;
        rfc1583compat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjChangeLogLevel")
    {
        adjchangeloglevel = value;
        adjchangeloglevel.value_namespace = name_space;
        adjchangeloglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRtrId")
    {
        operrtrid = value;
        operrtrid.value_namespace = name_space;
        operrtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSrgbStart")
    {
        opersrgbstart = value;
        opersrgbstart.value_namespace = name_space;
        opersrgbstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSrgbEnd")
    {
        opersrgbend = value;
        opersrgbend.value_namespace = name_space;
        opersrgbend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStSgmntRtgMpls")
    {
        operstsgmntrtgmpls = value;
        operstsgmntrtgmpls.value_namespace = name_space;
        operstsgmntrtgmpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discardRoute")
    {
        discardroute = value;
        discardroute.value_namespace = name_space;
        discardroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downbitIgnore")
    {
        downbitignore = value;
        downbitignore.value_namespace = name_space;
        downbitignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capVrfLite")
    {
        capvrflite = value;
        capvrflite.value_namespace = name_space;
        capvrflite.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "rtrId")
    {
        rtrid.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "dist")
    {
        dist.yfilter = yfilter;
    }
    if(value_path == "maxEcmp")
    {
        maxecmp.yfilter = yfilter;
    }
    if(value_path == "bwRef")
    {
        bwref.yfilter = yfilter;
    }
    if(value_path == "bwRefUnit")
    {
        bwrefunit.yfilter = yfilter;
    }
    if(value_path == "defMetric")
    {
        defmetric.yfilter = yfilter;
    }
    if(value_path == "rfc1583Compat")
    {
        rfc1583compat.yfilter = yfilter;
    }
    if(value_path == "adjChangeLogLevel")
    {
        adjchangeloglevel.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operRtrId")
    {
        operrtrid.yfilter = yfilter;
    }
    if(value_path == "operSrgbStart")
    {
        opersrgbstart.yfilter = yfilter;
    }
    if(value_path == "operSrgbEnd")
    {
        opersrgbend.yfilter = yfilter;
    }
    if(value_path == "operStSgmntRtgMpls")
    {
        operstsgmntrtgmpls.yfilter = yfilter;
    }
    if(value_path == "discardRoute")
    {
        discardroute.yfilter = yfilter;
    }
    if(value_path == "downbitIgnore")
    {
        downbitignore.yfilter = yfilter;
    }
    if(value_path == "capVrfLite")
    {
        capvrflite.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-items" || name == "db-items" || name == "spfcomp-items" || name == "lsactrl-items" || name == "domstats-items" || name == "gr-items" || name == "if-items" || name == "maxlsap-items" || name == "maxmetriclsap-items" || name == "defrtleak-items" || name == "interleak-items" || name == "leakctrl-items" || name == "ribleak-items" || name == "extrtsum-items" || name == "trstats-items" || name == "name" || name == "rtrId" || name == "ctrl" || name == "adminSt" || name == "dist" || name == "maxEcmp" || name == "bwRef" || name == "bwRefUnit" || name == "defMetric" || name == "rfc1583Compat" || name == "adjChangeLogLevel" || name == "operSt" || name == "operRtrId" || name == "operSrgbStart" || name == "operSrgbEnd" || name == "operStSgmntRtgMpls" || name == "discardRoute" || name == "downbitIgnore" || name == "capVrfLite")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaItems()
    :
    area_list(this, {"id"})
{

    yang_name = "area-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::~AreaItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<area_list.len(); index++)
    {
        if(area_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::has_operation() const
{
    for (std::size_t index=0; index<area_list.len(); index++)
    {
        if(area_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Area-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList>();
        ent_->parent = this;
        area_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : area_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Area-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    ctrl{YType::str, "ctrl"},
    cost{YType::uint32, "cost"},
    sgmntrtgmpls{YType::enumeration, "sgmntRtgMpls"},
    nssatransrole{YType::enumeration, "nssaTransRole"},
    brcnt{YType::uint32, "brCnt"},
    asbrcnt{YType::uint32, "asbrCnt"},
    lsacksumsum{YType::uint32, "lsaCksumSum"},
    nssatransst{YType::enumeration, "nssaTransSt"},
    nssatransstabintvl{YType::uint32, "nssaTransStabIntvl"},
    operstsgmntrtgmpls{YType::enumeration, "operStSgmntRtgMpls"},
    authtype{YType::enumeration, "authType"}
        ,
    areastats_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems>())
    , db_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems>())
    , vlink_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems>())
    , slink_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems>())
    , lsaleakp_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems>())
    , lsaleakctrlp_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems>())
    , defrtleak_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems>())
    , iartsum_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems>())
{
    areastats_items->parent = this;
    db_items->parent = this;
    vlink_items->parent = this;
    slink_items->parent = this;
    lsaleakp_items->parent = this;
    lsaleakctrlp_items->parent = this;
    defrtleak_items->parent = this;
    iartsum_items->parent = this;

    yang_name = "Area-list"; yang_parent_name = "area-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::~AreaList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| type.is_set
	|| ctrl.is_set
	|| cost.is_set
	|| sgmntrtgmpls.is_set
	|| nssatransrole.is_set
	|| brcnt.is_set
	|| asbrcnt.is_set
	|| lsacksumsum.is_set
	|| nssatransst.is_set
	|| nssatransstabintvl.is_set
	|| operstsgmntrtgmpls.is_set
	|| authtype.is_set
	|| (areastats_items !=  nullptr && areastats_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (vlink_items !=  nullptr && vlink_items->has_data())
	|| (slink_items !=  nullptr && slink_items->has_data())
	|| (lsaleakp_items !=  nullptr && lsaleakp_items->has_data())
	|| (lsaleakctrlp_items !=  nullptr && lsaleakctrlp_items->has_data())
	|| (defrtleak_items !=  nullptr && defrtleak_items->has_data())
	|| (iartsum_items !=  nullptr && iartsum_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(sgmntrtgmpls.yfilter)
	|| ydk::is_set(nssatransrole.yfilter)
	|| ydk::is_set(brcnt.yfilter)
	|| ydk::is_set(asbrcnt.yfilter)
	|| ydk::is_set(lsacksumsum.yfilter)
	|| ydk::is_set(nssatransst.yfilter)
	|| ydk::is_set(nssatransstabintvl.yfilter)
	|| ydk::is_set(operstsgmntrtgmpls.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| (areastats_items !=  nullptr && areastats_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (vlink_items !=  nullptr && vlink_items->has_operation())
	|| (slink_items !=  nullptr && slink_items->has_operation())
	|| (lsaleakp_items !=  nullptr && lsaleakp_items->has_operation())
	|| (lsaleakctrlp_items !=  nullptr && lsaleakctrlp_items->has_operation())
	|| (defrtleak_items !=  nullptr && defrtleak_items->has_operation())
	|| (iartsum_items !=  nullptr && iartsum_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Area-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (sgmntrtgmpls.is_set || is_set(sgmntrtgmpls.yfilter)) leaf_name_data.push_back(sgmntrtgmpls.get_name_leafdata());
    if (nssatransrole.is_set || is_set(nssatransrole.yfilter)) leaf_name_data.push_back(nssatransrole.get_name_leafdata());
    if (brcnt.is_set || is_set(brcnt.yfilter)) leaf_name_data.push_back(brcnt.get_name_leafdata());
    if (asbrcnt.is_set || is_set(asbrcnt.yfilter)) leaf_name_data.push_back(asbrcnt.get_name_leafdata());
    if (lsacksumsum.is_set || is_set(lsacksumsum.yfilter)) leaf_name_data.push_back(lsacksumsum.get_name_leafdata());
    if (nssatransst.is_set || is_set(nssatransst.yfilter)) leaf_name_data.push_back(nssatransst.get_name_leafdata());
    if (nssatransstabintvl.is_set || is_set(nssatransstabintvl.yfilter)) leaf_name_data.push_back(nssatransstabintvl.get_name_leafdata());
    if (operstsgmntrtgmpls.is_set || is_set(operstsgmntrtgmpls.yfilter)) leaf_name_data.push_back(operstsgmntrtgmpls.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "areastats-items")
    {
        if(areastats_items == nullptr)
        {
            areastats_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems>();
        }
        return areastats_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "vlink-items")
    {
        if(vlink_items == nullptr)
        {
            vlink_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems>();
        }
        return vlink_items;
    }

    if(child_yang_name == "slink-items")
    {
        if(slink_items == nullptr)
        {
            slink_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems>();
        }
        return slink_items;
    }

    if(child_yang_name == "lsaleakp-items")
    {
        if(lsaleakp_items == nullptr)
        {
            lsaleakp_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems>();
        }
        return lsaleakp_items;
    }

    if(child_yang_name == "lsaleakctrlp-items")
    {
        if(lsaleakctrlp_items == nullptr)
        {
            lsaleakctrlp_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems>();
        }
        return lsaleakctrlp_items;
    }

    if(child_yang_name == "defrtleak-items")
    {
        if(defrtleak_items == nullptr)
        {
            defrtleak_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems>();
        }
        return defrtleak_items;
    }

    if(child_yang_name == "iartsum-items")
    {
        if(iartsum_items == nullptr)
        {
            iartsum_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems>();
        }
        return iartsum_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(areastats_items != nullptr)
    {
        _children["areastats-items"] = areastats_items;
    }

    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(vlink_items != nullptr)
    {
        _children["vlink-items"] = vlink_items;
    }

    if(slink_items != nullptr)
    {
        _children["slink-items"] = slink_items;
    }

    if(lsaleakp_items != nullptr)
    {
        _children["lsaleakp-items"] = lsaleakp_items;
    }

    if(lsaleakctrlp_items != nullptr)
    {
        _children["lsaleakctrlp-items"] = lsaleakctrlp_items;
    }

    if(defrtleak_items != nullptr)
    {
        _children["defrtleak-items"] = defrtleak_items;
    }

    if(iartsum_items != nullptr)
    {
        _children["iartsum-items"] = iartsum_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMpls")
    {
        sgmntrtgmpls = value;
        sgmntrtgmpls.value_namespace = name_space;
        sgmntrtgmpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssaTransRole")
    {
        nssatransrole = value;
        nssatransrole.value_namespace = name_space;
        nssatransrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brCnt")
    {
        brcnt = value;
        brcnt.value_namespace = name_space;
        brcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asbrCnt")
    {
        asbrcnt = value;
        asbrcnt.value_namespace = name_space;
        asbrcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaCksumSum")
    {
        lsacksumsum = value;
        lsacksumsum.value_namespace = name_space;
        lsacksumsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssaTransSt")
    {
        nssatransst = value;
        nssatransst.value_namespace = name_space;
        nssatransst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssaTransStabIntvl")
    {
        nssatransstabintvl = value;
        nssatransstabintvl.value_namespace = name_space;
        nssatransstabintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStSgmntRtgMpls")
    {
        operstsgmntrtgmpls = value;
        operstsgmntrtgmpls.value_namespace = name_space;
        operstsgmntrtgmpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authType")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMpls")
    {
        sgmntrtgmpls.yfilter = yfilter;
    }
    if(value_path == "nssaTransRole")
    {
        nssatransrole.yfilter = yfilter;
    }
    if(value_path == "brCnt")
    {
        brcnt.yfilter = yfilter;
    }
    if(value_path == "asbrCnt")
    {
        asbrcnt.yfilter = yfilter;
    }
    if(value_path == "lsaCksumSum")
    {
        lsacksumsum.yfilter = yfilter;
    }
    if(value_path == "nssaTransSt")
    {
        nssatransst.yfilter = yfilter;
    }
    if(value_path == "nssaTransStabIntvl")
    {
        nssatransstabintvl.yfilter = yfilter;
    }
    if(value_path == "operStSgmntRtgMpls")
    {
        operstsgmntrtgmpls.yfilter = yfilter;
    }
    if(value_path == "authType")
    {
        authtype.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "areastats-items" || name == "db-items" || name == "vlink-items" || name == "slink-items" || name == "lsaleakp-items" || name == "lsaleakctrlp-items" || name == "defrtleak-items" || name == "iartsum-items" || name == "id" || name == "name" || name == "type" || name == "ctrl" || name == "cost" || name == "sgmntRtgMpls" || name == "nssaTransRole" || name == "brCnt" || name == "asbrCnt" || name == "lsaCksumSum" || name == "nssaTransSt" || name == "nssaTransStabIntvl" || name == "operStSgmntRtgMpls" || name == "authType")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::AreastatsItems()
    :
    areacreatedts{YType::str, "areaCreatedTs"},
    spfruns{YType::uint32, "spfRuns"},
    lsacnt{YType::uint32, "lsaCnt"},
    lastspfduration{YType::uint32, "lastSpfDuration"},
    ifcnt{YType::uint32, "ifCnt"},
    activeifcnt{YType::uint32, "activeIfCnt"},
    passiveifcnt{YType::uint32, "passiveIfCnt"},
    lpbkifcnt{YType::uint32, "lpbkIfCnt"},
    adjcnt{YType::uint32, "adjCnt"},
    grhelperpeercnt{YType::uint32, "grHelperPeerCnt"}
{

    yang_name = "areastats-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::~AreastatsItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::has_data() const
{
    if (is_presence_container) return true;
    return areacreatedts.is_set
	|| spfruns.is_set
	|| lsacnt.is_set
	|| lastspfduration.is_set
	|| ifcnt.is_set
	|| activeifcnt.is_set
	|| passiveifcnt.is_set
	|| lpbkifcnt.is_set
	|| adjcnt.is_set
	|| grhelperpeercnt.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(areacreatedts.yfilter)
	|| ydk::is_set(spfruns.yfilter)
	|| ydk::is_set(lsacnt.yfilter)
	|| ydk::is_set(lastspfduration.yfilter)
	|| ydk::is_set(ifcnt.yfilter)
	|| ydk::is_set(activeifcnt.yfilter)
	|| ydk::is_set(passiveifcnt.yfilter)
	|| ydk::is_set(lpbkifcnt.yfilter)
	|| ydk::is_set(adjcnt.yfilter)
	|| ydk::is_set(grhelperpeercnt.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areastats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (areacreatedts.is_set || is_set(areacreatedts.yfilter)) leaf_name_data.push_back(areacreatedts.get_name_leafdata());
    if (spfruns.is_set || is_set(spfruns.yfilter)) leaf_name_data.push_back(spfruns.get_name_leafdata());
    if (lsacnt.is_set || is_set(lsacnt.yfilter)) leaf_name_data.push_back(lsacnt.get_name_leafdata());
    if (lastspfduration.is_set || is_set(lastspfduration.yfilter)) leaf_name_data.push_back(lastspfduration.get_name_leafdata());
    if (ifcnt.is_set || is_set(ifcnt.yfilter)) leaf_name_data.push_back(ifcnt.get_name_leafdata());
    if (activeifcnt.is_set || is_set(activeifcnt.yfilter)) leaf_name_data.push_back(activeifcnt.get_name_leafdata());
    if (passiveifcnt.is_set || is_set(passiveifcnt.yfilter)) leaf_name_data.push_back(passiveifcnt.get_name_leafdata());
    if (lpbkifcnt.is_set || is_set(lpbkifcnt.yfilter)) leaf_name_data.push_back(lpbkifcnt.get_name_leafdata());
    if (adjcnt.is_set || is_set(adjcnt.yfilter)) leaf_name_data.push_back(adjcnt.get_name_leafdata());
    if (grhelperpeercnt.is_set || is_set(grhelperpeercnt.yfilter)) leaf_name_data.push_back(grhelperpeercnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "areaCreatedTs")
    {
        areacreatedts = value;
        areacreatedts.value_namespace = name_space;
        areacreatedts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spfRuns")
    {
        spfruns = value;
        spfruns.value_namespace = name_space;
        spfruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaCnt")
    {
        lsacnt = value;
        lsacnt.value_namespace = name_space;
        lsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastSpfDuration")
    {
        lastspfduration = value;
        lastspfduration.value_namespace = name_space;
        lastspfduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifCnt")
    {
        ifcnt = value;
        ifcnt.value_namespace = name_space;
        ifcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activeIfCnt")
    {
        activeifcnt = value;
        activeifcnt.value_namespace = name_space;
        activeifcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passiveIfCnt")
    {
        passiveifcnt = value;
        passiveifcnt.value_namespace = name_space;
        passiveifcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpbkIfCnt")
    {
        lpbkifcnt = value;
        lpbkifcnt.value_namespace = name_space;
        lpbkifcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjCnt")
    {
        adjcnt = value;
        adjcnt.value_namespace = name_space;
        adjcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grHelperPeerCnt")
    {
        grhelperpeercnt = value;
        grhelperpeercnt.value_namespace = name_space;
        grhelperpeercnt.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "areaCreatedTs")
    {
        areacreatedts.yfilter = yfilter;
    }
    if(value_path == "spfRuns")
    {
        spfruns.yfilter = yfilter;
    }
    if(value_path == "lsaCnt")
    {
        lsacnt.yfilter = yfilter;
    }
    if(value_path == "lastSpfDuration")
    {
        lastspfduration.yfilter = yfilter;
    }
    if(value_path == "ifCnt")
    {
        ifcnt.yfilter = yfilter;
    }
    if(value_path == "activeIfCnt")
    {
        activeifcnt.yfilter = yfilter;
    }
    if(value_path == "passiveIfCnt")
    {
        passiveifcnt.yfilter = yfilter;
    }
    if(value_path == "lpbkIfCnt")
    {
        lpbkifcnt.yfilter = yfilter;
    }
    if(value_path == "adjCnt")
    {
        adjcnt.yfilter = yfilter;
    }
    if(value_path == "grHelperPeerCnt")
    {
        grhelperpeercnt.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "areaCreatedTs" || name == "spfRuns" || name == "lsaCnt" || name == "lastSpfDuration" || name == "ifCnt" || name == "activeIfCnt" || name == "passiveIfCnt" || name == "lpbkIfCnt" || name == "adjCnt" || name == "grHelperPeerCnt")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::~DbItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::get_children() const
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    lsa_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems>())
    , rt_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems>())
{
    lsa_items->parent = this;
    rt_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::~DbList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (lsa_items !=  nullptr && lsa_items->has_data())
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (lsa_items !=  nullptr && lsa_items->has_operation())
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-items")
    {
        if(lsa_items == nullptr)
        {
            lsa_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems>();
        }
        return lsa_items;
    }

    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsa_items != nullptr)
    {
        _children["lsa-items"] = lsa_items;
    }

    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-items" || name == "rt-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaItems()
    :
    lsarec_list(this, {"type", "id", "advrtr"})
{

    yang_name = "lsa-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::~LsaItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsarec_list.len(); index++)
    {
        if(lsarec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::has_operation() const
{
    for (std::size_t index=0; index<lsarec_list.len(); index++)
    {
        if(lsarec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LsaRec-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList>();
        ent_->parent = this;
        lsarec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsarec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LsaRec-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::LsaRecList()
    :
    type{YType::enumeration, "type"},
    id{YType::str, "id"},
    advrtr{YType::str, "advRtr"},
    seq{YType::uint32, "seq"},
    age{YType::uint32, "age"},
    arrivalts{YType::str, "arrivalTs"},
    cksum{YType::uint32, "cksum"},
    advert{YType::str, "advert"}
        ,
    ri_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::RiItems>())
    , epl_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems>())
    , ell_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems>())
{
    ri_items->parent = this;
    epl_items->parent = this;
    ell_items->parent = this;

    yang_name = "LsaRec-list"; yang_parent_name = "lsa-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::~LsaRecList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| id.is_set
	|| advrtr.is_set
	|| seq.is_set
	|| age.is_set
	|| arrivalts.is_set
	|| cksum.is_set
	|| advert.is_set
	|| (ri_items !=  nullptr && ri_items->has_data())
	|| (epl_items !=  nullptr && epl_items->has_data())
	|| (ell_items !=  nullptr && ell_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(advrtr.yfilter)
	|| ydk::is_set(seq.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(arrivalts.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| ydk::is_set(advert.yfilter)
	|| (ri_items !=  nullptr && ri_items->has_operation())
	|| (epl_items !=  nullptr && epl_items->has_operation())
	|| (ell_items !=  nullptr && ell_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LsaRec-list";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(advrtr, "advRtr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (advrtr.is_set || is_set(advrtr.yfilter)) leaf_name_data.push_back(advrtr.get_name_leafdata());
    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (arrivalts.is_set || is_set(arrivalts.yfilter)) leaf_name_data.push_back(arrivalts.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());
    if (advert.is_set || is_set(advert.yfilter)) leaf_name_data.push_back(advert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ri-items")
    {
        if(ri_items == nullptr)
        {
            ri_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::RiItems>();
        }
        return ri_items;
    }

    if(child_yang_name == "epl-items")
    {
        if(epl_items == nullptr)
        {
            epl_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems>();
        }
        return epl_items;
    }

    if(child_yang_name == "ell-items")
    {
        if(ell_items == nullptr)
        {
            ell_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems>();
        }
        return ell_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ri_items != nullptr)
    {
        _children["ri-items"] = ri_items;
    }

    if(epl_items != nullptr)
    {
        _children["epl-items"] = epl_items;
    }

    if(ell_items != nullptr)
    {
        _children["ell-items"] = ell_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advRtr")
    {
        advrtr = value;
        advrtr.value_namespace = name_space;
        advrtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arrivalTs")
    {
        arrivalts = value;
        arrivalts.value_namespace = name_space;
        arrivalts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advert")
    {
        advert = value;
        advert.value_namespace = name_space;
        advert.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "advRtr")
    {
        advrtr.yfilter = yfilter;
    }
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "arrivalTs")
    {
        arrivalts.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
    if(value_path == "advert")
    {
        advert.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-items" || name == "epl-items" || name == "ell-items" || name == "type" || name == "id" || name == "advRtr" || name == "seq" || name == "age" || name == "arrivalTs" || name == "cksum" || name == "advert")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::RiItems::RiItems()
    :
    grrestartcap{YType::enumeration, "grRestartCap"},
    grrestarthelpercap{YType::enumeration, "grRestartHelperCap"},
    stubroutercap{YType::enumeration, "stubRouterCap"},
    tecap{YType::enumeration, "teCap"},
    p2poverlancap{YType::enumeration, "p2pOverLanCap"},
    exptecap{YType::enumeration, "expTeCap"},
    sgmntrtgglobalrange{YType::uint32, "sgmntRtgGlobalRange"},
    sgmntrtgglobalrangestart{YType::uint32, "sgmntRtgGlobalRangeStart"},
    sgmntrtglocalrange{YType::uint32, "sgmntRtgLocalRange"},
    sgmntrtglocalrangestart{YType::uint32, "sgmntRtgLocalRangeStart"}
{

    yang_name = "ri-items"; yang_parent_name = "LsaRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::RiItems::~RiItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::RiItems::has_data() const
{
    if (is_presence_container) return true;
    return grrestartcap.is_set
	|| grrestarthelpercap.is_set
	|| stubroutercap.is_set
	|| tecap.is_set
	|| p2poverlancap.is_set
	|| exptecap.is_set
	|| sgmntrtgglobalrange.is_set
	|| sgmntrtgglobalrangestart.is_set
	|| sgmntrtglocalrange.is_set
	|| sgmntrtglocalrangestart.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::RiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grrestartcap.yfilter)
	|| ydk::is_set(grrestarthelpercap.yfilter)
	|| ydk::is_set(stubroutercap.yfilter)
	|| ydk::is_set(tecap.yfilter)
	|| ydk::is_set(p2poverlancap.yfilter)
	|| ydk::is_set(exptecap.yfilter)
	|| ydk::is_set(sgmntrtgglobalrange.yfilter)
	|| ydk::is_set(sgmntrtgglobalrangestart.yfilter)
	|| ydk::is_set(sgmntrtglocalrange.yfilter)
	|| ydk::is_set(sgmntrtglocalrangestart.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::RiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::RiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grrestartcap.is_set || is_set(grrestartcap.yfilter)) leaf_name_data.push_back(grrestartcap.get_name_leafdata());
    if (grrestarthelpercap.is_set || is_set(grrestarthelpercap.yfilter)) leaf_name_data.push_back(grrestarthelpercap.get_name_leafdata());
    if (stubroutercap.is_set || is_set(stubroutercap.yfilter)) leaf_name_data.push_back(stubroutercap.get_name_leafdata());
    if (tecap.is_set || is_set(tecap.yfilter)) leaf_name_data.push_back(tecap.get_name_leafdata());
    if (p2poverlancap.is_set || is_set(p2poverlancap.yfilter)) leaf_name_data.push_back(p2poverlancap.get_name_leafdata());
    if (exptecap.is_set || is_set(exptecap.yfilter)) leaf_name_data.push_back(exptecap.get_name_leafdata());
    if (sgmntrtgglobalrange.is_set || is_set(sgmntrtgglobalrange.yfilter)) leaf_name_data.push_back(sgmntrtgglobalrange.get_name_leafdata());
    if (sgmntrtgglobalrangestart.is_set || is_set(sgmntrtgglobalrangestart.yfilter)) leaf_name_data.push_back(sgmntrtgglobalrangestart.get_name_leafdata());
    if (sgmntrtglocalrange.is_set || is_set(sgmntrtglocalrange.yfilter)) leaf_name_data.push_back(sgmntrtglocalrange.get_name_leafdata());
    if (sgmntrtglocalrangestart.is_set || is_set(sgmntrtglocalrangestart.yfilter)) leaf_name_data.push_back(sgmntrtglocalrangestart.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::RiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::RiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::RiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grRestartCap")
    {
        grrestartcap = value;
        grrestartcap.value_namespace = name_space;
        grrestartcap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grRestartHelperCap")
    {
        grrestarthelpercap = value;
        grrestarthelpercap.value_namespace = name_space;
        grrestarthelpercap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stubRouterCap")
    {
        stubroutercap = value;
        stubroutercap.value_namespace = name_space;
        stubroutercap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "teCap")
    {
        tecap = value;
        tecap.value_namespace = name_space;
        tecap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2pOverLanCap")
    {
        p2poverlancap = value;
        p2poverlancap.value_namespace = name_space;
        p2poverlancap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expTeCap")
    {
        exptecap = value;
        exptecap.value_namespace = name_space;
        exptecap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgGlobalRange")
    {
        sgmntrtgglobalrange = value;
        sgmntrtgglobalrange.value_namespace = name_space;
        sgmntrtgglobalrange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgGlobalRangeStart")
    {
        sgmntrtgglobalrangestart = value;
        sgmntrtgglobalrangestart.value_namespace = name_space;
        sgmntrtgglobalrangestart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgLocalRange")
    {
        sgmntrtglocalrange = value;
        sgmntrtglocalrange.value_namespace = name_space;
        sgmntrtglocalrange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgLocalRangeStart")
    {
        sgmntrtglocalrangestart = value;
        sgmntrtglocalrangestart.value_namespace = name_space;
        sgmntrtglocalrangestart.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::RiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grRestartCap")
    {
        grrestartcap.yfilter = yfilter;
    }
    if(value_path == "grRestartHelperCap")
    {
        grrestarthelpercap.yfilter = yfilter;
    }
    if(value_path == "stubRouterCap")
    {
        stubroutercap.yfilter = yfilter;
    }
    if(value_path == "teCap")
    {
        tecap.yfilter = yfilter;
    }
    if(value_path == "p2pOverLanCap")
    {
        p2poverlancap.yfilter = yfilter;
    }
    if(value_path == "expTeCap")
    {
        exptecap.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgGlobalRange")
    {
        sgmntrtgglobalrange.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgGlobalRangeStart")
    {
        sgmntrtgglobalrangestart.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgLocalRange")
    {
        sgmntrtglocalrange.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgLocalRangeStart")
    {
        sgmntrtglocalrangestart.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::RiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grRestartCap" || name == "grRestartHelperCap" || name == "stubRouterCap" || name == "teCap" || name == "p2pOverLanCap" || name == "expTeCap" || name == "sgmntRtgGlobalRange" || name == "sgmntRtgGlobalRangeStart" || name == "sgmntRtgLocalRange" || name == "sgmntRtgLocalRangeStart")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::EplItems()
    :
    extpfxrec_list(this, {"ippfx"})
{

    yang_name = "epl-items"; yang_parent_name = "LsaRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::~EplItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extpfxrec_list.len(); index++)
    {
        if(extpfxrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::has_operation() const
{
    for (std::size_t index=0; index<extpfxrec_list.len(); index++)
    {
        if(extpfxrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtPfxRec-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList>();
        ent_->parent = this;
        extpfxrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extpfxrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtPfxRec-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::ExtPfxRecList()
    :
    ippfx{YType::str, "ipPfx"},
    addressfamily{YType::uint16, "addressFamily"},
    routetype{YType::enumeration, "routeType"},
    pfxflags{YType::str, "pfxFlags"}
        ,
    sid_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems>())
{
    sid_items->parent = this;

    yang_name = "ExtPfxRec-list"; yang_parent_name = "epl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::~ExtPfxRecList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::has_data() const
{
    if (is_presence_container) return true;
    return ippfx.is_set
	|| addressfamily.is_set
	|| routetype.is_set
	|| pfxflags.is_set
	|| (sid_items !=  nullptr && sid_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ippfx.yfilter)
	|| ydk::is_set(addressfamily.yfilter)
	|| ydk::is_set(routetype.yfilter)
	|| ydk::is_set(pfxflags.yfilter)
	|| (sid_items !=  nullptr && sid_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtPfxRec-list";
    ADD_KEY_TOKEN(ippfx, "ipPfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ippfx.is_set || is_set(ippfx.yfilter)) leaf_name_data.push_back(ippfx.get_name_leafdata());
    if (addressfamily.is_set || is_set(addressfamily.yfilter)) leaf_name_data.push_back(addressfamily.get_name_leafdata());
    if (routetype.is_set || is_set(routetype.yfilter)) leaf_name_data.push_back(routetype.get_name_leafdata());
    if (pfxflags.is_set || is_set(pfxflags.yfilter)) leaf_name_data.push_back(pfxflags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-items")
    {
        if(sid_items == nullptr)
        {
            sid_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems>();
        }
        return sid_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_items != nullptr)
    {
        _children["sid-items"] = sid_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipPfx")
    {
        ippfx = value;
        ippfx.value_namespace = name_space;
        ippfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addressFamily")
    {
        addressfamily = value;
        addressfamily.value_namespace = name_space;
        addressfamily.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeType")
    {
        routetype = value;
        routetype.value_namespace = name_space;
        routetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxFlags")
    {
        pfxflags = value;
        pfxflags.value_namespace = name_space;
        pfxflags.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipPfx")
    {
        ippfx.yfilter = yfilter;
    }
    if(value_path == "addressFamily")
    {
        addressfamily.yfilter = yfilter;
    }
    if(value_path == "routeType")
    {
        routetype.yfilter = yfilter;
    }
    if(value_path == "pfxFlags")
    {
        pfxflags.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-items" || name == "ipPfx" || name == "addressFamily" || name == "routeType" || name == "pfxFlags")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SidItems()
    :
    sgmntrtgpfxsidrec_list(this, {"sgmntrtgalgo"})
{

    yang_name = "sid-items"; yang_parent_name = "ExtPfxRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::~SidItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sgmntrtgpfxsidrec_list.len(); index++)
    {
        if(sgmntrtgpfxsidrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::has_operation() const
{
    for (std::size_t index=0; index<sgmntrtgpfxsidrec_list.len(); index++)
    {
        if(sgmntrtgpfxsidrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SgmntRtgPfxSidRec-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList>();
        ent_->parent = this;
        sgmntrtgpfxsidrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sgmntrtgpfxsidrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SgmntRtgPfxSidRec-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::SgmntRtgPfxSidRecList()
    :
    sgmntrtgalgo{YType::uint16, "sgmntRtgAlgo"},
    sgmntrtgpfxsidflags{YType::str, "sgmntRtgPfxSidFlags"},
    sgmntrtgmtid{YType::uint16, "sgmntRtgMtid"},
    sgmntrtgalgoname{YType::str, "sgmntRtgAlgoName"},
    sgmntrtgpfxsid{YType::int32, "sgmntRtgPfxSid"}
{

    yang_name = "SgmntRtgPfxSidRec-list"; yang_parent_name = "sid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::~SgmntRtgPfxSidRecList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::has_data() const
{
    if (is_presence_container) return true;
    return sgmntrtgalgo.is_set
	|| sgmntrtgpfxsidflags.is_set
	|| sgmntrtgmtid.is_set
	|| sgmntrtgalgoname.is_set
	|| sgmntrtgpfxsid.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgmntrtgalgo.yfilter)
	|| ydk::is_set(sgmntrtgpfxsidflags.yfilter)
	|| ydk::is_set(sgmntrtgmtid.yfilter)
	|| ydk::is_set(sgmntrtgalgoname.yfilter)
	|| ydk::is_set(sgmntrtgpfxsid.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SgmntRtgPfxSidRec-list";
    ADD_KEY_TOKEN(sgmntrtgalgo, "sgmntRtgAlgo");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgmntrtgalgo.is_set || is_set(sgmntrtgalgo.yfilter)) leaf_name_data.push_back(sgmntrtgalgo.get_name_leafdata());
    if (sgmntrtgpfxsidflags.is_set || is_set(sgmntrtgpfxsidflags.yfilter)) leaf_name_data.push_back(sgmntrtgpfxsidflags.get_name_leafdata());
    if (sgmntrtgmtid.is_set || is_set(sgmntrtgmtid.yfilter)) leaf_name_data.push_back(sgmntrtgmtid.get_name_leafdata());
    if (sgmntrtgalgoname.is_set || is_set(sgmntrtgalgoname.yfilter)) leaf_name_data.push_back(sgmntrtgalgoname.get_name_leafdata());
    if (sgmntrtgpfxsid.is_set || is_set(sgmntrtgpfxsid.yfilter)) leaf_name_data.push_back(sgmntrtgpfxsid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgmntRtgAlgo")
    {
        sgmntrtgalgo = value;
        sgmntrtgalgo.value_namespace = name_space;
        sgmntrtgalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgPfxSidFlags")
    {
        sgmntrtgpfxsidflags = value;
        sgmntrtgpfxsidflags.value_namespace = name_space;
        sgmntrtgpfxsidflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMtid")
    {
        sgmntrtgmtid = value;
        sgmntrtgmtid.value_namespace = name_space;
        sgmntrtgmtid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgAlgoName")
    {
        sgmntrtgalgoname = value;
        sgmntrtgalgoname.value_namespace = name_space;
        sgmntrtgalgoname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgPfxSid")
    {
        sgmntrtgpfxsid = value;
        sgmntrtgpfxsid.value_namespace = name_space;
        sgmntrtgpfxsid.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgmntRtgAlgo")
    {
        sgmntrtgalgo.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgPfxSidFlags")
    {
        sgmntrtgpfxsidflags.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMtid")
    {
        sgmntrtgmtid.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgAlgoName")
    {
        sgmntrtgalgoname.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgPfxSid")
    {
        sgmntrtgpfxsid.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgmntRtgAlgo" || name == "sgmntRtgPfxSidFlags" || name == "sgmntRtgMtid" || name == "sgmntRtgAlgoName" || name == "sgmntRtgPfxSid")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::EllItems()
    :
    linktype{YType::enumeration, "linkType"},
    linkid{YType::str, "linkId"},
    linkdata{YType::str, "linkData"}
        ,
    sid_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems>())
{
    sid_items->parent = this;

    yang_name = "ell-items"; yang_parent_name = "LsaRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::~EllItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::has_data() const
{
    if (is_presence_container) return true;
    return linktype.is_set
	|| linkid.is_set
	|| linkdata.is_set
	|| (sid_items !=  nullptr && sid_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(linktype.yfilter)
	|| ydk::is_set(linkid.yfilter)
	|| ydk::is_set(linkdata.yfilter)
	|| (sid_items !=  nullptr && sid_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ell-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (linktype.is_set || is_set(linktype.yfilter)) leaf_name_data.push_back(linktype.get_name_leafdata());
    if (linkid.is_set || is_set(linkid.yfilter)) leaf_name_data.push_back(linkid.get_name_leafdata());
    if (linkdata.is_set || is_set(linkdata.yfilter)) leaf_name_data.push_back(linkdata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-items")
    {
        if(sid_items == nullptr)
        {
            sid_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems>();
        }
        return sid_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_items != nullptr)
    {
        _children["sid-items"] = sid_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "linkType")
    {
        linktype = value;
        linktype.value_namespace = name_space;
        linktype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkId")
    {
        linkid = value;
        linkid.value_namespace = name_space;
        linkid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkData")
    {
        linkdata = value;
        linkdata.value_namespace = name_space;
        linkdata.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "linkType")
    {
        linktype.yfilter = yfilter;
    }
    if(value_path == "linkId")
    {
        linkid.yfilter = yfilter;
    }
    if(value_path == "linkData")
    {
        linkdata.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-items" || name == "linkType" || name == "linkId" || name == "linkData")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SidItems()
    :
    sgmntrtgadjsidrec_list(this, {"sgmntrtgadjsidlabel"})
{

    yang_name = "sid-items"; yang_parent_name = "ell-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::~SidItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sgmntrtgadjsidrec_list.len(); index++)
    {
        if(sgmntrtgadjsidrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::has_operation() const
{
    for (std::size_t index=0; index<sgmntrtgadjsidrec_list.len(); index++)
    {
        if(sgmntrtgadjsidrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SgmntRtgAdjSidRec-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList>();
        ent_->parent = this;
        sgmntrtgadjsidrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sgmntrtgadjsidrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SgmntRtgAdjSidRec-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::SgmntRtgAdjSidRecList()
    :
    sgmntrtgadjsidlabel{YType::uint32, "sgmntRtgAdjSidLabel"},
    adjsidtlvtype{YType::enumeration, "adjSidTlvType"},
    sgmntrtgmtid{YType::uint16, "sgmntRtgMtid"},
    sgmntrtgweight{YType::uint16, "sgmntRtgWeight"},
    sgmntrtgadjsidflags{YType::str, "sgmntRtgAdjSidFlags"},
    sgmntrtgadjsidnbrid{YType::str, "sgmntRtgAdjSidNbrId"}
{

    yang_name = "SgmntRtgAdjSidRec-list"; yang_parent_name = "sid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::~SgmntRtgAdjSidRecList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::has_data() const
{
    if (is_presence_container) return true;
    return sgmntrtgadjsidlabel.is_set
	|| adjsidtlvtype.is_set
	|| sgmntrtgmtid.is_set
	|| sgmntrtgweight.is_set
	|| sgmntrtgadjsidflags.is_set
	|| sgmntrtgadjsidnbrid.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgmntrtgadjsidlabel.yfilter)
	|| ydk::is_set(adjsidtlvtype.yfilter)
	|| ydk::is_set(sgmntrtgmtid.yfilter)
	|| ydk::is_set(sgmntrtgweight.yfilter)
	|| ydk::is_set(sgmntrtgadjsidflags.yfilter)
	|| ydk::is_set(sgmntrtgadjsidnbrid.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SgmntRtgAdjSidRec-list";
    ADD_KEY_TOKEN(sgmntrtgadjsidlabel, "sgmntRtgAdjSidLabel");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgmntrtgadjsidlabel.is_set || is_set(sgmntrtgadjsidlabel.yfilter)) leaf_name_data.push_back(sgmntrtgadjsidlabel.get_name_leafdata());
    if (adjsidtlvtype.is_set || is_set(adjsidtlvtype.yfilter)) leaf_name_data.push_back(adjsidtlvtype.get_name_leafdata());
    if (sgmntrtgmtid.is_set || is_set(sgmntrtgmtid.yfilter)) leaf_name_data.push_back(sgmntrtgmtid.get_name_leafdata());
    if (sgmntrtgweight.is_set || is_set(sgmntrtgweight.yfilter)) leaf_name_data.push_back(sgmntrtgweight.get_name_leafdata());
    if (sgmntrtgadjsidflags.is_set || is_set(sgmntrtgadjsidflags.yfilter)) leaf_name_data.push_back(sgmntrtgadjsidflags.get_name_leafdata());
    if (sgmntrtgadjsidnbrid.is_set || is_set(sgmntrtgadjsidnbrid.yfilter)) leaf_name_data.push_back(sgmntrtgadjsidnbrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgmntRtgAdjSidLabel")
    {
        sgmntrtgadjsidlabel = value;
        sgmntrtgadjsidlabel.value_namespace = name_space;
        sgmntrtgadjsidlabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjSidTlvType")
    {
        adjsidtlvtype = value;
        adjsidtlvtype.value_namespace = name_space;
        adjsidtlvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMtid")
    {
        sgmntrtgmtid = value;
        sgmntrtgmtid.value_namespace = name_space;
        sgmntrtgmtid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgWeight")
    {
        sgmntrtgweight = value;
        sgmntrtgweight.value_namespace = name_space;
        sgmntrtgweight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgAdjSidFlags")
    {
        sgmntrtgadjsidflags = value;
        sgmntrtgadjsidflags.value_namespace = name_space;
        sgmntrtgadjsidflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgAdjSidNbrId")
    {
        sgmntrtgadjsidnbrid = value;
        sgmntrtgadjsidnbrid.value_namespace = name_space;
        sgmntrtgadjsidnbrid.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgmntRtgAdjSidLabel")
    {
        sgmntrtgadjsidlabel.yfilter = yfilter;
    }
    if(value_path == "adjSidTlvType")
    {
        adjsidtlvtype.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMtid")
    {
        sgmntrtgmtid.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgWeight")
    {
        sgmntrtgweight.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgAdjSidFlags")
    {
        sgmntrtgadjsidflags.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgAdjSidNbrId")
    {
        sgmntrtgadjsidnbrid.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgmntRtgAdjSidLabel" || name == "adjSidTlvType" || name == "sgmntRtgMtid" || name == "sgmntRtgWeight" || name == "sgmntRtgAdjSidFlags" || name == "sgmntRtgAdjSidNbrId")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RtItems()
    :
    route_list(this, {"pfx"})
{

    yang_name = "rt-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::~RtItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList>();
        ent_->parent = this;
        route_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::get_children() const
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::RouteList()
    :
    pfx{YType::str, "pfx"},
    name{YType::str, "name"},
    patht{YType::enumeration, "pathT"},
    area{YType::str, "area"},
    flags{YType::str, "flags"},
    ucastcost{YType::uint16, "ucastCost"},
    mcastcost{YType::uint16, "mcastCost"},
    tag{YType::uint32, "tag"},
    dist{YType::uint8, "dist"},
    sgmntrtgmplssid{YType::uint32, "sgmntRtgMplsSid"},
    sgmntrtgmplsinlabel{YType::uint32, "sgmntRtgMplsInLabel"}
        ,
    ucnh_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems>())
    , mcnh_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems>())
{
    ucnh_items->parent = this;
    mcnh_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::~RouteList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| name.is_set
	|| patht.is_set
	|| area.is_set
	|| flags.is_set
	|| ucastcost.is_set
	|| mcastcost.is_set
	|| tag.is_set
	|| dist.is_set
	|| sgmntrtgmplssid.is_set
	|| sgmntrtgmplsinlabel.is_set
	|| (ucnh_items !=  nullptr && ucnh_items->has_data())
	|| (mcnh_items !=  nullptr && mcnh_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(patht.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(ucastcost.yfilter)
	|| ydk::is_set(mcastcost.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(dist.yfilter)
	|| ydk::is_set(sgmntrtgmplssid.yfilter)
	|| ydk::is_set(sgmntrtgmplsinlabel.yfilter)
	|| (ucnh_items !=  nullptr && ucnh_items->has_operation())
	|| (mcnh_items !=  nullptr && mcnh_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (patht.is_set || is_set(patht.yfilter)) leaf_name_data.push_back(patht.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (ucastcost.is_set || is_set(ucastcost.yfilter)) leaf_name_data.push_back(ucastcost.get_name_leafdata());
    if (mcastcost.is_set || is_set(mcastcost.yfilter)) leaf_name_data.push_back(mcastcost.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (dist.is_set || is_set(dist.yfilter)) leaf_name_data.push_back(dist.get_name_leafdata());
    if (sgmntrtgmplssid.is_set || is_set(sgmntrtgmplssid.yfilter)) leaf_name_data.push_back(sgmntrtgmplssid.get_name_leafdata());
    if (sgmntrtgmplsinlabel.is_set || is_set(sgmntrtgmplsinlabel.yfilter)) leaf_name_data.push_back(sgmntrtgmplsinlabel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ucnh-items")
    {
        if(ucnh_items == nullptr)
        {
            ucnh_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems>();
        }
        return ucnh_items;
    }

    if(child_yang_name == "mcnh-items")
    {
        if(mcnh_items == nullptr)
        {
            mcnh_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems>();
        }
        return mcnh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ucnh_items != nullptr)
    {
        _children["ucnh-items"] = ucnh_items;
    }

    if(mcnh_items != nullptr)
    {
        _children["mcnh-items"] = mcnh_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "pathT")
    {
        patht = value;
        patht.value_namespace = name_space;
        patht.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastCost")
    {
        ucastcost = value;
        ucastcost.value_namespace = name_space;
        ucastcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastCost")
    {
        mcastcost = value;
        mcastcost.value_namespace = name_space;
        mcastcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist")
    {
        dist = value;
        dist.value_namespace = name_space;
        dist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMplsSid")
    {
        sgmntrtgmplssid = value;
        sgmntrtgmplssid.value_namespace = name_space;
        sgmntrtgmplssid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMplsInLabel")
    {
        sgmntrtgmplsinlabel = value;
        sgmntrtgmplsinlabel.value_namespace = name_space;
        sgmntrtgmplsinlabel.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pathT")
    {
        patht.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "ucastCost")
    {
        ucastcost.yfilter = yfilter;
    }
    if(value_path == "mcastCost")
    {
        mcastcost.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "dist")
    {
        dist.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMplsSid")
    {
        sgmntrtgmplssid.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMplsInLabel")
    {
        sgmntrtgmplsinlabel.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ucnh-items" || name == "mcnh-items" || name == "pfx" || name == "name" || name == "pathT" || name == "area" || name == "flags" || name == "ucastCost" || name == "mcastCost" || name == "tag" || name == "dist" || name == "sgmntRtgMplsSid" || name == "sgmntRtgMplsInLabel")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcnhItems()
    :
    ucnexthop_list(this, {"if_", "addr"})
{

    yang_name = "ucnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::~UcnhItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_operation() const
{
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UcNexthop-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList>();
        ent_->parent = this;
        ucnexthop_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ucnexthop_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UcNexthop-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::UcNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"},
    sgmntrtgmplsoutlabel{YType::uint32, "sgmntRtgMplsOutLabel"}
{

    yang_name = "UcNexthop-list"; yang_parent_name = "ucnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::~UcNexthopList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set
	|| sgmntrtgmplsoutlabel.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(sgmntrtgmplsoutlabel.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UcNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (sgmntrtgmplsoutlabel.is_set || is_set(sgmntrtgmplsoutlabel.yfilter)) leaf_name_data.push_back(sgmntrtgmplsoutlabel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMplsOutLabel")
    {
        sgmntrtgmplsoutlabel = value;
        sgmntrtgmplsoutlabel.value_namespace = name_space;
        sgmntrtgmplsoutlabel.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMplsOutLabel")
    {
        sgmntrtgmplsoutlabel.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags" || name == "sgmntRtgMplsOutLabel")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McnhItems()
    :
    mcnexthop_list(this, {"if_", "addr"})
{

    yang_name = "mcnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::~McnhItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::has_operation() const
{
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McNexthop-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList>();
        ent_->parent = this;
        mcnexthop_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mcnexthop_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McNexthop-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::McNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"},
    sgmntrtgmplsoutlabel{YType::uint32, "sgmntRtgMplsOutLabel"}
{

    yang_name = "McNexthop-list"; yang_parent_name = "mcnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::~McNexthopList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set
	|| sgmntrtgmplsoutlabel.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(sgmntrtgmplsoutlabel.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (sgmntrtgmplsoutlabel.is_set || is_set(sgmntrtgmplsoutlabel.yfilter)) leaf_name_data.push_back(sgmntrtgmplsoutlabel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMplsOutLabel")
    {
        sgmntrtgmplsoutlabel = value;
        sgmntrtgmplsoutlabel.value_namespace = name_space;
        sgmntrtgmplsoutlabel.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMplsOutLabel")
    {
        sgmntrtgmplsoutlabel.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags" || name == "sgmntRtgMplsOutLabel")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VlinkItems()
    :
    vlink_list(this, {"nbrrtrid"})
{

    yang_name = "vlink-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::~VlinkItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlink_list.len(); index++)
    {
        if(vlink_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::has_operation() const
{
    for (std::size_t index=0; index<vlink_list.len(); index++)
    {
        if(vlink_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlink-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VLink-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList>();
        ent_->parent = this;
        vlink_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlink_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VLink-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::VLinkList()
    :
    nbrrtrid{YType::str, "nbrRtrId"},
    hellointvl{YType::uint16, "helloIntvl"},
    deadintvl{YType::uint32, "deadIntvl"},
    rexmitintvl{YType::uint16, "rexmitIntvl"},
    xmitdelay{YType::uint16, "xmitDelay"}
        ,
    adj_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems>())
    , authnew_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems>())
{
    adj_items->parent = this;
    authnew_items->parent = this;

    yang_name = "VLink-list"; yang_parent_name = "vlink-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::~VLinkList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::has_data() const
{
    if (is_presence_container) return true;
    return nbrrtrid.is_set
	|| hellointvl.is_set
	|| deadintvl.is_set
	|| rexmitintvl.is_set
	|| xmitdelay.is_set
	|| (adj_items !=  nullptr && adj_items->has_data())
	|| (authnew_items !=  nullptr && authnew_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbrrtrid.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(deadintvl.yfilter)
	|| ydk::is_set(rexmitintvl.yfilter)
	|| ydk::is_set(xmitdelay.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation())
	|| (authnew_items !=  nullptr && authnew_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VLink-list";
    ADD_KEY_TOKEN(nbrrtrid, "nbrRtrId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbrrtrid.is_set || is_set(nbrrtrid.yfilter)) leaf_name_data.push_back(nbrrtrid.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (deadintvl.is_set || is_set(deadintvl.yfilter)) leaf_name_data.push_back(deadintvl.get_name_leafdata());
    if (rexmitintvl.is_set || is_set(rexmitintvl.yfilter)) leaf_name_data.push_back(rexmitintvl.get_name_leafdata());
    if (xmitdelay.is_set || is_set(xmitdelay.yfilter)) leaf_name_data.push_back(xmitdelay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems>();
        }
        return adj_items;
    }

    if(child_yang_name == "authnew-items")
    {
        if(authnew_items == nullptr)
        {
            authnew_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems>();
        }
        return authnew_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adj_items != nullptr)
    {
        _children["adj-items"] = adj_items;
    }

    if(authnew_items != nullptr)
    {
        _children["authnew-items"] = authnew_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbrRtrId")
    {
        nbrrtrid = value;
        nbrrtrid.value_namespace = name_space;
        nbrrtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl = value;
        deadintvl.value_namespace = name_space;
        deadintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rexmitIntvl")
    {
        rexmitintvl = value;
        rexmitintvl.value_namespace = name_space;
        rexmitintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay = value;
        xmitdelay.value_namespace = name_space;
        xmitdelay.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbrRtrId")
    {
        nbrrtrid.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl.yfilter = yfilter;
    }
    if(value_path == "rexmitIntvl")
    {
        rexmitintvl.yfilter = yfilter;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "authnew-items" || name == "nbrRtrId" || name == "helloIntvl" || name == "deadIntvl" || name == "rexmitIntvl" || name == "xmitDelay")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjItems()
    :
    adjep_list(this, {"id"})
{

    yang_name = "adj-items"; yang_parent_name = "VLink-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::~AdjItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList>();
        ent_->parent = this;
        adjep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::get_children() const
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjEpList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    ifid{YType::uint32, "ifId"},
    operst{YType::enumeration, "operSt"},
    bfdst{YType::enumeration, "bfdSt"},
    area{YType::str, "area"},
    prio{YType::uint8, "prio"},
    dr{YType::str, "dr"},
    bdr{YType::str, "bdr"},
    peerip{YType::str, "peerIp"},
    hellooptions{YType::uint32, "helloOptions"},
    dbdoptions{YType::uint32, "dbdOptions"},
    flags{YType::str, "flags"},
    peername{YType::str, "peerName"},
    sgmntrtgmplsadjsidlabel{YType::uint32, "sgmntRtgMplsAdjSidLabel"},
    sgmntrtgmplsadjsidflags{YType::str, "sgmntRtgMplsAdjSidFlags"}
        ,
    adjstats_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems>())
    , gr_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems>())
{
    adjstats_items->parent = this;
    gr_items->parent = this;

    yang_name = "AdjEp-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::~AdjEpList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| ifid.is_set
	|| operst.is_set
	|| bfdst.is_set
	|| area.is_set
	|| prio.is_set
	|| dr.is_set
	|| bdr.is_set
	|| peerip.is_set
	|| hellooptions.is_set
	|| dbdoptions.is_set
	|| flags.is_set
	|| peername.is_set
	|| sgmntrtgmplsadjsidlabel.is_set
	|| sgmntrtgmplsadjsidflags.is_set
	|| (adjstats_items !=  nullptr && adjstats_items->has_data())
	|| (gr_items !=  nullptr && gr_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(bfdst.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(bdr.yfilter)
	|| ydk::is_set(peerip.yfilter)
	|| ydk::is_set(hellooptions.yfilter)
	|| ydk::is_set(dbdoptions.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(peername.yfilter)
	|| ydk::is_set(sgmntrtgmplsadjsidlabel.yfilter)
	|| ydk::is_set(sgmntrtgmplsadjsidflags.yfilter)
	|| (adjstats_items !=  nullptr && adjstats_items->has_operation())
	|| (gr_items !=  nullptr && gr_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (bfdst.is_set || is_set(bfdst.yfilter)) leaf_name_data.push_back(bfdst.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (bdr.is_set || is_set(bdr.yfilter)) leaf_name_data.push_back(bdr.get_name_leafdata());
    if (peerip.is_set || is_set(peerip.yfilter)) leaf_name_data.push_back(peerip.get_name_leafdata());
    if (hellooptions.is_set || is_set(hellooptions.yfilter)) leaf_name_data.push_back(hellooptions.get_name_leafdata());
    if (dbdoptions.is_set || is_set(dbdoptions.yfilter)) leaf_name_data.push_back(dbdoptions.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (peername.is_set || is_set(peername.yfilter)) leaf_name_data.push_back(peername.get_name_leafdata());
    if (sgmntrtgmplsadjsidlabel.is_set || is_set(sgmntrtgmplsadjsidlabel.yfilter)) leaf_name_data.push_back(sgmntrtgmplsadjsidlabel.get_name_leafdata());
    if (sgmntrtgmplsadjsidflags.is_set || is_set(sgmntrtgmplsadjsidflags.yfilter)) leaf_name_data.push_back(sgmntrtgmplsadjsidflags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjstats-items")
    {
        if(adjstats_items == nullptr)
        {
            adjstats_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems>();
        }
        return adjstats_items;
    }

    if(child_yang_name == "gr-items")
    {
        if(gr_items == nullptr)
        {
            gr_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems>();
        }
        return gr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjstats_items != nullptr)
    {
        _children["adjstats-items"] = adjstats_items;
    }

    if(gr_items != nullptr)
    {
        _children["gr-items"] = gr_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdSt")
    {
        bfdst = value;
        bfdst.value_namespace = name_space;
        bfdst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdr")
    {
        bdr = value;
        bdr.value_namespace = name_space;
        bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerIp")
    {
        peerip = value;
        peerip.value_namespace = name_space;
        peerip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloOptions")
    {
        hellooptions = value;
        hellooptions.value_namespace = name_space;
        hellooptions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdOptions")
    {
        dbdoptions = value;
        dbdoptions.value_namespace = name_space;
        dbdoptions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerName")
    {
        peername = value;
        peername.value_namespace = name_space;
        peername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMplsAdjSidLabel")
    {
        sgmntrtgmplsadjsidlabel = value;
        sgmntrtgmplsadjsidlabel.value_namespace = name_space;
        sgmntrtgmplsadjsidlabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMplsAdjSidFlags")
    {
        sgmntrtgmplsadjsidflags = value;
        sgmntrtgmplsadjsidflags.value_namespace = name_space;
        sgmntrtgmplsadjsidflags.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "bfdSt")
    {
        bfdst.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "bdr")
    {
        bdr.yfilter = yfilter;
    }
    if(value_path == "peerIp")
    {
        peerip.yfilter = yfilter;
    }
    if(value_path == "helloOptions")
    {
        hellooptions.yfilter = yfilter;
    }
    if(value_path == "dbdOptions")
    {
        dbdoptions.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "peerName")
    {
        peername.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMplsAdjSidLabel")
    {
        sgmntrtgmplsadjsidlabel.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMplsAdjSidFlags")
    {
        sgmntrtgmplsadjsidflags.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjstats-items" || name == "gr-items" || name == "id" || name == "name" || name == "ifId" || name == "operSt" || name == "bfdSt" || name == "area" || name == "prio" || name == "dr" || name == "bdr" || name == "peerIp" || name == "helloOptions" || name == "dbdOptions" || name == "flags" || name == "peerName" || name == "sgmntRtgMplsAdjSidLabel" || name == "sgmntRtgMplsAdjSidFlags")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::AdjstatsItems()
    :
    stchgcnt{YType::uint32, "stChgCnt"},
    laststchgts{YType::str, "lastStChgTs"},
    lastnonhellopktts{YType::str, "lastNonHelloPktTs"},
    dbdseqnum{YType::uint32, "dbdSeqNum"},
    reqlsacnt{YType::uint32, "reqLsaCnt"},
    outstandinglsacnt{YType::uint32, "outstandingLsaCnt"},
    lsareqrexmitcnt{YType::uint32, "lsaReqRexmitCnt"},
    deadtimerexpts{YType::str, "deadTimerExpTs"}
{

    yang_name = "adjstats-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::~AdjstatsItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return stchgcnt.is_set
	|| laststchgts.is_set
	|| lastnonhellopktts.is_set
	|| dbdseqnum.is_set
	|| reqlsacnt.is_set
	|| outstandinglsacnt.is_set
	|| lsareqrexmitcnt.is_set
	|| deadtimerexpts.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stchgcnt.yfilter)
	|| ydk::is_set(laststchgts.yfilter)
	|| ydk::is_set(lastnonhellopktts.yfilter)
	|| ydk::is_set(dbdseqnum.yfilter)
	|| ydk::is_set(reqlsacnt.yfilter)
	|| ydk::is_set(outstandinglsacnt.yfilter)
	|| ydk::is_set(lsareqrexmitcnt.yfilter)
	|| ydk::is_set(deadtimerexpts.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stchgcnt.is_set || is_set(stchgcnt.yfilter)) leaf_name_data.push_back(stchgcnt.get_name_leafdata());
    if (laststchgts.is_set || is_set(laststchgts.yfilter)) leaf_name_data.push_back(laststchgts.get_name_leafdata());
    if (lastnonhellopktts.is_set || is_set(lastnonhellopktts.yfilter)) leaf_name_data.push_back(lastnonhellopktts.get_name_leafdata());
    if (dbdseqnum.is_set || is_set(dbdseqnum.yfilter)) leaf_name_data.push_back(dbdseqnum.get_name_leafdata());
    if (reqlsacnt.is_set || is_set(reqlsacnt.yfilter)) leaf_name_data.push_back(reqlsacnt.get_name_leafdata());
    if (outstandinglsacnt.is_set || is_set(outstandinglsacnt.yfilter)) leaf_name_data.push_back(outstandinglsacnt.get_name_leafdata());
    if (lsareqrexmitcnt.is_set || is_set(lsareqrexmitcnt.yfilter)) leaf_name_data.push_back(lsareqrexmitcnt.get_name_leafdata());
    if (deadtimerexpts.is_set || is_set(deadtimerexpts.yfilter)) leaf_name_data.push_back(deadtimerexpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stChgCnt")
    {
        stchgcnt = value;
        stchgcnt.value_namespace = name_space;
        stchgcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStChgTs")
    {
        laststchgts = value;
        laststchgts.value_namespace = name_space;
        laststchgts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastNonHelloPktTs")
    {
        lastnonhellopktts = value;
        lastnonhellopktts.value_namespace = name_space;
        lastnonhellopktts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdSeqNum")
    {
        dbdseqnum = value;
        dbdseqnum.value_namespace = name_space;
        dbdseqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reqLsaCnt")
    {
        reqlsacnt = value;
        reqlsacnt.value_namespace = name_space;
        reqlsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outstandingLsaCnt")
    {
        outstandinglsacnt = value;
        outstandinglsacnt.value_namespace = name_space;
        outstandinglsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaReqRexmitCnt")
    {
        lsareqrexmitcnt = value;
        lsareqrexmitcnt.value_namespace = name_space;
        lsareqrexmitcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadTimerExpTs")
    {
        deadtimerexpts = value;
        deadtimerexpts.value_namespace = name_space;
        deadtimerexpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stChgCnt")
    {
        stchgcnt.yfilter = yfilter;
    }
    if(value_path == "lastStChgTs")
    {
        laststchgts.yfilter = yfilter;
    }
    if(value_path == "lastNonHelloPktTs")
    {
        lastnonhellopktts.yfilter = yfilter;
    }
    if(value_path == "dbdSeqNum")
    {
        dbdseqnum.yfilter = yfilter;
    }
    if(value_path == "reqLsaCnt")
    {
        reqlsacnt.yfilter = yfilter;
    }
    if(value_path == "outstandingLsaCnt")
    {
        outstandinglsacnt.yfilter = yfilter;
    }
    if(value_path == "lsaReqRexmitCnt")
    {
        lsareqrexmitcnt.yfilter = yfilter;
    }
    if(value_path == "deadTimerExpTs")
    {
        deadtimerexpts.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stChgCnt" || name == "lastStChgTs" || name == "lastNonHelloPktTs" || name == "dbdSeqNum" || name == "reqLsaCnt" || name == "outstandingLsaCnt" || name == "lsaReqRexmitCnt" || name == "deadTimerExpTs")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::GrItems()
    :
    helperst{YType::enumeration, "helperSt"},
    helperage{YType::uint32, "helperAge"},
    helperexitqual{YType::enumeration, "helperExitQual"}
{

    yang_name = "gr-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::~GrItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::has_data() const
{
    if (is_presence_container) return true;
    return helperst.is_set
	|| helperage.is_set
	|| helperexitqual.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(helperst.yfilter)
	|| ydk::is_set(helperage.yfilter)
	|| ydk::is_set(helperexitqual.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (helperst.is_set || is_set(helperst.yfilter)) leaf_name_data.push_back(helperst.get_name_leafdata());
    if (helperage.is_set || is_set(helperage.yfilter)) leaf_name_data.push_back(helperage.get_name_leafdata());
    if (helperexitqual.is_set || is_set(helperexitqual.yfilter)) leaf_name_data.push_back(helperexitqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "helperSt")
    {
        helperst = value;
        helperst.value_namespace = name_space;
        helperst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helperAge")
    {
        helperage = value;
        helperage.value_namespace = name_space;
        helperage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helperExitQual")
    {
        helperexitqual = value;
        helperexitqual.value_namespace = name_space;
        helperexitqual.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "helperSt")
    {
        helperst.yfilter = yfilter;
    }
    if(value_path == "helperAge")
    {
        helperage.yfilter = yfilter;
    }
    if(value_path == "helperExitQual")
    {
        helperexitqual.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helperSt" || name == "helperAge" || name == "helperExitQual")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::AuthnewItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    keyid{YType::uint8, "keyId"},
    key{YType::str, "key"},
    keysecuremode{YType::boolean, "keySecureMode"},
    md5key{YType::str, "md5key"},
    md5keysecuremode{YType::boolean, "md5keySecureMode"},
    keychain{YType::str, "keychain"}
{

    yang_name = "authnew-items"; yang_parent_name = "VLink-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::~AuthnewItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| keyid.is_set
	|| key.is_set
	|| keysecuremode.is_set
	|| md5key.is_set
	|| md5keysecuremode.is_set
	|| keychain.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(keyid.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(keysecuremode.yfilter)
	|| ydk::is_set(md5key.yfilter)
	|| ydk::is_set(md5keysecuremode.yfilter)
	|| ydk::is_set(keychain.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authnew-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (keyid.is_set || is_set(keyid.yfilter)) leaf_name_data.push_back(keyid.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (keysecuremode.is_set || is_set(keysecuremode.yfilter)) leaf_name_data.push_back(keysecuremode.get_name_leafdata());
    if (md5key.is_set || is_set(md5key.yfilter)) leaf_name_data.push_back(md5key.get_name_leafdata());
    if (md5keysecuremode.is_set || is_set(md5keysecuremode.yfilter)) leaf_name_data.push_back(md5keysecuremode.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyId")
    {
        keyid = value;
        keyid.value_namespace = name_space;
        keyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keySecureMode")
    {
        keysecuremode = value;
        keysecuremode.value_namespace = name_space;
        keysecuremode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5key")
    {
        md5key = value;
        md5key.value_namespace = name_space;
        md5key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5keySecureMode")
    {
        md5keysecuremode = value;
        md5keysecuremode.value_namespace = name_space;
        md5keysecuremode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "keyId")
    {
        keyid.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "keySecureMode")
    {
        keysecuremode.yfilter = yfilter;
    }
    if(value_path == "md5key")
    {
        md5key.yfilter = yfilter;
    }
    if(value_path == "md5keySecureMode")
    {
        md5keysecuremode.yfilter = yfilter;
    }
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "type" || name == "keyId" || name == "key" || name == "keySecureMode" || name == "md5key" || name == "md5keySecureMode" || name == "keychain")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SlinkItems()
    :
    slink_list(this, {"srcaddr", "dstaddr"})
{

    yang_name = "slink-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::~SlinkItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slink_list.len(); index++)
    {
        if(slink_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::has_operation() const
{
    for (std::size_t index=0; index<slink_list.len(); index++)
    {
        if(slink_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slink-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SLink-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList>();
        ent_->parent = this;
        slink_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : slink_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SLink-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::SLinkList()
    :
    srcaddr{YType::str, "srcAddr"},
    dstaddr{YType::str, "dstAddr"},
    demandckt{YType::boolean, "demandCkt"},
    hellointvl{YType::uint16, "helloIntvl"},
    deadintvl{YType::uint32, "deadIntvl"},
    rexmitintvl{YType::uint16, "rexmitIntvl"},
    xmitdelay{YType::uint16, "xmitDelay"},
    cost{YType::uint16, "cost"}
        ,
    authnew_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems>())
{
    authnew_items->parent = this;

    yang_name = "SLink-list"; yang_parent_name = "slink-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::~SLinkList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::has_data() const
{
    if (is_presence_container) return true;
    return srcaddr.is_set
	|| dstaddr.is_set
	|| demandckt.is_set
	|| hellointvl.is_set
	|| deadintvl.is_set
	|| rexmitintvl.is_set
	|| xmitdelay.is_set
	|| cost.is_set
	|| (authnew_items !=  nullptr && authnew_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(dstaddr.yfilter)
	|| ydk::is_set(demandckt.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(deadintvl.yfilter)
	|| ydk::is_set(rexmitintvl.yfilter)
	|| ydk::is_set(xmitdelay.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| (authnew_items !=  nullptr && authnew_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SLink-list";
    ADD_KEY_TOKEN(srcaddr, "srcAddr");
    ADD_KEY_TOKEN(dstaddr, "dstAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (dstaddr.is_set || is_set(dstaddr.yfilter)) leaf_name_data.push_back(dstaddr.get_name_leafdata());
    if (demandckt.is_set || is_set(demandckt.yfilter)) leaf_name_data.push_back(demandckt.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (deadintvl.is_set || is_set(deadintvl.yfilter)) leaf_name_data.push_back(deadintvl.get_name_leafdata());
    if (rexmitintvl.is_set || is_set(rexmitintvl.yfilter)) leaf_name_data.push_back(rexmitintvl.get_name_leafdata());
    if (xmitdelay.is_set || is_set(xmitdelay.yfilter)) leaf_name_data.push_back(xmitdelay.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authnew-items")
    {
        if(authnew_items == nullptr)
        {
            authnew_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems>();
        }
        return authnew_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authnew_items != nullptr)
    {
        _children["authnew-items"] = authnew_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstAddr")
    {
        dstaddr = value;
        dstaddr.value_namespace = name_space;
        dstaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demandCkt")
    {
        demandckt = value;
        demandckt.value_namespace = name_space;
        demandckt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl = value;
        deadintvl.value_namespace = name_space;
        deadintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rexmitIntvl")
    {
        rexmitintvl = value;
        rexmitintvl.value_namespace = name_space;
        rexmitintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay = value;
        xmitdelay.value_namespace = name_space;
        xmitdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "dstAddr")
    {
        dstaddr.yfilter = yfilter;
    }
    if(value_path == "demandCkt")
    {
        demandckt.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl.yfilter = yfilter;
    }
    if(value_path == "rexmitIntvl")
    {
        rexmitintvl.yfilter = yfilter;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authnew-items" || name == "srcAddr" || name == "dstAddr" || name == "demandCkt" || name == "helloIntvl" || name == "deadIntvl" || name == "rexmitIntvl" || name == "xmitDelay" || name == "cost")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::AuthnewItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    keyid{YType::uint8, "keyId"},
    key{YType::str, "key"},
    keysecuremode{YType::boolean, "keySecureMode"},
    md5key{YType::str, "md5key"},
    md5keysecuremode{YType::boolean, "md5keySecureMode"},
    keychain{YType::str, "keychain"}
{

    yang_name = "authnew-items"; yang_parent_name = "SLink-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::~AuthnewItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| keyid.is_set
	|| key.is_set
	|| keysecuremode.is_set
	|| md5key.is_set
	|| md5keysecuremode.is_set
	|| keychain.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(keyid.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(keysecuremode.yfilter)
	|| ydk::is_set(md5key.yfilter)
	|| ydk::is_set(md5keysecuremode.yfilter)
	|| ydk::is_set(keychain.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authnew-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (keyid.is_set || is_set(keyid.yfilter)) leaf_name_data.push_back(keyid.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (keysecuremode.is_set || is_set(keysecuremode.yfilter)) leaf_name_data.push_back(keysecuremode.get_name_leafdata());
    if (md5key.is_set || is_set(md5key.yfilter)) leaf_name_data.push_back(md5key.get_name_leafdata());
    if (md5keysecuremode.is_set || is_set(md5keysecuremode.yfilter)) leaf_name_data.push_back(md5keysecuremode.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyId")
    {
        keyid = value;
        keyid.value_namespace = name_space;
        keyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keySecureMode")
    {
        keysecuremode = value;
        keysecuremode.value_namespace = name_space;
        keysecuremode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5key")
    {
        md5key = value;
        md5key.value_namespace = name_space;
        md5key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5keySecureMode")
    {
        md5keysecuremode = value;
        md5keysecuremode.value_namespace = name_space;
        md5keysecuremode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "keyId")
    {
        keyid.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "keySecureMode")
    {
        keysecuremode.yfilter = yfilter;
    }
    if(value_path == "md5key")
    {
        md5key.yfilter = yfilter;
    }
    if(value_path == "md5keySecureMode")
    {
        md5keysecuremode.yfilter = yfilter;
    }
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "type" || name == "keyId" || name == "key" || name == "keySecureMode" || name == "md5key" || name == "md5keySecureMode" || name == "keychain")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::LsaleakpItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "lsaleakp-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::~LsaleakpItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set
	|| operst.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsaleakp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "scope" || name == "rtMap" || name == "operSt")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaleakctrlpItems()
    :
    lsaleakctrlp_list(this, {"dir"})
{

    yang_name = "lsaleakctrlp-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::~LsaleakctrlpItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsaleakctrlp_list.len(); index++)
    {
        if(lsaleakctrlp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::has_operation() const
{
    for (std::size_t index=0; index<lsaleakctrlp_list.len(); index++)
    {
        if(lsaleakctrlp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsaleakctrlp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LsaLeakCtrlP-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList>();
        ent_->parent = this;
        lsaleakctrlp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsaleakctrlp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LsaLeakCtrlP-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::LsaLeakCtrlPList()
    :
    dir{YType::enumeration, "dir"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "LsaLeakCtrlP-list"; yang_parent_name = "lsaleakctrlp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::~LsaLeakCtrlPList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::has_data() const
{
    if (is_presence_container) return true;
    return dir.is_set
	|| name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set
	|| operst.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dir.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LsaLeakCtrlP-list";
    ADD_KEY_TOKEN(dir, "dir");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dir.is_set || is_set(dir.yfilter)) leaf_name_data.push_back(dir.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dir")
    {
        dir = value;
        dir.value_namespace = name_space;
        dir.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dir")
    {
        dir.yfilter = yfilter;
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
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dir" || name == "name" || name == "descr" || name == "scope" || name == "rtMap" || name == "operSt")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::DefrtleakItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"},
    always{YType::enumeration, "always"}
{

    yang_name = "defrtleak-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::~DefrtleakItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set
	|| always.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defrtleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "scope" || name == "rtMap" || name == "always")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::IartsumItems()
    :
    interareartsum_list(this, {"addr"})
{

    yang_name = "iartsum-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::~IartsumItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interareartsum_list.len(); index++)
    {
        if(interareartsum_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::has_operation() const
{
    for (std::size_t index=0; index<interareartsum_list.len(); index++)
    {
        if(interareartsum_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iartsum-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InterAreaRtSum-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList>();
        ent_->parent = this;
        interareartsum_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interareartsum_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InterAreaRtSum-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::InterAreaRtSumList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::str, "ctrl"},
    comprtcnt{YType::uint32, "compRtCnt"},
    opercost{YType::uint32, "operCost"},
    cost{YType::uint32, "cost"}
{

    yang_name = "InterAreaRtSum-list"; yang_parent_name = "iartsum-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::~InterAreaRtSumList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| comprtcnt.is_set
	|| opercost.is_set
	|| cost.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(comprtcnt.yfilter)
	|| ydk::is_set(opercost.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InterAreaRtSum-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (comprtcnt.is_set || is_set(comprtcnt.yfilter)) leaf_name_data.push_back(comprtcnt.get_name_leafdata());
    if (opercost.is_set || is_set(opercost.yfilter)) leaf_name_data.push_back(opercost.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "compRtCnt")
    {
        comprtcnt = value;
        comprtcnt.value_namespace = name_space;
        comprtcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operCost")
    {
        opercost = value;
        opercost.value_namespace = name_space;
        opercost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
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
    if(value_path == "compRtCnt")
    {
        comprtcnt.yfilter = yfilter;
    }
    if(value_path == "operCost")
    {
        opercost.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "descr" || name == "ctrl" || name == "compRtCnt" || name == "operCost" || name == "cost")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::get_children() const
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    lsa_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems>())
    , rt_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems>())
{
    lsa_items->parent = this;
    rt_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (lsa_items !=  nullptr && lsa_items->has_data())
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (lsa_items !=  nullptr && lsa_items->has_operation())
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-items")
    {
        if(lsa_items == nullptr)
        {
            lsa_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems>();
        }
        return lsa_items;
    }

    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsa_items != nullptr)
    {
        _children["lsa-items"] = lsa_items;
    }

    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-items" || name == "rt-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaItems()
    :
    lsarec_list(this, {"type", "id", "advrtr"})
{

    yang_name = "lsa-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::~LsaItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsarec_list.len(); index++)
    {
        if(lsarec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::has_operation() const
{
    for (std::size_t index=0; index<lsarec_list.len(); index++)
    {
        if(lsarec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LsaRec-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList>();
        ent_->parent = this;
        lsarec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsarec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LsaRec-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::LsaRecList()
    :
    type{YType::enumeration, "type"},
    id{YType::str, "id"},
    advrtr{YType::str, "advRtr"},
    seq{YType::uint32, "seq"},
    age{YType::uint32, "age"},
    arrivalts{YType::str, "arrivalTs"},
    cksum{YType::uint32, "cksum"},
    advert{YType::str, "advert"}
        ,
    ri_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::RiItems>())
    , epl_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems>())
    , ell_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems>())
{
    ri_items->parent = this;
    epl_items->parent = this;
    ell_items->parent = this;

    yang_name = "LsaRec-list"; yang_parent_name = "lsa-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::~LsaRecList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| id.is_set
	|| advrtr.is_set
	|| seq.is_set
	|| age.is_set
	|| arrivalts.is_set
	|| cksum.is_set
	|| advert.is_set
	|| (ri_items !=  nullptr && ri_items->has_data())
	|| (epl_items !=  nullptr && epl_items->has_data())
	|| (ell_items !=  nullptr && ell_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(advrtr.yfilter)
	|| ydk::is_set(seq.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(arrivalts.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| ydk::is_set(advert.yfilter)
	|| (ri_items !=  nullptr && ri_items->has_operation())
	|| (epl_items !=  nullptr && epl_items->has_operation())
	|| (ell_items !=  nullptr && ell_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LsaRec-list";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(advrtr, "advRtr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (advrtr.is_set || is_set(advrtr.yfilter)) leaf_name_data.push_back(advrtr.get_name_leafdata());
    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (arrivalts.is_set || is_set(arrivalts.yfilter)) leaf_name_data.push_back(arrivalts.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());
    if (advert.is_set || is_set(advert.yfilter)) leaf_name_data.push_back(advert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ri-items")
    {
        if(ri_items == nullptr)
        {
            ri_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::RiItems>();
        }
        return ri_items;
    }

    if(child_yang_name == "epl-items")
    {
        if(epl_items == nullptr)
        {
            epl_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems>();
        }
        return epl_items;
    }

    if(child_yang_name == "ell-items")
    {
        if(ell_items == nullptr)
        {
            ell_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems>();
        }
        return ell_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ri_items != nullptr)
    {
        _children["ri-items"] = ri_items;
    }

    if(epl_items != nullptr)
    {
        _children["epl-items"] = epl_items;
    }

    if(ell_items != nullptr)
    {
        _children["ell-items"] = ell_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advRtr")
    {
        advrtr = value;
        advrtr.value_namespace = name_space;
        advrtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arrivalTs")
    {
        arrivalts = value;
        arrivalts.value_namespace = name_space;
        arrivalts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advert")
    {
        advert = value;
        advert.value_namespace = name_space;
        advert.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "advRtr")
    {
        advrtr.yfilter = yfilter;
    }
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "arrivalTs")
    {
        arrivalts.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
    if(value_path == "advert")
    {
        advert.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-items" || name == "epl-items" || name == "ell-items" || name == "type" || name == "id" || name == "advRtr" || name == "seq" || name == "age" || name == "arrivalTs" || name == "cksum" || name == "advert")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::RiItems::RiItems()
    :
    grrestartcap{YType::enumeration, "grRestartCap"},
    grrestarthelpercap{YType::enumeration, "grRestartHelperCap"},
    stubroutercap{YType::enumeration, "stubRouterCap"},
    tecap{YType::enumeration, "teCap"},
    p2poverlancap{YType::enumeration, "p2pOverLanCap"},
    exptecap{YType::enumeration, "expTeCap"},
    sgmntrtgglobalrange{YType::uint32, "sgmntRtgGlobalRange"},
    sgmntrtgglobalrangestart{YType::uint32, "sgmntRtgGlobalRangeStart"},
    sgmntrtglocalrange{YType::uint32, "sgmntRtgLocalRange"},
    sgmntrtglocalrangestart{YType::uint32, "sgmntRtgLocalRangeStart"}
{

    yang_name = "ri-items"; yang_parent_name = "LsaRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::RiItems::~RiItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::RiItems::has_data() const
{
    if (is_presence_container) return true;
    return grrestartcap.is_set
	|| grrestarthelpercap.is_set
	|| stubroutercap.is_set
	|| tecap.is_set
	|| p2poverlancap.is_set
	|| exptecap.is_set
	|| sgmntrtgglobalrange.is_set
	|| sgmntrtgglobalrangestart.is_set
	|| sgmntrtglocalrange.is_set
	|| sgmntrtglocalrangestart.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::RiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grrestartcap.yfilter)
	|| ydk::is_set(grrestarthelpercap.yfilter)
	|| ydk::is_set(stubroutercap.yfilter)
	|| ydk::is_set(tecap.yfilter)
	|| ydk::is_set(p2poverlancap.yfilter)
	|| ydk::is_set(exptecap.yfilter)
	|| ydk::is_set(sgmntrtgglobalrange.yfilter)
	|| ydk::is_set(sgmntrtgglobalrangestart.yfilter)
	|| ydk::is_set(sgmntrtglocalrange.yfilter)
	|| ydk::is_set(sgmntrtglocalrangestart.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::RiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::RiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grrestartcap.is_set || is_set(grrestartcap.yfilter)) leaf_name_data.push_back(grrestartcap.get_name_leafdata());
    if (grrestarthelpercap.is_set || is_set(grrestarthelpercap.yfilter)) leaf_name_data.push_back(grrestarthelpercap.get_name_leafdata());
    if (stubroutercap.is_set || is_set(stubroutercap.yfilter)) leaf_name_data.push_back(stubroutercap.get_name_leafdata());
    if (tecap.is_set || is_set(tecap.yfilter)) leaf_name_data.push_back(tecap.get_name_leafdata());
    if (p2poverlancap.is_set || is_set(p2poverlancap.yfilter)) leaf_name_data.push_back(p2poverlancap.get_name_leafdata());
    if (exptecap.is_set || is_set(exptecap.yfilter)) leaf_name_data.push_back(exptecap.get_name_leafdata());
    if (sgmntrtgglobalrange.is_set || is_set(sgmntrtgglobalrange.yfilter)) leaf_name_data.push_back(sgmntrtgglobalrange.get_name_leafdata());
    if (sgmntrtgglobalrangestart.is_set || is_set(sgmntrtgglobalrangestart.yfilter)) leaf_name_data.push_back(sgmntrtgglobalrangestart.get_name_leafdata());
    if (sgmntrtglocalrange.is_set || is_set(sgmntrtglocalrange.yfilter)) leaf_name_data.push_back(sgmntrtglocalrange.get_name_leafdata());
    if (sgmntrtglocalrangestart.is_set || is_set(sgmntrtglocalrangestart.yfilter)) leaf_name_data.push_back(sgmntrtglocalrangestart.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::RiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::RiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::RiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grRestartCap")
    {
        grrestartcap = value;
        grrestartcap.value_namespace = name_space;
        grrestartcap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grRestartHelperCap")
    {
        grrestarthelpercap = value;
        grrestarthelpercap.value_namespace = name_space;
        grrestarthelpercap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stubRouterCap")
    {
        stubroutercap = value;
        stubroutercap.value_namespace = name_space;
        stubroutercap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "teCap")
    {
        tecap = value;
        tecap.value_namespace = name_space;
        tecap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2pOverLanCap")
    {
        p2poverlancap = value;
        p2poverlancap.value_namespace = name_space;
        p2poverlancap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expTeCap")
    {
        exptecap = value;
        exptecap.value_namespace = name_space;
        exptecap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgGlobalRange")
    {
        sgmntrtgglobalrange = value;
        sgmntrtgglobalrange.value_namespace = name_space;
        sgmntrtgglobalrange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgGlobalRangeStart")
    {
        sgmntrtgglobalrangestart = value;
        sgmntrtgglobalrangestart.value_namespace = name_space;
        sgmntrtgglobalrangestart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgLocalRange")
    {
        sgmntrtglocalrange = value;
        sgmntrtglocalrange.value_namespace = name_space;
        sgmntrtglocalrange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgLocalRangeStart")
    {
        sgmntrtglocalrangestart = value;
        sgmntrtglocalrangestart.value_namespace = name_space;
        sgmntrtglocalrangestart.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::RiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grRestartCap")
    {
        grrestartcap.yfilter = yfilter;
    }
    if(value_path == "grRestartHelperCap")
    {
        grrestarthelpercap.yfilter = yfilter;
    }
    if(value_path == "stubRouterCap")
    {
        stubroutercap.yfilter = yfilter;
    }
    if(value_path == "teCap")
    {
        tecap.yfilter = yfilter;
    }
    if(value_path == "p2pOverLanCap")
    {
        p2poverlancap.yfilter = yfilter;
    }
    if(value_path == "expTeCap")
    {
        exptecap.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgGlobalRange")
    {
        sgmntrtgglobalrange.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgGlobalRangeStart")
    {
        sgmntrtgglobalrangestart.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgLocalRange")
    {
        sgmntrtglocalrange.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgLocalRangeStart")
    {
        sgmntrtglocalrangestart.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::RiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grRestartCap" || name == "grRestartHelperCap" || name == "stubRouterCap" || name == "teCap" || name == "p2pOverLanCap" || name == "expTeCap" || name == "sgmntRtgGlobalRange" || name == "sgmntRtgGlobalRangeStart" || name == "sgmntRtgLocalRange" || name == "sgmntRtgLocalRangeStart")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::EplItems()
    :
    extpfxrec_list(this, {"ippfx"})
{

    yang_name = "epl-items"; yang_parent_name = "LsaRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::~EplItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extpfxrec_list.len(); index++)
    {
        if(extpfxrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::has_operation() const
{
    for (std::size_t index=0; index<extpfxrec_list.len(); index++)
    {
        if(extpfxrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtPfxRec-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList>();
        ent_->parent = this;
        extpfxrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extpfxrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtPfxRec-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::ExtPfxRecList()
    :
    ippfx{YType::str, "ipPfx"},
    addressfamily{YType::uint16, "addressFamily"},
    routetype{YType::enumeration, "routeType"},
    pfxflags{YType::str, "pfxFlags"}
        ,
    sid_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems>())
{
    sid_items->parent = this;

    yang_name = "ExtPfxRec-list"; yang_parent_name = "epl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::~ExtPfxRecList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::has_data() const
{
    if (is_presence_container) return true;
    return ippfx.is_set
	|| addressfamily.is_set
	|| routetype.is_set
	|| pfxflags.is_set
	|| (sid_items !=  nullptr && sid_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ippfx.yfilter)
	|| ydk::is_set(addressfamily.yfilter)
	|| ydk::is_set(routetype.yfilter)
	|| ydk::is_set(pfxflags.yfilter)
	|| (sid_items !=  nullptr && sid_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtPfxRec-list";
    ADD_KEY_TOKEN(ippfx, "ipPfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ippfx.is_set || is_set(ippfx.yfilter)) leaf_name_data.push_back(ippfx.get_name_leafdata());
    if (addressfamily.is_set || is_set(addressfamily.yfilter)) leaf_name_data.push_back(addressfamily.get_name_leafdata());
    if (routetype.is_set || is_set(routetype.yfilter)) leaf_name_data.push_back(routetype.get_name_leafdata());
    if (pfxflags.is_set || is_set(pfxflags.yfilter)) leaf_name_data.push_back(pfxflags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-items")
    {
        if(sid_items == nullptr)
        {
            sid_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems>();
        }
        return sid_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_items != nullptr)
    {
        _children["sid-items"] = sid_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipPfx")
    {
        ippfx = value;
        ippfx.value_namespace = name_space;
        ippfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addressFamily")
    {
        addressfamily = value;
        addressfamily.value_namespace = name_space;
        addressfamily.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeType")
    {
        routetype = value;
        routetype.value_namespace = name_space;
        routetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxFlags")
    {
        pfxflags = value;
        pfxflags.value_namespace = name_space;
        pfxflags.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipPfx")
    {
        ippfx.yfilter = yfilter;
    }
    if(value_path == "addressFamily")
    {
        addressfamily.yfilter = yfilter;
    }
    if(value_path == "routeType")
    {
        routetype.yfilter = yfilter;
    }
    if(value_path == "pfxFlags")
    {
        pfxflags.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-items" || name == "ipPfx" || name == "addressFamily" || name == "routeType" || name == "pfxFlags")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SidItems()
    :
    sgmntrtgpfxsidrec_list(this, {"sgmntrtgalgo"})
{

    yang_name = "sid-items"; yang_parent_name = "ExtPfxRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::~SidItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sgmntrtgpfxsidrec_list.len(); index++)
    {
        if(sgmntrtgpfxsidrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::has_operation() const
{
    for (std::size_t index=0; index<sgmntrtgpfxsidrec_list.len(); index++)
    {
        if(sgmntrtgpfxsidrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SgmntRtgPfxSidRec-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList>();
        ent_->parent = this;
        sgmntrtgpfxsidrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sgmntrtgpfxsidrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SgmntRtgPfxSidRec-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::SgmntRtgPfxSidRecList()
    :
    sgmntrtgalgo{YType::uint16, "sgmntRtgAlgo"},
    sgmntrtgpfxsidflags{YType::str, "sgmntRtgPfxSidFlags"},
    sgmntrtgmtid{YType::uint16, "sgmntRtgMtid"},
    sgmntrtgalgoname{YType::str, "sgmntRtgAlgoName"},
    sgmntrtgpfxsid{YType::int32, "sgmntRtgPfxSid"}
{

    yang_name = "SgmntRtgPfxSidRec-list"; yang_parent_name = "sid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::~SgmntRtgPfxSidRecList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::has_data() const
{
    if (is_presence_container) return true;
    return sgmntrtgalgo.is_set
	|| sgmntrtgpfxsidflags.is_set
	|| sgmntrtgmtid.is_set
	|| sgmntrtgalgoname.is_set
	|| sgmntrtgpfxsid.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgmntrtgalgo.yfilter)
	|| ydk::is_set(sgmntrtgpfxsidflags.yfilter)
	|| ydk::is_set(sgmntrtgmtid.yfilter)
	|| ydk::is_set(sgmntrtgalgoname.yfilter)
	|| ydk::is_set(sgmntrtgpfxsid.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SgmntRtgPfxSidRec-list";
    ADD_KEY_TOKEN(sgmntrtgalgo, "sgmntRtgAlgo");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgmntrtgalgo.is_set || is_set(sgmntrtgalgo.yfilter)) leaf_name_data.push_back(sgmntrtgalgo.get_name_leafdata());
    if (sgmntrtgpfxsidflags.is_set || is_set(sgmntrtgpfxsidflags.yfilter)) leaf_name_data.push_back(sgmntrtgpfxsidflags.get_name_leafdata());
    if (sgmntrtgmtid.is_set || is_set(sgmntrtgmtid.yfilter)) leaf_name_data.push_back(sgmntrtgmtid.get_name_leafdata());
    if (sgmntrtgalgoname.is_set || is_set(sgmntrtgalgoname.yfilter)) leaf_name_data.push_back(sgmntrtgalgoname.get_name_leafdata());
    if (sgmntrtgpfxsid.is_set || is_set(sgmntrtgpfxsid.yfilter)) leaf_name_data.push_back(sgmntrtgpfxsid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgmntRtgAlgo")
    {
        sgmntrtgalgo = value;
        sgmntrtgalgo.value_namespace = name_space;
        sgmntrtgalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgPfxSidFlags")
    {
        sgmntrtgpfxsidflags = value;
        sgmntrtgpfxsidflags.value_namespace = name_space;
        sgmntrtgpfxsidflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMtid")
    {
        sgmntrtgmtid = value;
        sgmntrtgmtid.value_namespace = name_space;
        sgmntrtgmtid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgAlgoName")
    {
        sgmntrtgalgoname = value;
        sgmntrtgalgoname.value_namespace = name_space;
        sgmntrtgalgoname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgPfxSid")
    {
        sgmntrtgpfxsid = value;
        sgmntrtgpfxsid.value_namespace = name_space;
        sgmntrtgpfxsid.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgmntRtgAlgo")
    {
        sgmntrtgalgo.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgPfxSidFlags")
    {
        sgmntrtgpfxsidflags.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMtid")
    {
        sgmntrtgmtid.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgAlgoName")
    {
        sgmntrtgalgoname.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgPfxSid")
    {
        sgmntrtgpfxsid.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgmntRtgAlgo" || name == "sgmntRtgPfxSidFlags" || name == "sgmntRtgMtid" || name == "sgmntRtgAlgoName" || name == "sgmntRtgPfxSid")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::EllItems()
    :
    linktype{YType::enumeration, "linkType"},
    linkid{YType::str, "linkId"},
    linkdata{YType::str, "linkData"}
        ,
    sid_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems>())
{
    sid_items->parent = this;

    yang_name = "ell-items"; yang_parent_name = "LsaRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::~EllItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::has_data() const
{
    if (is_presence_container) return true;
    return linktype.is_set
	|| linkid.is_set
	|| linkdata.is_set
	|| (sid_items !=  nullptr && sid_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(linktype.yfilter)
	|| ydk::is_set(linkid.yfilter)
	|| ydk::is_set(linkdata.yfilter)
	|| (sid_items !=  nullptr && sid_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ell-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (linktype.is_set || is_set(linktype.yfilter)) leaf_name_data.push_back(linktype.get_name_leafdata());
    if (linkid.is_set || is_set(linkid.yfilter)) leaf_name_data.push_back(linkid.get_name_leafdata());
    if (linkdata.is_set || is_set(linkdata.yfilter)) leaf_name_data.push_back(linkdata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-items")
    {
        if(sid_items == nullptr)
        {
            sid_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems>();
        }
        return sid_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_items != nullptr)
    {
        _children["sid-items"] = sid_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "linkType")
    {
        linktype = value;
        linktype.value_namespace = name_space;
        linktype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkId")
    {
        linkid = value;
        linkid.value_namespace = name_space;
        linkid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkData")
    {
        linkdata = value;
        linkdata.value_namespace = name_space;
        linkdata.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "linkType")
    {
        linktype.yfilter = yfilter;
    }
    if(value_path == "linkId")
    {
        linkid.yfilter = yfilter;
    }
    if(value_path == "linkData")
    {
        linkdata.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-items" || name == "linkType" || name == "linkId" || name == "linkData")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SidItems()
    :
    sgmntrtgadjsidrec_list(this, {"sgmntrtgadjsidlabel"})
{

    yang_name = "sid-items"; yang_parent_name = "ell-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::~SidItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sgmntrtgadjsidrec_list.len(); index++)
    {
        if(sgmntrtgadjsidrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::has_operation() const
{
    for (std::size_t index=0; index<sgmntrtgadjsidrec_list.len(); index++)
    {
        if(sgmntrtgadjsidrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SgmntRtgAdjSidRec-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList>();
        ent_->parent = this;
        sgmntrtgadjsidrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sgmntrtgadjsidrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SgmntRtgAdjSidRec-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::SgmntRtgAdjSidRecList()
    :
    sgmntrtgadjsidlabel{YType::uint32, "sgmntRtgAdjSidLabel"},
    adjsidtlvtype{YType::enumeration, "adjSidTlvType"},
    sgmntrtgmtid{YType::uint16, "sgmntRtgMtid"},
    sgmntrtgweight{YType::uint16, "sgmntRtgWeight"},
    sgmntrtgadjsidflags{YType::str, "sgmntRtgAdjSidFlags"},
    sgmntrtgadjsidnbrid{YType::str, "sgmntRtgAdjSidNbrId"}
{

    yang_name = "SgmntRtgAdjSidRec-list"; yang_parent_name = "sid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::~SgmntRtgAdjSidRecList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::has_data() const
{
    if (is_presence_container) return true;
    return sgmntrtgadjsidlabel.is_set
	|| adjsidtlvtype.is_set
	|| sgmntrtgmtid.is_set
	|| sgmntrtgweight.is_set
	|| sgmntrtgadjsidflags.is_set
	|| sgmntrtgadjsidnbrid.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgmntrtgadjsidlabel.yfilter)
	|| ydk::is_set(adjsidtlvtype.yfilter)
	|| ydk::is_set(sgmntrtgmtid.yfilter)
	|| ydk::is_set(sgmntrtgweight.yfilter)
	|| ydk::is_set(sgmntrtgadjsidflags.yfilter)
	|| ydk::is_set(sgmntrtgadjsidnbrid.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SgmntRtgAdjSidRec-list";
    ADD_KEY_TOKEN(sgmntrtgadjsidlabel, "sgmntRtgAdjSidLabel");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgmntrtgadjsidlabel.is_set || is_set(sgmntrtgadjsidlabel.yfilter)) leaf_name_data.push_back(sgmntrtgadjsidlabel.get_name_leafdata());
    if (adjsidtlvtype.is_set || is_set(adjsidtlvtype.yfilter)) leaf_name_data.push_back(adjsidtlvtype.get_name_leafdata());
    if (sgmntrtgmtid.is_set || is_set(sgmntrtgmtid.yfilter)) leaf_name_data.push_back(sgmntrtgmtid.get_name_leafdata());
    if (sgmntrtgweight.is_set || is_set(sgmntrtgweight.yfilter)) leaf_name_data.push_back(sgmntrtgweight.get_name_leafdata());
    if (sgmntrtgadjsidflags.is_set || is_set(sgmntrtgadjsidflags.yfilter)) leaf_name_data.push_back(sgmntrtgadjsidflags.get_name_leafdata());
    if (sgmntrtgadjsidnbrid.is_set || is_set(sgmntrtgadjsidnbrid.yfilter)) leaf_name_data.push_back(sgmntrtgadjsidnbrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgmntRtgAdjSidLabel")
    {
        sgmntrtgadjsidlabel = value;
        sgmntrtgadjsidlabel.value_namespace = name_space;
        sgmntrtgadjsidlabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjSidTlvType")
    {
        adjsidtlvtype = value;
        adjsidtlvtype.value_namespace = name_space;
        adjsidtlvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMtid")
    {
        sgmntrtgmtid = value;
        sgmntrtgmtid.value_namespace = name_space;
        sgmntrtgmtid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgWeight")
    {
        sgmntrtgweight = value;
        sgmntrtgweight.value_namespace = name_space;
        sgmntrtgweight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgAdjSidFlags")
    {
        sgmntrtgadjsidflags = value;
        sgmntrtgadjsidflags.value_namespace = name_space;
        sgmntrtgadjsidflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgAdjSidNbrId")
    {
        sgmntrtgadjsidnbrid = value;
        sgmntrtgadjsidnbrid.value_namespace = name_space;
        sgmntrtgadjsidnbrid.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgmntRtgAdjSidLabel")
    {
        sgmntrtgadjsidlabel.yfilter = yfilter;
    }
    if(value_path == "adjSidTlvType")
    {
        adjsidtlvtype.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMtid")
    {
        sgmntrtgmtid.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgWeight")
    {
        sgmntrtgweight.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgAdjSidFlags")
    {
        sgmntrtgadjsidflags.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgAdjSidNbrId")
    {
        sgmntrtgadjsidnbrid.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgmntRtgAdjSidLabel" || name == "adjSidTlvType" || name == "sgmntRtgMtid" || name == "sgmntRtgWeight" || name == "sgmntRtgAdjSidFlags" || name == "sgmntRtgAdjSidNbrId")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RtItems()
    :
    route_list(this, {"pfx"})
{

    yang_name = "rt-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::~RtItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList>();
        ent_->parent = this;
        route_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::get_children() const
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RouteList()
    :
    pfx{YType::str, "pfx"},
    name{YType::str, "name"},
    patht{YType::enumeration, "pathT"},
    area{YType::str, "area"},
    flags{YType::str, "flags"},
    ucastcost{YType::uint16, "ucastCost"},
    mcastcost{YType::uint16, "mcastCost"},
    tag{YType::uint32, "tag"},
    dist{YType::uint8, "dist"},
    sgmntrtgmplssid{YType::uint32, "sgmntRtgMplsSid"},
    sgmntrtgmplsinlabel{YType::uint32, "sgmntRtgMplsInLabel"}
        ,
    ucnh_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems>())
    , mcnh_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems>())
{
    ucnh_items->parent = this;
    mcnh_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::~RouteList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| name.is_set
	|| patht.is_set
	|| area.is_set
	|| flags.is_set
	|| ucastcost.is_set
	|| mcastcost.is_set
	|| tag.is_set
	|| dist.is_set
	|| sgmntrtgmplssid.is_set
	|| sgmntrtgmplsinlabel.is_set
	|| (ucnh_items !=  nullptr && ucnh_items->has_data())
	|| (mcnh_items !=  nullptr && mcnh_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(patht.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(ucastcost.yfilter)
	|| ydk::is_set(mcastcost.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(dist.yfilter)
	|| ydk::is_set(sgmntrtgmplssid.yfilter)
	|| ydk::is_set(sgmntrtgmplsinlabel.yfilter)
	|| (ucnh_items !=  nullptr && ucnh_items->has_operation())
	|| (mcnh_items !=  nullptr && mcnh_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (patht.is_set || is_set(patht.yfilter)) leaf_name_data.push_back(patht.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (ucastcost.is_set || is_set(ucastcost.yfilter)) leaf_name_data.push_back(ucastcost.get_name_leafdata());
    if (mcastcost.is_set || is_set(mcastcost.yfilter)) leaf_name_data.push_back(mcastcost.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (dist.is_set || is_set(dist.yfilter)) leaf_name_data.push_back(dist.get_name_leafdata());
    if (sgmntrtgmplssid.is_set || is_set(sgmntrtgmplssid.yfilter)) leaf_name_data.push_back(sgmntrtgmplssid.get_name_leafdata());
    if (sgmntrtgmplsinlabel.is_set || is_set(sgmntrtgmplsinlabel.yfilter)) leaf_name_data.push_back(sgmntrtgmplsinlabel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ucnh-items")
    {
        if(ucnh_items == nullptr)
        {
            ucnh_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems>();
        }
        return ucnh_items;
    }

    if(child_yang_name == "mcnh-items")
    {
        if(mcnh_items == nullptr)
        {
            mcnh_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems>();
        }
        return mcnh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ucnh_items != nullptr)
    {
        _children["ucnh-items"] = ucnh_items;
    }

    if(mcnh_items != nullptr)
    {
        _children["mcnh-items"] = mcnh_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "pathT")
    {
        patht = value;
        patht.value_namespace = name_space;
        patht.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastCost")
    {
        ucastcost = value;
        ucastcost.value_namespace = name_space;
        ucastcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastCost")
    {
        mcastcost = value;
        mcastcost.value_namespace = name_space;
        mcastcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist")
    {
        dist = value;
        dist.value_namespace = name_space;
        dist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMplsSid")
    {
        sgmntrtgmplssid = value;
        sgmntrtgmplssid.value_namespace = name_space;
        sgmntrtgmplssid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMplsInLabel")
    {
        sgmntrtgmplsinlabel = value;
        sgmntrtgmplsinlabel.value_namespace = name_space;
        sgmntrtgmplsinlabel.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pathT")
    {
        patht.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "ucastCost")
    {
        ucastcost.yfilter = yfilter;
    }
    if(value_path == "mcastCost")
    {
        mcastcost.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "dist")
    {
        dist.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMplsSid")
    {
        sgmntrtgmplssid.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMplsInLabel")
    {
        sgmntrtgmplsinlabel.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ucnh-items" || name == "mcnh-items" || name == "pfx" || name == "name" || name == "pathT" || name == "area" || name == "flags" || name == "ucastCost" || name == "mcastCost" || name == "tag" || name == "dist" || name == "sgmntRtgMplsSid" || name == "sgmntRtgMplsInLabel")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcnhItems()
    :
    ucnexthop_list(this, {"if_", "addr"})
{

    yang_name = "ucnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::~UcnhItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_operation() const
{
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UcNexthop-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList>();
        ent_->parent = this;
        ucnexthop_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ucnexthop_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UcNexthop-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::UcNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"},
    sgmntrtgmplsoutlabel{YType::uint32, "sgmntRtgMplsOutLabel"}
{

    yang_name = "UcNexthop-list"; yang_parent_name = "ucnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::~UcNexthopList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set
	|| sgmntrtgmplsoutlabel.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(sgmntrtgmplsoutlabel.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UcNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (sgmntrtgmplsoutlabel.is_set || is_set(sgmntrtgmplsoutlabel.yfilter)) leaf_name_data.push_back(sgmntrtgmplsoutlabel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMplsOutLabel")
    {
        sgmntrtgmplsoutlabel = value;
        sgmntrtgmplsoutlabel.value_namespace = name_space;
        sgmntrtgmplsoutlabel.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMplsOutLabel")
    {
        sgmntrtgmplsoutlabel.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags" || name == "sgmntRtgMplsOutLabel")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McnhItems()
    :
    mcnexthop_list(this, {"if_", "addr"})
{

    yang_name = "mcnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::~McnhItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::has_operation() const
{
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McNexthop-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList>();
        ent_->parent = this;
        mcnexthop_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mcnexthop_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McNexthop-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::McNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"},
    sgmntrtgmplsoutlabel{YType::uint32, "sgmntRtgMplsOutLabel"}
{

    yang_name = "McNexthop-list"; yang_parent_name = "mcnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::~McNexthopList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set
	|| sgmntrtgmplsoutlabel.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(sgmntrtgmplsoutlabel.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (sgmntrtgmplsoutlabel.is_set || is_set(sgmntrtgmplsoutlabel.yfilter)) leaf_name_data.push_back(sgmntrtgmplsoutlabel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMplsOutLabel")
    {
        sgmntrtgmplsoutlabel = value;
        sgmntrtgmplsoutlabel.value_namespace = name_space;
        sgmntrtgmplsoutlabel.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMplsOutLabel")
    {
        sgmntrtgmplsoutlabel.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags" || name == "sgmntRtgMplsOutLabel")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::SpfcompItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    initintvl{YType::uint32, "initIntvl"},
    holdintvl{YType::uint32, "holdIntvl"},
    maxintvl{YType::uint32, "maxIntvl"}
{

    yang_name = "spfcomp-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::~SpfcompItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| initintvl.is_set
	|| holdintvl.is_set
	|| maxintvl.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(initintvl.yfilter)
	|| ydk::is_set(holdintvl.yfilter)
	|| ydk::is_set(maxintvl.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spfcomp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (initintvl.is_set || is_set(initintvl.yfilter)) leaf_name_data.push_back(initintvl.get_name_leafdata());
    if (holdintvl.is_set || is_set(holdintvl.yfilter)) leaf_name_data.push_back(holdintvl.get_name_leafdata());
    if (maxintvl.is_set || is_set(maxintvl.yfilter)) leaf_name_data.push_back(maxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "initIntvl")
    {
        initintvl = value;
        initintvl.value_namespace = name_space;
        initintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl = value;
        holdintvl.value_namespace = name_space;
        holdintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl = value;
        maxintvl.value_namespace = name_space;
        maxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "initIntvl")
    {
        initintvl.yfilter = yfilter;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl.yfilter = yfilter;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "initIntvl" || name == "holdIntvl" || name == "maxIntvl")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::LsactrlItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    gppacingintvl{YType::uint16, "gpPacingIntvl"},
    arrivalintvl{YType::uint32, "arrivalIntvl"},
    startintvl{YType::uint32, "startIntvl"},
    holdintvl{YType::uint32, "holdIntvl"},
    maxintvl{YType::uint32, "maxIntvl"}
{

    yang_name = "lsactrl-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::~LsactrlItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| gppacingintvl.is_set
	|| arrivalintvl.is_set
	|| startintvl.is_set
	|| holdintvl.is_set
	|| maxintvl.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(gppacingintvl.yfilter)
	|| ydk::is_set(arrivalintvl.yfilter)
	|| ydk::is_set(startintvl.yfilter)
	|| ydk::is_set(holdintvl.yfilter)
	|| ydk::is_set(maxintvl.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsactrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (gppacingintvl.is_set || is_set(gppacingintvl.yfilter)) leaf_name_data.push_back(gppacingintvl.get_name_leafdata());
    if (arrivalintvl.is_set || is_set(arrivalintvl.yfilter)) leaf_name_data.push_back(arrivalintvl.get_name_leafdata());
    if (startintvl.is_set || is_set(startintvl.yfilter)) leaf_name_data.push_back(startintvl.get_name_leafdata());
    if (holdintvl.is_set || is_set(holdintvl.yfilter)) leaf_name_data.push_back(holdintvl.get_name_leafdata());
    if (maxintvl.is_set || is_set(maxintvl.yfilter)) leaf_name_data.push_back(maxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "gpPacingIntvl")
    {
        gppacingintvl = value;
        gppacingintvl.value_namespace = name_space;
        gppacingintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arrivalIntvl")
    {
        arrivalintvl = value;
        arrivalintvl.value_namespace = name_space;
        arrivalintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startIntvl")
    {
        startintvl = value;
        startintvl.value_namespace = name_space;
        startintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl = value;
        holdintvl.value_namespace = name_space;
        holdintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl = value;
        maxintvl.value_namespace = name_space;
        maxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "gpPacingIntvl")
    {
        gppacingintvl.yfilter = yfilter;
    }
    if(value_path == "arrivalIntvl")
    {
        arrivalintvl.yfilter = yfilter;
    }
    if(value_path == "startIntvl")
    {
        startintvl.yfilter = yfilter;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl.yfilter = yfilter;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "gpPacingIntvl" || name == "arrivalIntvl" || name == "startIntvl" || name == "holdIntvl" || name == "maxIntvl")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::DomstatsItems()
    :
    ifcnt{YType::uint32, "ifCnt"},
    areacnt{YType::uint32, "areaCnt"},
    stubareacnt{YType::uint32, "stubAreaCnt"},
    nssaareacnt{YType::uint32, "nssaAreaCnt"},
    extareacnt{YType::uint32, "extAreaCnt"},
    activestubareacnt{YType::uint32, "activeStubAreaCnt"},
    activenssaareacnt{YType::uint32, "activeNssaAreaCnt"},
    activeextareacnt{YType::uint32, "activeExtAreaCnt"},
    activeareacnt{YType::uint32, "activeAreaCnt"},
    laststatsclearts{YType::str, "lastStatsClearTs"},
    peercnt{YType::uint32, "peerCnt"},
    extlsacnt{YType::uint32, "extLsaCnt"},
    opaqueaslsacnt{YType::uint32, "opaqueAsLsaCnt"},
    totalaslsacnt{YType::uint32, "totalAsLsaCnt"},
    newlsarxcnt{YType::uint32, "newLsaRxCnt"},
    newlsatxcnt{YType::uint32, "newLsaTxCnt"},
    areabdrrtr{YType::uint8, "areaBdrRtr"},
    asbdrrtr{YType::uint8, "asBdrRtr"}
{

    yang_name = "domstats-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::~DomstatsItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return ifcnt.is_set
	|| areacnt.is_set
	|| stubareacnt.is_set
	|| nssaareacnt.is_set
	|| extareacnt.is_set
	|| activestubareacnt.is_set
	|| activenssaareacnt.is_set
	|| activeextareacnt.is_set
	|| activeareacnt.is_set
	|| laststatsclearts.is_set
	|| peercnt.is_set
	|| extlsacnt.is_set
	|| opaqueaslsacnt.is_set
	|| totalaslsacnt.is_set
	|| newlsarxcnt.is_set
	|| newlsatxcnt.is_set
	|| areabdrrtr.is_set
	|| asbdrrtr.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifcnt.yfilter)
	|| ydk::is_set(areacnt.yfilter)
	|| ydk::is_set(stubareacnt.yfilter)
	|| ydk::is_set(nssaareacnt.yfilter)
	|| ydk::is_set(extareacnt.yfilter)
	|| ydk::is_set(activestubareacnt.yfilter)
	|| ydk::is_set(activenssaareacnt.yfilter)
	|| ydk::is_set(activeextareacnt.yfilter)
	|| ydk::is_set(activeareacnt.yfilter)
	|| ydk::is_set(laststatsclearts.yfilter)
	|| ydk::is_set(peercnt.yfilter)
	|| ydk::is_set(extlsacnt.yfilter)
	|| ydk::is_set(opaqueaslsacnt.yfilter)
	|| ydk::is_set(totalaslsacnt.yfilter)
	|| ydk::is_set(newlsarxcnt.yfilter)
	|| ydk::is_set(newlsatxcnt.yfilter)
	|| ydk::is_set(areabdrrtr.yfilter)
	|| ydk::is_set(asbdrrtr.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifcnt.is_set || is_set(ifcnt.yfilter)) leaf_name_data.push_back(ifcnt.get_name_leafdata());
    if (areacnt.is_set || is_set(areacnt.yfilter)) leaf_name_data.push_back(areacnt.get_name_leafdata());
    if (stubareacnt.is_set || is_set(stubareacnt.yfilter)) leaf_name_data.push_back(stubareacnt.get_name_leafdata());
    if (nssaareacnt.is_set || is_set(nssaareacnt.yfilter)) leaf_name_data.push_back(nssaareacnt.get_name_leafdata());
    if (extareacnt.is_set || is_set(extareacnt.yfilter)) leaf_name_data.push_back(extareacnt.get_name_leafdata());
    if (activestubareacnt.is_set || is_set(activestubareacnt.yfilter)) leaf_name_data.push_back(activestubareacnt.get_name_leafdata());
    if (activenssaareacnt.is_set || is_set(activenssaareacnt.yfilter)) leaf_name_data.push_back(activenssaareacnt.get_name_leafdata());
    if (activeextareacnt.is_set || is_set(activeextareacnt.yfilter)) leaf_name_data.push_back(activeextareacnt.get_name_leafdata());
    if (activeareacnt.is_set || is_set(activeareacnt.yfilter)) leaf_name_data.push_back(activeareacnt.get_name_leafdata());
    if (laststatsclearts.is_set || is_set(laststatsclearts.yfilter)) leaf_name_data.push_back(laststatsclearts.get_name_leafdata());
    if (peercnt.is_set || is_set(peercnt.yfilter)) leaf_name_data.push_back(peercnt.get_name_leafdata());
    if (extlsacnt.is_set || is_set(extlsacnt.yfilter)) leaf_name_data.push_back(extlsacnt.get_name_leafdata());
    if (opaqueaslsacnt.is_set || is_set(opaqueaslsacnt.yfilter)) leaf_name_data.push_back(opaqueaslsacnt.get_name_leafdata());
    if (totalaslsacnt.is_set || is_set(totalaslsacnt.yfilter)) leaf_name_data.push_back(totalaslsacnt.get_name_leafdata());
    if (newlsarxcnt.is_set || is_set(newlsarxcnt.yfilter)) leaf_name_data.push_back(newlsarxcnt.get_name_leafdata());
    if (newlsatxcnt.is_set || is_set(newlsatxcnt.yfilter)) leaf_name_data.push_back(newlsatxcnt.get_name_leafdata());
    if (areabdrrtr.is_set || is_set(areabdrrtr.yfilter)) leaf_name_data.push_back(areabdrrtr.get_name_leafdata());
    if (asbdrrtr.is_set || is_set(asbdrrtr.yfilter)) leaf_name_data.push_back(asbdrrtr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifCnt")
    {
        ifcnt = value;
        ifcnt.value_namespace = name_space;
        ifcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "areaCnt")
    {
        areacnt = value;
        areacnt.value_namespace = name_space;
        areacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stubAreaCnt")
    {
        stubareacnt = value;
        stubareacnt.value_namespace = name_space;
        stubareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssaAreaCnt")
    {
        nssaareacnt = value;
        nssaareacnt.value_namespace = name_space;
        nssaareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extAreaCnt")
    {
        extareacnt = value;
        extareacnt.value_namespace = name_space;
        extareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activeStubAreaCnt")
    {
        activestubareacnt = value;
        activestubareacnt.value_namespace = name_space;
        activestubareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activeNssaAreaCnt")
    {
        activenssaareacnt = value;
        activenssaareacnt.value_namespace = name_space;
        activenssaareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activeExtAreaCnt")
    {
        activeextareacnt = value;
        activeextareacnt.value_namespace = name_space;
        activeextareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activeAreaCnt")
    {
        activeareacnt = value;
        activeareacnt.value_namespace = name_space;
        activeareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts = value;
        laststatsclearts.value_namespace = name_space;
        laststatsclearts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerCnt")
    {
        peercnt = value;
        peercnt.value_namespace = name_space;
        peercnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extLsaCnt")
    {
        extlsacnt = value;
        extlsacnt.value_namespace = name_space;
        extlsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaqueAsLsaCnt")
    {
        opaqueaslsacnt = value;
        opaqueaslsacnt.value_namespace = name_space;
        opaqueaslsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalAsLsaCnt")
    {
        totalaslsacnt = value;
        totalaslsacnt.value_namespace = name_space;
        totalaslsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "newLsaRxCnt")
    {
        newlsarxcnt = value;
        newlsarxcnt.value_namespace = name_space;
        newlsarxcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "newLsaTxCnt")
    {
        newlsatxcnt = value;
        newlsatxcnt.value_namespace = name_space;
        newlsatxcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "areaBdrRtr")
    {
        areabdrrtr = value;
        areabdrrtr.value_namespace = name_space;
        areabdrrtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asBdrRtr")
    {
        asbdrrtr = value;
        asbdrrtr.value_namespace = name_space;
        asbdrrtr.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifCnt")
    {
        ifcnt.yfilter = yfilter;
    }
    if(value_path == "areaCnt")
    {
        areacnt.yfilter = yfilter;
    }
    if(value_path == "stubAreaCnt")
    {
        stubareacnt.yfilter = yfilter;
    }
    if(value_path == "nssaAreaCnt")
    {
        nssaareacnt.yfilter = yfilter;
    }
    if(value_path == "extAreaCnt")
    {
        extareacnt.yfilter = yfilter;
    }
    if(value_path == "activeStubAreaCnt")
    {
        activestubareacnt.yfilter = yfilter;
    }
    if(value_path == "activeNssaAreaCnt")
    {
        activenssaareacnt.yfilter = yfilter;
    }
    if(value_path == "activeExtAreaCnt")
    {
        activeextareacnt.yfilter = yfilter;
    }
    if(value_path == "activeAreaCnt")
    {
        activeareacnt.yfilter = yfilter;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts.yfilter = yfilter;
    }
    if(value_path == "peerCnt")
    {
        peercnt.yfilter = yfilter;
    }
    if(value_path == "extLsaCnt")
    {
        extlsacnt.yfilter = yfilter;
    }
    if(value_path == "opaqueAsLsaCnt")
    {
        opaqueaslsacnt.yfilter = yfilter;
    }
    if(value_path == "totalAsLsaCnt")
    {
        totalaslsacnt.yfilter = yfilter;
    }
    if(value_path == "newLsaRxCnt")
    {
        newlsarxcnt.yfilter = yfilter;
    }
    if(value_path == "newLsaTxCnt")
    {
        newlsatxcnt.yfilter = yfilter;
    }
    if(value_path == "areaBdrRtr")
    {
        areabdrrtr.yfilter = yfilter;
    }
    if(value_path == "asBdrRtr")
    {
        asbdrrtr.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifCnt" || name == "areaCnt" || name == "stubAreaCnt" || name == "nssaAreaCnt" || name == "extAreaCnt" || name == "activeStubAreaCnt" || name == "activeNssaAreaCnt" || name == "activeExtAreaCnt" || name == "activeAreaCnt" || name == "lastStatsClearTs" || name == "peerCnt" || name == "extLsaCnt" || name == "opaqueAsLsaCnt" || name == "totalAsLsaCnt" || name == "newLsaRxCnt" || name == "newLsaTxCnt" || name == "areaBdrRtr" || name == "asBdrRtr")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::GrItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::enumeration, "ctrl"},
    helper{YType::boolean, "helper"},
    graceperiod{YType::uint32, "gracePeriod"}
{

    yang_name = "gr-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::~GrItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| helper.is_set
	|| graceperiod.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(helper.yfilter)
	|| ydk::is_set(graceperiod.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (helper.is_set || is_set(helper.yfilter)) leaf_name_data.push_back(helper.get_name_leafdata());
    if (graceperiod.is_set || is_set(graceperiod.yfilter)) leaf_name_data.push_back(graceperiod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "helper")
    {
        helper = value;
        helper.value_namespace = name_space;
        helper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gracePeriod")
    {
        graceperiod = value;
        graceperiod.value_namespace = name_space;
        graceperiod.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "helper")
    {
        helper.yfilter = yfilter;
    }
    if(value_path == "gracePeriod")
    {
        graceperiod.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ctrl" || name == "helper" || name == "gracePeriod")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::get_children() const
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    passivectrl{YType::enumeration, "passiveCtrl"},
    bfdctrl{YType::enumeration, "bfdCtrl"},
    nwt{YType::enumeration, "nwT"},
    prio{YType::uint8, "prio"},
    cost{YType::uint16, "cost"},
    xmitdelay{YType::uint16, "xmitDelay"},
    area{YType::str, "area"},
    advertisesecondaries{YType::boolean, "advertiseSecondaries"},
    nodeflag{YType::enumeration, "nodeFlag"},
    operst{YType::enumeration, "operSt"},
    failstqual{YType::str, "failStQual"},
    type{YType::enumeration, "type"},
    flags{YType::str, "flags"},
    addr{YType::str, "addr"},
    dr{YType::str, "dr"},
    bdr{YType::str, "bdr"},
    drid{YType::str, "drId"},
    bdrid{YType::str, "bdrId"},
    lsacksumsum{YType::uint32, "lsaCksumSum"},
    opercost{YType::uint16, "operCost"},
    operdeadintvl{YType::uint32, "operDeadIntvl"},
    opersidindex{YType::int32, "operSidIndex"},
    sgmntrtgmplselllsid{YType::str, "sgmntRtgMplsEllLsid"},
    explicitnull{YType::enumeration, "explicitNull"},
    hellointvl{YType::uint16, "helloIntvl"},
    deadintvl{YType::uint32, "deadIntvl"},
    rexmitintvl{YType::uint16, "rexmitIntvl"}
        ,
    adj_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems>())
    , auth_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems>())
    , authnew_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems>())
    , db_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems>())
    , ifstats_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems>())
    , multiarea_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems>())
    , trstats_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems>())
    , rtospfifdeftoospfif_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems>())
    , rtvrfmbr_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    adj_items->parent = this;
    auth_items->parent = this;
    authnew_items->parent = this;
    db_items->parent = this;
    ifstats_items->parent = this;
    multiarea_items->parent = this;
    trstats_items->parent = this;
    rtospfifdeftoospfif_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| passivectrl.is_set
	|| bfdctrl.is_set
	|| nwt.is_set
	|| prio.is_set
	|| cost.is_set
	|| xmitdelay.is_set
	|| area.is_set
	|| advertisesecondaries.is_set
	|| nodeflag.is_set
	|| operst.is_set
	|| failstqual.is_set
	|| type.is_set
	|| flags.is_set
	|| addr.is_set
	|| dr.is_set
	|| bdr.is_set
	|| drid.is_set
	|| bdrid.is_set
	|| lsacksumsum.is_set
	|| opercost.is_set
	|| operdeadintvl.is_set
	|| opersidindex.is_set
	|| sgmntrtgmplselllsid.is_set
	|| explicitnull.is_set
	|| hellointvl.is_set
	|| deadintvl.is_set
	|| rexmitintvl.is_set
	|| (adj_items !=  nullptr && adj_items->has_data())
	|| (auth_items !=  nullptr && auth_items->has_data())
	|| (authnew_items !=  nullptr && authnew_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (ifstats_items !=  nullptr && ifstats_items->has_data())
	|| (multiarea_items !=  nullptr && multiarea_items->has_data())
	|| (trstats_items !=  nullptr && trstats_items->has_data())
	|| (rtospfifdeftoospfif_items !=  nullptr && rtospfifdeftoospfif_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(passivectrl.yfilter)
	|| ydk::is_set(bfdctrl.yfilter)
	|| ydk::is_set(nwt.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(xmitdelay.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(advertisesecondaries.yfilter)
	|| ydk::is_set(nodeflag.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(failstqual.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(bdr.yfilter)
	|| ydk::is_set(drid.yfilter)
	|| ydk::is_set(bdrid.yfilter)
	|| ydk::is_set(lsacksumsum.yfilter)
	|| ydk::is_set(opercost.yfilter)
	|| ydk::is_set(operdeadintvl.yfilter)
	|| ydk::is_set(opersidindex.yfilter)
	|| ydk::is_set(sgmntrtgmplselllsid.yfilter)
	|| ydk::is_set(explicitnull.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(deadintvl.yfilter)
	|| ydk::is_set(rexmitintvl.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation())
	|| (auth_items !=  nullptr && auth_items->has_operation())
	|| (authnew_items !=  nullptr && authnew_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation())
	|| (multiarea_items !=  nullptr && multiarea_items->has_operation())
	|| (trstats_items !=  nullptr && trstats_items->has_operation())
	|| (rtospfifdeftoospfif_items !=  nullptr && rtospfifdeftoospfif_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (passivectrl.is_set || is_set(passivectrl.yfilter)) leaf_name_data.push_back(passivectrl.get_name_leafdata());
    if (bfdctrl.is_set || is_set(bfdctrl.yfilter)) leaf_name_data.push_back(bfdctrl.get_name_leafdata());
    if (nwt.is_set || is_set(nwt.yfilter)) leaf_name_data.push_back(nwt.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (xmitdelay.is_set || is_set(xmitdelay.yfilter)) leaf_name_data.push_back(xmitdelay.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (advertisesecondaries.is_set || is_set(advertisesecondaries.yfilter)) leaf_name_data.push_back(advertisesecondaries.get_name_leafdata());
    if (nodeflag.is_set || is_set(nodeflag.yfilter)) leaf_name_data.push_back(nodeflag.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (failstqual.is_set || is_set(failstqual.yfilter)) leaf_name_data.push_back(failstqual.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (bdr.is_set || is_set(bdr.yfilter)) leaf_name_data.push_back(bdr.get_name_leafdata());
    if (drid.is_set || is_set(drid.yfilter)) leaf_name_data.push_back(drid.get_name_leafdata());
    if (bdrid.is_set || is_set(bdrid.yfilter)) leaf_name_data.push_back(bdrid.get_name_leafdata());
    if (lsacksumsum.is_set || is_set(lsacksumsum.yfilter)) leaf_name_data.push_back(lsacksumsum.get_name_leafdata());
    if (opercost.is_set || is_set(opercost.yfilter)) leaf_name_data.push_back(opercost.get_name_leafdata());
    if (operdeadintvl.is_set || is_set(operdeadintvl.yfilter)) leaf_name_data.push_back(operdeadintvl.get_name_leafdata());
    if (opersidindex.is_set || is_set(opersidindex.yfilter)) leaf_name_data.push_back(opersidindex.get_name_leafdata());
    if (sgmntrtgmplselllsid.is_set || is_set(sgmntrtgmplselllsid.yfilter)) leaf_name_data.push_back(sgmntrtgmplselllsid.get_name_leafdata());
    if (explicitnull.is_set || is_set(explicitnull.yfilter)) leaf_name_data.push_back(explicitnull.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (deadintvl.is_set || is_set(deadintvl.yfilter)) leaf_name_data.push_back(deadintvl.get_name_leafdata());
    if (rexmitintvl.is_set || is_set(rexmitintvl.yfilter)) leaf_name_data.push_back(rexmitintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems>();
        }
        return adj_items;
    }

    if(child_yang_name == "auth-items")
    {
        if(auth_items == nullptr)
        {
            auth_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems>();
        }
        return auth_items;
    }

    if(child_yang_name == "authnew-items")
    {
        if(authnew_items == nullptr)
        {
            authnew_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems>();
        }
        return authnew_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems>();
        }
        return ifstats_items;
    }

    if(child_yang_name == "multiarea-items")
    {
        if(multiarea_items == nullptr)
        {
            multiarea_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems>();
        }
        return multiarea_items;
    }

    if(child_yang_name == "trstats-items")
    {
        if(trstats_items == nullptr)
        {
            trstats_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems>();
        }
        return trstats_items;
    }

    if(child_yang_name == "rtospfIfDefToOspfIf-items")
    {
        if(rtospfifdeftoospfif_items == nullptr)
        {
            rtospfifdeftoospfif_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems>();
        }
        return rtospfifdeftoospfif_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adj_items != nullptr)
    {
        _children["adj-items"] = adj_items;
    }

    if(auth_items != nullptr)
    {
        _children["auth-items"] = auth_items;
    }

    if(authnew_items != nullptr)
    {
        _children["authnew-items"] = authnew_items;
    }

    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(ifstats_items != nullptr)
    {
        _children["ifstats-items"] = ifstats_items;
    }

    if(multiarea_items != nullptr)
    {
        _children["multiarea-items"] = multiarea_items;
    }

    if(trstats_items != nullptr)
    {
        _children["trstats-items"] = trstats_items;
    }

    if(rtospfifdeftoospfif_items != nullptr)
    {
        _children["rtospfIfDefToOspfIf-items"] = rtospfifdeftoospfif_items;
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "passiveCtrl")
    {
        passivectrl = value;
        passivectrl.value_namespace = name_space;
        passivectrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdCtrl")
    {
        bfdctrl = value;
        bfdctrl.value_namespace = name_space;
        bfdctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nwT")
    {
        nwt = value;
        nwt.value_namespace = name_space;
        nwt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay = value;
        xmitdelay.value_namespace = name_space;
        xmitdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertiseSecondaries")
    {
        advertisesecondaries = value;
        advertisesecondaries.value_namespace = name_space;
        advertisesecondaries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeFlag")
    {
        nodeflag = value;
        nodeflag.value_namespace = name_space;
        nodeflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failStQual")
    {
        failstqual = value;
        failstqual.value_namespace = name_space;
        failstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdr")
    {
        bdr = value;
        bdr.value_namespace = name_space;
        bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drId")
    {
        drid = value;
        drid.value_namespace = name_space;
        drid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdrId")
    {
        bdrid = value;
        bdrid.value_namespace = name_space;
        bdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaCksumSum")
    {
        lsacksumsum = value;
        lsacksumsum.value_namespace = name_space;
        lsacksumsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operCost")
    {
        opercost = value;
        opercost.value_namespace = name_space;
        opercost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDeadIntvl")
    {
        operdeadintvl = value;
        operdeadintvl.value_namespace = name_space;
        operdeadintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSidIndex")
    {
        opersidindex = value;
        opersidindex.value_namespace = name_space;
        opersidindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMplsEllLsid")
    {
        sgmntrtgmplselllsid = value;
        sgmntrtgmplselllsid.value_namespace = name_space;
        sgmntrtgmplselllsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicitNull")
    {
        explicitnull = value;
        explicitnull.value_namespace = name_space;
        explicitnull.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl = value;
        deadintvl.value_namespace = name_space;
        deadintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rexmitIntvl")
    {
        rexmitintvl = value;
        rexmitintvl.value_namespace = name_space;
        rexmitintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "passiveCtrl")
    {
        passivectrl.yfilter = yfilter;
    }
    if(value_path == "bfdCtrl")
    {
        bfdctrl.yfilter = yfilter;
    }
    if(value_path == "nwT")
    {
        nwt.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "advertiseSecondaries")
    {
        advertisesecondaries.yfilter = yfilter;
    }
    if(value_path == "nodeFlag")
    {
        nodeflag.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "failStQual")
    {
        failstqual.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "bdr")
    {
        bdr.yfilter = yfilter;
    }
    if(value_path == "drId")
    {
        drid.yfilter = yfilter;
    }
    if(value_path == "bdrId")
    {
        bdrid.yfilter = yfilter;
    }
    if(value_path == "lsaCksumSum")
    {
        lsacksumsum.yfilter = yfilter;
    }
    if(value_path == "operCost")
    {
        opercost.yfilter = yfilter;
    }
    if(value_path == "operDeadIntvl")
    {
        operdeadintvl.yfilter = yfilter;
    }
    if(value_path == "operSidIndex")
    {
        opersidindex.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMplsEllLsid")
    {
        sgmntrtgmplselllsid.yfilter = yfilter;
    }
    if(value_path == "explicitNull")
    {
        explicitnull.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl.yfilter = yfilter;
    }
    if(value_path == "rexmitIntvl")
    {
        rexmitintvl.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "auth-items" || name == "authnew-items" || name == "db-items" || name == "ifstats-items" || name == "multiarea-items" || name == "trstats-items" || name == "rtospfIfDefToOspfIf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "ctrl" || name == "passiveCtrl" || name == "bfdCtrl" || name == "nwT" || name == "prio" || name == "cost" || name == "xmitDelay" || name == "area" || name == "advertiseSecondaries" || name == "nodeFlag" || name == "operSt" || name == "failStQual" || name == "type" || name == "flags" || name == "addr" || name == "dr" || name == "bdr" || name == "drId" || name == "bdrId" || name == "lsaCksumSum" || name == "operCost" || name == "operDeadIntvl" || name == "operSidIndex" || name == "sgmntRtgMplsEllLsid" || name == "explicitNull" || name == "helloIntvl" || name == "deadIntvl" || name == "rexmitIntvl")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjItems()
    :
    adjep_list(this, {"id"})
{

    yang_name = "adj-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::~AdjItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList>();
        ent_->parent = this;
        adjep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_children() const
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjEpList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    ifid{YType::uint32, "ifId"},
    operst{YType::enumeration, "operSt"},
    bfdst{YType::enumeration, "bfdSt"},
    area{YType::str, "area"},
    prio{YType::uint8, "prio"},
    dr{YType::str, "dr"},
    bdr{YType::str, "bdr"},
    peerip{YType::str, "peerIp"},
    hellooptions{YType::uint32, "helloOptions"},
    dbdoptions{YType::uint32, "dbdOptions"},
    flags{YType::str, "flags"},
    peername{YType::str, "peerName"},
    sgmntrtgmplsadjsidlabel{YType::uint32, "sgmntRtgMplsAdjSidLabel"},
    sgmntrtgmplsadjsidflags{YType::str, "sgmntRtgMplsAdjSidFlags"}
        ,
    adjstats_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems>())
    , gr_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems>())
{
    adjstats_items->parent = this;
    gr_items->parent = this;

    yang_name = "AdjEp-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::~AdjEpList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| ifid.is_set
	|| operst.is_set
	|| bfdst.is_set
	|| area.is_set
	|| prio.is_set
	|| dr.is_set
	|| bdr.is_set
	|| peerip.is_set
	|| hellooptions.is_set
	|| dbdoptions.is_set
	|| flags.is_set
	|| peername.is_set
	|| sgmntrtgmplsadjsidlabel.is_set
	|| sgmntrtgmplsadjsidflags.is_set
	|| (adjstats_items !=  nullptr && adjstats_items->has_data())
	|| (gr_items !=  nullptr && gr_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(bfdst.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(bdr.yfilter)
	|| ydk::is_set(peerip.yfilter)
	|| ydk::is_set(hellooptions.yfilter)
	|| ydk::is_set(dbdoptions.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(peername.yfilter)
	|| ydk::is_set(sgmntrtgmplsadjsidlabel.yfilter)
	|| ydk::is_set(sgmntrtgmplsadjsidflags.yfilter)
	|| (adjstats_items !=  nullptr && adjstats_items->has_operation())
	|| (gr_items !=  nullptr && gr_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (bfdst.is_set || is_set(bfdst.yfilter)) leaf_name_data.push_back(bfdst.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (bdr.is_set || is_set(bdr.yfilter)) leaf_name_data.push_back(bdr.get_name_leafdata());
    if (peerip.is_set || is_set(peerip.yfilter)) leaf_name_data.push_back(peerip.get_name_leafdata());
    if (hellooptions.is_set || is_set(hellooptions.yfilter)) leaf_name_data.push_back(hellooptions.get_name_leafdata());
    if (dbdoptions.is_set || is_set(dbdoptions.yfilter)) leaf_name_data.push_back(dbdoptions.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (peername.is_set || is_set(peername.yfilter)) leaf_name_data.push_back(peername.get_name_leafdata());
    if (sgmntrtgmplsadjsidlabel.is_set || is_set(sgmntrtgmplsadjsidlabel.yfilter)) leaf_name_data.push_back(sgmntrtgmplsadjsidlabel.get_name_leafdata());
    if (sgmntrtgmplsadjsidflags.is_set || is_set(sgmntrtgmplsadjsidflags.yfilter)) leaf_name_data.push_back(sgmntrtgmplsadjsidflags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjstats-items")
    {
        if(adjstats_items == nullptr)
        {
            adjstats_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems>();
        }
        return adjstats_items;
    }

    if(child_yang_name == "gr-items")
    {
        if(gr_items == nullptr)
        {
            gr_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems>();
        }
        return gr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjstats_items != nullptr)
    {
        _children["adjstats-items"] = adjstats_items;
    }

    if(gr_items != nullptr)
    {
        _children["gr-items"] = gr_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdSt")
    {
        bfdst = value;
        bfdst.value_namespace = name_space;
        bfdst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdr")
    {
        bdr = value;
        bdr.value_namespace = name_space;
        bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerIp")
    {
        peerip = value;
        peerip.value_namespace = name_space;
        peerip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloOptions")
    {
        hellooptions = value;
        hellooptions.value_namespace = name_space;
        hellooptions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdOptions")
    {
        dbdoptions = value;
        dbdoptions.value_namespace = name_space;
        dbdoptions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerName")
    {
        peername = value;
        peername.value_namespace = name_space;
        peername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMplsAdjSidLabel")
    {
        sgmntrtgmplsadjsidlabel = value;
        sgmntrtgmplsadjsidlabel.value_namespace = name_space;
        sgmntrtgmplsadjsidlabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMplsAdjSidFlags")
    {
        sgmntrtgmplsadjsidflags = value;
        sgmntrtgmplsadjsidflags.value_namespace = name_space;
        sgmntrtgmplsadjsidflags.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "bfdSt")
    {
        bfdst.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "bdr")
    {
        bdr.yfilter = yfilter;
    }
    if(value_path == "peerIp")
    {
        peerip.yfilter = yfilter;
    }
    if(value_path == "helloOptions")
    {
        hellooptions.yfilter = yfilter;
    }
    if(value_path == "dbdOptions")
    {
        dbdoptions.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "peerName")
    {
        peername.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMplsAdjSidLabel")
    {
        sgmntrtgmplsadjsidlabel.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMplsAdjSidFlags")
    {
        sgmntrtgmplsadjsidflags.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjstats-items" || name == "gr-items" || name == "id" || name == "name" || name == "ifId" || name == "operSt" || name == "bfdSt" || name == "area" || name == "prio" || name == "dr" || name == "bdr" || name == "peerIp" || name == "helloOptions" || name == "dbdOptions" || name == "flags" || name == "peerName" || name == "sgmntRtgMplsAdjSidLabel" || name == "sgmntRtgMplsAdjSidFlags")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::AdjstatsItems()
    :
    stchgcnt{YType::uint32, "stChgCnt"},
    laststchgts{YType::str, "lastStChgTs"},
    lastnonhellopktts{YType::str, "lastNonHelloPktTs"},
    dbdseqnum{YType::uint32, "dbdSeqNum"},
    reqlsacnt{YType::uint32, "reqLsaCnt"},
    outstandinglsacnt{YType::uint32, "outstandingLsaCnt"},
    lsareqrexmitcnt{YType::uint32, "lsaReqRexmitCnt"},
    deadtimerexpts{YType::str, "deadTimerExpTs"}
{

    yang_name = "adjstats-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::~AdjstatsItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return stchgcnt.is_set
	|| laststchgts.is_set
	|| lastnonhellopktts.is_set
	|| dbdseqnum.is_set
	|| reqlsacnt.is_set
	|| outstandinglsacnt.is_set
	|| lsareqrexmitcnt.is_set
	|| deadtimerexpts.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stchgcnt.yfilter)
	|| ydk::is_set(laststchgts.yfilter)
	|| ydk::is_set(lastnonhellopktts.yfilter)
	|| ydk::is_set(dbdseqnum.yfilter)
	|| ydk::is_set(reqlsacnt.yfilter)
	|| ydk::is_set(outstandinglsacnt.yfilter)
	|| ydk::is_set(lsareqrexmitcnt.yfilter)
	|| ydk::is_set(deadtimerexpts.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stchgcnt.is_set || is_set(stchgcnt.yfilter)) leaf_name_data.push_back(stchgcnt.get_name_leafdata());
    if (laststchgts.is_set || is_set(laststchgts.yfilter)) leaf_name_data.push_back(laststchgts.get_name_leafdata());
    if (lastnonhellopktts.is_set || is_set(lastnonhellopktts.yfilter)) leaf_name_data.push_back(lastnonhellopktts.get_name_leafdata());
    if (dbdseqnum.is_set || is_set(dbdseqnum.yfilter)) leaf_name_data.push_back(dbdseqnum.get_name_leafdata());
    if (reqlsacnt.is_set || is_set(reqlsacnt.yfilter)) leaf_name_data.push_back(reqlsacnt.get_name_leafdata());
    if (outstandinglsacnt.is_set || is_set(outstandinglsacnt.yfilter)) leaf_name_data.push_back(outstandinglsacnt.get_name_leafdata());
    if (lsareqrexmitcnt.is_set || is_set(lsareqrexmitcnt.yfilter)) leaf_name_data.push_back(lsareqrexmitcnt.get_name_leafdata());
    if (deadtimerexpts.is_set || is_set(deadtimerexpts.yfilter)) leaf_name_data.push_back(deadtimerexpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stChgCnt")
    {
        stchgcnt = value;
        stchgcnt.value_namespace = name_space;
        stchgcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStChgTs")
    {
        laststchgts = value;
        laststchgts.value_namespace = name_space;
        laststchgts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastNonHelloPktTs")
    {
        lastnonhellopktts = value;
        lastnonhellopktts.value_namespace = name_space;
        lastnonhellopktts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdSeqNum")
    {
        dbdseqnum = value;
        dbdseqnum.value_namespace = name_space;
        dbdseqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reqLsaCnt")
    {
        reqlsacnt = value;
        reqlsacnt.value_namespace = name_space;
        reqlsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outstandingLsaCnt")
    {
        outstandinglsacnt = value;
        outstandinglsacnt.value_namespace = name_space;
        outstandinglsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaReqRexmitCnt")
    {
        lsareqrexmitcnt = value;
        lsareqrexmitcnt.value_namespace = name_space;
        lsareqrexmitcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadTimerExpTs")
    {
        deadtimerexpts = value;
        deadtimerexpts.value_namespace = name_space;
        deadtimerexpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stChgCnt")
    {
        stchgcnt.yfilter = yfilter;
    }
    if(value_path == "lastStChgTs")
    {
        laststchgts.yfilter = yfilter;
    }
    if(value_path == "lastNonHelloPktTs")
    {
        lastnonhellopktts.yfilter = yfilter;
    }
    if(value_path == "dbdSeqNum")
    {
        dbdseqnum.yfilter = yfilter;
    }
    if(value_path == "reqLsaCnt")
    {
        reqlsacnt.yfilter = yfilter;
    }
    if(value_path == "outstandingLsaCnt")
    {
        outstandinglsacnt.yfilter = yfilter;
    }
    if(value_path == "lsaReqRexmitCnt")
    {
        lsareqrexmitcnt.yfilter = yfilter;
    }
    if(value_path == "deadTimerExpTs")
    {
        deadtimerexpts.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stChgCnt" || name == "lastStChgTs" || name == "lastNonHelloPktTs" || name == "dbdSeqNum" || name == "reqLsaCnt" || name == "outstandingLsaCnt" || name == "lsaReqRexmitCnt" || name == "deadTimerExpTs")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::GrItems()
    :
    helperst{YType::enumeration, "helperSt"},
    helperage{YType::uint32, "helperAge"},
    helperexitqual{YType::enumeration, "helperExitQual"}
{

    yang_name = "gr-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::~GrItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::has_data() const
{
    if (is_presence_container) return true;
    return helperst.is_set
	|| helperage.is_set
	|| helperexitqual.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(helperst.yfilter)
	|| ydk::is_set(helperage.yfilter)
	|| ydk::is_set(helperexitqual.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (helperst.is_set || is_set(helperst.yfilter)) leaf_name_data.push_back(helperst.get_name_leafdata());
    if (helperage.is_set || is_set(helperage.yfilter)) leaf_name_data.push_back(helperage.get_name_leafdata());
    if (helperexitqual.is_set || is_set(helperexitqual.yfilter)) leaf_name_data.push_back(helperexitqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "helperSt")
    {
        helperst = value;
        helperst.value_namespace = name_space;
        helperst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helperAge")
    {
        helperage = value;
        helperage.value_namespace = name_space;
        helperage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helperExitQual")
    {
        helperexitqual = value;
        helperexitqual.value_namespace = name_space;
        helperexitqual.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "helperSt")
    {
        helperst.yfilter = yfilter;
    }
    if(value_path == "helperAge")
    {
        helperage.yfilter = yfilter;
    }
    if(value_path == "helperExitQual")
    {
        helperexitqual.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helperSt" || name == "helperAge" || name == "helperExitQual")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::AuthItems()
    :
    type{YType::enumeration, "type"},
    keyid{YType::uint8, "keyId"},
    key{YType::str, "key"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "auth-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::~AuthItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| keyid.is_set
	|| key.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(keyid.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (keyid.is_set || is_set(keyid.yfilter)) leaf_name_data.push_back(keyid.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyId")
    {
        keyid = value;
        keyid.value_namespace = name_space;
        keyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "keyId")
    {
        keyid.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
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

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "keyId" || name == "key" || name == "name" || name == "descr")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::AuthnewItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    keyid{YType::uint8, "keyId"},
    key{YType::str, "key"},
    keysecuremode{YType::boolean, "keySecureMode"},
    md5key{YType::str, "md5key"},
    md5keysecuremode{YType::boolean, "md5keySecureMode"},
    keychain{YType::str, "keychain"}
{

    yang_name = "authnew-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::~AuthnewItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| keyid.is_set
	|| key.is_set
	|| keysecuremode.is_set
	|| md5key.is_set
	|| md5keysecuremode.is_set
	|| keychain.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(keyid.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(keysecuremode.yfilter)
	|| ydk::is_set(md5key.yfilter)
	|| ydk::is_set(md5keysecuremode.yfilter)
	|| ydk::is_set(keychain.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authnew-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (keyid.is_set || is_set(keyid.yfilter)) leaf_name_data.push_back(keyid.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (keysecuremode.is_set || is_set(keysecuremode.yfilter)) leaf_name_data.push_back(keysecuremode.get_name_leafdata());
    if (md5key.is_set || is_set(md5key.yfilter)) leaf_name_data.push_back(md5key.get_name_leafdata());
    if (md5keysecuremode.is_set || is_set(md5keysecuremode.yfilter)) leaf_name_data.push_back(md5keysecuremode.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyId")
    {
        keyid = value;
        keyid.value_namespace = name_space;
        keyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keySecureMode")
    {
        keysecuremode = value;
        keysecuremode.value_namespace = name_space;
        keysecuremode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5key")
    {
        md5key = value;
        md5key.value_namespace = name_space;
        md5key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5keySecureMode")
    {
        md5keysecuremode = value;
        md5keysecuremode.value_namespace = name_space;
        md5keysecuremode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "keyId")
    {
        keyid.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "keySecureMode")
    {
        keysecuremode.yfilter = yfilter;
    }
    if(value_path == "md5key")
    {
        md5key.yfilter = yfilter;
    }
    if(value_path == "md5keySecureMode")
    {
        md5keysecuremode.yfilter = yfilter;
    }
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "type" || name == "keyId" || name == "key" || name == "keySecureMode" || name == "md5key" || name == "md5keySecureMode" || name == "keychain")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::~DbItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::get_children() const
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    lsa_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems>())
    , rt_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems>())
{
    lsa_items->parent = this;
    rt_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::~DbList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (lsa_items !=  nullptr && lsa_items->has_data())
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (lsa_items !=  nullptr && lsa_items->has_operation())
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-items")
    {
        if(lsa_items == nullptr)
        {
            lsa_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems>();
        }
        return lsa_items;
    }

    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsa_items != nullptr)
    {
        _children["lsa-items"] = lsa_items;
    }

    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-items" || name == "rt-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaItems()
    :
    lsarec_list(this, {"type", "id", "advrtr"})
{

    yang_name = "lsa-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::~LsaItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsarec_list.len(); index++)
    {
        if(lsarec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::has_operation() const
{
    for (std::size_t index=0; index<lsarec_list.len(); index++)
    {
        if(lsarec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LsaRec-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList>();
        ent_->parent = this;
        lsarec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsarec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LsaRec-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::LsaRecList()
    :
    type{YType::enumeration, "type"},
    id{YType::str, "id"},
    advrtr{YType::str, "advRtr"},
    seq{YType::uint32, "seq"},
    age{YType::uint32, "age"},
    arrivalts{YType::str, "arrivalTs"},
    cksum{YType::uint32, "cksum"},
    advert{YType::str, "advert"}
        ,
    ri_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::RiItems>())
    , epl_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems>())
    , ell_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems>())
{
    ri_items->parent = this;
    epl_items->parent = this;
    ell_items->parent = this;

    yang_name = "LsaRec-list"; yang_parent_name = "lsa-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::~LsaRecList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| id.is_set
	|| advrtr.is_set
	|| seq.is_set
	|| age.is_set
	|| arrivalts.is_set
	|| cksum.is_set
	|| advert.is_set
	|| (ri_items !=  nullptr && ri_items->has_data())
	|| (epl_items !=  nullptr && epl_items->has_data())
	|| (ell_items !=  nullptr && ell_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(advrtr.yfilter)
	|| ydk::is_set(seq.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(arrivalts.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| ydk::is_set(advert.yfilter)
	|| (ri_items !=  nullptr && ri_items->has_operation())
	|| (epl_items !=  nullptr && epl_items->has_operation())
	|| (ell_items !=  nullptr && ell_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LsaRec-list";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(advrtr, "advRtr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (advrtr.is_set || is_set(advrtr.yfilter)) leaf_name_data.push_back(advrtr.get_name_leafdata());
    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (arrivalts.is_set || is_set(arrivalts.yfilter)) leaf_name_data.push_back(arrivalts.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());
    if (advert.is_set || is_set(advert.yfilter)) leaf_name_data.push_back(advert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ri-items")
    {
        if(ri_items == nullptr)
        {
            ri_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::RiItems>();
        }
        return ri_items;
    }

    if(child_yang_name == "epl-items")
    {
        if(epl_items == nullptr)
        {
            epl_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems>();
        }
        return epl_items;
    }

    if(child_yang_name == "ell-items")
    {
        if(ell_items == nullptr)
        {
            ell_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems>();
        }
        return ell_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ri_items != nullptr)
    {
        _children["ri-items"] = ri_items;
    }

    if(epl_items != nullptr)
    {
        _children["epl-items"] = epl_items;
    }

    if(ell_items != nullptr)
    {
        _children["ell-items"] = ell_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advRtr")
    {
        advrtr = value;
        advrtr.value_namespace = name_space;
        advrtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arrivalTs")
    {
        arrivalts = value;
        arrivalts.value_namespace = name_space;
        arrivalts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advert")
    {
        advert = value;
        advert.value_namespace = name_space;
        advert.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "advRtr")
    {
        advrtr.yfilter = yfilter;
    }
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "arrivalTs")
    {
        arrivalts.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
    if(value_path == "advert")
    {
        advert.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-items" || name == "epl-items" || name == "ell-items" || name == "type" || name == "id" || name == "advRtr" || name == "seq" || name == "age" || name == "arrivalTs" || name == "cksum" || name == "advert")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::RiItems::RiItems()
    :
    grrestartcap{YType::enumeration, "grRestartCap"},
    grrestarthelpercap{YType::enumeration, "grRestartHelperCap"},
    stubroutercap{YType::enumeration, "stubRouterCap"},
    tecap{YType::enumeration, "teCap"},
    p2poverlancap{YType::enumeration, "p2pOverLanCap"},
    exptecap{YType::enumeration, "expTeCap"},
    sgmntrtgglobalrange{YType::uint32, "sgmntRtgGlobalRange"},
    sgmntrtgglobalrangestart{YType::uint32, "sgmntRtgGlobalRangeStart"},
    sgmntrtglocalrange{YType::uint32, "sgmntRtgLocalRange"},
    sgmntrtglocalrangestart{YType::uint32, "sgmntRtgLocalRangeStart"}
{

    yang_name = "ri-items"; yang_parent_name = "LsaRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::RiItems::~RiItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::RiItems::has_data() const
{
    if (is_presence_container) return true;
    return grrestartcap.is_set
	|| grrestarthelpercap.is_set
	|| stubroutercap.is_set
	|| tecap.is_set
	|| p2poverlancap.is_set
	|| exptecap.is_set
	|| sgmntrtgglobalrange.is_set
	|| sgmntrtgglobalrangestart.is_set
	|| sgmntrtglocalrange.is_set
	|| sgmntrtglocalrangestart.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::RiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grrestartcap.yfilter)
	|| ydk::is_set(grrestarthelpercap.yfilter)
	|| ydk::is_set(stubroutercap.yfilter)
	|| ydk::is_set(tecap.yfilter)
	|| ydk::is_set(p2poverlancap.yfilter)
	|| ydk::is_set(exptecap.yfilter)
	|| ydk::is_set(sgmntrtgglobalrange.yfilter)
	|| ydk::is_set(sgmntrtgglobalrangestart.yfilter)
	|| ydk::is_set(sgmntrtglocalrange.yfilter)
	|| ydk::is_set(sgmntrtglocalrangestart.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::RiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::RiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grrestartcap.is_set || is_set(grrestartcap.yfilter)) leaf_name_data.push_back(grrestartcap.get_name_leafdata());
    if (grrestarthelpercap.is_set || is_set(grrestarthelpercap.yfilter)) leaf_name_data.push_back(grrestarthelpercap.get_name_leafdata());
    if (stubroutercap.is_set || is_set(stubroutercap.yfilter)) leaf_name_data.push_back(stubroutercap.get_name_leafdata());
    if (tecap.is_set || is_set(tecap.yfilter)) leaf_name_data.push_back(tecap.get_name_leafdata());
    if (p2poverlancap.is_set || is_set(p2poverlancap.yfilter)) leaf_name_data.push_back(p2poverlancap.get_name_leafdata());
    if (exptecap.is_set || is_set(exptecap.yfilter)) leaf_name_data.push_back(exptecap.get_name_leafdata());
    if (sgmntrtgglobalrange.is_set || is_set(sgmntrtgglobalrange.yfilter)) leaf_name_data.push_back(sgmntrtgglobalrange.get_name_leafdata());
    if (sgmntrtgglobalrangestart.is_set || is_set(sgmntrtgglobalrangestart.yfilter)) leaf_name_data.push_back(sgmntrtgglobalrangestart.get_name_leafdata());
    if (sgmntrtglocalrange.is_set || is_set(sgmntrtglocalrange.yfilter)) leaf_name_data.push_back(sgmntrtglocalrange.get_name_leafdata());
    if (sgmntrtglocalrangestart.is_set || is_set(sgmntrtglocalrangestart.yfilter)) leaf_name_data.push_back(sgmntrtglocalrangestart.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::RiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::RiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::RiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grRestartCap")
    {
        grrestartcap = value;
        grrestartcap.value_namespace = name_space;
        grrestartcap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grRestartHelperCap")
    {
        grrestarthelpercap = value;
        grrestarthelpercap.value_namespace = name_space;
        grrestarthelpercap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stubRouterCap")
    {
        stubroutercap = value;
        stubroutercap.value_namespace = name_space;
        stubroutercap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "teCap")
    {
        tecap = value;
        tecap.value_namespace = name_space;
        tecap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2pOverLanCap")
    {
        p2poverlancap = value;
        p2poverlancap.value_namespace = name_space;
        p2poverlancap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expTeCap")
    {
        exptecap = value;
        exptecap.value_namespace = name_space;
        exptecap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgGlobalRange")
    {
        sgmntrtgglobalrange = value;
        sgmntrtgglobalrange.value_namespace = name_space;
        sgmntrtgglobalrange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgGlobalRangeStart")
    {
        sgmntrtgglobalrangestart = value;
        sgmntrtgglobalrangestart.value_namespace = name_space;
        sgmntrtgglobalrangestart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgLocalRange")
    {
        sgmntrtglocalrange = value;
        sgmntrtglocalrange.value_namespace = name_space;
        sgmntrtglocalrange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgLocalRangeStart")
    {
        sgmntrtglocalrangestart = value;
        sgmntrtglocalrangestart.value_namespace = name_space;
        sgmntrtglocalrangestart.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::RiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grRestartCap")
    {
        grrestartcap.yfilter = yfilter;
    }
    if(value_path == "grRestartHelperCap")
    {
        grrestarthelpercap.yfilter = yfilter;
    }
    if(value_path == "stubRouterCap")
    {
        stubroutercap.yfilter = yfilter;
    }
    if(value_path == "teCap")
    {
        tecap.yfilter = yfilter;
    }
    if(value_path == "p2pOverLanCap")
    {
        p2poverlancap.yfilter = yfilter;
    }
    if(value_path == "expTeCap")
    {
        exptecap.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgGlobalRange")
    {
        sgmntrtgglobalrange.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgGlobalRangeStart")
    {
        sgmntrtgglobalrangestart.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgLocalRange")
    {
        sgmntrtglocalrange.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgLocalRangeStart")
    {
        sgmntrtglocalrangestart.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::RiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grRestartCap" || name == "grRestartHelperCap" || name == "stubRouterCap" || name == "teCap" || name == "p2pOverLanCap" || name == "expTeCap" || name == "sgmntRtgGlobalRange" || name == "sgmntRtgGlobalRangeStart" || name == "sgmntRtgLocalRange" || name == "sgmntRtgLocalRangeStart")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::EplItems()
    :
    extpfxrec_list(this, {"ippfx"})
{

    yang_name = "epl-items"; yang_parent_name = "LsaRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::~EplItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extpfxrec_list.len(); index++)
    {
        if(extpfxrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::has_operation() const
{
    for (std::size_t index=0; index<extpfxrec_list.len(); index++)
    {
        if(extpfxrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtPfxRec-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList>();
        ent_->parent = this;
        extpfxrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extpfxrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtPfxRec-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::ExtPfxRecList()
    :
    ippfx{YType::str, "ipPfx"},
    addressfamily{YType::uint16, "addressFamily"},
    routetype{YType::enumeration, "routeType"},
    pfxflags{YType::str, "pfxFlags"}
        ,
    sid_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems>())
{
    sid_items->parent = this;

    yang_name = "ExtPfxRec-list"; yang_parent_name = "epl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::~ExtPfxRecList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::has_data() const
{
    if (is_presence_container) return true;
    return ippfx.is_set
	|| addressfamily.is_set
	|| routetype.is_set
	|| pfxflags.is_set
	|| (sid_items !=  nullptr && sid_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ippfx.yfilter)
	|| ydk::is_set(addressfamily.yfilter)
	|| ydk::is_set(routetype.yfilter)
	|| ydk::is_set(pfxflags.yfilter)
	|| (sid_items !=  nullptr && sid_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtPfxRec-list";
    ADD_KEY_TOKEN(ippfx, "ipPfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ippfx.is_set || is_set(ippfx.yfilter)) leaf_name_data.push_back(ippfx.get_name_leafdata());
    if (addressfamily.is_set || is_set(addressfamily.yfilter)) leaf_name_data.push_back(addressfamily.get_name_leafdata());
    if (routetype.is_set || is_set(routetype.yfilter)) leaf_name_data.push_back(routetype.get_name_leafdata());
    if (pfxflags.is_set || is_set(pfxflags.yfilter)) leaf_name_data.push_back(pfxflags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-items")
    {
        if(sid_items == nullptr)
        {
            sid_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems>();
        }
        return sid_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_items != nullptr)
    {
        _children["sid-items"] = sid_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipPfx")
    {
        ippfx = value;
        ippfx.value_namespace = name_space;
        ippfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addressFamily")
    {
        addressfamily = value;
        addressfamily.value_namespace = name_space;
        addressfamily.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeType")
    {
        routetype = value;
        routetype.value_namespace = name_space;
        routetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxFlags")
    {
        pfxflags = value;
        pfxflags.value_namespace = name_space;
        pfxflags.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipPfx")
    {
        ippfx.yfilter = yfilter;
    }
    if(value_path == "addressFamily")
    {
        addressfamily.yfilter = yfilter;
    }
    if(value_path == "routeType")
    {
        routetype.yfilter = yfilter;
    }
    if(value_path == "pfxFlags")
    {
        pfxflags.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-items" || name == "ipPfx" || name == "addressFamily" || name == "routeType" || name == "pfxFlags")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SidItems()
    :
    sgmntrtgpfxsidrec_list(this, {"sgmntrtgalgo"})
{

    yang_name = "sid-items"; yang_parent_name = "ExtPfxRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::~SidItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sgmntrtgpfxsidrec_list.len(); index++)
    {
        if(sgmntrtgpfxsidrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::has_operation() const
{
    for (std::size_t index=0; index<sgmntrtgpfxsidrec_list.len(); index++)
    {
        if(sgmntrtgpfxsidrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SgmntRtgPfxSidRec-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList>();
        ent_->parent = this;
        sgmntrtgpfxsidrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sgmntrtgpfxsidrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SgmntRtgPfxSidRec-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::SgmntRtgPfxSidRecList()
    :
    sgmntrtgalgo{YType::uint16, "sgmntRtgAlgo"},
    sgmntrtgpfxsidflags{YType::str, "sgmntRtgPfxSidFlags"},
    sgmntrtgmtid{YType::uint16, "sgmntRtgMtid"},
    sgmntrtgalgoname{YType::str, "sgmntRtgAlgoName"},
    sgmntrtgpfxsid{YType::int32, "sgmntRtgPfxSid"}
{

    yang_name = "SgmntRtgPfxSidRec-list"; yang_parent_name = "sid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::~SgmntRtgPfxSidRecList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::has_data() const
{
    if (is_presence_container) return true;
    return sgmntrtgalgo.is_set
	|| sgmntrtgpfxsidflags.is_set
	|| sgmntrtgmtid.is_set
	|| sgmntrtgalgoname.is_set
	|| sgmntrtgpfxsid.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgmntrtgalgo.yfilter)
	|| ydk::is_set(sgmntrtgpfxsidflags.yfilter)
	|| ydk::is_set(sgmntrtgmtid.yfilter)
	|| ydk::is_set(sgmntrtgalgoname.yfilter)
	|| ydk::is_set(sgmntrtgpfxsid.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SgmntRtgPfxSidRec-list";
    ADD_KEY_TOKEN(sgmntrtgalgo, "sgmntRtgAlgo");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgmntrtgalgo.is_set || is_set(sgmntrtgalgo.yfilter)) leaf_name_data.push_back(sgmntrtgalgo.get_name_leafdata());
    if (sgmntrtgpfxsidflags.is_set || is_set(sgmntrtgpfxsidflags.yfilter)) leaf_name_data.push_back(sgmntrtgpfxsidflags.get_name_leafdata());
    if (sgmntrtgmtid.is_set || is_set(sgmntrtgmtid.yfilter)) leaf_name_data.push_back(sgmntrtgmtid.get_name_leafdata());
    if (sgmntrtgalgoname.is_set || is_set(sgmntrtgalgoname.yfilter)) leaf_name_data.push_back(sgmntrtgalgoname.get_name_leafdata());
    if (sgmntrtgpfxsid.is_set || is_set(sgmntrtgpfxsid.yfilter)) leaf_name_data.push_back(sgmntrtgpfxsid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgmntRtgAlgo")
    {
        sgmntrtgalgo = value;
        sgmntrtgalgo.value_namespace = name_space;
        sgmntrtgalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgPfxSidFlags")
    {
        sgmntrtgpfxsidflags = value;
        sgmntrtgpfxsidflags.value_namespace = name_space;
        sgmntrtgpfxsidflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMtid")
    {
        sgmntrtgmtid = value;
        sgmntrtgmtid.value_namespace = name_space;
        sgmntrtgmtid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgAlgoName")
    {
        sgmntrtgalgoname = value;
        sgmntrtgalgoname.value_namespace = name_space;
        sgmntrtgalgoname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgPfxSid")
    {
        sgmntrtgpfxsid = value;
        sgmntrtgpfxsid.value_namespace = name_space;
        sgmntrtgpfxsid.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgmntRtgAlgo")
    {
        sgmntrtgalgo.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgPfxSidFlags")
    {
        sgmntrtgpfxsidflags.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMtid")
    {
        sgmntrtgmtid.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgAlgoName")
    {
        sgmntrtgalgoname.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgPfxSid")
    {
        sgmntrtgpfxsid.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgmntRtgAlgo" || name == "sgmntRtgPfxSidFlags" || name == "sgmntRtgMtid" || name == "sgmntRtgAlgoName" || name == "sgmntRtgPfxSid")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::EllItems()
    :
    linktype{YType::enumeration, "linkType"},
    linkid{YType::str, "linkId"},
    linkdata{YType::str, "linkData"}
        ,
    sid_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems>())
{
    sid_items->parent = this;

    yang_name = "ell-items"; yang_parent_name = "LsaRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::~EllItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::has_data() const
{
    if (is_presence_container) return true;
    return linktype.is_set
	|| linkid.is_set
	|| linkdata.is_set
	|| (sid_items !=  nullptr && sid_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(linktype.yfilter)
	|| ydk::is_set(linkid.yfilter)
	|| ydk::is_set(linkdata.yfilter)
	|| (sid_items !=  nullptr && sid_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ell-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (linktype.is_set || is_set(linktype.yfilter)) leaf_name_data.push_back(linktype.get_name_leafdata());
    if (linkid.is_set || is_set(linkid.yfilter)) leaf_name_data.push_back(linkid.get_name_leafdata());
    if (linkdata.is_set || is_set(linkdata.yfilter)) leaf_name_data.push_back(linkdata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-items")
    {
        if(sid_items == nullptr)
        {
            sid_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems>();
        }
        return sid_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_items != nullptr)
    {
        _children["sid-items"] = sid_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "linkType")
    {
        linktype = value;
        linktype.value_namespace = name_space;
        linktype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkId")
    {
        linkid = value;
        linkid.value_namespace = name_space;
        linkid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkData")
    {
        linkdata = value;
        linkdata.value_namespace = name_space;
        linkdata.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "linkType")
    {
        linktype.yfilter = yfilter;
    }
    if(value_path == "linkId")
    {
        linkid.yfilter = yfilter;
    }
    if(value_path == "linkData")
    {
        linkdata.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-items" || name == "linkType" || name == "linkId" || name == "linkData")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SidItems()
    :
    sgmntrtgadjsidrec_list(this, {"sgmntrtgadjsidlabel"})
{

    yang_name = "sid-items"; yang_parent_name = "ell-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::~SidItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sgmntrtgadjsidrec_list.len(); index++)
    {
        if(sgmntrtgadjsidrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::has_operation() const
{
    for (std::size_t index=0; index<sgmntrtgadjsidrec_list.len(); index++)
    {
        if(sgmntrtgadjsidrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SgmntRtgAdjSidRec-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList>();
        ent_->parent = this;
        sgmntrtgadjsidrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sgmntrtgadjsidrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SgmntRtgAdjSidRec-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::SgmntRtgAdjSidRecList()
    :
    sgmntrtgadjsidlabel{YType::uint32, "sgmntRtgAdjSidLabel"},
    adjsidtlvtype{YType::enumeration, "adjSidTlvType"},
    sgmntrtgmtid{YType::uint16, "sgmntRtgMtid"},
    sgmntrtgweight{YType::uint16, "sgmntRtgWeight"},
    sgmntrtgadjsidflags{YType::str, "sgmntRtgAdjSidFlags"},
    sgmntrtgadjsidnbrid{YType::str, "sgmntRtgAdjSidNbrId"}
{

    yang_name = "SgmntRtgAdjSidRec-list"; yang_parent_name = "sid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::~SgmntRtgAdjSidRecList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::has_data() const
{
    if (is_presence_container) return true;
    return sgmntrtgadjsidlabel.is_set
	|| adjsidtlvtype.is_set
	|| sgmntrtgmtid.is_set
	|| sgmntrtgweight.is_set
	|| sgmntrtgadjsidflags.is_set
	|| sgmntrtgadjsidnbrid.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgmntrtgadjsidlabel.yfilter)
	|| ydk::is_set(adjsidtlvtype.yfilter)
	|| ydk::is_set(sgmntrtgmtid.yfilter)
	|| ydk::is_set(sgmntrtgweight.yfilter)
	|| ydk::is_set(sgmntrtgadjsidflags.yfilter)
	|| ydk::is_set(sgmntrtgadjsidnbrid.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SgmntRtgAdjSidRec-list";
    ADD_KEY_TOKEN(sgmntrtgadjsidlabel, "sgmntRtgAdjSidLabel");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgmntrtgadjsidlabel.is_set || is_set(sgmntrtgadjsidlabel.yfilter)) leaf_name_data.push_back(sgmntrtgadjsidlabel.get_name_leafdata());
    if (adjsidtlvtype.is_set || is_set(adjsidtlvtype.yfilter)) leaf_name_data.push_back(adjsidtlvtype.get_name_leafdata());
    if (sgmntrtgmtid.is_set || is_set(sgmntrtgmtid.yfilter)) leaf_name_data.push_back(sgmntrtgmtid.get_name_leafdata());
    if (sgmntrtgweight.is_set || is_set(sgmntrtgweight.yfilter)) leaf_name_data.push_back(sgmntrtgweight.get_name_leafdata());
    if (sgmntrtgadjsidflags.is_set || is_set(sgmntrtgadjsidflags.yfilter)) leaf_name_data.push_back(sgmntrtgadjsidflags.get_name_leafdata());
    if (sgmntrtgadjsidnbrid.is_set || is_set(sgmntrtgadjsidnbrid.yfilter)) leaf_name_data.push_back(sgmntrtgadjsidnbrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgmntRtgAdjSidLabel")
    {
        sgmntrtgadjsidlabel = value;
        sgmntrtgadjsidlabel.value_namespace = name_space;
        sgmntrtgadjsidlabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjSidTlvType")
    {
        adjsidtlvtype = value;
        adjsidtlvtype.value_namespace = name_space;
        adjsidtlvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMtid")
    {
        sgmntrtgmtid = value;
        sgmntrtgmtid.value_namespace = name_space;
        sgmntrtgmtid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgWeight")
    {
        sgmntrtgweight = value;
        sgmntrtgweight.value_namespace = name_space;
        sgmntrtgweight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgAdjSidFlags")
    {
        sgmntrtgadjsidflags = value;
        sgmntrtgadjsidflags.value_namespace = name_space;
        sgmntrtgadjsidflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgAdjSidNbrId")
    {
        sgmntrtgadjsidnbrid = value;
        sgmntrtgadjsidnbrid.value_namespace = name_space;
        sgmntrtgadjsidnbrid.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgmntRtgAdjSidLabel")
    {
        sgmntrtgadjsidlabel.yfilter = yfilter;
    }
    if(value_path == "adjSidTlvType")
    {
        adjsidtlvtype.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMtid")
    {
        sgmntrtgmtid.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgWeight")
    {
        sgmntrtgweight.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgAdjSidFlags")
    {
        sgmntrtgadjsidflags.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgAdjSidNbrId")
    {
        sgmntrtgadjsidnbrid.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgmntRtgAdjSidLabel" || name == "adjSidTlvType" || name == "sgmntRtgMtid" || name == "sgmntRtgWeight" || name == "sgmntRtgAdjSidFlags" || name == "sgmntRtgAdjSidNbrId")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RtItems()
    :
    route_list(this, {"pfx"})
{

    yang_name = "rt-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::~RtItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList>();
        ent_->parent = this;
        route_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::get_children() const
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::RouteList()
    :
    pfx{YType::str, "pfx"},
    name{YType::str, "name"},
    patht{YType::enumeration, "pathT"},
    area{YType::str, "area"},
    flags{YType::str, "flags"},
    ucastcost{YType::uint16, "ucastCost"},
    mcastcost{YType::uint16, "mcastCost"},
    tag{YType::uint32, "tag"},
    dist{YType::uint8, "dist"},
    sgmntrtgmplssid{YType::uint32, "sgmntRtgMplsSid"},
    sgmntrtgmplsinlabel{YType::uint32, "sgmntRtgMplsInLabel"}
        ,
    ucnh_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems>())
    , mcnh_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems>())
{
    ucnh_items->parent = this;
    mcnh_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::~RouteList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| name.is_set
	|| patht.is_set
	|| area.is_set
	|| flags.is_set
	|| ucastcost.is_set
	|| mcastcost.is_set
	|| tag.is_set
	|| dist.is_set
	|| sgmntrtgmplssid.is_set
	|| sgmntrtgmplsinlabel.is_set
	|| (ucnh_items !=  nullptr && ucnh_items->has_data())
	|| (mcnh_items !=  nullptr && mcnh_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(patht.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(ucastcost.yfilter)
	|| ydk::is_set(mcastcost.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(dist.yfilter)
	|| ydk::is_set(sgmntrtgmplssid.yfilter)
	|| ydk::is_set(sgmntrtgmplsinlabel.yfilter)
	|| (ucnh_items !=  nullptr && ucnh_items->has_operation())
	|| (mcnh_items !=  nullptr && mcnh_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (patht.is_set || is_set(patht.yfilter)) leaf_name_data.push_back(patht.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (ucastcost.is_set || is_set(ucastcost.yfilter)) leaf_name_data.push_back(ucastcost.get_name_leafdata());
    if (mcastcost.is_set || is_set(mcastcost.yfilter)) leaf_name_data.push_back(mcastcost.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (dist.is_set || is_set(dist.yfilter)) leaf_name_data.push_back(dist.get_name_leafdata());
    if (sgmntrtgmplssid.is_set || is_set(sgmntrtgmplssid.yfilter)) leaf_name_data.push_back(sgmntrtgmplssid.get_name_leafdata());
    if (sgmntrtgmplsinlabel.is_set || is_set(sgmntrtgmplsinlabel.yfilter)) leaf_name_data.push_back(sgmntrtgmplsinlabel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ucnh-items")
    {
        if(ucnh_items == nullptr)
        {
            ucnh_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems>();
        }
        return ucnh_items;
    }

    if(child_yang_name == "mcnh-items")
    {
        if(mcnh_items == nullptr)
        {
            mcnh_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems>();
        }
        return mcnh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ucnh_items != nullptr)
    {
        _children["ucnh-items"] = ucnh_items;
    }

    if(mcnh_items != nullptr)
    {
        _children["mcnh-items"] = mcnh_items;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "pathT")
    {
        patht = value;
        patht.value_namespace = name_space;
        patht.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastCost")
    {
        ucastcost = value;
        ucastcost.value_namespace = name_space;
        ucastcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastCost")
    {
        mcastcost = value;
        mcastcost.value_namespace = name_space;
        mcastcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist")
    {
        dist = value;
        dist.value_namespace = name_space;
        dist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMplsSid")
    {
        sgmntrtgmplssid = value;
        sgmntrtgmplssid.value_namespace = name_space;
        sgmntrtgmplssid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMplsInLabel")
    {
        sgmntrtgmplsinlabel = value;
        sgmntrtgmplsinlabel.value_namespace = name_space;
        sgmntrtgmplsinlabel.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pathT")
    {
        patht.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "ucastCost")
    {
        ucastcost.yfilter = yfilter;
    }
    if(value_path == "mcastCost")
    {
        mcastcost.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "dist")
    {
        dist.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMplsSid")
    {
        sgmntrtgmplssid.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMplsInLabel")
    {
        sgmntrtgmplsinlabel.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ucnh-items" || name == "mcnh-items" || name == "pfx" || name == "name" || name == "pathT" || name == "area" || name == "flags" || name == "ucastCost" || name == "mcastCost" || name == "tag" || name == "dist" || name == "sgmntRtgMplsSid" || name == "sgmntRtgMplsInLabel")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcnhItems()
    :
    ucnexthop_list(this, {"if_", "addr"})
{

    yang_name = "ucnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::~UcnhItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_operation() const
{
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UcNexthop-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList>();
        ent_->parent = this;
        ucnexthop_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ucnexthop_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UcNexthop-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::UcNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"},
    sgmntrtgmplsoutlabel{YType::uint32, "sgmntRtgMplsOutLabel"}
{

    yang_name = "UcNexthop-list"; yang_parent_name = "ucnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::~UcNexthopList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set
	|| sgmntrtgmplsoutlabel.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(sgmntrtgmplsoutlabel.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UcNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (sgmntrtgmplsoutlabel.is_set || is_set(sgmntrtgmplsoutlabel.yfilter)) leaf_name_data.push_back(sgmntrtgmplsoutlabel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMplsOutLabel")
    {
        sgmntrtgmplsoutlabel = value;
        sgmntrtgmplsoutlabel.value_namespace = name_space;
        sgmntrtgmplsoutlabel.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMplsOutLabel")
    {
        sgmntrtgmplsoutlabel.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags" || name == "sgmntRtgMplsOutLabel")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McnhItems()
    :
    mcnexthop_list(this, {"if_", "addr"})
{

    yang_name = "mcnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::~McnhItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::has_operation() const
{
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McNexthop-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList>();
        ent_->parent = this;
        mcnexthop_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mcnexthop_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McNexthop-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::McNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"},
    sgmntrtgmplsoutlabel{YType::uint32, "sgmntRtgMplsOutLabel"}
{

    yang_name = "McNexthop-list"; yang_parent_name = "mcnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::~McNexthopList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set
	|| sgmntrtgmplsoutlabel.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(sgmntrtgmplsoutlabel.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (sgmntrtgmplsoutlabel.is_set || is_set(sgmntrtgmplsoutlabel.yfilter)) leaf_name_data.push_back(sgmntrtgmplsoutlabel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgmntRtgMplsOutLabel")
    {
        sgmntrtgmplsoutlabel = value;
        sgmntrtgmplsoutlabel.value_namespace = name_space;
        sgmntrtgmplsoutlabel.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "sgmntRtgMplsOutLabel")
    {
        sgmntrtgmplsoutlabel.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags" || name == "sgmntRtgMplsOutLabel")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::IfstatsItems()
    :
    evcnt{YType::uint32, "evCnt"},
    lsacnt{YType::uint32, "lsaCnt"},
    peercnt{YType::uint32, "peerCnt"},
    floodtopeercnt{YType::uint32, "floodToPeerCnt"},
    adjcnt{YType::uint32, "adjCnt"},
    grhelperpeercnt{YType::uint32, "grHelperPeerCnt"}
{

    yang_name = "ifstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::~IfstatsItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return evcnt.is_set
	|| lsacnt.is_set
	|| peercnt.is_set
	|| floodtopeercnt.is_set
	|| adjcnt.is_set
	|| grhelperpeercnt.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evcnt.yfilter)
	|| ydk::is_set(lsacnt.yfilter)
	|| ydk::is_set(peercnt.yfilter)
	|| ydk::is_set(floodtopeercnt.yfilter)
	|| ydk::is_set(adjcnt.yfilter)
	|| ydk::is_set(grhelperpeercnt.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evcnt.is_set || is_set(evcnt.yfilter)) leaf_name_data.push_back(evcnt.get_name_leafdata());
    if (lsacnt.is_set || is_set(lsacnt.yfilter)) leaf_name_data.push_back(lsacnt.get_name_leafdata());
    if (peercnt.is_set || is_set(peercnt.yfilter)) leaf_name_data.push_back(peercnt.get_name_leafdata());
    if (floodtopeercnt.is_set || is_set(floodtopeercnt.yfilter)) leaf_name_data.push_back(floodtopeercnt.get_name_leafdata());
    if (adjcnt.is_set || is_set(adjcnt.yfilter)) leaf_name_data.push_back(adjcnt.get_name_leafdata());
    if (grhelperpeercnt.is_set || is_set(grhelperpeercnt.yfilter)) leaf_name_data.push_back(grhelperpeercnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evCnt")
    {
        evcnt = value;
        evcnt.value_namespace = name_space;
        evcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaCnt")
    {
        lsacnt = value;
        lsacnt.value_namespace = name_space;
        lsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerCnt")
    {
        peercnt = value;
        peercnt.value_namespace = name_space;
        peercnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodToPeerCnt")
    {
        floodtopeercnt = value;
        floodtopeercnt.value_namespace = name_space;
        floodtopeercnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjCnt")
    {
        adjcnt = value;
        adjcnt.value_namespace = name_space;
        adjcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grHelperPeerCnt")
    {
        grhelperpeercnt = value;
        grhelperpeercnt.value_namespace = name_space;
        grhelperpeercnt.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evCnt")
    {
        evcnt.yfilter = yfilter;
    }
    if(value_path == "lsaCnt")
    {
        lsacnt.yfilter = yfilter;
    }
    if(value_path == "peerCnt")
    {
        peercnt.yfilter = yfilter;
    }
    if(value_path == "floodToPeerCnt")
    {
        floodtopeercnt.yfilter = yfilter;
    }
    if(value_path == "adjCnt")
    {
        adjcnt.yfilter = yfilter;
    }
    if(value_path == "grHelperPeerCnt")
    {
        grhelperpeercnt.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evCnt" || name == "lsaCnt" || name == "peerCnt" || name == "floodToPeerCnt" || name == "adjCnt" || name == "grHelperPeerCnt")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiareaItems()
    :
    multiarea_list(this, {"multiareaid"})
{

    yang_name = "multiarea-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::~MultiareaItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<multiarea_list.len(); index++)
    {
        if(multiarea_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::has_operation() const
{
    for (std::size_t index=0; index<multiarea_list.len(); index++)
    {
        if(multiarea_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multiarea-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MultiArea-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList>();
        ent_->parent = this;
        multiarea_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : multiarea_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MultiArea-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::MultiAreaList()
    :
    multiareaid{YType::str, "multiareaid"}
{

    yang_name = "MultiArea-list"; yang_parent_name = "multiarea-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::~MultiAreaList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::has_data() const
{
    if (is_presence_container) return true;
    return multiareaid.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multiareaid.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MultiArea-list";
    ADD_KEY_TOKEN(multiareaid, "multiareaid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiareaid.is_set || is_set(multiareaid.yfilter)) leaf_name_data.push_back(multiareaid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multiareaid")
    {
        multiareaid = value;
        multiareaid.value_namespace = name_space;
        multiareaid.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multiareaid")
    {
        multiareaid.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multiareaid")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::TrstatsItems()
    :
    totalpktsrcvd{YType::uint32, "totalPktsRcvd"},
    hellopktsrcvd{YType::uint32, "helloPktsRcvd"},
    dbdpktsrcvd{YType::uint32, "dbdPktsRcvd"},
    lsreqpktsrcvd{YType::uint32, "lsReqPktsRcvd"},
    lsupdpktsrcvd{YType::uint32, "lsUpdPktsRcvd"},
    lsackpktsrcvd{YType::uint32, "lsAckPktsRcvd"},
    rcvdpktsdropped{YType::uint32, "rcvdPktsDropped"},
    errpktsrcvd{YType::uint32, "errPktsRcvd"},
    errhellopktsrcvd{YType::uint32, "errHelloPktsRcvd"},
    errdbdpktsrcvd{YType::uint32, "errDbdPktsRcvd"},
    errlsreqpktsrcvd{YType::uint32, "errLsReqPktsRcvd"},
    errlsupdpktsrcvd{YType::uint32, "errLsUpdPktsRcvd"},
    errlsackpktsrcvd{YType::uint32, "errLsAckPktsRcvd"},
    unknownpktsrcvd{YType::uint32, "unknownPktsRcvd"},
    duprtridpktsrcvd{YType::uint32, "dupRtrIdPktsRcvd"},
    dupsrcaddrpktsrcvd{YType::uint32, "dupSrcAddrPktsRcvd"},
    wrongareapktsrcvd{YType::uint32, "wrongAreaPktsRcvd"},
    invalidsrcaddrpktsrcvd{YType::uint32, "invalidSrcAddrPktsRcvd"},
    invaliddestaddrpktsrcvd{YType::uint32, "invalidDestAddrPktsRcvd"},
    badcrcpktsrcvd{YType::uint32, "badCRCPktsRcvd"},
    badversionpktsrcvd{YType::uint32, "badVersionPktsRcvd"},
    badresvfieldpktsrcvd{YType::uint32, "badResvFieldPktsRcvd"},
    peerrtridchgdpktsrcvd{YType::uint32, "peerRtrIdChgdPktsRcvd"},
    peernotfoundpktsrcvd{YType::uint32, "peerNotFoundPktsRcvd"},
    badauthpktsrcvd{YType::uint32, "badAuthPktsRcvd"},
    badlenpktsrcvd{YType::uint32, "badLenPktsRcvd"},
    passiveintfpktsrcvd{YType::uint32, "passiveIntfPktsRcvd"},
    noospfintfpktsrcvd{YType::uint32, "noOspfIntfPktsRcvd"},
    rcvdlsapktsignored{YType::uint32, "rcvdLsaPktsIgnored"},
    droppedlsapktswhilespf{YType::uint32, "droppedLsaPktsWhileSPF"},
    droppedlsapktswhilegr{YType::uint32, "droppedLsaPktsWhileGR"},
    totalpktssent{YType::uint32, "totalPktsSent"},
    hellopktssent{YType::uint32, "helloPktsSent"},
    dbdpktssent{YType::uint32, "dbdPktsSent"},
    lsreqpktssent{YType::uint32, "lsReqPktsSent"},
    lsupdpktssent{YType::uint32, "lsUpdPktsSent"},
    lsackpktssent{YType::uint32, "lsAckPktsSent"},
    droppedsendpkts{YType::uint32, "droppedSendPkts"},
    errsendpkts{YType::uint32, "errSendPkts"},
    lsufirsttxpkts{YType::uint32, "lsuFirstTxPkts"},
    lsurexmitpkts{YType::uint32, "lsuRexmitPkts"},
    lsuforlsreqpkts{YType::uint32, "lsuForLsreqPkts"},
    lsupeertxpkts{YType::uint32, "lsuPeerTxPkts"},
    floodpktsendipthrottle{YType::uint32, "floodPktSendIpThrottle"},
    floodpktsendtokenthrottle{YType::uint32, "floodPktSendTokenThrottle"},
    laststatsclearts{YType::str, "lastStatsClearTs"}
{

    yang_name = "trstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::~TrstatsItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return totalpktsrcvd.is_set
	|| hellopktsrcvd.is_set
	|| dbdpktsrcvd.is_set
	|| lsreqpktsrcvd.is_set
	|| lsupdpktsrcvd.is_set
	|| lsackpktsrcvd.is_set
	|| rcvdpktsdropped.is_set
	|| errpktsrcvd.is_set
	|| errhellopktsrcvd.is_set
	|| errdbdpktsrcvd.is_set
	|| errlsreqpktsrcvd.is_set
	|| errlsupdpktsrcvd.is_set
	|| errlsackpktsrcvd.is_set
	|| unknownpktsrcvd.is_set
	|| duprtridpktsrcvd.is_set
	|| dupsrcaddrpktsrcvd.is_set
	|| wrongareapktsrcvd.is_set
	|| invalidsrcaddrpktsrcvd.is_set
	|| invaliddestaddrpktsrcvd.is_set
	|| badcrcpktsrcvd.is_set
	|| badversionpktsrcvd.is_set
	|| badresvfieldpktsrcvd.is_set
	|| peerrtridchgdpktsrcvd.is_set
	|| peernotfoundpktsrcvd.is_set
	|| badauthpktsrcvd.is_set
	|| badlenpktsrcvd.is_set
	|| passiveintfpktsrcvd.is_set
	|| noospfintfpktsrcvd.is_set
	|| rcvdlsapktsignored.is_set
	|| droppedlsapktswhilespf.is_set
	|| droppedlsapktswhilegr.is_set
	|| totalpktssent.is_set
	|| hellopktssent.is_set
	|| dbdpktssent.is_set
	|| lsreqpktssent.is_set
	|| lsupdpktssent.is_set
	|| lsackpktssent.is_set
	|| droppedsendpkts.is_set
	|| errsendpkts.is_set
	|| lsufirsttxpkts.is_set
	|| lsurexmitpkts.is_set
	|| lsuforlsreqpkts.is_set
	|| lsupeertxpkts.is_set
	|| floodpktsendipthrottle.is_set
	|| floodpktsendtokenthrottle.is_set
	|| laststatsclearts.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totalpktsrcvd.yfilter)
	|| ydk::is_set(hellopktsrcvd.yfilter)
	|| ydk::is_set(dbdpktsrcvd.yfilter)
	|| ydk::is_set(lsreqpktsrcvd.yfilter)
	|| ydk::is_set(lsupdpktsrcvd.yfilter)
	|| ydk::is_set(lsackpktsrcvd.yfilter)
	|| ydk::is_set(rcvdpktsdropped.yfilter)
	|| ydk::is_set(errpktsrcvd.yfilter)
	|| ydk::is_set(errhellopktsrcvd.yfilter)
	|| ydk::is_set(errdbdpktsrcvd.yfilter)
	|| ydk::is_set(errlsreqpktsrcvd.yfilter)
	|| ydk::is_set(errlsupdpktsrcvd.yfilter)
	|| ydk::is_set(errlsackpktsrcvd.yfilter)
	|| ydk::is_set(unknownpktsrcvd.yfilter)
	|| ydk::is_set(duprtridpktsrcvd.yfilter)
	|| ydk::is_set(dupsrcaddrpktsrcvd.yfilter)
	|| ydk::is_set(wrongareapktsrcvd.yfilter)
	|| ydk::is_set(invalidsrcaddrpktsrcvd.yfilter)
	|| ydk::is_set(invaliddestaddrpktsrcvd.yfilter)
	|| ydk::is_set(badcrcpktsrcvd.yfilter)
	|| ydk::is_set(badversionpktsrcvd.yfilter)
	|| ydk::is_set(badresvfieldpktsrcvd.yfilter)
	|| ydk::is_set(peerrtridchgdpktsrcvd.yfilter)
	|| ydk::is_set(peernotfoundpktsrcvd.yfilter)
	|| ydk::is_set(badauthpktsrcvd.yfilter)
	|| ydk::is_set(badlenpktsrcvd.yfilter)
	|| ydk::is_set(passiveintfpktsrcvd.yfilter)
	|| ydk::is_set(noospfintfpktsrcvd.yfilter)
	|| ydk::is_set(rcvdlsapktsignored.yfilter)
	|| ydk::is_set(droppedlsapktswhilespf.yfilter)
	|| ydk::is_set(droppedlsapktswhilegr.yfilter)
	|| ydk::is_set(totalpktssent.yfilter)
	|| ydk::is_set(hellopktssent.yfilter)
	|| ydk::is_set(dbdpktssent.yfilter)
	|| ydk::is_set(lsreqpktssent.yfilter)
	|| ydk::is_set(lsupdpktssent.yfilter)
	|| ydk::is_set(lsackpktssent.yfilter)
	|| ydk::is_set(droppedsendpkts.yfilter)
	|| ydk::is_set(errsendpkts.yfilter)
	|| ydk::is_set(lsufirsttxpkts.yfilter)
	|| ydk::is_set(lsurexmitpkts.yfilter)
	|| ydk::is_set(lsuforlsreqpkts.yfilter)
	|| ydk::is_set(lsupeertxpkts.yfilter)
	|| ydk::is_set(floodpktsendipthrottle.yfilter)
	|| ydk::is_set(floodpktsendtokenthrottle.yfilter)
	|| ydk::is_set(laststatsclearts.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (totalpktsrcvd.is_set || is_set(totalpktsrcvd.yfilter)) leaf_name_data.push_back(totalpktsrcvd.get_name_leafdata());
    if (hellopktsrcvd.is_set || is_set(hellopktsrcvd.yfilter)) leaf_name_data.push_back(hellopktsrcvd.get_name_leafdata());
    if (dbdpktsrcvd.is_set || is_set(dbdpktsrcvd.yfilter)) leaf_name_data.push_back(dbdpktsrcvd.get_name_leafdata());
    if (lsreqpktsrcvd.is_set || is_set(lsreqpktsrcvd.yfilter)) leaf_name_data.push_back(lsreqpktsrcvd.get_name_leafdata());
    if (lsupdpktsrcvd.is_set || is_set(lsupdpktsrcvd.yfilter)) leaf_name_data.push_back(lsupdpktsrcvd.get_name_leafdata());
    if (lsackpktsrcvd.is_set || is_set(lsackpktsrcvd.yfilter)) leaf_name_data.push_back(lsackpktsrcvd.get_name_leafdata());
    if (rcvdpktsdropped.is_set || is_set(rcvdpktsdropped.yfilter)) leaf_name_data.push_back(rcvdpktsdropped.get_name_leafdata());
    if (errpktsrcvd.is_set || is_set(errpktsrcvd.yfilter)) leaf_name_data.push_back(errpktsrcvd.get_name_leafdata());
    if (errhellopktsrcvd.is_set || is_set(errhellopktsrcvd.yfilter)) leaf_name_data.push_back(errhellopktsrcvd.get_name_leafdata());
    if (errdbdpktsrcvd.is_set || is_set(errdbdpktsrcvd.yfilter)) leaf_name_data.push_back(errdbdpktsrcvd.get_name_leafdata());
    if (errlsreqpktsrcvd.is_set || is_set(errlsreqpktsrcvd.yfilter)) leaf_name_data.push_back(errlsreqpktsrcvd.get_name_leafdata());
    if (errlsupdpktsrcvd.is_set || is_set(errlsupdpktsrcvd.yfilter)) leaf_name_data.push_back(errlsupdpktsrcvd.get_name_leafdata());
    if (errlsackpktsrcvd.is_set || is_set(errlsackpktsrcvd.yfilter)) leaf_name_data.push_back(errlsackpktsrcvd.get_name_leafdata());
    if (unknownpktsrcvd.is_set || is_set(unknownpktsrcvd.yfilter)) leaf_name_data.push_back(unknownpktsrcvd.get_name_leafdata());
    if (duprtridpktsrcvd.is_set || is_set(duprtridpktsrcvd.yfilter)) leaf_name_data.push_back(duprtridpktsrcvd.get_name_leafdata());
    if (dupsrcaddrpktsrcvd.is_set || is_set(dupsrcaddrpktsrcvd.yfilter)) leaf_name_data.push_back(dupsrcaddrpktsrcvd.get_name_leafdata());
    if (wrongareapktsrcvd.is_set || is_set(wrongareapktsrcvd.yfilter)) leaf_name_data.push_back(wrongareapktsrcvd.get_name_leafdata());
    if (invalidsrcaddrpktsrcvd.is_set || is_set(invalidsrcaddrpktsrcvd.yfilter)) leaf_name_data.push_back(invalidsrcaddrpktsrcvd.get_name_leafdata());
    if (invaliddestaddrpktsrcvd.is_set || is_set(invaliddestaddrpktsrcvd.yfilter)) leaf_name_data.push_back(invaliddestaddrpktsrcvd.get_name_leafdata());
    if (badcrcpktsrcvd.is_set || is_set(badcrcpktsrcvd.yfilter)) leaf_name_data.push_back(badcrcpktsrcvd.get_name_leafdata());
    if (badversionpktsrcvd.is_set || is_set(badversionpktsrcvd.yfilter)) leaf_name_data.push_back(badversionpktsrcvd.get_name_leafdata());
    if (badresvfieldpktsrcvd.is_set || is_set(badresvfieldpktsrcvd.yfilter)) leaf_name_data.push_back(badresvfieldpktsrcvd.get_name_leafdata());
    if (peerrtridchgdpktsrcvd.is_set || is_set(peerrtridchgdpktsrcvd.yfilter)) leaf_name_data.push_back(peerrtridchgdpktsrcvd.get_name_leafdata());
    if (peernotfoundpktsrcvd.is_set || is_set(peernotfoundpktsrcvd.yfilter)) leaf_name_data.push_back(peernotfoundpktsrcvd.get_name_leafdata());
    if (badauthpktsrcvd.is_set || is_set(badauthpktsrcvd.yfilter)) leaf_name_data.push_back(badauthpktsrcvd.get_name_leafdata());
    if (badlenpktsrcvd.is_set || is_set(badlenpktsrcvd.yfilter)) leaf_name_data.push_back(badlenpktsrcvd.get_name_leafdata());
    if (passiveintfpktsrcvd.is_set || is_set(passiveintfpktsrcvd.yfilter)) leaf_name_data.push_back(passiveintfpktsrcvd.get_name_leafdata());
    if (noospfintfpktsrcvd.is_set || is_set(noospfintfpktsrcvd.yfilter)) leaf_name_data.push_back(noospfintfpktsrcvd.get_name_leafdata());
    if (rcvdlsapktsignored.is_set || is_set(rcvdlsapktsignored.yfilter)) leaf_name_data.push_back(rcvdlsapktsignored.get_name_leafdata());
    if (droppedlsapktswhilespf.is_set || is_set(droppedlsapktswhilespf.yfilter)) leaf_name_data.push_back(droppedlsapktswhilespf.get_name_leafdata());
    if (droppedlsapktswhilegr.is_set || is_set(droppedlsapktswhilegr.yfilter)) leaf_name_data.push_back(droppedlsapktswhilegr.get_name_leafdata());
    if (totalpktssent.is_set || is_set(totalpktssent.yfilter)) leaf_name_data.push_back(totalpktssent.get_name_leafdata());
    if (hellopktssent.is_set || is_set(hellopktssent.yfilter)) leaf_name_data.push_back(hellopktssent.get_name_leafdata());
    if (dbdpktssent.is_set || is_set(dbdpktssent.yfilter)) leaf_name_data.push_back(dbdpktssent.get_name_leafdata());
    if (lsreqpktssent.is_set || is_set(lsreqpktssent.yfilter)) leaf_name_data.push_back(lsreqpktssent.get_name_leafdata());
    if (lsupdpktssent.is_set || is_set(lsupdpktssent.yfilter)) leaf_name_data.push_back(lsupdpktssent.get_name_leafdata());
    if (lsackpktssent.is_set || is_set(lsackpktssent.yfilter)) leaf_name_data.push_back(lsackpktssent.get_name_leafdata());
    if (droppedsendpkts.is_set || is_set(droppedsendpkts.yfilter)) leaf_name_data.push_back(droppedsendpkts.get_name_leafdata());
    if (errsendpkts.is_set || is_set(errsendpkts.yfilter)) leaf_name_data.push_back(errsendpkts.get_name_leafdata());
    if (lsufirsttxpkts.is_set || is_set(lsufirsttxpkts.yfilter)) leaf_name_data.push_back(lsufirsttxpkts.get_name_leafdata());
    if (lsurexmitpkts.is_set || is_set(lsurexmitpkts.yfilter)) leaf_name_data.push_back(lsurexmitpkts.get_name_leafdata());
    if (lsuforlsreqpkts.is_set || is_set(lsuforlsreqpkts.yfilter)) leaf_name_data.push_back(lsuforlsreqpkts.get_name_leafdata());
    if (lsupeertxpkts.is_set || is_set(lsupeertxpkts.yfilter)) leaf_name_data.push_back(lsupeertxpkts.get_name_leafdata());
    if (floodpktsendipthrottle.is_set || is_set(floodpktsendipthrottle.yfilter)) leaf_name_data.push_back(floodpktsendipthrottle.get_name_leafdata());
    if (floodpktsendtokenthrottle.is_set || is_set(floodpktsendtokenthrottle.yfilter)) leaf_name_data.push_back(floodpktsendtokenthrottle.get_name_leafdata());
    if (laststatsclearts.is_set || is_set(laststatsclearts.yfilter)) leaf_name_data.push_back(laststatsclearts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totalPktsRcvd")
    {
        totalpktsrcvd = value;
        totalpktsrcvd.value_namespace = name_space;
        totalpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPktsRcvd")
    {
        hellopktsrcvd = value;
        hellopktsrcvd.value_namespace = name_space;
        hellopktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdPktsRcvd")
    {
        dbdpktsrcvd = value;
        dbdpktsrcvd.value_namespace = name_space;
        dbdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsReqPktsRcvd")
    {
        lsreqpktsrcvd = value;
        lsreqpktsrcvd.value_namespace = name_space;
        lsreqpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsUpdPktsRcvd")
    {
        lsupdpktsrcvd = value;
        lsupdpktsrcvd.value_namespace = name_space;
        lsupdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsAckPktsRcvd")
    {
        lsackpktsrcvd = value;
        lsackpktsrcvd.value_namespace = name_space;
        lsackpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdPktsDropped")
    {
        rcvdpktsdropped = value;
        rcvdpktsdropped.value_namespace = name_space;
        rcvdpktsdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errPktsRcvd")
    {
        errpktsrcvd = value;
        errpktsrcvd.value_namespace = name_space;
        errpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errHelloPktsRcvd")
    {
        errhellopktsrcvd = value;
        errhellopktsrcvd.value_namespace = name_space;
        errhellopktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errDbdPktsRcvd")
    {
        errdbdpktsrcvd = value;
        errdbdpktsrcvd.value_namespace = name_space;
        errdbdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsReqPktsRcvd")
    {
        errlsreqpktsrcvd = value;
        errlsreqpktsrcvd.value_namespace = name_space;
        errlsreqpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsUpdPktsRcvd")
    {
        errlsupdpktsrcvd = value;
        errlsupdpktsrcvd.value_namespace = name_space;
        errlsupdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsAckPktsRcvd")
    {
        errlsackpktsrcvd = value;
        errlsackpktsrcvd.value_namespace = name_space;
        errlsackpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownPktsRcvd")
    {
        unknownpktsrcvd = value;
        unknownpktsrcvd.value_namespace = name_space;
        unknownpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupRtrIdPktsRcvd")
    {
        duprtridpktsrcvd = value;
        duprtridpktsrcvd.value_namespace = name_space;
        duprtridpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupSrcAddrPktsRcvd")
    {
        dupsrcaddrpktsrcvd = value;
        dupsrcaddrpktsrcvd.value_namespace = name_space;
        dupsrcaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrongAreaPktsRcvd")
    {
        wrongareapktsrcvd = value;
        wrongareapktsrcvd.value_namespace = name_space;
        wrongareapktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidSrcAddrPktsRcvd")
    {
        invalidsrcaddrpktsrcvd = value;
        invalidsrcaddrpktsrcvd.value_namespace = name_space;
        invalidsrcaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidDestAddrPktsRcvd")
    {
        invaliddestaddrpktsrcvd = value;
        invaliddestaddrpktsrcvd.value_namespace = name_space;
        invaliddestaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badCRCPktsRcvd")
    {
        badcrcpktsrcvd = value;
        badcrcpktsrcvd.value_namespace = name_space;
        badcrcpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badVersionPktsRcvd")
    {
        badversionpktsrcvd = value;
        badversionpktsrcvd.value_namespace = name_space;
        badversionpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badResvFieldPktsRcvd")
    {
        badresvfieldpktsrcvd = value;
        badresvfieldpktsrcvd.value_namespace = name_space;
        badresvfieldpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrIdChgdPktsRcvd")
    {
        peerrtridchgdpktsrcvd = value;
        peerrtridchgdpktsrcvd.value_namespace = name_space;
        peerrtridchgdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerNotFoundPktsRcvd")
    {
        peernotfoundpktsrcvd = value;
        peernotfoundpktsrcvd.value_namespace = name_space;
        peernotfoundpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badAuthPktsRcvd")
    {
        badauthpktsrcvd = value;
        badauthpktsrcvd.value_namespace = name_space;
        badauthpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badLenPktsRcvd")
    {
        badlenpktsrcvd = value;
        badlenpktsrcvd.value_namespace = name_space;
        badlenpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passiveIntfPktsRcvd")
    {
        passiveintfpktsrcvd = value;
        passiveintfpktsrcvd.value_namespace = name_space;
        passiveintfpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOspfIntfPktsRcvd")
    {
        noospfintfpktsrcvd = value;
        noospfintfpktsrcvd.value_namespace = name_space;
        noospfintfpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLsaPktsIgnored")
    {
        rcvdlsapktsignored = value;
        rcvdlsapktsignored.value_namespace = name_space;
        rcvdlsapktsignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedLsaPktsWhileSPF")
    {
        droppedlsapktswhilespf = value;
        droppedlsapktswhilespf.value_namespace = name_space;
        droppedlsapktswhilespf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedLsaPktsWhileGR")
    {
        droppedlsapktswhilegr = value;
        droppedlsapktswhilegr.value_namespace = name_space;
        droppedlsapktswhilegr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalPktsSent")
    {
        totalpktssent = value;
        totalpktssent.value_namespace = name_space;
        totalpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPktsSent")
    {
        hellopktssent = value;
        hellopktssent.value_namespace = name_space;
        hellopktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdPktsSent")
    {
        dbdpktssent = value;
        dbdpktssent.value_namespace = name_space;
        dbdpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsReqPktsSent")
    {
        lsreqpktssent = value;
        lsreqpktssent.value_namespace = name_space;
        lsreqpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsUpdPktsSent")
    {
        lsupdpktssent = value;
        lsupdpktssent.value_namespace = name_space;
        lsupdpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsAckPktsSent")
    {
        lsackpktssent = value;
        lsackpktssent.value_namespace = name_space;
        lsackpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedSendPkts")
    {
        droppedsendpkts = value;
        droppedsendpkts.value_namespace = name_space;
        droppedsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errSendPkts")
    {
        errsendpkts = value;
        errsendpkts.value_namespace = name_space;
        errsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuFirstTxPkts")
    {
        lsufirsttxpkts = value;
        lsufirsttxpkts.value_namespace = name_space;
        lsufirsttxpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuRexmitPkts")
    {
        lsurexmitpkts = value;
        lsurexmitpkts.value_namespace = name_space;
        lsurexmitpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuForLsreqPkts")
    {
        lsuforlsreqpkts = value;
        lsuforlsreqpkts.value_namespace = name_space;
        lsuforlsreqpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuPeerTxPkts")
    {
        lsupeertxpkts = value;
        lsupeertxpkts.value_namespace = name_space;
        lsupeertxpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodPktSendIpThrottle")
    {
        floodpktsendipthrottle = value;
        floodpktsendipthrottle.value_namespace = name_space;
        floodpktsendipthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodPktSendTokenThrottle")
    {
        floodpktsendtokenthrottle = value;
        floodpktsendtokenthrottle.value_namespace = name_space;
        floodpktsendtokenthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts = value;
        laststatsclearts.value_namespace = name_space;
        laststatsclearts.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totalPktsRcvd")
    {
        totalpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "helloPktsRcvd")
    {
        hellopktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dbdPktsRcvd")
    {
        dbdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsReqPktsRcvd")
    {
        lsreqpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsUpdPktsRcvd")
    {
        lsupdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsAckPktsRcvd")
    {
        lsackpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "rcvdPktsDropped")
    {
        rcvdpktsdropped.yfilter = yfilter;
    }
    if(value_path == "errPktsRcvd")
    {
        errpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errHelloPktsRcvd")
    {
        errhellopktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errDbdPktsRcvd")
    {
        errdbdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsReqPktsRcvd")
    {
        errlsreqpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsUpdPktsRcvd")
    {
        errlsupdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsAckPktsRcvd")
    {
        errlsackpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "unknownPktsRcvd")
    {
        unknownpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupRtrIdPktsRcvd")
    {
        duprtridpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupSrcAddrPktsRcvd")
    {
        dupsrcaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "wrongAreaPktsRcvd")
    {
        wrongareapktsrcvd.yfilter = yfilter;
    }
    if(value_path == "invalidSrcAddrPktsRcvd")
    {
        invalidsrcaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "invalidDestAddrPktsRcvd")
    {
        invaliddestaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badCRCPktsRcvd")
    {
        badcrcpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badVersionPktsRcvd")
    {
        badversionpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badResvFieldPktsRcvd")
    {
        badresvfieldpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "peerRtrIdChgdPktsRcvd")
    {
        peerrtridchgdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "peerNotFoundPktsRcvd")
    {
        peernotfoundpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badAuthPktsRcvd")
    {
        badauthpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badLenPktsRcvd")
    {
        badlenpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "passiveIntfPktsRcvd")
    {
        passiveintfpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "noOspfIntfPktsRcvd")
    {
        noospfintfpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "rcvdLsaPktsIgnored")
    {
        rcvdlsapktsignored.yfilter = yfilter;
    }
    if(value_path == "droppedLsaPktsWhileSPF")
    {
        droppedlsapktswhilespf.yfilter = yfilter;
    }
    if(value_path == "droppedLsaPktsWhileGR")
    {
        droppedlsapktswhilegr.yfilter = yfilter;
    }
    if(value_path == "totalPktsSent")
    {
        totalpktssent.yfilter = yfilter;
    }
    if(value_path == "helloPktsSent")
    {
        hellopktssent.yfilter = yfilter;
    }
    if(value_path == "dbdPktsSent")
    {
        dbdpktssent.yfilter = yfilter;
    }
    if(value_path == "lsReqPktsSent")
    {
        lsreqpktssent.yfilter = yfilter;
    }
    if(value_path == "lsUpdPktsSent")
    {
        lsupdpktssent.yfilter = yfilter;
    }
    if(value_path == "lsAckPktsSent")
    {
        lsackpktssent.yfilter = yfilter;
    }
    if(value_path == "droppedSendPkts")
    {
        droppedsendpkts.yfilter = yfilter;
    }
    if(value_path == "errSendPkts")
    {
        errsendpkts.yfilter = yfilter;
    }
    if(value_path == "lsuFirstTxPkts")
    {
        lsufirsttxpkts.yfilter = yfilter;
    }
    if(value_path == "lsuRexmitPkts")
    {
        lsurexmitpkts.yfilter = yfilter;
    }
    if(value_path == "lsuForLsreqPkts")
    {
        lsuforlsreqpkts.yfilter = yfilter;
    }
    if(value_path == "lsuPeerTxPkts")
    {
        lsupeertxpkts.yfilter = yfilter;
    }
    if(value_path == "floodPktSendIpThrottle")
    {
        floodpktsendipthrottle.yfilter = yfilter;
    }
    if(value_path == "floodPktSendTokenThrottle")
    {
        floodpktsendtokenthrottle.yfilter = yfilter;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totalPktsRcvd" || name == "helloPktsRcvd" || name == "dbdPktsRcvd" || name == "lsReqPktsRcvd" || name == "lsUpdPktsRcvd" || name == "lsAckPktsRcvd" || name == "rcvdPktsDropped" || name == "errPktsRcvd" || name == "errHelloPktsRcvd" || name == "errDbdPktsRcvd" || name == "errLsReqPktsRcvd" || name == "errLsUpdPktsRcvd" || name == "errLsAckPktsRcvd" || name == "unknownPktsRcvd" || name == "dupRtrIdPktsRcvd" || name == "dupSrcAddrPktsRcvd" || name == "wrongAreaPktsRcvd" || name == "invalidSrcAddrPktsRcvd" || name == "invalidDestAddrPktsRcvd" || name == "badCRCPktsRcvd" || name == "badVersionPktsRcvd" || name == "badResvFieldPktsRcvd" || name == "peerRtrIdChgdPktsRcvd" || name == "peerNotFoundPktsRcvd" || name == "badAuthPktsRcvd" || name == "badLenPktsRcvd" || name == "passiveIntfPktsRcvd" || name == "noOspfIntfPktsRcvd" || name == "rcvdLsaPktsIgnored" || name == "droppedLsaPktsWhileSPF" || name == "droppedLsaPktsWhileGR" || name == "totalPktsSent" || name == "helloPktsSent" || name == "dbdPktsSent" || name == "lsReqPktsSent" || name == "lsUpdPktsSent" || name == "lsAckPktsSent" || name == "droppedSendPkts" || name == "errSendPkts" || name == "lsuFirstTxPkts" || name == "lsuRexmitPkts" || name == "lsuForLsreqPkts" || name == "lsuPeerTxPkts" || name == "floodPktSendIpThrottle" || name == "floodPktSendTokenThrottle" || name == "lastStatsClearTs")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtospfIfDefToOspfIfItems()
    :
    rtospfifdeftoospfif_list(this, {"tdn"})
{

    yang_name = "rtospfIfDefToOspfIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::~RtospfIfDefToOspfIfItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtospfifdeftoospfif_list.len(); index++)
    {
        if(rtospfifdeftoospfif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtospfifdeftoospfif_list.len(); index++)
    {
        if(rtospfifdeftoospfif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtospfIfDefToOspfIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtOspfIfDefToOspfIf-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList>();
        ent_->parent = this;
        rtospfifdeftoospfif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtospfifdeftoospfif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtOspfIfDefToOspfIf-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::RtOspfIfDefToOspfIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtOspfIfDefToOspfIf-list"; yang_parent_name = "rtospfIfDefToOspfIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::~RtOspfIfDefToOspfIfList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtOspfIfDefToOspfIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::MaxlsapItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    maxlsa{YType::uint32, "maxLsa"},
    thresh{YType::uint16, "thresh"},
    sleepcnt{YType::uint32, "sleepCnt"},
    sleepintvl{YType::uint16, "sleepIntvl"},
    resetintvl{YType::uint32, "resetIntvl"},
    action{YType::enumeration, "action"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    nonselflsacnt{YType::uint32, "nonSelfLsaCnt"},
    currsleepcnt{YType::uint32, "currSleepCnt"}
{

    yang_name = "maxlsap-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::~MaxlsapItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| maxlsa.is_set
	|| thresh.is_set
	|| sleepcnt.is_set
	|| sleepintvl.is_set
	|| resetintvl.is_set
	|| action.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| nonselflsacnt.is_set
	|| currsleepcnt.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(maxlsa.yfilter)
	|| ydk::is_set(thresh.yfilter)
	|| ydk::is_set(sleepcnt.yfilter)
	|| ydk::is_set(sleepintvl.yfilter)
	|| ydk::is_set(resetintvl.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(nonselflsacnt.yfilter)
	|| ydk::is_set(currsleepcnt.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maxlsap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (maxlsa.is_set || is_set(maxlsa.yfilter)) leaf_name_data.push_back(maxlsa.get_name_leafdata());
    if (thresh.is_set || is_set(thresh.yfilter)) leaf_name_data.push_back(thresh.get_name_leafdata());
    if (sleepcnt.is_set || is_set(sleepcnt.yfilter)) leaf_name_data.push_back(sleepcnt.get_name_leafdata());
    if (sleepintvl.is_set || is_set(sleepintvl.yfilter)) leaf_name_data.push_back(sleepintvl.get_name_leafdata());
    if (resetintvl.is_set || is_set(resetintvl.yfilter)) leaf_name_data.push_back(resetintvl.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (nonselflsacnt.is_set || is_set(nonselflsacnt.yfilter)) leaf_name_data.push_back(nonselflsacnt.get_name_leafdata());
    if (currsleepcnt.is_set || is_set(currsleepcnt.yfilter)) leaf_name_data.push_back(currsleepcnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxLsa")
    {
        maxlsa = value;
        maxlsa.value_namespace = name_space;
        maxlsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh")
    {
        thresh = value;
        thresh.value_namespace = name_space;
        thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sleepCnt")
    {
        sleepcnt = value;
        sleepcnt.value_namespace = name_space;
        sleepcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sleepIntvl")
    {
        sleepintvl = value;
        sleepintvl.value_namespace = name_space;
        sleepintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resetIntvl")
    {
        resetintvl = value;
        resetintvl.value_namespace = name_space;
        resetintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "nonSelfLsaCnt")
    {
        nonselflsacnt = value;
        nonselflsacnt.value_namespace = name_space;
        nonselflsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currSleepCnt")
    {
        currsleepcnt = value;
        currsleepcnt.value_namespace = name_space;
        currsleepcnt.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "maxLsa")
    {
        maxlsa.yfilter = yfilter;
    }
    if(value_path == "thresh")
    {
        thresh.yfilter = yfilter;
    }
    if(value_path == "sleepCnt")
    {
        sleepcnt.yfilter = yfilter;
    }
    if(value_path == "sleepIntvl")
    {
        sleepintvl.yfilter = yfilter;
    }
    if(value_path == "resetIntvl")
    {
        resetintvl.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "nonSelfLsaCnt")
    {
        nonselflsacnt.yfilter = yfilter;
    }
    if(value_path == "currSleepCnt")
    {
        currsleepcnt.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "maxLsa" || name == "thresh" || name == "sleepCnt" || name == "sleepIntvl" || name == "resetIntvl" || name == "action" || name == "operSt" || name == "operStQual" || name == "nonSelfLsaCnt" || name == "currSleepCnt")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::MaxmetriclsapItems()
    :
    ctrl{YType::str, "ctrl"},
    maxmetricextlsa{YType::uint32, "maxMetricExtLsa"},
    maxmetricsummlsa{YType::uint32, "maxMetricSummLsa"},
    startupintvl{YType::uint32, "startupIntvl"},
    awaitconvbgpasn{YType::str, "awaitConvBgpAsn"}
{

    yang_name = "maxmetriclsap-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::~MaxmetriclsapItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::has_data() const
{
    if (is_presence_container) return true;
    return ctrl.is_set
	|| maxmetricextlsa.is_set
	|| maxmetricsummlsa.is_set
	|| startupintvl.is_set
	|| awaitconvbgpasn.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(maxmetricextlsa.yfilter)
	|| ydk::is_set(maxmetricsummlsa.yfilter)
	|| ydk::is_set(startupintvl.yfilter)
	|| ydk::is_set(awaitconvbgpasn.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maxmetriclsap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (maxmetricextlsa.is_set || is_set(maxmetricextlsa.yfilter)) leaf_name_data.push_back(maxmetricextlsa.get_name_leafdata());
    if (maxmetricsummlsa.is_set || is_set(maxmetricsummlsa.yfilter)) leaf_name_data.push_back(maxmetricsummlsa.get_name_leafdata());
    if (startupintvl.is_set || is_set(startupintvl.yfilter)) leaf_name_data.push_back(startupintvl.get_name_leafdata());
    if (awaitconvbgpasn.is_set || is_set(awaitconvbgpasn.yfilter)) leaf_name_data.push_back(awaitconvbgpasn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxMetricExtLsa")
    {
        maxmetricextlsa = value;
        maxmetricextlsa.value_namespace = name_space;
        maxmetricextlsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxMetricSummLsa")
    {
        maxmetricsummlsa = value;
        maxmetricsummlsa.value_namespace = name_space;
        maxmetricsummlsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startupIntvl")
    {
        startupintvl = value;
        startupintvl.value_namespace = name_space;
        startupintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "awaitConvBgpAsn")
    {
        awaitconvbgpasn = value;
        awaitconvbgpasn.value_namespace = name_space;
        awaitconvbgpasn.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "maxMetricExtLsa")
    {
        maxmetricextlsa.yfilter = yfilter;
    }
    if(value_path == "maxMetricSummLsa")
    {
        maxmetricsummlsa.yfilter = yfilter;
    }
    if(value_path == "startupIntvl")
    {
        startupintvl.yfilter = yfilter;
    }
    if(value_path == "awaitConvBgpAsn")
    {
        awaitconvbgpasn.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ctrl" || name == "maxMetricExtLsa" || name == "maxMetricSummLsa" || name == "startupIntvl" || name == "awaitConvBgpAsn")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::DefrtleakItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"},
    always{YType::enumeration, "always"}
{

    yang_name = "defrtleak-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::~DefrtleakItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set
	|| always.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defrtleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "scope" || name == "rtMap" || name == "always")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterleakItems()
    :
    interleakp_list(this, {"proto", "inst", "asn"})
{

    yang_name = "interleak-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::~InterleakItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interleakp_list.len(); index++)
    {
        if(interleakp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::has_operation() const
{
    for (std::size_t index=0; index<interleakp_list.len(); index++)
    {
        if(interleakp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InterLeakP-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList>();
        ent_->parent = this;
        interleakp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interleakp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InterLeakP-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::InterLeakPList()
    :
    proto{YType::enumeration, "proto"},
    inst{YType::str, "inst"},
    asn{YType::str, "asn"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"},
    always{YType::enumeration, "always"}
{

    yang_name = "InterLeakP-list"; yang_parent_name = "interleak-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::~InterLeakPList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| inst.is_set
	|| asn.is_set
	|| name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set
	|| always.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(inst.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InterLeakP-list";
    ADD_KEY_TOKEN(proto, "proto");
    ADD_KEY_TOKEN(inst, "inst");
    ADD_KEY_TOKEN(asn, "asn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (inst.is_set || is_set(inst.yfilter)) leaf_name_data.push_back(inst.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "inst")
    {
        inst.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
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
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "inst" || name == "asn" || name == "name" || name == "descr" || name == "scope" || name == "rtMap" || name == "always")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::LeakctrlItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::enumeration, "ctrl"},
    max{YType::uint16, "max"},
    thresh{YType::uint8, "thresh"},
    retries{YType::uint16, "retries"},
    duration{YType::uint16, "duration"}
{

    yang_name = "leakctrl-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::~LeakctrlItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| max.is_set
	|| thresh.is_set
	|| retries.is_set
	|| duration.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(thresh.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leakctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (thresh.is_set || is_set(thresh.yfilter)) leaf_name_data.push_back(thresh.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh")
    {
        thresh = value;
        thresh.value_namespace = name_space;
        thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "thresh")
    {
        thresh.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ctrl" || name == "max" || name == "thresh" || name == "retries" || name == "duration")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::RibleakItems()
    :
    rtmap{YType::str, "rtMap"},
    always{YType::boolean, "always"}
{

    yang_name = "ribleak-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::~RibleakItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| always.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap" || name == "always")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtrtsumItems()
    :
    extrtsum_list(this, {"addr"})
{

    yang_name = "extrtsum-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::~ExtrtsumItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extrtsum_list.len(); index++)
    {
        if(extrtsum_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::has_operation() const
{
    for (std::size_t index=0; index<extrtsum_list.len(); index++)
    {
        if(extrtsum_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extrtsum-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtRtSum-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList>();
        ent_->parent = this;
        extrtsum_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extrtsum_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtRtSum-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::ExtRtSumList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::str, "ctrl"},
    comprtcnt{YType::uint32, "compRtCnt"},
    opercost{YType::uint32, "operCost"},
    tag{YType::uint32, "tag"}
{

    yang_name = "ExtRtSum-list"; yang_parent_name = "extrtsum-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::~ExtRtSumList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| comprtcnt.is_set
	|| opercost.is_set
	|| tag.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(comprtcnt.yfilter)
	|| ydk::is_set(opercost.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtRtSum-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (comprtcnt.is_set || is_set(comprtcnt.yfilter)) leaf_name_data.push_back(comprtcnt.get_name_leafdata());
    if (opercost.is_set || is_set(opercost.yfilter)) leaf_name_data.push_back(opercost.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "compRtCnt")
    {
        comprtcnt = value;
        comprtcnt.value_namespace = name_space;
        comprtcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operCost")
    {
        opercost = value;
        opercost.value_namespace = name_space;
        opercost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
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
    if(value_path == "compRtCnt")
    {
        comprtcnt.yfilter = yfilter;
    }
    if(value_path == "operCost")
    {
        opercost.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "descr" || name == "ctrl" || name == "compRtCnt" || name == "operCost" || name == "tag")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::TrstatsItems()
    :
    totalpktsrcvd{YType::uint32, "totalPktsRcvd"},
    hellopktsrcvd{YType::uint32, "helloPktsRcvd"},
    dbdpktsrcvd{YType::uint32, "dbdPktsRcvd"},
    lsreqpktsrcvd{YType::uint32, "lsReqPktsRcvd"},
    lsupdpktsrcvd{YType::uint32, "lsUpdPktsRcvd"},
    lsackpktsrcvd{YType::uint32, "lsAckPktsRcvd"},
    rcvdpktsdropped{YType::uint32, "rcvdPktsDropped"},
    errpktsrcvd{YType::uint32, "errPktsRcvd"},
    errhellopktsrcvd{YType::uint32, "errHelloPktsRcvd"},
    errdbdpktsrcvd{YType::uint32, "errDbdPktsRcvd"},
    errlsreqpktsrcvd{YType::uint32, "errLsReqPktsRcvd"},
    errlsupdpktsrcvd{YType::uint32, "errLsUpdPktsRcvd"},
    errlsackpktsrcvd{YType::uint32, "errLsAckPktsRcvd"},
    unknownpktsrcvd{YType::uint32, "unknownPktsRcvd"},
    duprtridpktsrcvd{YType::uint32, "dupRtrIdPktsRcvd"},
    dupsrcaddrpktsrcvd{YType::uint32, "dupSrcAddrPktsRcvd"},
    wrongareapktsrcvd{YType::uint32, "wrongAreaPktsRcvd"},
    invalidsrcaddrpktsrcvd{YType::uint32, "invalidSrcAddrPktsRcvd"},
    invaliddestaddrpktsrcvd{YType::uint32, "invalidDestAddrPktsRcvd"},
    badcrcpktsrcvd{YType::uint32, "badCRCPktsRcvd"},
    badversionpktsrcvd{YType::uint32, "badVersionPktsRcvd"},
    badresvfieldpktsrcvd{YType::uint32, "badResvFieldPktsRcvd"},
    peerrtridchgdpktsrcvd{YType::uint32, "peerRtrIdChgdPktsRcvd"},
    peernotfoundpktsrcvd{YType::uint32, "peerNotFoundPktsRcvd"},
    badauthpktsrcvd{YType::uint32, "badAuthPktsRcvd"},
    badlenpktsrcvd{YType::uint32, "badLenPktsRcvd"},
    passiveintfpktsrcvd{YType::uint32, "passiveIntfPktsRcvd"},
    noospfintfpktsrcvd{YType::uint32, "noOspfIntfPktsRcvd"},
    rcvdlsapktsignored{YType::uint32, "rcvdLsaPktsIgnored"},
    droppedlsapktswhilespf{YType::uint32, "droppedLsaPktsWhileSPF"},
    droppedlsapktswhilegr{YType::uint32, "droppedLsaPktsWhileGR"},
    totalpktssent{YType::uint32, "totalPktsSent"},
    hellopktssent{YType::uint32, "helloPktsSent"},
    dbdpktssent{YType::uint32, "dbdPktsSent"},
    lsreqpktssent{YType::uint32, "lsReqPktsSent"},
    lsupdpktssent{YType::uint32, "lsUpdPktsSent"},
    lsackpktssent{YType::uint32, "lsAckPktsSent"},
    droppedsendpkts{YType::uint32, "droppedSendPkts"},
    errsendpkts{YType::uint32, "errSendPkts"},
    lsufirsttxpkts{YType::uint32, "lsuFirstTxPkts"},
    lsurexmitpkts{YType::uint32, "lsuRexmitPkts"},
    lsuforlsreqpkts{YType::uint32, "lsuForLsreqPkts"},
    lsupeertxpkts{YType::uint32, "lsuPeerTxPkts"},
    floodpktsendipthrottle{YType::uint32, "floodPktSendIpThrottle"},
    floodpktsendtokenthrottle{YType::uint32, "floodPktSendTokenThrottle"},
    laststatsclearts{YType::str, "lastStatsClearTs"}
{

    yang_name = "trstats-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::~TrstatsItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return totalpktsrcvd.is_set
	|| hellopktsrcvd.is_set
	|| dbdpktsrcvd.is_set
	|| lsreqpktsrcvd.is_set
	|| lsupdpktsrcvd.is_set
	|| lsackpktsrcvd.is_set
	|| rcvdpktsdropped.is_set
	|| errpktsrcvd.is_set
	|| errhellopktsrcvd.is_set
	|| errdbdpktsrcvd.is_set
	|| errlsreqpktsrcvd.is_set
	|| errlsupdpktsrcvd.is_set
	|| errlsackpktsrcvd.is_set
	|| unknownpktsrcvd.is_set
	|| duprtridpktsrcvd.is_set
	|| dupsrcaddrpktsrcvd.is_set
	|| wrongareapktsrcvd.is_set
	|| invalidsrcaddrpktsrcvd.is_set
	|| invaliddestaddrpktsrcvd.is_set
	|| badcrcpktsrcvd.is_set
	|| badversionpktsrcvd.is_set
	|| badresvfieldpktsrcvd.is_set
	|| peerrtridchgdpktsrcvd.is_set
	|| peernotfoundpktsrcvd.is_set
	|| badauthpktsrcvd.is_set
	|| badlenpktsrcvd.is_set
	|| passiveintfpktsrcvd.is_set
	|| noospfintfpktsrcvd.is_set
	|| rcvdlsapktsignored.is_set
	|| droppedlsapktswhilespf.is_set
	|| droppedlsapktswhilegr.is_set
	|| totalpktssent.is_set
	|| hellopktssent.is_set
	|| dbdpktssent.is_set
	|| lsreqpktssent.is_set
	|| lsupdpktssent.is_set
	|| lsackpktssent.is_set
	|| droppedsendpkts.is_set
	|| errsendpkts.is_set
	|| lsufirsttxpkts.is_set
	|| lsurexmitpkts.is_set
	|| lsuforlsreqpkts.is_set
	|| lsupeertxpkts.is_set
	|| floodpktsendipthrottle.is_set
	|| floodpktsendtokenthrottle.is_set
	|| laststatsclearts.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totalpktsrcvd.yfilter)
	|| ydk::is_set(hellopktsrcvd.yfilter)
	|| ydk::is_set(dbdpktsrcvd.yfilter)
	|| ydk::is_set(lsreqpktsrcvd.yfilter)
	|| ydk::is_set(lsupdpktsrcvd.yfilter)
	|| ydk::is_set(lsackpktsrcvd.yfilter)
	|| ydk::is_set(rcvdpktsdropped.yfilter)
	|| ydk::is_set(errpktsrcvd.yfilter)
	|| ydk::is_set(errhellopktsrcvd.yfilter)
	|| ydk::is_set(errdbdpktsrcvd.yfilter)
	|| ydk::is_set(errlsreqpktsrcvd.yfilter)
	|| ydk::is_set(errlsupdpktsrcvd.yfilter)
	|| ydk::is_set(errlsackpktsrcvd.yfilter)
	|| ydk::is_set(unknownpktsrcvd.yfilter)
	|| ydk::is_set(duprtridpktsrcvd.yfilter)
	|| ydk::is_set(dupsrcaddrpktsrcvd.yfilter)
	|| ydk::is_set(wrongareapktsrcvd.yfilter)
	|| ydk::is_set(invalidsrcaddrpktsrcvd.yfilter)
	|| ydk::is_set(invaliddestaddrpktsrcvd.yfilter)
	|| ydk::is_set(badcrcpktsrcvd.yfilter)
	|| ydk::is_set(badversionpktsrcvd.yfilter)
	|| ydk::is_set(badresvfieldpktsrcvd.yfilter)
	|| ydk::is_set(peerrtridchgdpktsrcvd.yfilter)
	|| ydk::is_set(peernotfoundpktsrcvd.yfilter)
	|| ydk::is_set(badauthpktsrcvd.yfilter)
	|| ydk::is_set(badlenpktsrcvd.yfilter)
	|| ydk::is_set(passiveintfpktsrcvd.yfilter)
	|| ydk::is_set(noospfintfpktsrcvd.yfilter)
	|| ydk::is_set(rcvdlsapktsignored.yfilter)
	|| ydk::is_set(droppedlsapktswhilespf.yfilter)
	|| ydk::is_set(droppedlsapktswhilegr.yfilter)
	|| ydk::is_set(totalpktssent.yfilter)
	|| ydk::is_set(hellopktssent.yfilter)
	|| ydk::is_set(dbdpktssent.yfilter)
	|| ydk::is_set(lsreqpktssent.yfilter)
	|| ydk::is_set(lsupdpktssent.yfilter)
	|| ydk::is_set(lsackpktssent.yfilter)
	|| ydk::is_set(droppedsendpkts.yfilter)
	|| ydk::is_set(errsendpkts.yfilter)
	|| ydk::is_set(lsufirsttxpkts.yfilter)
	|| ydk::is_set(lsurexmitpkts.yfilter)
	|| ydk::is_set(lsuforlsreqpkts.yfilter)
	|| ydk::is_set(lsupeertxpkts.yfilter)
	|| ydk::is_set(floodpktsendipthrottle.yfilter)
	|| ydk::is_set(floodpktsendtokenthrottle.yfilter)
	|| ydk::is_set(laststatsclearts.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (totalpktsrcvd.is_set || is_set(totalpktsrcvd.yfilter)) leaf_name_data.push_back(totalpktsrcvd.get_name_leafdata());
    if (hellopktsrcvd.is_set || is_set(hellopktsrcvd.yfilter)) leaf_name_data.push_back(hellopktsrcvd.get_name_leafdata());
    if (dbdpktsrcvd.is_set || is_set(dbdpktsrcvd.yfilter)) leaf_name_data.push_back(dbdpktsrcvd.get_name_leafdata());
    if (lsreqpktsrcvd.is_set || is_set(lsreqpktsrcvd.yfilter)) leaf_name_data.push_back(lsreqpktsrcvd.get_name_leafdata());
    if (lsupdpktsrcvd.is_set || is_set(lsupdpktsrcvd.yfilter)) leaf_name_data.push_back(lsupdpktsrcvd.get_name_leafdata());
    if (lsackpktsrcvd.is_set || is_set(lsackpktsrcvd.yfilter)) leaf_name_data.push_back(lsackpktsrcvd.get_name_leafdata());
    if (rcvdpktsdropped.is_set || is_set(rcvdpktsdropped.yfilter)) leaf_name_data.push_back(rcvdpktsdropped.get_name_leafdata());
    if (errpktsrcvd.is_set || is_set(errpktsrcvd.yfilter)) leaf_name_data.push_back(errpktsrcvd.get_name_leafdata());
    if (errhellopktsrcvd.is_set || is_set(errhellopktsrcvd.yfilter)) leaf_name_data.push_back(errhellopktsrcvd.get_name_leafdata());
    if (errdbdpktsrcvd.is_set || is_set(errdbdpktsrcvd.yfilter)) leaf_name_data.push_back(errdbdpktsrcvd.get_name_leafdata());
    if (errlsreqpktsrcvd.is_set || is_set(errlsreqpktsrcvd.yfilter)) leaf_name_data.push_back(errlsreqpktsrcvd.get_name_leafdata());
    if (errlsupdpktsrcvd.is_set || is_set(errlsupdpktsrcvd.yfilter)) leaf_name_data.push_back(errlsupdpktsrcvd.get_name_leafdata());
    if (errlsackpktsrcvd.is_set || is_set(errlsackpktsrcvd.yfilter)) leaf_name_data.push_back(errlsackpktsrcvd.get_name_leafdata());
    if (unknownpktsrcvd.is_set || is_set(unknownpktsrcvd.yfilter)) leaf_name_data.push_back(unknownpktsrcvd.get_name_leafdata());
    if (duprtridpktsrcvd.is_set || is_set(duprtridpktsrcvd.yfilter)) leaf_name_data.push_back(duprtridpktsrcvd.get_name_leafdata());
    if (dupsrcaddrpktsrcvd.is_set || is_set(dupsrcaddrpktsrcvd.yfilter)) leaf_name_data.push_back(dupsrcaddrpktsrcvd.get_name_leafdata());
    if (wrongareapktsrcvd.is_set || is_set(wrongareapktsrcvd.yfilter)) leaf_name_data.push_back(wrongareapktsrcvd.get_name_leafdata());
    if (invalidsrcaddrpktsrcvd.is_set || is_set(invalidsrcaddrpktsrcvd.yfilter)) leaf_name_data.push_back(invalidsrcaddrpktsrcvd.get_name_leafdata());
    if (invaliddestaddrpktsrcvd.is_set || is_set(invaliddestaddrpktsrcvd.yfilter)) leaf_name_data.push_back(invaliddestaddrpktsrcvd.get_name_leafdata());
    if (badcrcpktsrcvd.is_set || is_set(badcrcpktsrcvd.yfilter)) leaf_name_data.push_back(badcrcpktsrcvd.get_name_leafdata());
    if (badversionpktsrcvd.is_set || is_set(badversionpktsrcvd.yfilter)) leaf_name_data.push_back(badversionpktsrcvd.get_name_leafdata());
    if (badresvfieldpktsrcvd.is_set || is_set(badresvfieldpktsrcvd.yfilter)) leaf_name_data.push_back(badresvfieldpktsrcvd.get_name_leafdata());
    if (peerrtridchgdpktsrcvd.is_set || is_set(peerrtridchgdpktsrcvd.yfilter)) leaf_name_data.push_back(peerrtridchgdpktsrcvd.get_name_leafdata());
    if (peernotfoundpktsrcvd.is_set || is_set(peernotfoundpktsrcvd.yfilter)) leaf_name_data.push_back(peernotfoundpktsrcvd.get_name_leafdata());
    if (badauthpktsrcvd.is_set || is_set(badauthpktsrcvd.yfilter)) leaf_name_data.push_back(badauthpktsrcvd.get_name_leafdata());
    if (badlenpktsrcvd.is_set || is_set(badlenpktsrcvd.yfilter)) leaf_name_data.push_back(badlenpktsrcvd.get_name_leafdata());
    if (passiveintfpktsrcvd.is_set || is_set(passiveintfpktsrcvd.yfilter)) leaf_name_data.push_back(passiveintfpktsrcvd.get_name_leafdata());
    if (noospfintfpktsrcvd.is_set || is_set(noospfintfpktsrcvd.yfilter)) leaf_name_data.push_back(noospfintfpktsrcvd.get_name_leafdata());
    if (rcvdlsapktsignored.is_set || is_set(rcvdlsapktsignored.yfilter)) leaf_name_data.push_back(rcvdlsapktsignored.get_name_leafdata());
    if (droppedlsapktswhilespf.is_set || is_set(droppedlsapktswhilespf.yfilter)) leaf_name_data.push_back(droppedlsapktswhilespf.get_name_leafdata());
    if (droppedlsapktswhilegr.is_set || is_set(droppedlsapktswhilegr.yfilter)) leaf_name_data.push_back(droppedlsapktswhilegr.get_name_leafdata());
    if (totalpktssent.is_set || is_set(totalpktssent.yfilter)) leaf_name_data.push_back(totalpktssent.get_name_leafdata());
    if (hellopktssent.is_set || is_set(hellopktssent.yfilter)) leaf_name_data.push_back(hellopktssent.get_name_leafdata());
    if (dbdpktssent.is_set || is_set(dbdpktssent.yfilter)) leaf_name_data.push_back(dbdpktssent.get_name_leafdata());
    if (lsreqpktssent.is_set || is_set(lsreqpktssent.yfilter)) leaf_name_data.push_back(lsreqpktssent.get_name_leafdata());
    if (lsupdpktssent.is_set || is_set(lsupdpktssent.yfilter)) leaf_name_data.push_back(lsupdpktssent.get_name_leafdata());
    if (lsackpktssent.is_set || is_set(lsackpktssent.yfilter)) leaf_name_data.push_back(lsackpktssent.get_name_leafdata());
    if (droppedsendpkts.is_set || is_set(droppedsendpkts.yfilter)) leaf_name_data.push_back(droppedsendpkts.get_name_leafdata());
    if (errsendpkts.is_set || is_set(errsendpkts.yfilter)) leaf_name_data.push_back(errsendpkts.get_name_leafdata());
    if (lsufirsttxpkts.is_set || is_set(lsufirsttxpkts.yfilter)) leaf_name_data.push_back(lsufirsttxpkts.get_name_leafdata());
    if (lsurexmitpkts.is_set || is_set(lsurexmitpkts.yfilter)) leaf_name_data.push_back(lsurexmitpkts.get_name_leafdata());
    if (lsuforlsreqpkts.is_set || is_set(lsuforlsreqpkts.yfilter)) leaf_name_data.push_back(lsuforlsreqpkts.get_name_leafdata());
    if (lsupeertxpkts.is_set || is_set(lsupeertxpkts.yfilter)) leaf_name_data.push_back(lsupeertxpkts.get_name_leafdata());
    if (floodpktsendipthrottle.is_set || is_set(floodpktsendipthrottle.yfilter)) leaf_name_data.push_back(floodpktsendipthrottle.get_name_leafdata());
    if (floodpktsendtokenthrottle.is_set || is_set(floodpktsendtokenthrottle.yfilter)) leaf_name_data.push_back(floodpktsendtokenthrottle.get_name_leafdata());
    if (laststatsclearts.is_set || is_set(laststatsclearts.yfilter)) leaf_name_data.push_back(laststatsclearts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totalPktsRcvd")
    {
        totalpktsrcvd = value;
        totalpktsrcvd.value_namespace = name_space;
        totalpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPktsRcvd")
    {
        hellopktsrcvd = value;
        hellopktsrcvd.value_namespace = name_space;
        hellopktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdPktsRcvd")
    {
        dbdpktsrcvd = value;
        dbdpktsrcvd.value_namespace = name_space;
        dbdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsReqPktsRcvd")
    {
        lsreqpktsrcvd = value;
        lsreqpktsrcvd.value_namespace = name_space;
        lsreqpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsUpdPktsRcvd")
    {
        lsupdpktsrcvd = value;
        lsupdpktsrcvd.value_namespace = name_space;
        lsupdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsAckPktsRcvd")
    {
        lsackpktsrcvd = value;
        lsackpktsrcvd.value_namespace = name_space;
        lsackpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdPktsDropped")
    {
        rcvdpktsdropped = value;
        rcvdpktsdropped.value_namespace = name_space;
        rcvdpktsdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errPktsRcvd")
    {
        errpktsrcvd = value;
        errpktsrcvd.value_namespace = name_space;
        errpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errHelloPktsRcvd")
    {
        errhellopktsrcvd = value;
        errhellopktsrcvd.value_namespace = name_space;
        errhellopktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errDbdPktsRcvd")
    {
        errdbdpktsrcvd = value;
        errdbdpktsrcvd.value_namespace = name_space;
        errdbdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsReqPktsRcvd")
    {
        errlsreqpktsrcvd = value;
        errlsreqpktsrcvd.value_namespace = name_space;
        errlsreqpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsUpdPktsRcvd")
    {
        errlsupdpktsrcvd = value;
        errlsupdpktsrcvd.value_namespace = name_space;
        errlsupdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsAckPktsRcvd")
    {
        errlsackpktsrcvd = value;
        errlsackpktsrcvd.value_namespace = name_space;
        errlsackpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownPktsRcvd")
    {
        unknownpktsrcvd = value;
        unknownpktsrcvd.value_namespace = name_space;
        unknownpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupRtrIdPktsRcvd")
    {
        duprtridpktsrcvd = value;
        duprtridpktsrcvd.value_namespace = name_space;
        duprtridpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupSrcAddrPktsRcvd")
    {
        dupsrcaddrpktsrcvd = value;
        dupsrcaddrpktsrcvd.value_namespace = name_space;
        dupsrcaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrongAreaPktsRcvd")
    {
        wrongareapktsrcvd = value;
        wrongareapktsrcvd.value_namespace = name_space;
        wrongareapktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidSrcAddrPktsRcvd")
    {
        invalidsrcaddrpktsrcvd = value;
        invalidsrcaddrpktsrcvd.value_namespace = name_space;
        invalidsrcaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidDestAddrPktsRcvd")
    {
        invaliddestaddrpktsrcvd = value;
        invaliddestaddrpktsrcvd.value_namespace = name_space;
        invaliddestaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badCRCPktsRcvd")
    {
        badcrcpktsrcvd = value;
        badcrcpktsrcvd.value_namespace = name_space;
        badcrcpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badVersionPktsRcvd")
    {
        badversionpktsrcvd = value;
        badversionpktsrcvd.value_namespace = name_space;
        badversionpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badResvFieldPktsRcvd")
    {
        badresvfieldpktsrcvd = value;
        badresvfieldpktsrcvd.value_namespace = name_space;
        badresvfieldpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrIdChgdPktsRcvd")
    {
        peerrtridchgdpktsrcvd = value;
        peerrtridchgdpktsrcvd.value_namespace = name_space;
        peerrtridchgdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerNotFoundPktsRcvd")
    {
        peernotfoundpktsrcvd = value;
        peernotfoundpktsrcvd.value_namespace = name_space;
        peernotfoundpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badAuthPktsRcvd")
    {
        badauthpktsrcvd = value;
        badauthpktsrcvd.value_namespace = name_space;
        badauthpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badLenPktsRcvd")
    {
        badlenpktsrcvd = value;
        badlenpktsrcvd.value_namespace = name_space;
        badlenpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passiveIntfPktsRcvd")
    {
        passiveintfpktsrcvd = value;
        passiveintfpktsrcvd.value_namespace = name_space;
        passiveintfpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOspfIntfPktsRcvd")
    {
        noospfintfpktsrcvd = value;
        noospfintfpktsrcvd.value_namespace = name_space;
        noospfintfpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLsaPktsIgnored")
    {
        rcvdlsapktsignored = value;
        rcvdlsapktsignored.value_namespace = name_space;
        rcvdlsapktsignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedLsaPktsWhileSPF")
    {
        droppedlsapktswhilespf = value;
        droppedlsapktswhilespf.value_namespace = name_space;
        droppedlsapktswhilespf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedLsaPktsWhileGR")
    {
        droppedlsapktswhilegr = value;
        droppedlsapktswhilegr.value_namespace = name_space;
        droppedlsapktswhilegr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalPktsSent")
    {
        totalpktssent = value;
        totalpktssent.value_namespace = name_space;
        totalpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPktsSent")
    {
        hellopktssent = value;
        hellopktssent.value_namespace = name_space;
        hellopktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdPktsSent")
    {
        dbdpktssent = value;
        dbdpktssent.value_namespace = name_space;
        dbdpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsReqPktsSent")
    {
        lsreqpktssent = value;
        lsreqpktssent.value_namespace = name_space;
        lsreqpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsUpdPktsSent")
    {
        lsupdpktssent = value;
        lsupdpktssent.value_namespace = name_space;
        lsupdpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsAckPktsSent")
    {
        lsackpktssent = value;
        lsackpktssent.value_namespace = name_space;
        lsackpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedSendPkts")
    {
        droppedsendpkts = value;
        droppedsendpkts.value_namespace = name_space;
        droppedsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errSendPkts")
    {
        errsendpkts = value;
        errsendpkts.value_namespace = name_space;
        errsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuFirstTxPkts")
    {
        lsufirsttxpkts = value;
        lsufirsttxpkts.value_namespace = name_space;
        lsufirsttxpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuRexmitPkts")
    {
        lsurexmitpkts = value;
        lsurexmitpkts.value_namespace = name_space;
        lsurexmitpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuForLsreqPkts")
    {
        lsuforlsreqpkts = value;
        lsuforlsreqpkts.value_namespace = name_space;
        lsuforlsreqpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuPeerTxPkts")
    {
        lsupeertxpkts = value;
        lsupeertxpkts.value_namespace = name_space;
        lsupeertxpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodPktSendIpThrottle")
    {
        floodpktsendipthrottle = value;
        floodpktsendipthrottle.value_namespace = name_space;
        floodpktsendipthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodPktSendTokenThrottle")
    {
        floodpktsendtokenthrottle = value;
        floodpktsendtokenthrottle.value_namespace = name_space;
        floodpktsendtokenthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts = value;
        laststatsclearts.value_namespace = name_space;
        laststatsclearts.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totalPktsRcvd")
    {
        totalpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "helloPktsRcvd")
    {
        hellopktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dbdPktsRcvd")
    {
        dbdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsReqPktsRcvd")
    {
        lsreqpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsUpdPktsRcvd")
    {
        lsupdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsAckPktsRcvd")
    {
        lsackpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "rcvdPktsDropped")
    {
        rcvdpktsdropped.yfilter = yfilter;
    }
    if(value_path == "errPktsRcvd")
    {
        errpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errHelloPktsRcvd")
    {
        errhellopktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errDbdPktsRcvd")
    {
        errdbdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsReqPktsRcvd")
    {
        errlsreqpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsUpdPktsRcvd")
    {
        errlsupdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsAckPktsRcvd")
    {
        errlsackpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "unknownPktsRcvd")
    {
        unknownpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupRtrIdPktsRcvd")
    {
        duprtridpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupSrcAddrPktsRcvd")
    {
        dupsrcaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "wrongAreaPktsRcvd")
    {
        wrongareapktsrcvd.yfilter = yfilter;
    }
    if(value_path == "invalidSrcAddrPktsRcvd")
    {
        invalidsrcaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "invalidDestAddrPktsRcvd")
    {
        invaliddestaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badCRCPktsRcvd")
    {
        badcrcpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badVersionPktsRcvd")
    {
        badversionpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badResvFieldPktsRcvd")
    {
        badresvfieldpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "peerRtrIdChgdPktsRcvd")
    {
        peerrtridchgdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "peerNotFoundPktsRcvd")
    {
        peernotfoundpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badAuthPktsRcvd")
    {
        badauthpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badLenPktsRcvd")
    {
        badlenpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "passiveIntfPktsRcvd")
    {
        passiveintfpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "noOspfIntfPktsRcvd")
    {
        noospfintfpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "rcvdLsaPktsIgnored")
    {
        rcvdlsapktsignored.yfilter = yfilter;
    }
    if(value_path == "droppedLsaPktsWhileSPF")
    {
        droppedlsapktswhilespf.yfilter = yfilter;
    }
    if(value_path == "droppedLsaPktsWhileGR")
    {
        droppedlsapktswhilegr.yfilter = yfilter;
    }
    if(value_path == "totalPktsSent")
    {
        totalpktssent.yfilter = yfilter;
    }
    if(value_path == "helloPktsSent")
    {
        hellopktssent.yfilter = yfilter;
    }
    if(value_path == "dbdPktsSent")
    {
        dbdpktssent.yfilter = yfilter;
    }
    if(value_path == "lsReqPktsSent")
    {
        lsreqpktssent.yfilter = yfilter;
    }
    if(value_path == "lsUpdPktsSent")
    {
        lsupdpktssent.yfilter = yfilter;
    }
    if(value_path == "lsAckPktsSent")
    {
        lsackpktssent.yfilter = yfilter;
    }
    if(value_path == "droppedSendPkts")
    {
        droppedsendpkts.yfilter = yfilter;
    }
    if(value_path == "errSendPkts")
    {
        errsendpkts.yfilter = yfilter;
    }
    if(value_path == "lsuFirstTxPkts")
    {
        lsufirsttxpkts.yfilter = yfilter;
    }
    if(value_path == "lsuRexmitPkts")
    {
        lsurexmitpkts.yfilter = yfilter;
    }
    if(value_path == "lsuForLsreqPkts")
    {
        lsuforlsreqpkts.yfilter = yfilter;
    }
    if(value_path == "lsuPeerTxPkts")
    {
        lsupeertxpkts.yfilter = yfilter;
    }
    if(value_path == "floodPktSendIpThrottle")
    {
        floodpktsendipthrottle.yfilter = yfilter;
    }
    if(value_path == "floodPktSendTokenThrottle")
    {
        floodpktsendtokenthrottle.yfilter = yfilter;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totalPktsRcvd" || name == "helloPktsRcvd" || name == "dbdPktsRcvd" || name == "lsReqPktsRcvd" || name == "lsUpdPktsRcvd" || name == "lsAckPktsRcvd" || name == "rcvdPktsDropped" || name == "errPktsRcvd" || name == "errHelloPktsRcvd" || name == "errDbdPktsRcvd" || name == "errLsReqPktsRcvd" || name == "errLsUpdPktsRcvd" || name == "errLsAckPktsRcvd" || name == "unknownPktsRcvd" || name == "dupRtrIdPktsRcvd" || name == "dupSrcAddrPktsRcvd" || name == "wrongAreaPktsRcvd" || name == "invalidSrcAddrPktsRcvd" || name == "invalidDestAddrPktsRcvd" || name == "badCRCPktsRcvd" || name == "badVersionPktsRcvd" || name == "badResvFieldPktsRcvd" || name == "peerRtrIdChgdPktsRcvd" || name == "peerNotFoundPktsRcvd" || name == "badAuthPktsRcvd" || name == "badLenPktsRcvd" || name == "passiveIntfPktsRcvd" || name == "noOspfIntfPktsRcvd" || name == "rcvdLsaPktsIgnored" || name == "droppedLsaPktsWhileSPF" || name == "droppedLsaPktsWhileGR" || name == "totalPktsSent" || name == "helloPktsSent" || name == "dbdPktsSent" || name == "lsReqPktsSent" || name == "lsUpdPktsSent" || name == "lsAckPktsSent" || name == "droppedSendPkts" || name == "errSendPkts" || name == "lsuFirstTxPkts" || name == "lsuRexmitPkts" || name == "lsuForLsreqPkts" || name == "lsuPeerTxPkts" || name == "floodPktSendIpThrottle" || name == "floodPktSendTokenThrottle" || name == "lastStatsClearTs")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::EvtlogsItems::EvtlogsItems()
    :
    eventlogs_list(this, {"eventtype"})
{

    yang_name = "evtlogs-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::EvtlogsItems::~EvtlogsItems()
{
}

bool System::OspfItems::InstItems::InstList::EvtlogsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eventlogs_list.len(); index++)
    {
        if(eventlogs_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::EvtlogsItems::has_operation() const
{
    for (std::size_t index=0; index<eventlogs_list.len(); index++)
    {
        if(eventlogs_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::EvtlogsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evtlogs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::EvtlogsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::EvtlogsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventLogs-list")
    {
        auto ent_ = std::make_shared<System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList>();
        ent_->parent = this;
        eventlogs_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::EvtlogsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eventlogs_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OspfItems::InstItems::InstList::EvtlogsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::EvtlogsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::EvtlogsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EventLogs-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::EventLogsList()
    :
    eventtype{YType::enumeration, "eventType"},
    logsize{YType::enumeration, "logSize"},
    logsizekbytes{YType::uint16, "logSizeKBytes"}
{

    yang_name = "EventLogs-list"; yang_parent_name = "evtlogs-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::~EventLogsList()
{
}

bool System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::has_data() const
{
    if (is_presence_container) return true;
    return eventtype.is_set
	|| logsize.is_set
	|| logsizekbytes.is_set;
}

bool System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eventtype.yfilter)
	|| ydk::is_set(logsize.yfilter)
	|| ydk::is_set(logsizekbytes.yfilter);
}

std::string System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EventLogs-list";
    ADD_KEY_TOKEN(eventtype, "eventType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eventtype.is_set || is_set(eventtype.yfilter)) leaf_name_data.push_back(eventtype.get_name_leafdata());
    if (logsize.is_set || is_set(logsize.yfilter)) leaf_name_data.push_back(logsize.get_name_leafdata());
    if (logsizekbytes.is_set || is_set(logsizekbytes.yfilter)) leaf_name_data.push_back(logsizekbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eventType")
    {
        eventtype = value;
        eventtype.value_namespace = name_space;
        eventtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logSize")
    {
        logsize = value;
        logsize.value_namespace = name_space;
        logsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logSizeKBytes")
    {
        logsizekbytes = value;
        logsizekbytes.value_namespace = name_space;
        logsizekbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eventType")
    {
        eventtype.yfilter = yfilter;
    }
    if(value_path == "logSize")
    {
        logsize.yfilter = yfilter;
    }
    if(value_path == "logSizeKBytes")
    {
        logsizekbytes.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eventType" || name == "logSize" || name == "logSizeKBytes")
        return true;
    return false;
}

System::EvpnItems::EvpnItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    bdevi_items(std::make_shared<System::EvpnItems::BdeviItems>())
    , encap_mpls_items(std::make_shared<System::EvpnItems::EncapMplsItems>())
{
    bdevi_items->parent = this;
    encap_mpls_items->parent = this;

    yang_name = "evpn-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EvpnItems::~EvpnItems()
{
}

bool System::EvpnItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| (bdevi_items !=  nullptr && bdevi_items->has_data())
	|| (encap_mpls_items !=  nullptr && encap_mpls_items->has_data());
}

bool System::EvpnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (bdevi_items !=  nullptr && bdevi_items->has_operation())
	|| (encap_mpls_items !=  nullptr && encap_mpls_items->has_operation());
}

std::string System::EvpnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EvpnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EvpnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bdevi-items")
    {
        if(bdevi_items == nullptr)
        {
            bdevi_items = std::make_shared<System::EvpnItems::BdeviItems>();
        }
        return bdevi_items;
    }

    if(child_yang_name == "encap_mpls-items")
    {
        if(encap_mpls_items == nullptr)
        {
            encap_mpls_items = std::make_shared<System::EvpnItems::EncapMplsItems>();
        }
        return encap_mpls_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EvpnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bdevi_items != nullptr)
    {
        _children["bdevi-items"] = bdevi_items;
    }

    if(encap_mpls_items != nullptr)
    {
        _children["encap_mpls-items"] = encap_mpls_items;
    }

    return _children;
}

void System::EvpnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::EvpnItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::EvpnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdevi-items" || name == "encap_mpls-items" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BdeviItems()
    :
    bdevi_list(this, {"encap"})
{

    yang_name = "bdevi-items"; yang_parent_name = "evpn-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EvpnItems::BdeviItems::~BdeviItems()
{
}

bool System::EvpnItems::BdeviItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bdevi_list.len(); index++)
    {
        if(bdevi_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EvpnItems::BdeviItems::has_operation() const
{
    for (std::size_t index=0; index<bdevi_list.len(); index++)
    {
        if(bdevi_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EvpnItems::BdeviItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/evpn-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EvpnItems::BdeviItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdevi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EvpnItems::BdeviItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BDEvi-list")
    {
        auto ent_ = std::make_shared<System::EvpnItems::BdeviItems::BDEviList>();
        ent_->parent = this;
        bdevi_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EvpnItems::BdeviItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bdevi_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::EvpnItems::BdeviItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EvpnItems::BdeviItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EvpnItems::BdeviItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BDEvi-list")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::BDEviList()
    :
    encap{YType::str, "encap"},
    operrd{YType::str, "operRd"},
    tblmap{YType::str, "tblMap"},
    tblmapfltr{YType::boolean, "tblMapFltr"},
    rd{YType::str, "rd"}
        ,
    rttp_items(std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems>())
{
    rttp_items->parent = this;

    yang_name = "BDEvi-list"; yang_parent_name = "bdevi-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EvpnItems::BdeviItems::BDEviList::~BDEviList()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| operrd.is_set
	|| tblmap.is_set
	|| tblmapfltr.is_set
	|| rd.is_set
	|| (rttp_items !=  nullptr && rttp_items->has_data());
}

bool System::EvpnItems::BdeviItems::BDEviList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(operrd.yfilter)
	|| ydk::is_set(tblmap.yfilter)
	|| ydk::is_set(tblmapfltr.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (rttp_items !=  nullptr && rttp_items->has_operation());
}

std::string System::EvpnItems::BdeviItems::BDEviList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/evpn-items/bdevi-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EvpnItems::BdeviItems::BDEviList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BDEvi-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (operrd.is_set || is_set(operrd.yfilter)) leaf_name_data.push_back(operrd.get_name_leafdata());
    if (tblmap.is_set || is_set(tblmap.yfilter)) leaf_name_data.push_back(tblmap.get_name_leafdata());
    if (tblmapfltr.is_set || is_set(tblmapfltr.yfilter)) leaf_name_data.push_back(tblmapfltr.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EvpnItems::BdeviItems::BDEviList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttp-items")
    {
        if(rttp_items == nullptr)
        {
            rttp_items = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems>();
        }
        return rttp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EvpnItems::BdeviItems::BDEviList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rttp_items != nullptr)
    {
        _children["rttp-items"] = rttp_items;
    }

    return _children;
}

void System::EvpnItems::BdeviItems::BDEviList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRd")
    {
        operrd = value;
        operrd.value_namespace = name_space;
        operrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tblMap")
    {
        tblmap = value;
        tblmap.value_namespace = name_space;
        tblmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tblMapFltr")
    {
        tblmapfltr = value;
        tblmapfltr.value_namespace = name_space;
        tblmapfltr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void System::EvpnItems::BdeviItems::BDEviList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "operRd")
    {
        operrd.yfilter = yfilter;
    }
    if(value_path == "tblMap")
    {
        tblmap.yfilter = yfilter;
    }
    if(value_path == "tblMapFltr")
    {
        tblmapfltr.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool System::EvpnItems::BdeviItems::BDEviList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttp-items" || name == "encap" || name == "operRd" || name == "tblMap" || name == "tblMapFltr" || name == "rd")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttpItems()
    :
    rttp_list(this, {"type"})
{

    yang_name = "rttp-items"; yang_parent_name = "BDEvi-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::~RttpItems()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::has_operation() const
{
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttP-list")
    {
        auto ent_ = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList>();
        ent_->parent = this;
        rttp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rttp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttP-list")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RttPList()
    :
    type{YType::enumeration, "type"},
    operrttauto{YType::str, "operRttAuto"}
        ,
    ent_items(std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems>())
    , rtctrlmap_items(std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems>())
    , rtctrldefmap_items(std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems>())
    , rtctrlnondef_items(std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlnondefItems>())
{
    ent_items->parent = this;
    rtctrlmap_items->parent = this;
    rtctrldefmap_items->parent = this;
    rtctrlnondef_items->parent = this;

    yang_name = "RttP-list"; yang_parent_name = "rttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::~RttPList()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| operrttauto.is_set
	|| (ent_items !=  nullptr && ent_items->has_data())
	|| (rtctrlmap_items !=  nullptr && rtctrlmap_items->has_data())
	|| (rtctrldefmap_items !=  nullptr && rtctrldefmap_items->has_data())
	|| (rtctrlnondef_items !=  nullptr && rtctrlnondef_items->has_data());
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operrttauto.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation())
	|| (rtctrlmap_items !=  nullptr && rtctrlmap_items->has_operation())
	|| (rtctrldefmap_items !=  nullptr && rtctrldefmap_items->has_operation())
	|| (rtctrlnondef_items !=  nullptr && rtctrlnondef_items->has_operation());
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttP-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operrttauto.is_set || is_set(operrttauto.yfilter)) leaf_name_data.push_back(operrttauto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems>();
        }
        return ent_items;
    }

    if(child_yang_name == "rtctrlmap-items")
    {
        if(rtctrlmap_items == nullptr)
        {
            rtctrlmap_items = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems>();
        }
        return rtctrlmap_items;
    }

    if(child_yang_name == "rtctrldefmap-items")
    {
        if(rtctrldefmap_items == nullptr)
        {
            rtctrldefmap_items = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems>();
        }
        return rtctrldefmap_items;
    }

    if(child_yang_name == "rtctrlnondef-items")
    {
        if(rtctrlnondef_items == nullptr)
        {
            rtctrlnondef_items = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlnondefItems>();
        }
        return rtctrlnondef_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ent_items != nullptr)
    {
        _children["ent-items"] = ent_items;
    }

    if(rtctrlmap_items != nullptr)
    {
        _children["rtctrlmap-items"] = rtctrlmap_items;
    }

    if(rtctrldefmap_items != nullptr)
    {
        _children["rtctrldefmap-items"] = rtctrldefmap_items;
    }

    if(rtctrlnondef_items != nullptr)
    {
        _children["rtctrlnondef-items"] = rtctrlnondef_items;
    }

    return _children;
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRttAuto")
    {
        operrttauto = value;
        operrttauto.value_namespace = name_space;
        operrttauto.value_namespace_prefix = name_space_prefix;
    }
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operRttAuto")
    {
        operrttauto.yfilter = yfilter;
    }
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "rtctrlmap-items" || name == "rtctrldefmap-items" || name == "rtctrlnondef-items" || name == "type" || name == "operRttAuto")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::EntItems()
    :
    rttentry_list(this, {"rtt"})
{

    yang_name = "ent-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::~EntItems()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttEntry-list")
    {
        auto ent_ = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList>();
        ent_->parent = this;
        rttentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rttentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttEntry-list")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::RttEntryList()
    :
    rtt{YType::str, "rtt"}
{

    yang_name = "RttEntry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::~RttEntryList()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::has_data() const
{
    if (is_presence_container) return true;
    return rtt.is_set;
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt.yfilter);
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttEntry-list";
    ADD_KEY_TOKEN(rtt, "rtt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::RtctrlmapItems()
    :
    rtmap{YType::str, "rtMap"}
{

    yang_name = "rtctrlmap-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::~RtctrlmapItems()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set;
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtctrlmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::RtctrldefmapItems()
    :
    pfxlimit{YType::uint32, "pfxLimit"},
    allowvpn{YType::boolean, "allowVpn"},
    advtvpn{YType::boolean, "advtVpn"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "rtctrldefmap-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::~RtctrldefmapItems()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxlimit.is_set
	|| allowvpn.is_set
	|| advtvpn.is_set
	|| rtmap.is_set;
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxlimit.yfilter)
	|| ydk::is_set(allowvpn.yfilter)
	|| ydk::is_set(advtvpn.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtctrldefmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxlimit.is_set || is_set(pfxlimit.yfilter)) leaf_name_data.push_back(pfxlimit.get_name_leafdata());
    if (allowvpn.is_set || is_set(allowvpn.yfilter)) leaf_name_data.push_back(allowvpn.get_name_leafdata());
    if (advtvpn.is_set || is_set(advtvpn.yfilter)) leaf_name_data.push_back(advtvpn.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxLimit")
    {
        pfxlimit = value;
        pfxlimit.value_namespace = name_space;
        pfxlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowVpn")
    {
        allowvpn = value;
        allowvpn.value_namespace = name_space;
        allowvpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advtVpn")
    {
        advtvpn = value;
        advtvpn.value_namespace = name_space;
        advtvpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxLimit")
    {
        pfxlimit.yfilter = yfilter;
    }
    if(value_path == "allowVpn")
    {
        allowvpn.yfilter = yfilter;
    }
    if(value_path == "advtVpn")
    {
        advtvpn.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfxLimit" || name == "allowVpn" || name == "advtVpn" || name == "rtMap")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlnondefItems::RtctrlnondefItems()
    :
    allowvpn{YType::boolean, "allowVpn"},
    advtvpn{YType::boolean, "advtVpn"}
{

    yang_name = "rtctrlnondef-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlnondefItems::~RtctrlnondefItems()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlnondefItems::has_data() const
{
    if (is_presence_container) return true;
    return allowvpn.is_set
	|| advtvpn.is_set;
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlnondefItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allowvpn.yfilter)
	|| ydk::is_set(advtvpn.yfilter);
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlnondefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtctrlnondef-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlnondefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowvpn.is_set || is_set(allowvpn.yfilter)) leaf_name_data.push_back(allowvpn.get_name_leafdata());
    if (advtvpn.is_set || is_set(advtvpn.yfilter)) leaf_name_data.push_back(advtvpn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlnondefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlnondefItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlnondefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allowVpn")
    {
        allowvpn = value;
        allowvpn.value_namespace = name_space;
        allowvpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advtVpn")
    {
        advtvpn = value;
        advtvpn.value_namespace = name_space;
        advtvpn.value_namespace_prefix = name_space_prefix;
    }
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlnondefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allowVpn")
    {
        allowvpn.yfilter = yfilter;
    }
    if(value_path == "advtVpn")
    {
        advtvpn.yfilter = yfilter;
    }
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlnondefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowVpn" || name == "advtVpn")
        return true;
    return false;
}

System::EvpnItems::EncapMplsItems::EncapMplsItems()
    :
    encapcfg{YType::boolean, "encapCfg"},
    sourceif{YType::str, "sourceIf"},
    operprimaryip{YType::str, "operPrimaryIp"},
    opersecondaryip{YType::str, "operSecondaryIp"},
    operflags{YType::uint32, "operFlags"},
    opersmst{YType::enumeration, "operSmSt"},
    operencapt{YType::enumeration, "operEncapT"},
    operdownreason{YType::str, "operDownReason"}
{

    yang_name = "encap_mpls-items"; yang_parent_name = "evpn-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EvpnItems::EncapMplsItems::~EncapMplsItems()
{
}

bool System::EvpnItems::EncapMplsItems::has_data() const
{
    if (is_presence_container) return true;
    return encapcfg.is_set
	|| sourceif.is_set
	|| operprimaryip.is_set
	|| opersecondaryip.is_set
	|| operflags.is_set
	|| opersmst.is_set
	|| operencapt.is_set
	|| operdownreason.is_set;
}

bool System::EvpnItems::EncapMplsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapcfg.yfilter)
	|| ydk::is_set(sourceif.yfilter)
	|| ydk::is_set(operprimaryip.yfilter)
	|| ydk::is_set(opersecondaryip.yfilter)
	|| ydk::is_set(operflags.yfilter)
	|| ydk::is_set(opersmst.yfilter)
	|| ydk::is_set(operencapt.yfilter)
	|| ydk::is_set(operdownreason.yfilter);
}

std::string System::EvpnItems::EncapMplsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/evpn-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EvpnItems::EncapMplsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encap_mpls-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::EncapMplsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapcfg.is_set || is_set(encapcfg.yfilter)) leaf_name_data.push_back(encapcfg.get_name_leafdata());
    if (sourceif.is_set || is_set(sourceif.yfilter)) leaf_name_data.push_back(sourceif.get_name_leafdata());
    if (operprimaryip.is_set || is_set(operprimaryip.yfilter)) leaf_name_data.push_back(operprimaryip.get_name_leafdata());
    if (opersecondaryip.is_set || is_set(opersecondaryip.yfilter)) leaf_name_data.push_back(opersecondaryip.get_name_leafdata());
    if (operflags.is_set || is_set(operflags.yfilter)) leaf_name_data.push_back(operflags.get_name_leafdata());
    if (opersmst.is_set || is_set(opersmst.yfilter)) leaf_name_data.push_back(opersmst.get_name_leafdata());
    if (operencapt.is_set || is_set(operencapt.yfilter)) leaf_name_data.push_back(operencapt.get_name_leafdata());
    if (operdownreason.is_set || is_set(operdownreason.yfilter)) leaf_name_data.push_back(operdownreason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EvpnItems::EncapMplsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EvpnItems::EncapMplsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EvpnItems::EncapMplsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapCfg")
    {
        encapcfg = value;
        encapcfg.value_namespace = name_space;
        encapcfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceIf")
    {
        sourceif = value;
        sourceif.value_namespace = name_space;
        sourceif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operPrimaryIp")
    {
        operprimaryip = value;
        operprimaryip.value_namespace = name_space;
        operprimaryip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSecondaryIp")
    {
        opersecondaryip = value;
        opersecondaryip.value_namespace = name_space;
        opersecondaryip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operFlags")
    {
        operflags = value;
        operflags.value_namespace = name_space;
        operflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSmSt")
    {
        opersmst = value;
        opersmst.value_namespace = name_space;
        opersmst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operEncapT")
    {
        operencapt = value;
        operencapt.value_namespace = name_space;
        operencapt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDownReason")
    {
        operdownreason = value;
        operdownreason.value_namespace = name_space;
        operdownreason.value_namespace_prefix = name_space_prefix;
    }
}

void System::EvpnItems::EncapMplsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapCfg")
    {
        encapcfg.yfilter = yfilter;
    }
    if(value_path == "sourceIf")
    {
        sourceif.yfilter = yfilter;
    }
    if(value_path == "operPrimaryIp")
    {
        operprimaryip.yfilter = yfilter;
    }
    if(value_path == "operSecondaryIp")
    {
        opersecondaryip.yfilter = yfilter;
    }
    if(value_path == "operFlags")
    {
        operflags.yfilter = yfilter;
    }
    if(value_path == "operSmSt")
    {
        opersmst.yfilter = yfilter;
    }
    if(value_path == "operEncapT")
    {
        operencapt.yfilter = yfilter;
    }
    if(value_path == "operDownReason")
    {
        operdownreason.yfilter = yfilter;
    }
}

bool System::EvpnItems::EncapMplsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapCfg" || name == "sourceIf" || name == "operPrimaryIp" || name == "operSecondaryIp" || name == "operFlags" || name == "operSmSt" || name == "operEncapT" || name == "operDownReason")
        return true;
    return false;
}

System::CommItems::CommItems()
    :
    ssh_items(std::make_shared<System::CommItems::SshItems>())
{
    ssh_items->parent = this;

    yang_name = "comm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CommItems::~CommItems()
{
}

bool System::CommItems::has_data() const
{
    if (is_presence_container) return true;
    return (ssh_items !=  nullptr && ssh_items->has_data());
}

bool System::CommItems::has_operation() const
{
    return is_set(yfilter)
	|| (ssh_items !=  nullptr && ssh_items->has_operation());
}

std::string System::CommItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "comm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssh-items")
    {
        if(ssh_items == nullptr)
        {
            ssh_items = std::make_shared<System::CommItems::SshItems>();
        }
        return ssh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ssh_items != nullptr)
    {
        _children["ssh-items"] = ssh_items;
    }

    return _children;
}

void System::CommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssh-items")
        return true;
    return false;
}

System::CommItems::SshItems::SshItems()
    :
    loginattempt{YType::uint32, "loginAttempt"},
    enweakciphers{YType::enumeration, "enWeakCiphers"},
    keyexchangealgorithms{YType::enumeration, "keyExchangeAlgorithms"},
    ciphers{YType::enumeration, "ciphers"},
    messageauthcodes{YType::enumeration, "messageAuthCodes"},
    keytypes{YType::enumeration, "keyTypes"},
    configerrsshport{YType::enumeration, "configErrSshPort"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    port{YType::uint32, "port"},
    adminst{YType::enumeration, "adminSt"},
    proto{YType::enumeration, "proto"}
        ,
    key_items(std::make_shared<System::CommItems::SshItems::KeyItems>())
    , rekey_items(std::make_shared<System::CommItems::SshItems::RekeyItems>())
    , sshsession_items(std::make_shared<System::CommItems::SshItems::SshsessionItems>())
{
    key_items->parent = this;
    rekey_items->parent = this;
    sshsession_items->parent = this;

    yang_name = "ssh-items"; yang_parent_name = "comm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CommItems::SshItems::~SshItems()
{
}

bool System::CommItems::SshItems::has_data() const
{
    if (is_presence_container) return true;
    return loginattempt.is_set
	|| enweakciphers.is_set
	|| keyexchangealgorithms.is_set
	|| ciphers.is_set
	|| messageauthcodes.is_set
	|| keytypes.is_set
	|| configerrsshport.is_set
	|| name.is_set
	|| descr.is_set
	|| port.is_set
	|| adminst.is_set
	|| proto.is_set
	|| (key_items !=  nullptr && key_items->has_data())
	|| (rekey_items !=  nullptr && rekey_items->has_data())
	|| (sshsession_items !=  nullptr && sshsession_items->has_data());
}

bool System::CommItems::SshItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loginattempt.yfilter)
	|| ydk::is_set(enweakciphers.yfilter)
	|| ydk::is_set(keyexchangealgorithms.yfilter)
	|| ydk::is_set(ciphers.yfilter)
	|| ydk::is_set(messageauthcodes.yfilter)
	|| ydk::is_set(keytypes.yfilter)
	|| ydk::is_set(configerrsshport.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(proto.yfilter)
	|| (key_items !=  nullptr && key_items->has_operation())
	|| (rekey_items !=  nullptr && rekey_items->has_operation())
	|| (sshsession_items !=  nullptr && sshsession_items->has_operation());
}

std::string System::CommItems::SshItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/comm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CommItems::SshItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CommItems::SshItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loginattempt.is_set || is_set(loginattempt.yfilter)) leaf_name_data.push_back(loginattempt.get_name_leafdata());
    if (enweakciphers.is_set || is_set(enweakciphers.yfilter)) leaf_name_data.push_back(enweakciphers.get_name_leafdata());
    if (keyexchangealgorithms.is_set || is_set(keyexchangealgorithms.yfilter)) leaf_name_data.push_back(keyexchangealgorithms.get_name_leafdata());
    if (ciphers.is_set || is_set(ciphers.yfilter)) leaf_name_data.push_back(ciphers.get_name_leafdata());
    if (messageauthcodes.is_set || is_set(messageauthcodes.yfilter)) leaf_name_data.push_back(messageauthcodes.get_name_leafdata());
    if (keytypes.is_set || is_set(keytypes.yfilter)) leaf_name_data.push_back(keytypes.get_name_leafdata());
    if (configerrsshport.is_set || is_set(configerrsshport.yfilter)) leaf_name_data.push_back(configerrsshport.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CommItems::SshItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-items")
    {
        if(key_items == nullptr)
        {
            key_items = std::make_shared<System::CommItems::SshItems::KeyItems>();
        }
        return key_items;
    }

    if(child_yang_name == "rekey-items")
    {
        if(rekey_items == nullptr)
        {
            rekey_items = std::make_shared<System::CommItems::SshItems::RekeyItems>();
        }
        return rekey_items;
    }

    if(child_yang_name == "sshsession-items")
    {
        if(sshsession_items == nullptr)
        {
            sshsession_items = std::make_shared<System::CommItems::SshItems::SshsessionItems>();
        }
        return sshsession_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CommItems::SshItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_items != nullptr)
    {
        _children["key-items"] = key_items;
    }

    if(rekey_items != nullptr)
    {
        _children["rekey-items"] = rekey_items;
    }

    if(sshsession_items != nullptr)
    {
        _children["sshsession-items"] = sshsession_items;
    }

    return _children;
}

void System::CommItems::SshItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loginAttempt")
    {
        loginattempt = value;
        loginattempt.value_namespace = name_space;
        loginattempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enWeakCiphers")
    {
        enweakciphers = value;
        enweakciphers.value_namespace = name_space;
        enweakciphers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyExchangeAlgorithms")
    {
        keyexchangealgorithms = value;
        keyexchangealgorithms.value_namespace = name_space;
        keyexchangealgorithms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciphers")
    {
        ciphers = value;
        ciphers.value_namespace = name_space;
        ciphers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messageAuthCodes")
    {
        messageauthcodes = value;
        messageauthcodes.value_namespace = name_space;
        messageauthcodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyTypes")
    {
        keytypes = value;
        keytypes.value_namespace = name_space;
        keytypes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configErrSshPort")
    {
        configerrsshport = value;
        configerrsshport.value_namespace = name_space;
        configerrsshport.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
}

void System::CommItems::SshItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loginAttempt")
    {
        loginattempt.yfilter = yfilter;
    }
    if(value_path == "enWeakCiphers")
    {
        enweakciphers.yfilter = yfilter;
    }
    if(value_path == "keyExchangeAlgorithms")
    {
        keyexchangealgorithms.yfilter = yfilter;
    }
    if(value_path == "ciphers")
    {
        ciphers.yfilter = yfilter;
    }
    if(value_path == "messageAuthCodes")
    {
        messageauthcodes.yfilter = yfilter;
    }
    if(value_path == "keyTypes")
    {
        keytypes.yfilter = yfilter;
    }
    if(value_path == "configErrSshPort")
    {
        configerrsshport.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
}

bool System::CommItems::SshItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-items" || name == "rekey-items" || name == "sshsession-items" || name == "loginAttempt" || name == "enWeakCiphers" || name == "keyExchangeAlgorithms" || name == "ciphers" || name == "messageAuthCodes" || name == "keyTypes" || name == "configErrSshPort" || name == "name" || name == "descr" || name == "port" || name == "adminSt" || name == "proto")
        return true;
    return false;
}

System::CommItems::SshItems::KeyItems::KeyItems()
    :
    sshkey_list(this, {"type"})
{

    yang_name = "key-items"; yang_parent_name = "ssh-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CommItems::SshItems::KeyItems::~KeyItems()
{
}

bool System::CommItems::SshItems::KeyItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sshkey_list.len(); index++)
    {
        if(sshkey_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CommItems::SshItems::KeyItems::has_operation() const
{
    for (std::size_t index=0; index<sshkey_list.len(); index++)
    {
        if(sshkey_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CommItems::SshItems::KeyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/comm-items/ssh-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CommItems::SshItems::KeyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CommItems::SshItems::KeyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CommItems::SshItems::KeyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SshKey-list")
    {
        auto ent_ = std::make_shared<System::CommItems::SshItems::KeyItems::SshKeyList>();
        ent_->parent = this;
        sshkey_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CommItems::SshItems::KeyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sshkey_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CommItems::SshItems::KeyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CommItems::SshItems::KeyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CommItems::SshItems::KeyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SshKey-list")
        return true;
    return false;
}


}
}

