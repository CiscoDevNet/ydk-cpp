
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_37.hpp"
#include "Cisco_NX_OS_device_38.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::RtfvDyPathAttItems()
    :
    rtfvdypathatt_list(this, {"tdn"})
{

    yang_name = "rtfvDyPathAtt-items"; yang_parent_name = "PathEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::~RtfvDyPathAttItems()
{
}

bool System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvdypathatt_list.len(); index++)
    {
        if(rtfvdypathatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvdypathatt_list.len(); index++)
    {
        if(rtfvdypathatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvDyPathAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvDyPathAtt-list")
    {
        auto ent_ = std::make_shared<System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::RtFvDyPathAttList>();
        ent_->parent = this;
        rtfvdypathatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvdypathatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvDyPathAtt-list")
        return true;
    return false;
}

System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::RtFvDyPathAttList::RtFvDyPathAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFvDyPathAtt-list"; yang_parent_name = "rtfvDyPathAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::RtFvDyPathAttList::~RtFvDyPathAttList()
{
}

bool System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::RtFvDyPathAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::RtFvDyPathAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::RtFvDyPathAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvDyPathAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::RtFvDyPathAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::RtFvDyPathAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::RtFvDyPathAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::RtFvDyPathAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::RtFvDyPathAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::RtFvDyPathAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::RtvsanVsanPathAttItems()
    :
    rtvsanvsanpathatt_list(this, {"tdn"})
{

    yang_name = "rtvsanVsanPathAtt-items"; yang_parent_name = "PathEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::~RtvsanVsanPathAttItems()
{
}

bool System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtvsanvsanpathatt_list.len(); index++)
    {
        if(rtvsanvsanpathatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtvsanvsanpathatt_list.len(); index++)
    {
        if(rtvsanvsanpathatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvsanVsanPathAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtVsanVsanPathAtt-list")
    {
        auto ent_ = std::make_shared<System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::RtVsanVsanPathAttList>();
        ent_->parent = this;
        rtvsanvsanpathatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtvsanvsanpathatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtVsanVsanPathAtt-list")
        return true;
    return false;
}

System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::RtVsanVsanPathAttList::RtVsanVsanPathAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtVsanVsanPathAtt-list"; yang_parent_name = "rtvsanVsanPathAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::RtVsanVsanPathAttList::~RtVsanVsanPathAttList()
{
}

bool System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::RtVsanVsanPathAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::RtVsanVsanPathAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::RtVsanVsanPathAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtVsanVsanPathAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::RtVsanVsanPathAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::RtVsanVsanPathAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::RtVsanVsanPathAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::RtVsanVsanPathAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::RtVsanVsanPathAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::RtVsanVsanPathAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ConngItems::PathItems::PathEpList::RspathToIfItems::RspathToIfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rspathToIf-items"; yang_parent_name = "PathEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ConngItems::PathItems::PathEpList::RspathToIfItems::~RspathToIfItems()
{
}

bool System::ConngItems::PathItems::PathEpList::RspathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ConngItems::PathItems::PathEpList::RspathToIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ConngItems::PathItems::PathEpList::RspathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ConngItems::PathItems::PathEpList::RspathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ConngItems::PathItems::PathEpList::RspathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ConngItems::PathItems::PathEpList::RspathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ConngItems::PathItems::PathEpList::RspathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ConngItems::PathItems::PathEpList::RspathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ConngItems::PathItems::PathEpList::RspathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::VdcItems::VdcItems()
    :
    vdc_list(this, {"id"})
{

    yang_name = "vdc-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VdcItems::~VdcItems()
{
}

bool System::VdcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vdc_list.len(); index++)
    {
        if(vdc_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VdcItems::has_operation() const
{
    for (std::size_t index=0; index<vdc_list.len(); index++)
    {
        if(vdc_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VdcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VdcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vdc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VdcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VdcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vdc-list")
    {
        auto ent_ = std::make_shared<System::VdcItems::VdcList>();
        ent_->parent = this;
        vdc_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VdcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vdc_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VdcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VdcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VdcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vdc-list")
        return true;
    return false;
}

System::VdcItems::VdcList::VdcList()
    :
    id{YType::uint16, "id"},
    name{YType::str, "name"}
        ,
    limres_items(std::make_shared<System::VdcItems::VdcList::LimresItems>())
{
    limres_items->parent = this;

    yang_name = "Vdc-list"; yang_parent_name = "vdc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VdcItems::VdcList::~VdcList()
{
}

bool System::VdcItems::VdcList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| (limres_items !=  nullptr && limres_items->has_data());
}

bool System::VdcItems::VdcList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (limres_items !=  nullptr && limres_items->has_operation());
}

std::string System::VdcItems::VdcList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vdc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VdcItems::VdcList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vdc-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VdcItems::VdcList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VdcItems::VdcList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limres-items")
    {
        if(limres_items == nullptr)
        {
            limres_items = std::make_shared<System::VdcItems::VdcList::LimresItems>();
        }
        return limres_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VdcItems::VdcList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limres_items != nullptr)
    {
        _children["limres-items"] = limres_items;
    }

    return _children;
}

void System::VdcItems::VdcList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::VdcItems::VdcList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::VdcItems::VdcList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limres-items" || name == "id" || name == "name")
        return true;
    return false;
}

System::VdcItems::VdcList::LimresItems::LimresItems()
    :
    vlanmin{YType::uint16, "vlanMin"},
    vlanmax{YType::uint16, "vlanMax"},
    vrfmin{YType::uint16, "vrfMin"},
    vrfmax{YType::uint16, "vrfMax"},
    pomin{YType::uint16, "poMin"},
    pomax{YType::uint16, "poMax"},
    u4rtmemmin{YType::uint16, "u4rtMemMin"},
    u4rtmemmax{YType::uint16, "u4rtMemMax"},
    u6rtmemmin{YType::uint16, "u6rtMemMin"},
    u6rtmemmax{YType::uint16, "u6rtMemMax"},
    m4rtmemmin{YType::uint16, "m4rtMemMin"},
    m4rtmemmax{YType::uint16, "m4rtMemMax"},
    m6rtmemmin{YType::uint16, "m6rtMemMin"},
    m6rtmemmax{YType::uint16, "m6rtMemMax"}
{

    yang_name = "limres-items"; yang_parent_name = "Vdc-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VdcItems::VdcList::LimresItems::~LimresItems()
{
}

bool System::VdcItems::VdcList::LimresItems::has_data() const
{
    if (is_presence_container) return true;
    return vlanmin.is_set
	|| vlanmax.is_set
	|| vrfmin.is_set
	|| vrfmax.is_set
	|| pomin.is_set
	|| pomax.is_set
	|| u4rtmemmin.is_set
	|| u4rtmemmax.is_set
	|| u6rtmemmin.is_set
	|| u6rtmemmax.is_set
	|| m4rtmemmin.is_set
	|| m4rtmemmax.is_set
	|| m6rtmemmin.is_set
	|| m6rtmemmax.is_set;
}

bool System::VdcItems::VdcList::LimresItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanmin.yfilter)
	|| ydk::is_set(vlanmax.yfilter)
	|| ydk::is_set(vrfmin.yfilter)
	|| ydk::is_set(vrfmax.yfilter)
	|| ydk::is_set(pomin.yfilter)
	|| ydk::is_set(pomax.yfilter)
	|| ydk::is_set(u4rtmemmin.yfilter)
	|| ydk::is_set(u4rtmemmax.yfilter)
	|| ydk::is_set(u6rtmemmin.yfilter)
	|| ydk::is_set(u6rtmemmax.yfilter)
	|| ydk::is_set(m4rtmemmin.yfilter)
	|| ydk::is_set(m4rtmemmax.yfilter)
	|| ydk::is_set(m6rtmemmin.yfilter)
	|| ydk::is_set(m6rtmemmax.yfilter);
}

std::string System::VdcItems::VdcList::LimresItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limres-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VdcItems::VdcList::LimresItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanmin.is_set || is_set(vlanmin.yfilter)) leaf_name_data.push_back(vlanmin.get_name_leafdata());
    if (vlanmax.is_set || is_set(vlanmax.yfilter)) leaf_name_data.push_back(vlanmax.get_name_leafdata());
    if (vrfmin.is_set || is_set(vrfmin.yfilter)) leaf_name_data.push_back(vrfmin.get_name_leafdata());
    if (vrfmax.is_set || is_set(vrfmax.yfilter)) leaf_name_data.push_back(vrfmax.get_name_leafdata());
    if (pomin.is_set || is_set(pomin.yfilter)) leaf_name_data.push_back(pomin.get_name_leafdata());
    if (pomax.is_set || is_set(pomax.yfilter)) leaf_name_data.push_back(pomax.get_name_leafdata());
    if (u4rtmemmin.is_set || is_set(u4rtmemmin.yfilter)) leaf_name_data.push_back(u4rtmemmin.get_name_leafdata());
    if (u4rtmemmax.is_set || is_set(u4rtmemmax.yfilter)) leaf_name_data.push_back(u4rtmemmax.get_name_leafdata());
    if (u6rtmemmin.is_set || is_set(u6rtmemmin.yfilter)) leaf_name_data.push_back(u6rtmemmin.get_name_leafdata());
    if (u6rtmemmax.is_set || is_set(u6rtmemmax.yfilter)) leaf_name_data.push_back(u6rtmemmax.get_name_leafdata());
    if (m4rtmemmin.is_set || is_set(m4rtmemmin.yfilter)) leaf_name_data.push_back(m4rtmemmin.get_name_leafdata());
    if (m4rtmemmax.is_set || is_set(m4rtmemmax.yfilter)) leaf_name_data.push_back(m4rtmemmax.get_name_leafdata());
    if (m6rtmemmin.is_set || is_set(m6rtmemmin.yfilter)) leaf_name_data.push_back(m6rtmemmin.get_name_leafdata());
    if (m6rtmemmax.is_set || is_set(m6rtmemmax.yfilter)) leaf_name_data.push_back(m6rtmemmax.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VdcItems::VdcList::LimresItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VdcItems::VdcList::LimresItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VdcItems::VdcList::LimresItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanMin")
    {
        vlanmin = value;
        vlanmin.value_namespace = name_space;
        vlanmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanMax")
    {
        vlanmax = value;
        vlanmax.value_namespace = name_space;
        vlanmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfMin")
    {
        vrfmin = value;
        vrfmin.value_namespace = name_space;
        vrfmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfMax")
    {
        vrfmax = value;
        vrfmax.value_namespace = name_space;
        vrfmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poMin")
    {
        pomin = value;
        pomin.value_namespace = name_space;
        pomin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poMax")
    {
        pomax = value;
        pomax.value_namespace = name_space;
        pomax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "u4rtMemMin")
    {
        u4rtmemmin = value;
        u4rtmemmin.value_namespace = name_space;
        u4rtmemmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "u4rtMemMax")
    {
        u4rtmemmax = value;
        u4rtmemmax.value_namespace = name_space;
        u4rtmemmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "u6rtMemMin")
    {
        u6rtmemmin = value;
        u6rtmemmin.value_namespace = name_space;
        u6rtmemmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "u6rtMemMax")
    {
        u6rtmemmax = value;
        u6rtmemmax.value_namespace = name_space;
        u6rtmemmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "m4rtMemMin")
    {
        m4rtmemmin = value;
        m4rtmemmin.value_namespace = name_space;
        m4rtmemmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "m4rtMemMax")
    {
        m4rtmemmax = value;
        m4rtmemmax.value_namespace = name_space;
        m4rtmemmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "m6rtMemMin")
    {
        m6rtmemmin = value;
        m6rtmemmin.value_namespace = name_space;
        m6rtmemmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "m6rtMemMax")
    {
        m6rtmemmax = value;
        m6rtmemmax.value_namespace = name_space;
        m6rtmemmax.value_namespace_prefix = name_space_prefix;
    }
}

void System::VdcItems::VdcList::LimresItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanMin")
    {
        vlanmin.yfilter = yfilter;
    }
    if(value_path == "vlanMax")
    {
        vlanmax.yfilter = yfilter;
    }
    if(value_path == "vrfMin")
    {
        vrfmin.yfilter = yfilter;
    }
    if(value_path == "vrfMax")
    {
        vrfmax.yfilter = yfilter;
    }
    if(value_path == "poMin")
    {
        pomin.yfilter = yfilter;
    }
    if(value_path == "poMax")
    {
        pomax.yfilter = yfilter;
    }
    if(value_path == "u4rtMemMin")
    {
        u4rtmemmin.yfilter = yfilter;
    }
    if(value_path == "u4rtMemMax")
    {
        u4rtmemmax.yfilter = yfilter;
    }
    if(value_path == "u6rtMemMin")
    {
        u6rtmemmin.yfilter = yfilter;
    }
    if(value_path == "u6rtMemMax")
    {
        u6rtmemmax.yfilter = yfilter;
    }
    if(value_path == "m4rtMemMin")
    {
        m4rtmemmin.yfilter = yfilter;
    }
    if(value_path == "m4rtMemMax")
    {
        m4rtmemmax.yfilter = yfilter;
    }
    if(value_path == "m6rtMemMin")
    {
        m6rtmemmin.yfilter = yfilter;
    }
    if(value_path == "m6rtMemMax")
    {
        m6rtmemmax.yfilter = yfilter;
    }
}

bool System::VdcItems::VdcList::LimresItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanMin" || name == "vlanMax" || name == "vrfMin" || name == "vrfMax" || name == "poMin" || name == "poMax" || name == "u4rtMemMin" || name == "u4rtMemMax" || name == "u6rtMemMin" || name == "u6rtMemMax" || name == "m4rtMemMin" || name == "m4rtMemMax" || name == "m6rtMemMin" || name == "m6rtMemMax")
        return true;
    return false;
}

System::PktmgrItems::PktmgrItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::PktmgrItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "pktmgr-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PktmgrItems::~PktmgrItems()
{
}

bool System::PktmgrItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::PktmgrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::PktmgrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PktmgrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pktmgr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PktmgrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PktmgrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::PktmgrItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PktmgrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::PktmgrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PktmgrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PktmgrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::PktmgrItems::InstItems::InstItems()
    :
    logginglevel{YType::enumeration, "loggingLevel"},
    ratelimitdirection{YType::enumeration, "rateLimitDirection"},
    ratelimitpps{YType::int32, "rateLimitPps"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    if_items(std::make_shared<System::PktmgrItems::InstItems::IfItems>())
{
    if_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "pktmgr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PktmgrItems::InstItems::~InstItems()
{
}

bool System::PktmgrItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return logginglevel.is_set
	|| ratelimitdirection.is_set
	|| ratelimitpps.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::PktmgrItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(ratelimitdirection.yfilter)
	|| ydk::is_set(ratelimitpps.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::PktmgrItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pktmgr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PktmgrItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PktmgrItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (ratelimitdirection.is_set || is_set(ratelimitdirection.yfilter)) leaf_name_data.push_back(ratelimitdirection.get_name_leafdata());
    if (ratelimitpps.is_set || is_set(ratelimitpps.yfilter)) leaf_name_data.push_back(ratelimitpps.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PktmgrItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::PktmgrItems::InstItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PktmgrItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::PktmgrItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rateLimitDirection")
    {
        ratelimitdirection = value;
        ratelimitdirection.value_namespace = name_space;
        ratelimitdirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rateLimitPps")
    {
        ratelimitpps = value;
        ratelimitpps.value_namespace = name_space;
        ratelimitpps.value_namespace_prefix = name_space_prefix;
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

void System::PktmgrItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
    }
    if(value_path == "rateLimitDirection")
    {
        ratelimitdirection.yfilter = yfilter;
    }
    if(value_path == "rateLimitPps")
    {
        ratelimitpps.yfilter = yfilter;
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

bool System::PktmgrItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "loggingLevel" || name == "rateLimitDirection" || name == "rateLimitPps" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::PktmgrItems::InstItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PktmgrItems::InstItems::IfItems::~IfItems()
{
}

bool System::PktmgrItems::InstItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PktmgrItems::InstItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PktmgrItems::InstItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pktmgr-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PktmgrItems::InstItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PktmgrItems::InstItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PktmgrItems::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::PktmgrItems::InstItems::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PktmgrItems::InstItems::IfItems::get_children() const
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

void System::PktmgrItems::InstItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PktmgrItems::InstItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PktmgrItems::InstItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::PktmgrItems::InstItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    ratelimitdirection{YType::enumeration, "rateLimitDirection"},
    ratelimitpps{YType::int32, "rateLimitPps"}
        ,
    rtvrfmbr_items(std::make_shared<System::PktmgrItems::InstItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PktmgrItems::InstItems::IfItems::IfList::~IfList()
{
}

bool System::PktmgrItems::InstItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ratelimitdirection.is_set
	|| ratelimitpps.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::PktmgrItems::InstItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ratelimitdirection.yfilter)
	|| ydk::is_set(ratelimitpps.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::PktmgrItems::InstItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pktmgr-items/inst-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PktmgrItems::InstItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PktmgrItems::InstItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ratelimitdirection.is_set || is_set(ratelimitdirection.yfilter)) leaf_name_data.push_back(ratelimitdirection.get_name_leafdata());
    if (ratelimitpps.is_set || is_set(ratelimitpps.yfilter)) leaf_name_data.push_back(ratelimitpps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PktmgrItems::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::PktmgrItems::InstItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PktmgrItems::InstItems::IfItems::IfList::get_children() const
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

void System::PktmgrItems::InstItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rateLimitDirection")
    {
        ratelimitdirection = value;
        ratelimitdirection.value_namespace = name_space;
        ratelimitdirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rateLimitPps")
    {
        ratelimitpps = value;
        ratelimitpps.value_namespace = name_space;
        ratelimitpps.value_namespace_prefix = name_space_prefix;
    }
}

void System::PktmgrItems::InstItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "rateLimitDirection")
    {
        ratelimitdirection.yfilter = yfilter;
    }
    if(value_path == "rateLimitPps")
    {
        ratelimitpps.yfilter = yfilter;
    }
}

bool System::PktmgrItems::InstItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "rateLimitDirection" || name == "rateLimitPps")
        return true;
    return false;
}

System::PktmgrItems::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PktmgrItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::PktmgrItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::PktmgrItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::PktmgrItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PktmgrItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PktmgrItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PktmgrItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PktmgrItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::PktmgrItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::PktmgrItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ProcsysItems::ProcsysItems()
    :
    maxmemalloc{YType::uint64, "maxMemAlloc"},
    upts{YType::str, "upTs"},
    name{YType::str, "name"}
        ,
    proc_items(std::make_shared<System::ProcsysItems::ProcItems>())
    , syscore_items(std::make_shared<System::ProcsysItems::SyscoreItems>())
    , sysload_items(std::make_shared<System::ProcsysItems::SysloadItems>())
    , syscpusummary_items(std::make_shared<System::ProcsysItems::SyscpusummaryItems>())
    , sysmem_items(std::make_shared<System::ProcsysItems::SysmemItems>())
{
    proc_items->parent = this;
    syscore_items->parent = this;
    sysload_items->parent = this;
    syscpusummary_items->parent = this;
    sysmem_items->parent = this;

    yang_name = "procsys-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcsysItems::~ProcsysItems()
{
}

bool System::ProcsysItems::has_data() const
{
    if (is_presence_container) return true;
    return maxmemalloc.is_set
	|| upts.is_set
	|| name.is_set
	|| (proc_items !=  nullptr && proc_items->has_data())
	|| (syscore_items !=  nullptr && syscore_items->has_data())
	|| (sysload_items !=  nullptr && sysload_items->has_data())
	|| (syscpusummary_items !=  nullptr && syscpusummary_items->has_data())
	|| (sysmem_items !=  nullptr && sysmem_items->has_data());
}

bool System::ProcsysItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxmemalloc.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (proc_items !=  nullptr && proc_items->has_operation())
	|| (syscore_items !=  nullptr && syscore_items->has_operation())
	|| (sysload_items !=  nullptr && sysload_items->has_operation())
	|| (syscpusummary_items !=  nullptr && syscpusummary_items->has_operation())
	|| (sysmem_items !=  nullptr && sysmem_items->has_operation());
}

std::string System::ProcsysItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcsysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "procsys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxmemalloc.is_set || is_set(maxmemalloc.yfilter)) leaf_name_data.push_back(maxmemalloc.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proc-items")
    {
        if(proc_items == nullptr)
        {
            proc_items = std::make_shared<System::ProcsysItems::ProcItems>();
        }
        return proc_items;
    }

    if(child_yang_name == "syscore-items")
    {
        if(syscore_items == nullptr)
        {
            syscore_items = std::make_shared<System::ProcsysItems::SyscoreItems>();
        }
        return syscore_items;
    }

    if(child_yang_name == "sysload-items")
    {
        if(sysload_items == nullptr)
        {
            sysload_items = std::make_shared<System::ProcsysItems::SysloadItems>();
        }
        return sysload_items;
    }

    if(child_yang_name == "syscpusummary-items")
    {
        if(syscpusummary_items == nullptr)
        {
            syscpusummary_items = std::make_shared<System::ProcsysItems::SyscpusummaryItems>();
        }
        return syscpusummary_items;
    }

    if(child_yang_name == "sysmem-items")
    {
        if(sysmem_items == nullptr)
        {
            sysmem_items = std::make_shared<System::ProcsysItems::SysmemItems>();
        }
        return sysmem_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(proc_items != nullptr)
    {
        _children["proc-items"] = proc_items;
    }

    if(syscore_items != nullptr)
    {
        _children["syscore-items"] = syscore_items;
    }

    if(sysload_items != nullptr)
    {
        _children["sysload-items"] = sysload_items;
    }

    if(syscpusummary_items != nullptr)
    {
        _children["syscpusummary-items"] = syscpusummary_items;
    }

    if(sysmem_items != nullptr)
    {
        _children["sysmem-items"] = sysmem_items;
    }

    return _children;
}

void System::ProcsysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxMemAlloc")
    {
        maxmemalloc = value;
        maxmemalloc.value_namespace = name_space;
        maxmemalloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTs")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxMemAlloc")
    {
        maxmemalloc.yfilter = yfilter;
    }
    if(value_path == "upTs")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proc-items" || name == "syscore-items" || name == "sysload-items" || name == "syscpusummary-items" || name == "sysmem-items" || name == "maxMemAlloc" || name == "upTs" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::ProcItems::ProcItems()
    :
    proc_list(this, {"id"})
{

    yang_name = "proc-items"; yang_parent_name = "procsys-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcsysItems::ProcItems::~ProcItems()
{
}

bool System::ProcsysItems::ProcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<proc_list.len(); index++)
    {
        if(proc_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ProcsysItems::ProcItems::has_operation() const
{
    for (std::size_t index=0; index<proc_list.len(); index++)
    {
        if(proc_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ProcsysItems::ProcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/procsys-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcsysItems::ProcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::ProcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::ProcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Proc-list")
    {
        auto ent_ = std::make_shared<System::ProcsysItems::ProcItems::ProcList>();
        ent_->parent = this;
        proc_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::ProcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : proc_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ProcsysItems::ProcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ProcsysItems::ProcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ProcsysItems::ProcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Proc-list")
        return true;
    return false;
}

System::ProcsysItems::ProcItems::ProcList::ProcList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"},
    name{YType::str, "name"}
{

    yang_name = "Proc-list"; yang_parent_name = "proc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcsysItems::ProcItems::ProcList::~ProcList()
{
}

bool System::ProcsysItems::ProcItems::ProcList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| name.is_set;
}

bool System::ProcsysItems::ProcItems::ProcList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ProcsysItems::ProcItems::ProcList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/procsys-items/proc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcsysItems::ProcItems::ProcList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Proc-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::ProcItems::ProcList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::ProcItems::ProcList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::ProcItems::ProcList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ProcsysItems::ProcItems::ProcList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::ProcItems::ProcList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::ProcItems::ProcList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::SyscoreItems::SyscoreItems()
    :
    numofcores{YType::uint32, "numOfCores"},
    name{YType::str, "name"}
        ,
    core_items(std::make_shared<System::ProcsysItems::SyscoreItems::CoreItems>())
{
    core_items->parent = this;

    yang_name = "syscore-items"; yang_parent_name = "procsys-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcsysItems::SyscoreItems::~SyscoreItems()
{
}

bool System::ProcsysItems::SyscoreItems::has_data() const
{
    if (is_presence_container) return true;
    return numofcores.is_set
	|| name.is_set
	|| (core_items !=  nullptr && core_items->has_data());
}

bool System::ProcsysItems::SyscoreItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(numofcores.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (core_items !=  nullptr && core_items->has_operation());
}

std::string System::ProcsysItems::SyscoreItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/procsys-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcsysItems::SyscoreItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syscore-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SyscoreItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (numofcores.is_set || is_set(numofcores.yfilter)) leaf_name_data.push_back(numofcores.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SyscoreItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-items")
    {
        if(core_items == nullptr)
        {
            core_items = std::make_shared<System::ProcsysItems::SyscoreItems::CoreItems>();
        }
        return core_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SyscoreItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(core_items != nullptr)
    {
        _children["core-items"] = core_items;
    }

    return _children;
}

void System::ProcsysItems::SyscoreItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "numOfCores")
    {
        numofcores = value;
        numofcores.value_namespace = name_space;
        numofcores.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::SyscoreItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "numOfCores")
    {
        numofcores.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::SyscoreItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-items" || name == "numOfCores" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::SyscoreItems::CoreItems::CoreItems()
    :
    core_list(this, {"processid"})
{

    yang_name = "core-items"; yang_parent_name = "syscore-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcsysItems::SyscoreItems::CoreItems::~CoreItems()
{
}

bool System::ProcsysItems::SyscoreItems::CoreItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ProcsysItems::SyscoreItems::CoreItems::has_operation() const
{
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ProcsysItems::SyscoreItems::CoreItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/procsys-items/syscore-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcsysItems::SyscoreItems::CoreItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SyscoreItems::CoreItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SyscoreItems::CoreItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Core-list")
    {
        auto ent_ = std::make_shared<System::ProcsysItems::SyscoreItems::CoreItems::CoreList>();
        ent_->parent = this;
        core_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SyscoreItems::CoreItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : core_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ProcsysItems::SyscoreItems::CoreItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ProcsysItems::SyscoreItems::CoreItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ProcsysItems::SyscoreItems::CoreItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Core-list")
        return true;
    return false;
}

System::ProcsysItems::SyscoreItems::CoreItems::CoreList::CoreList()
    :
    processid{YType::uint32, "processId"},
    vdcid{YType::uint32, "vdcId"},
    modulenumber{YType::uint32, "moduleNumber"},
    instancenumber{YType::uint32, "instanceNumber"},
    processname{YType::str, "processName"},
    date{YType::str, "date"},
    name{YType::str, "name"}
{

    yang_name = "Core-list"; yang_parent_name = "core-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcsysItems::SyscoreItems::CoreItems::CoreList::~CoreList()
{
}

bool System::ProcsysItems::SyscoreItems::CoreItems::CoreList::has_data() const
{
    if (is_presence_container) return true;
    return processid.is_set
	|| vdcid.is_set
	|| modulenumber.is_set
	|| instancenumber.is_set
	|| processname.is_set
	|| date.is_set
	|| name.is_set;
}

bool System::ProcsysItems::SyscoreItems::CoreItems::CoreList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processid.yfilter)
	|| ydk::is_set(vdcid.yfilter)
	|| ydk::is_set(modulenumber.yfilter)
	|| ydk::is_set(instancenumber.yfilter)
	|| ydk::is_set(processname.yfilter)
	|| ydk::is_set(date.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ProcsysItems::SyscoreItems::CoreItems::CoreList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/procsys-items/syscore-items/core-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcsysItems::SyscoreItems::CoreItems::CoreList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Core-list";
    ADD_KEY_TOKEN(processid, "processId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SyscoreItems::CoreItems::CoreList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processid.is_set || is_set(processid.yfilter)) leaf_name_data.push_back(processid.get_name_leafdata());
    if (vdcid.is_set || is_set(vdcid.yfilter)) leaf_name_data.push_back(vdcid.get_name_leafdata());
    if (modulenumber.is_set || is_set(modulenumber.yfilter)) leaf_name_data.push_back(modulenumber.get_name_leafdata());
    if (instancenumber.is_set || is_set(instancenumber.yfilter)) leaf_name_data.push_back(instancenumber.get_name_leafdata());
    if (processname.is_set || is_set(processname.yfilter)) leaf_name_data.push_back(processname.get_name_leafdata());
    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SyscoreItems::CoreItems::CoreList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SyscoreItems::CoreItems::CoreList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ProcsysItems::SyscoreItems::CoreItems::CoreList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processId")
    {
        processid = value;
        processid.value_namespace = name_space;
        processid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdcId")
    {
        vdcid = value;
        vdcid.value_namespace = name_space;
        vdcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "moduleNumber")
    {
        modulenumber = value;
        modulenumber.value_namespace = name_space;
        modulenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instanceNumber")
    {
        instancenumber = value;
        instancenumber.value_namespace = name_space;
        instancenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processName")
    {
        processname = value;
        processname.value_namespace = name_space;
        processname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::SyscoreItems::CoreItems::CoreList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processId")
    {
        processid.yfilter = yfilter;
    }
    if(value_path == "vdcId")
    {
        vdcid.yfilter = yfilter;
    }
    if(value_path == "moduleNumber")
    {
        modulenumber.yfilter = yfilter;
    }
    if(value_path == "instanceNumber")
    {
        instancenumber.yfilter = yfilter;
    }
    if(value_path == "processName")
    {
        processname.yfilter = yfilter;
    }
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::SyscoreItems::CoreItems::CoreList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processId" || name == "vdcId" || name == "moduleNumber" || name == "instanceNumber" || name == "processName" || name == "date" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::SysloadItems::SysloadItems()
    :
    loadaverage1m{YType::str, "loadAverage1m"},
    loadaverage5m{YType::str, "loadAverage5m"},
    loadaverage15m{YType::str, "loadAverage15m"},
    loadaverage5sec{YType::str, "loadAverage5sec"},
    totalproc{YType::uint32, "totalProc"},
    runproc{YType::uint32, "runProc"},
    name{YType::str, "name"}
{

    yang_name = "sysload-items"; yang_parent_name = "procsys-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcsysItems::SysloadItems::~SysloadItems()
{
}

bool System::ProcsysItems::SysloadItems::has_data() const
{
    if (is_presence_container) return true;
    return loadaverage1m.is_set
	|| loadaverage5m.is_set
	|| loadaverage15m.is_set
	|| loadaverage5sec.is_set
	|| totalproc.is_set
	|| runproc.is_set
	|| name.is_set;
}

bool System::ProcsysItems::SysloadItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loadaverage1m.yfilter)
	|| ydk::is_set(loadaverage5m.yfilter)
	|| ydk::is_set(loadaverage15m.yfilter)
	|| ydk::is_set(loadaverage5sec.yfilter)
	|| ydk::is_set(totalproc.yfilter)
	|| ydk::is_set(runproc.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ProcsysItems::SysloadItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/procsys-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcsysItems::SysloadItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysload-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SysloadItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loadaverage1m.is_set || is_set(loadaverage1m.yfilter)) leaf_name_data.push_back(loadaverage1m.get_name_leafdata());
    if (loadaverage5m.is_set || is_set(loadaverage5m.yfilter)) leaf_name_data.push_back(loadaverage5m.get_name_leafdata());
    if (loadaverage15m.is_set || is_set(loadaverage15m.yfilter)) leaf_name_data.push_back(loadaverage15m.get_name_leafdata());
    if (loadaverage5sec.is_set || is_set(loadaverage5sec.yfilter)) leaf_name_data.push_back(loadaverage5sec.get_name_leafdata());
    if (totalproc.is_set || is_set(totalproc.yfilter)) leaf_name_data.push_back(totalproc.get_name_leafdata());
    if (runproc.is_set || is_set(runproc.yfilter)) leaf_name_data.push_back(runproc.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SysloadItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SysloadItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ProcsysItems::SysloadItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loadAverage1m")
    {
        loadaverage1m = value;
        loadaverage1m.value_namespace = name_space;
        loadaverage1m.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadAverage5m")
    {
        loadaverage5m = value;
        loadaverage5m.value_namespace = name_space;
        loadaverage5m.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadAverage15m")
    {
        loadaverage15m = value;
        loadaverage15m.value_namespace = name_space;
        loadaverage15m.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadAverage5sec")
    {
        loadaverage5sec = value;
        loadaverage5sec.value_namespace = name_space;
        loadaverage5sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalProc")
    {
        totalproc = value;
        totalproc.value_namespace = name_space;
        totalproc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runProc")
    {
        runproc = value;
        runproc.value_namespace = name_space;
        runproc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::SysloadItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loadAverage1m")
    {
        loadaverage1m.yfilter = yfilter;
    }
    if(value_path == "loadAverage5m")
    {
        loadaverage5m.yfilter = yfilter;
    }
    if(value_path == "loadAverage15m")
    {
        loadaverage15m.yfilter = yfilter;
    }
    if(value_path == "loadAverage5sec")
    {
        loadaverage5sec.yfilter = yfilter;
    }
    if(value_path == "totalProc")
    {
        totalproc.yfilter = yfilter;
    }
    if(value_path == "runProc")
    {
        runproc.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::SysloadItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loadAverage1m" || name == "loadAverage5m" || name == "loadAverage15m" || name == "loadAverage5sec" || name == "totalProc" || name == "runProc" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::SyscpusummaryItems::SyscpusummaryItems()
    :
    user{YType::str, "user"},
    kernel{YType::str, "kernel"},
    idle{YType::str, "idle"},
    name{YType::str, "name"}
        ,
    syscpuhistory_items(std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems>())
    , syscpu_items(std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems>())
{
    syscpuhistory_items->parent = this;
    syscpu_items->parent = this;

    yang_name = "syscpusummary-items"; yang_parent_name = "procsys-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcsysItems::SyscpusummaryItems::~SyscpusummaryItems()
{
}

bool System::ProcsysItems::SyscpusummaryItems::has_data() const
{
    if (is_presence_container) return true;
    return user.is_set
	|| kernel.is_set
	|| idle.is_set
	|| name.is_set
	|| (syscpuhistory_items !=  nullptr && syscpuhistory_items->has_data())
	|| (syscpu_items !=  nullptr && syscpu_items->has_data());
}

bool System::ProcsysItems::SyscpusummaryItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user.yfilter)
	|| ydk::is_set(kernel.yfilter)
	|| ydk::is_set(idle.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (syscpuhistory_items !=  nullptr && syscpuhistory_items->has_operation())
	|| (syscpu_items !=  nullptr && syscpu_items->has_operation());
}

std::string System::ProcsysItems::SyscpusummaryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/procsys-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcsysItems::SyscpusummaryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syscpusummary-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SyscpusummaryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());
    if (kernel.is_set || is_set(kernel.yfilter)) leaf_name_data.push_back(kernel.get_name_leafdata());
    if (idle.is_set || is_set(idle.yfilter)) leaf_name_data.push_back(idle.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SyscpusummaryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syscpuhistory-items")
    {
        if(syscpuhistory_items == nullptr)
        {
            syscpuhistory_items = std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems>();
        }
        return syscpuhistory_items;
    }

    if(child_yang_name == "syscpu-items")
    {
        if(syscpu_items == nullptr)
        {
            syscpu_items = std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems>();
        }
        return syscpu_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SyscpusummaryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(syscpuhistory_items != nullptr)
    {
        _children["syscpuhistory-items"] = syscpuhistory_items;
    }

    if(syscpu_items != nullptr)
    {
        _children["syscpu-items"] = syscpu_items;
    }

    return _children;
}

void System::ProcsysItems::SyscpusummaryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kernel")
    {
        kernel = value;
        kernel.value_namespace = name_space;
        kernel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle")
    {
        idle = value;
        idle.value_namespace = name_space;
        idle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::SyscpusummaryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
    if(value_path == "kernel")
    {
        kernel.yfilter = yfilter;
    }
    if(value_path == "idle")
    {
        idle.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::SyscpusummaryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syscpuhistory-items" || name == "syscpu-items" || name == "user" || name == "kernel" || name == "idle" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::SyscpuhistoryItems()
    :
    syscpuhistory_list(this, {"durationname"})
{

    yang_name = "syscpuhistory-items"; yang_parent_name = "syscpusummary-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::~SyscpuhistoryItems()
{
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<syscpuhistory_list.len(); index++)
    {
        if(syscpuhistory_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::has_operation() const
{
    for (std::size_t index=0; index<syscpuhistory_list.len(); index++)
    {
        if(syscpuhistory_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/procsys-items/syscpusummary-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syscpuhistory-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SysCpuHistory-list")
    {
        auto ent_ = std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::SysCpuHistoryList>();
        ent_->parent = this;
        syscpuhistory_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : syscpuhistory_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SysCpuHistory-list")
        return true;
    return false;
}

System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::SysCpuHistoryList::SysCpuHistoryList()
    :
    durationname{YType::enumeration, "durationname"},
    usage{YType::str, "usage"},
    usagemin{YType::uint32, "usageMin"},
    usageavg{YType::str, "usageAvg"},
    usagemax{YType::uint32, "usageMax"},
    name{YType::str, "name"}
{

    yang_name = "SysCpuHistory-list"; yang_parent_name = "syscpuhistory-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::SysCpuHistoryList::~SysCpuHistoryList()
{
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::SysCpuHistoryList::has_data() const
{
    if (is_presence_container) return true;
    return durationname.is_set
	|| usage.is_set
	|| usagemin.is_set
	|| usageavg.is_set
	|| usagemax.is_set
	|| name.is_set;
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::SysCpuHistoryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(durationname.yfilter)
	|| ydk::is_set(usage.yfilter)
	|| ydk::is_set(usagemin.yfilter)
	|| ydk::is_set(usageavg.yfilter)
	|| ydk::is_set(usagemax.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::SysCpuHistoryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/procsys-items/syscpusummary-items/syscpuhistory-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::SysCpuHistoryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SysCpuHistory-list";
    ADD_KEY_TOKEN(durationname, "durationname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::SysCpuHistoryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (durationname.is_set || is_set(durationname.yfilter)) leaf_name_data.push_back(durationname.get_name_leafdata());
    if (usage.is_set || is_set(usage.yfilter)) leaf_name_data.push_back(usage.get_name_leafdata());
    if (usagemin.is_set || is_set(usagemin.yfilter)) leaf_name_data.push_back(usagemin.get_name_leafdata());
    if (usageavg.is_set || is_set(usageavg.yfilter)) leaf_name_data.push_back(usageavg.get_name_leafdata());
    if (usagemax.is_set || is_set(usagemax.yfilter)) leaf_name_data.push_back(usagemax.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::SysCpuHistoryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::SysCpuHistoryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::SysCpuHistoryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "durationname")
    {
        durationname = value;
        durationname.value_namespace = name_space;
        durationname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage")
    {
        usage = value;
        usage.value_namespace = name_space;
        usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usageMin")
    {
        usagemin = value;
        usagemin.value_namespace = name_space;
        usagemin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usageAvg")
    {
        usageavg = value;
        usageavg.value_namespace = name_space;
        usageavg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usageMax")
    {
        usagemax = value;
        usagemax.value_namespace = name_space;
        usagemax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::SysCpuHistoryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "durationname")
    {
        durationname.yfilter = yfilter;
    }
    if(value_path == "usage")
    {
        usage.yfilter = yfilter;
    }
    if(value_path == "usageMin")
    {
        usagemin.yfilter = yfilter;
    }
    if(value_path == "usageAvg")
    {
        usageavg.yfilter = yfilter;
    }
    if(value_path == "usageMax")
    {
        usagemax.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::SysCpuHistoryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "durationname" || name == "usage" || name == "usageMin" || name == "usageAvg" || name == "usageMax" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SyscpuItems()
    :
    syscpu_list(this, {"id"})
{

    yang_name = "syscpu-items"; yang_parent_name = "syscpusummary-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::~SyscpuItems()
{
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<syscpu_list.len(); index++)
    {
        if(syscpu_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::has_operation() const
{
    for (std::size_t index=0; index<syscpu_list.len(); index++)
    {
        if(syscpu_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ProcsysItems::SyscpusummaryItems::SyscpuItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/procsys-items/syscpusummary-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcsysItems::SyscpusummaryItems::SyscpuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syscpu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SyscpusummaryItems::SyscpuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SysCpu-list")
    {
        auto ent_ = std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList>();
        ent_->parent = this;
        syscpu_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : syscpu_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SysCpu-list")
        return true;
    return false;
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::SysCpuList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"}
        ,
    kernel_items(std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::KernelItems>())
    , total_items(std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::TotalItems>())
    , user_items(std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::UserItems>())
    , nice_items(std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::NiceItems>())
    , idle_items(std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IdleItems>())
    , wait_items(std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::WaitItems>())
    , irq_items(std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IrqItems>())
    , softirq_items(std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::SoftirqItems>())
{
    kernel_items->parent = this;
    total_items->parent = this;
    user_items->parent = this;
    nice_items->parent = this;
    idle_items->parent = this;
    wait_items->parent = this;
    irq_items->parent = this;
    softirq_items->parent = this;

    yang_name = "SysCpu-list"; yang_parent_name = "syscpu-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::~SysCpuList()
{
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| (kernel_items !=  nullptr && kernel_items->has_data())
	|| (total_items !=  nullptr && total_items->has_data())
	|| (user_items !=  nullptr && user_items->has_data())
	|| (nice_items !=  nullptr && nice_items->has_data())
	|| (idle_items !=  nullptr && idle_items->has_data())
	|| (wait_items !=  nullptr && wait_items->has_data())
	|| (irq_items !=  nullptr && irq_items->has_data())
	|| (softirq_items !=  nullptr && softirq_items->has_data());
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (kernel_items !=  nullptr && kernel_items->has_operation())
	|| (total_items !=  nullptr && total_items->has_operation())
	|| (user_items !=  nullptr && user_items->has_operation())
	|| (nice_items !=  nullptr && nice_items->has_operation())
	|| (idle_items !=  nullptr && idle_items->has_operation())
	|| (wait_items !=  nullptr && wait_items->has_operation())
	|| (irq_items !=  nullptr && irq_items->has_operation())
	|| (softirq_items !=  nullptr && softirq_items->has_operation());
}

std::string System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/procsys-items/syscpusummary-items/syscpu-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SysCpu-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "kernel-items")
    {
        if(kernel_items == nullptr)
        {
            kernel_items = std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::KernelItems>();
        }
        return kernel_items;
    }

    if(child_yang_name == "total-items")
    {
        if(total_items == nullptr)
        {
            total_items = std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::TotalItems>();
        }
        return total_items;
    }

    if(child_yang_name == "user-items")
    {
        if(user_items == nullptr)
        {
            user_items = std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::UserItems>();
        }
        return user_items;
    }

    if(child_yang_name == "nice-items")
    {
        if(nice_items == nullptr)
        {
            nice_items = std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::NiceItems>();
        }
        return nice_items;
    }

    if(child_yang_name == "idle-items")
    {
        if(idle_items == nullptr)
        {
            idle_items = std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IdleItems>();
        }
        return idle_items;
    }

    if(child_yang_name == "wait-items")
    {
        if(wait_items == nullptr)
        {
            wait_items = std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::WaitItems>();
        }
        return wait_items;
    }

    if(child_yang_name == "irq-items")
    {
        if(irq_items == nullptr)
        {
            irq_items = std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IrqItems>();
        }
        return irq_items;
    }

    if(child_yang_name == "softirq-items")
    {
        if(softirq_items == nullptr)
        {
            softirq_items = std::make_shared<System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::SoftirqItems>();
        }
        return softirq_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(kernel_items != nullptr)
    {
        _children["kernel-items"] = kernel_items;
    }

    if(total_items != nullptr)
    {
        _children["total-items"] = total_items;
    }

    if(user_items != nullptr)
    {
        _children["user-items"] = user_items;
    }

    if(nice_items != nullptr)
    {
        _children["nice-items"] = nice_items;
    }

    if(idle_items != nullptr)
    {
        _children["idle-items"] = idle_items;
    }

    if(wait_items != nullptr)
    {
        _children["wait-items"] = wait_items;
    }

    if(irq_items != nullptr)
    {
        _children["irq-items"] = irq_items;
    }

    if(softirq_items != nullptr)
    {
        _children["softirq-items"] = softirq_items;
    }

    return _children;
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kernel-items" || name == "total-items" || name == "user-items" || name == "nice-items" || name == "idle-items" || name == "wait-items" || name == "irq-items" || name == "softirq-items" || name == "id" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::KernelItems::KernelItems()
    :
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"},
    mininstant{YType::uint64, "minInstant"},
    maxinstant{YType::uint64, "maxInstant"},
    stats{YType::uint64, "stats"},
    pct{YType::str, "pct"},
    name{YType::str, "name"}
{

    yang_name = "kernel-items"; yang_parent_name = "SysCpu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::KernelItems::~KernelItems()
{
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::KernelItems::has_data() const
{
    if (is_presence_container) return true;
    return avg.is_set
	|| min.is_set
	|| max.is_set
	|| mininstant.is_set
	|| maxinstant.is_set
	|| stats.is_set
	|| pct.is_set
	|| name.is_set;
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::KernelItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(mininstant.yfilter)
	|| ydk::is_set(maxinstant.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(pct.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::KernelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "kernel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::KernelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (mininstant.is_set || is_set(mininstant.yfilter)) leaf_name_data.push_back(mininstant.get_name_leafdata());
    if (maxinstant.is_set || is_set(maxinstant.yfilter)) leaf_name_data.push_back(maxinstant.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (pct.is_set || is_set(pct.yfilter)) leaf_name_data.push_back(pct.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::KernelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::KernelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::KernelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minInstant")
    {
        mininstant = value;
        mininstant.value_namespace = name_space;
        mininstant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxInstant")
    {
        maxinstant = value;
        maxinstant.value_namespace = name_space;
        maxinstant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pct")
    {
        pct = value;
        pct.value_namespace = name_space;
        pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::KernelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "minInstant")
    {
        mininstant.yfilter = yfilter;
    }
    if(value_path == "maxInstant")
    {
        maxinstant.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "pct")
    {
        pct.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::KernelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avg" || name == "min" || name == "max" || name == "minInstant" || name == "maxInstant" || name == "stats" || name == "pct" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::TotalItems::TotalItems()
    :
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"},
    mininstant{YType::uint64, "minInstant"},
    maxinstant{YType::uint64, "maxInstant"},
    stats{YType::uint64, "stats"},
    pct{YType::str, "pct"},
    name{YType::str, "name"}
{

    yang_name = "total-items"; yang_parent_name = "SysCpu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::TotalItems::~TotalItems()
{
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::TotalItems::has_data() const
{
    if (is_presence_container) return true;
    return avg.is_set
	|| min.is_set
	|| max.is_set
	|| mininstant.is_set
	|| maxinstant.is_set
	|| stats.is_set
	|| pct.is_set
	|| name.is_set;
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::TotalItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(mininstant.yfilter)
	|| ydk::is_set(maxinstant.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(pct.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::TotalItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::TotalItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (mininstant.is_set || is_set(mininstant.yfilter)) leaf_name_data.push_back(mininstant.get_name_leafdata());
    if (maxinstant.is_set || is_set(maxinstant.yfilter)) leaf_name_data.push_back(maxinstant.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (pct.is_set || is_set(pct.yfilter)) leaf_name_data.push_back(pct.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::TotalItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::TotalItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::TotalItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minInstant")
    {
        mininstant = value;
        mininstant.value_namespace = name_space;
        mininstant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxInstant")
    {
        maxinstant = value;
        maxinstant.value_namespace = name_space;
        maxinstant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pct")
    {
        pct = value;
        pct.value_namespace = name_space;
        pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::TotalItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "minInstant")
    {
        mininstant.yfilter = yfilter;
    }
    if(value_path == "maxInstant")
    {
        maxinstant.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "pct")
    {
        pct.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::TotalItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avg" || name == "min" || name == "max" || name == "minInstant" || name == "maxInstant" || name == "stats" || name == "pct" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::UserItems::UserItems()
    :
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"},
    mininstant{YType::uint64, "minInstant"},
    maxinstant{YType::uint64, "maxInstant"},
    stats{YType::uint64, "stats"},
    pct{YType::str, "pct"},
    name{YType::str, "name"}
{

    yang_name = "user-items"; yang_parent_name = "SysCpu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::UserItems::~UserItems()
{
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::UserItems::has_data() const
{
    if (is_presence_container) return true;
    return avg.is_set
	|| min.is_set
	|| max.is_set
	|| mininstant.is_set
	|| maxinstant.is_set
	|| stats.is_set
	|| pct.is_set
	|| name.is_set;
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::UserItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(mininstant.yfilter)
	|| ydk::is_set(maxinstant.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(pct.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::UserItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::UserItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (mininstant.is_set || is_set(mininstant.yfilter)) leaf_name_data.push_back(mininstant.get_name_leafdata());
    if (maxinstant.is_set || is_set(maxinstant.yfilter)) leaf_name_data.push_back(maxinstant.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (pct.is_set || is_set(pct.yfilter)) leaf_name_data.push_back(pct.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::UserItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::UserItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::UserItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minInstant")
    {
        mininstant = value;
        mininstant.value_namespace = name_space;
        mininstant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxInstant")
    {
        maxinstant = value;
        maxinstant.value_namespace = name_space;
        maxinstant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pct")
    {
        pct = value;
        pct.value_namespace = name_space;
        pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::UserItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "minInstant")
    {
        mininstant.yfilter = yfilter;
    }
    if(value_path == "maxInstant")
    {
        maxinstant.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "pct")
    {
        pct.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::UserItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avg" || name == "min" || name == "max" || name == "minInstant" || name == "maxInstant" || name == "stats" || name == "pct" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::NiceItems::NiceItems()
    :
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"},
    mininstant{YType::uint64, "minInstant"},
    maxinstant{YType::uint64, "maxInstant"},
    stats{YType::uint64, "stats"},
    pct{YType::str, "pct"},
    name{YType::str, "name"}
{

    yang_name = "nice-items"; yang_parent_name = "SysCpu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::NiceItems::~NiceItems()
{
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::NiceItems::has_data() const
{
    if (is_presence_container) return true;
    return avg.is_set
	|| min.is_set
	|| max.is_set
	|| mininstant.is_set
	|| maxinstant.is_set
	|| stats.is_set
	|| pct.is_set
	|| name.is_set;
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::NiceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(mininstant.yfilter)
	|| ydk::is_set(maxinstant.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(pct.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::NiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nice-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::NiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (mininstant.is_set || is_set(mininstant.yfilter)) leaf_name_data.push_back(mininstant.get_name_leafdata());
    if (maxinstant.is_set || is_set(maxinstant.yfilter)) leaf_name_data.push_back(maxinstant.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (pct.is_set || is_set(pct.yfilter)) leaf_name_data.push_back(pct.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::NiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::NiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::NiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minInstant")
    {
        mininstant = value;
        mininstant.value_namespace = name_space;
        mininstant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxInstant")
    {
        maxinstant = value;
        maxinstant.value_namespace = name_space;
        maxinstant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pct")
    {
        pct = value;
        pct.value_namespace = name_space;
        pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::NiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "minInstant")
    {
        mininstant.yfilter = yfilter;
    }
    if(value_path == "maxInstant")
    {
        maxinstant.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "pct")
    {
        pct.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::NiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avg" || name == "min" || name == "max" || name == "minInstant" || name == "maxInstant" || name == "stats" || name == "pct" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IdleItems::IdleItems()
    :
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"},
    mininstant{YType::uint64, "minInstant"},
    maxinstant{YType::uint64, "maxInstant"},
    stats{YType::uint64, "stats"},
    pct{YType::str, "pct"},
    name{YType::str, "name"}
{

    yang_name = "idle-items"; yang_parent_name = "SysCpu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IdleItems::~IdleItems()
{
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IdleItems::has_data() const
{
    if (is_presence_container) return true;
    return avg.is_set
	|| min.is_set
	|| max.is_set
	|| mininstant.is_set
	|| maxinstant.is_set
	|| stats.is_set
	|| pct.is_set
	|| name.is_set;
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IdleItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(mininstant.yfilter)
	|| ydk::is_set(maxinstant.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(pct.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IdleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IdleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (mininstant.is_set || is_set(mininstant.yfilter)) leaf_name_data.push_back(mininstant.get_name_leafdata());
    if (maxinstant.is_set || is_set(maxinstant.yfilter)) leaf_name_data.push_back(maxinstant.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (pct.is_set || is_set(pct.yfilter)) leaf_name_data.push_back(pct.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IdleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IdleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IdleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minInstant")
    {
        mininstant = value;
        mininstant.value_namespace = name_space;
        mininstant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxInstant")
    {
        maxinstant = value;
        maxinstant.value_namespace = name_space;
        maxinstant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pct")
    {
        pct = value;
        pct.value_namespace = name_space;
        pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IdleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "minInstant")
    {
        mininstant.yfilter = yfilter;
    }
    if(value_path == "maxInstant")
    {
        maxinstant.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "pct")
    {
        pct.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IdleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avg" || name == "min" || name == "max" || name == "minInstant" || name == "maxInstant" || name == "stats" || name == "pct" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::WaitItems::WaitItems()
    :
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"},
    mininstant{YType::uint64, "minInstant"},
    maxinstant{YType::uint64, "maxInstant"},
    stats{YType::uint64, "stats"},
    pct{YType::str, "pct"},
    name{YType::str, "name"}
{

    yang_name = "wait-items"; yang_parent_name = "SysCpu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::WaitItems::~WaitItems()
{
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::WaitItems::has_data() const
{
    if (is_presence_container) return true;
    return avg.is_set
	|| min.is_set
	|| max.is_set
	|| mininstant.is_set
	|| maxinstant.is_set
	|| stats.is_set
	|| pct.is_set
	|| name.is_set;
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::WaitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(mininstant.yfilter)
	|| ydk::is_set(maxinstant.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(pct.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::WaitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wait-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::WaitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (mininstant.is_set || is_set(mininstant.yfilter)) leaf_name_data.push_back(mininstant.get_name_leafdata());
    if (maxinstant.is_set || is_set(maxinstant.yfilter)) leaf_name_data.push_back(maxinstant.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (pct.is_set || is_set(pct.yfilter)) leaf_name_data.push_back(pct.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::WaitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::WaitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::WaitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minInstant")
    {
        mininstant = value;
        mininstant.value_namespace = name_space;
        mininstant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxInstant")
    {
        maxinstant = value;
        maxinstant.value_namespace = name_space;
        maxinstant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pct")
    {
        pct = value;
        pct.value_namespace = name_space;
        pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::WaitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "minInstant")
    {
        mininstant.yfilter = yfilter;
    }
    if(value_path == "maxInstant")
    {
        maxinstant.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "pct")
    {
        pct.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::WaitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avg" || name == "min" || name == "max" || name == "minInstant" || name == "maxInstant" || name == "stats" || name == "pct" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IrqItems::IrqItems()
    :
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"},
    mininstant{YType::uint64, "minInstant"},
    maxinstant{YType::uint64, "maxInstant"},
    stats{YType::uint64, "stats"},
    pct{YType::str, "pct"},
    name{YType::str, "name"}
{

    yang_name = "irq-items"; yang_parent_name = "SysCpu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IrqItems::~IrqItems()
{
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IrqItems::has_data() const
{
    if (is_presence_container) return true;
    return avg.is_set
	|| min.is_set
	|| max.is_set
	|| mininstant.is_set
	|| maxinstant.is_set
	|| stats.is_set
	|| pct.is_set
	|| name.is_set;
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IrqItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(mininstant.yfilter)
	|| ydk::is_set(maxinstant.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(pct.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IrqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "irq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IrqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (mininstant.is_set || is_set(mininstant.yfilter)) leaf_name_data.push_back(mininstant.get_name_leafdata());
    if (maxinstant.is_set || is_set(maxinstant.yfilter)) leaf_name_data.push_back(maxinstant.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (pct.is_set || is_set(pct.yfilter)) leaf_name_data.push_back(pct.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IrqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IrqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IrqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minInstant")
    {
        mininstant = value;
        mininstant.value_namespace = name_space;
        mininstant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxInstant")
    {
        maxinstant = value;
        maxinstant.value_namespace = name_space;
        maxinstant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pct")
    {
        pct = value;
        pct.value_namespace = name_space;
        pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IrqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "minInstant")
    {
        mininstant.yfilter = yfilter;
    }
    if(value_path == "maxInstant")
    {
        maxinstant.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "pct")
    {
        pct.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IrqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avg" || name == "min" || name == "max" || name == "minInstant" || name == "maxInstant" || name == "stats" || name == "pct" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::SoftirqItems::SoftirqItems()
    :
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"},
    mininstant{YType::uint64, "minInstant"},
    maxinstant{YType::uint64, "maxInstant"},
    stats{YType::uint64, "stats"},
    pct{YType::str, "pct"},
    name{YType::str, "name"}
{

    yang_name = "softirq-items"; yang_parent_name = "SysCpu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::SoftirqItems::~SoftirqItems()
{
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::SoftirqItems::has_data() const
{
    if (is_presence_container) return true;
    return avg.is_set
	|| min.is_set
	|| max.is_set
	|| mininstant.is_set
	|| maxinstant.is_set
	|| stats.is_set
	|| pct.is_set
	|| name.is_set;
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::SoftirqItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(mininstant.yfilter)
	|| ydk::is_set(maxinstant.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(pct.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::SoftirqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "softirq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::SoftirqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (mininstant.is_set || is_set(mininstant.yfilter)) leaf_name_data.push_back(mininstant.get_name_leafdata());
    if (maxinstant.is_set || is_set(maxinstant.yfilter)) leaf_name_data.push_back(maxinstant.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (pct.is_set || is_set(pct.yfilter)) leaf_name_data.push_back(pct.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::SoftirqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::SoftirqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::SoftirqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minInstant")
    {
        mininstant = value;
        mininstant.value_namespace = name_space;
        mininstant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxInstant")
    {
        maxinstant = value;
        maxinstant.value_namespace = name_space;
        maxinstant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pct")
    {
        pct = value;
        pct.value_namespace = name_space;
        pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::SoftirqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "minInstant")
    {
        mininstant.yfilter = yfilter;
    }
    if(value_path == "maxInstant")
    {
        maxinstant.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "pct")
    {
        pct.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::SoftirqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avg" || name == "min" || name == "max" || name == "minInstant" || name == "maxInstant" || name == "stats" || name == "pct" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::SysmemItems::SysmemItems()
    :
    total{YType::uint64, "total"},
    reserved{YType::uint64, "reserved"},
    memstatus{YType::str, "memstatus"},
    name{YType::str, "name"}
        ,
    sysmemusage_items(std::make_shared<System::ProcsysItems::SysmemItems::SysmemusageItems>())
    , sysmemfree_items(std::make_shared<System::ProcsysItems::SysmemItems::SysmemfreeItems>())
    , sysmemused_items(std::make_shared<System::ProcsysItems::SysmemItems::SysmemusedItems>())
{
    sysmemusage_items->parent = this;
    sysmemfree_items->parent = this;
    sysmemused_items->parent = this;

    yang_name = "sysmem-items"; yang_parent_name = "procsys-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcsysItems::SysmemItems::~SysmemItems()
{
}

bool System::ProcsysItems::SysmemItems::has_data() const
{
    if (is_presence_container) return true;
    return total.is_set
	|| reserved.is_set
	|| memstatus.is_set
	|| name.is_set
	|| (sysmemusage_items !=  nullptr && sysmemusage_items->has_data())
	|| (sysmemfree_items !=  nullptr && sysmemfree_items->has_data())
	|| (sysmemused_items !=  nullptr && sysmemused_items->has_data());
}

bool System::ProcsysItems::SysmemItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(reserved.yfilter)
	|| ydk::is_set(memstatus.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (sysmemusage_items !=  nullptr && sysmemusage_items->has_operation())
	|| (sysmemfree_items !=  nullptr && sysmemfree_items->has_operation())
	|| (sysmemused_items !=  nullptr && sysmemused_items->has_operation());
}

std::string System::ProcsysItems::SysmemItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/procsys-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcsysItems::SysmemItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysmem-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SysmemItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (reserved.is_set || is_set(reserved.yfilter)) leaf_name_data.push_back(reserved.get_name_leafdata());
    if (memstatus.is_set || is_set(memstatus.yfilter)) leaf_name_data.push_back(memstatus.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SysmemItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sysmemusage-items")
    {
        if(sysmemusage_items == nullptr)
        {
            sysmemusage_items = std::make_shared<System::ProcsysItems::SysmemItems::SysmemusageItems>();
        }
        return sysmemusage_items;
    }

    if(child_yang_name == "sysmemfree-items")
    {
        if(sysmemfree_items == nullptr)
        {
            sysmemfree_items = std::make_shared<System::ProcsysItems::SysmemItems::SysmemfreeItems>();
        }
        return sysmemfree_items;
    }

    if(child_yang_name == "sysmemused-items")
    {
        if(sysmemused_items == nullptr)
        {
            sysmemused_items = std::make_shared<System::ProcsysItems::SysmemItems::SysmemusedItems>();
        }
        return sysmemused_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SysmemItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sysmemusage_items != nullptr)
    {
        _children["sysmemusage-items"] = sysmemusage_items;
    }

    if(sysmemfree_items != nullptr)
    {
        _children["sysmemfree-items"] = sysmemfree_items;
    }

    if(sysmemused_items != nullptr)
    {
        _children["sysmemused-items"] = sysmemused_items;
    }

    return _children;
}

void System::ProcsysItems::SysmemItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved")
    {
        reserved = value;
        reserved.value_namespace = name_space;
        reserved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memstatus")
    {
        memstatus = value;
        memstatus.value_namespace = name_space;
        memstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::SysmemItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "reserved")
    {
        reserved.yfilter = yfilter;
    }
    if(value_path == "memstatus")
    {
        memstatus.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::SysmemItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sysmemusage-items" || name == "sysmemfree-items" || name == "sysmemused-items" || name == "total" || name == "reserved" || name == "memstatus" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::SysmemItems::SysmemusageItems::SysmemusageItems()
    :
    min{YType::str, "min"},
    timemin{YType::uint64, "timemin"},
    max{YType::str, "max"},
    timemax{YType::uint64, "timemax"},
    avg{YType::str, "avg"},
    curr{YType::str, "curr"},
    interval{YType::str, "interval"},
    name{YType::str, "name"}
{

    yang_name = "sysmemusage-items"; yang_parent_name = "sysmem-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcsysItems::SysmemItems::SysmemusageItems::~SysmemusageItems()
{
}

bool System::ProcsysItems::SysmemItems::SysmemusageItems::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| timemin.is_set
	|| max.is_set
	|| timemax.is_set
	|| avg.is_set
	|| curr.is_set
	|| interval.is_set
	|| name.is_set;
}

bool System::ProcsysItems::SysmemItems::SysmemusageItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(timemin.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(timemax.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(curr.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ProcsysItems::SysmemItems::SysmemusageItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/procsys-items/sysmem-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcsysItems::SysmemItems::SysmemusageItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysmemusage-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SysmemItems::SysmemusageItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (timemin.is_set || is_set(timemin.yfilter)) leaf_name_data.push_back(timemin.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (timemax.is_set || is_set(timemax.yfilter)) leaf_name_data.push_back(timemax.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (curr.is_set || is_set(curr.yfilter)) leaf_name_data.push_back(curr.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SysmemItems::SysmemusageItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SysmemItems::SysmemusageItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ProcsysItems::SysmemItems::SysmemusageItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timemin")
    {
        timemin = value;
        timemin.value_namespace = name_space;
        timemin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timemax")
    {
        timemax = value;
        timemax.value_namespace = name_space;
        timemax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curr")
    {
        curr = value;
        curr.value_namespace = name_space;
        curr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::SysmemItems::SysmemusageItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "timemin")
    {
        timemin.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "timemax")
    {
        timemax.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "curr")
    {
        curr.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::SysmemItems::SysmemusageItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "timemin" || name == "max" || name == "timemax" || name == "avg" || name == "curr" || name == "interval" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::SysmemItems::SysmemfreeItems::SysmemfreeItems()
    :
    min{YType::uint64, "min"},
    timemin{YType::uint64, "timemin"},
    max{YType::uint64, "max"},
    timemax{YType::uint64, "timemax"},
    avg{YType::uint64, "avg"},
    curr{YType::uint64, "curr"},
    interval{YType::str, "interval"},
    name{YType::str, "name"}
{

    yang_name = "sysmemfree-items"; yang_parent_name = "sysmem-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcsysItems::SysmemItems::SysmemfreeItems::~SysmemfreeItems()
{
}

bool System::ProcsysItems::SysmemItems::SysmemfreeItems::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| timemin.is_set
	|| max.is_set
	|| timemax.is_set
	|| avg.is_set
	|| curr.is_set
	|| interval.is_set
	|| name.is_set;
}

bool System::ProcsysItems::SysmemItems::SysmemfreeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(timemin.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(timemax.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(curr.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ProcsysItems::SysmemItems::SysmemfreeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/procsys-items/sysmem-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcsysItems::SysmemItems::SysmemfreeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysmemfree-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SysmemItems::SysmemfreeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (timemin.is_set || is_set(timemin.yfilter)) leaf_name_data.push_back(timemin.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (timemax.is_set || is_set(timemax.yfilter)) leaf_name_data.push_back(timemax.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (curr.is_set || is_set(curr.yfilter)) leaf_name_data.push_back(curr.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SysmemItems::SysmemfreeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SysmemItems::SysmemfreeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ProcsysItems::SysmemItems::SysmemfreeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timemin")
    {
        timemin = value;
        timemin.value_namespace = name_space;
        timemin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timemax")
    {
        timemax = value;
        timemax.value_namespace = name_space;
        timemax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curr")
    {
        curr = value;
        curr.value_namespace = name_space;
        curr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::SysmemItems::SysmemfreeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "timemin")
    {
        timemin.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "timemax")
    {
        timemax.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "curr")
    {
        curr.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::SysmemItems::SysmemfreeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "timemin" || name == "max" || name == "timemax" || name == "avg" || name == "curr" || name == "interval" || name == "name")
        return true;
    return false;
}

System::ProcsysItems::SysmemItems::SysmemusedItems::SysmemusedItems()
    :
    min{YType::uint64, "min"},
    timemin{YType::uint64, "timemin"},
    max{YType::uint64, "max"},
    timemax{YType::uint64, "timemax"},
    avg{YType::uint64, "avg"},
    curr{YType::uint64, "curr"},
    interval{YType::str, "interval"},
    name{YType::str, "name"}
{

    yang_name = "sysmemused-items"; yang_parent_name = "sysmem-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcsysItems::SysmemItems::SysmemusedItems::~SysmemusedItems()
{
}

bool System::ProcsysItems::SysmemItems::SysmemusedItems::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| timemin.is_set
	|| max.is_set
	|| timemax.is_set
	|| avg.is_set
	|| curr.is_set
	|| interval.is_set
	|| name.is_set;
}

bool System::ProcsysItems::SysmemItems::SysmemusedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(timemin.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(timemax.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(curr.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ProcsysItems::SysmemItems::SysmemusedItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/procsys-items/sysmem-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcsysItems::SysmemItems::SysmemusedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysmemused-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcsysItems::SysmemItems::SysmemusedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (timemin.is_set || is_set(timemin.yfilter)) leaf_name_data.push_back(timemin.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (timemax.is_set || is_set(timemax.yfilter)) leaf_name_data.push_back(timemax.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (curr.is_set || is_set(curr.yfilter)) leaf_name_data.push_back(curr.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcsysItems::SysmemItems::SysmemusedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcsysItems::SysmemItems::SysmemusedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ProcsysItems::SysmemItems::SysmemusedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timemin")
    {
        timemin = value;
        timemin.value_namespace = name_space;
        timemin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timemax")
    {
        timemax = value;
        timemax.value_namespace = name_space;
        timemax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curr")
    {
        curr = value;
        curr.value_namespace = name_space;
        curr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcsysItems::SysmemItems::SysmemusedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "timemin")
    {
        timemin.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "timemax")
    {
        timemax.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "curr")
    {
        curr.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcsysItems::SysmemItems::SysmemusedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "timemin" || name == "max" || name == "timemax" || name == "avg" || name == "curr" || name == "interval" || name == "name")
        return true;
    return false;
}

System::ProcItems::ProcItems()
    :
    maxmemalloc{YType::uint64, "maxMemAlloc"},
    memfree{YType::uint64, "memFree"},
    cpupct{YType::uint32, "cpuPct"},
    name{YType::str, "name"}
        ,
    process_items(std::make_shared<System::ProcItems::ProcessItems>())
{
    process_items->parent = this;

    yang_name = "proc-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcItems::~ProcItems()
{
}

bool System::ProcItems::has_data() const
{
    if (is_presence_container) return true;
    return maxmemalloc.is_set
	|| memfree.is_set
	|| cpupct.is_set
	|| name.is_set
	|| (process_items !=  nullptr && process_items->has_data());
}

bool System::ProcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxmemalloc.yfilter)
	|| ydk::is_set(memfree.yfilter)
	|| ydk::is_set(cpupct.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (process_items !=  nullptr && process_items->has_operation());
}

std::string System::ProcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxmemalloc.is_set || is_set(maxmemalloc.yfilter)) leaf_name_data.push_back(maxmemalloc.get_name_leafdata());
    if (memfree.is_set || is_set(memfree.yfilter)) leaf_name_data.push_back(memfree.get_name_leafdata());
    if (cpupct.is_set || is_set(cpupct.yfilter)) leaf_name_data.push_back(cpupct.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-items")
    {
        if(process_items == nullptr)
        {
            process_items = std::make_shared<System::ProcItems::ProcessItems>();
        }
        return process_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(process_items != nullptr)
    {
        _children["process-items"] = process_items;
    }

    return _children;
}

void System::ProcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxMemAlloc")
    {
        maxmemalloc = value;
        maxmemalloc.value_namespace = name_space;
        maxmemalloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memFree")
    {
        memfree = value;
        memfree.value_namespace = name_space;
        memfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpuPct")
    {
        cpupct = value;
        cpupct.value_namespace = name_space;
        cpupct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxMemAlloc")
    {
        maxmemalloc.yfilter = yfilter;
    }
    if(value_path == "memFree")
    {
        memfree.yfilter = yfilter;
    }
    if(value_path == "cpuPct")
    {
        cpupct.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-items" || name == "maxMemAlloc" || name == "memFree" || name == "cpuPct" || name == "name")
        return true;
    return false;
}

System::ProcItems::ProcessItems::ProcessItems()
    :
    entry_list(this, {"id"})
{

    yang_name = "process-items"; yang_parent_name = "proc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcItems::ProcessItems::~ProcessItems()
{
}

bool System::ProcItems::ProcessItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entry_list.len(); index++)
    {
        if(entry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ProcItems::ProcessItems::has_operation() const
{
    for (std::size_t index=0; index<entry_list.len(); index++)
    {
        if(entry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ProcItems::ProcessItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/proc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcItems::ProcessItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcItems::ProcessItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcItems::ProcessItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Entry-list")
    {
        auto ent_ = std::make_shared<System::ProcItems::ProcessItems::EntryList>();
        ent_->parent = this;
        entry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcItems::ProcessItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ProcItems::ProcessItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ProcItems::ProcessItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ProcItems::ProcessItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Entry-list")
        return true;
    return false;
}

System::ProcItems::ProcessItems::EntryList::EntryList()
    :
    id{YType::uint32, "id"},
    processname{YType::str, "processName"},
    startcnt{YType::uint32, "startCnt"},
    pc{YType::uint64, "pc"},
    esp{YType::uint64, "esp"},
    processtype{YType::enumeration, "processType"},
    maxmemalloc{YType::uint64, "maxMemAlloc"},
    memused{YType::uint64, "memUsed"},
    operstate{YType::enumeration, "operState"},
    phymem{YType::uint64, "phyMem"},
    procarg{YType::str, "procArg"},
    starttime{YType::uint64, "startTime"},
    uptime{YType::uint64, "upTime"},
    cpuusgusr{YType::uint64, "cpuUsgUsr"},
    cpuusgsys{YType::uint64, "cpuUsgSys"},
    cpuutil{YType::uint32, "cpuUtil"},
    memutil{YType::uint32, "memUtil"},
    cpuutil5sec{YType::str, "cpuUtil5sec"},
    cpuutil1min{YType::str, "cpuUtil1min"},
    cpuutil5min{YType::str, "cpuUtil5min"},
    priority{YType::uint32, "priority"},
    avgcpuutil{YType::uint32, "avgCpuUtil"},
    name{YType::str, "name"}
{

    yang_name = "Entry-list"; yang_parent_name = "process-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ProcItems::ProcessItems::EntryList::~EntryList()
{
}

bool System::ProcItems::ProcessItems::EntryList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| processname.is_set
	|| startcnt.is_set
	|| pc.is_set
	|| esp.is_set
	|| processtype.is_set
	|| maxmemalloc.is_set
	|| memused.is_set
	|| operstate.is_set
	|| phymem.is_set
	|| procarg.is_set
	|| starttime.is_set
	|| uptime.is_set
	|| cpuusgusr.is_set
	|| cpuusgsys.is_set
	|| cpuutil.is_set
	|| memutil.is_set
	|| cpuutil5sec.is_set
	|| cpuutil1min.is_set
	|| cpuutil5min.is_set
	|| priority.is_set
	|| avgcpuutil.is_set
	|| name.is_set;
}

bool System::ProcItems::ProcessItems::EntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(processname.yfilter)
	|| ydk::is_set(startcnt.yfilter)
	|| ydk::is_set(pc.yfilter)
	|| ydk::is_set(esp.yfilter)
	|| ydk::is_set(processtype.yfilter)
	|| ydk::is_set(maxmemalloc.yfilter)
	|| ydk::is_set(memused.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(phymem.yfilter)
	|| ydk::is_set(procarg.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(cpuusgusr.yfilter)
	|| ydk::is_set(cpuusgsys.yfilter)
	|| ydk::is_set(cpuutil.yfilter)
	|| ydk::is_set(memutil.yfilter)
	|| ydk::is_set(cpuutil5sec.yfilter)
	|| ydk::is_set(cpuutil1min.yfilter)
	|| ydk::is_set(cpuutil5min.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(avgcpuutil.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ProcItems::ProcessItems::EntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/proc-items/process-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ProcItems::ProcessItems::EntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Entry-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ProcItems::ProcessItems::EntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (processname.is_set || is_set(processname.yfilter)) leaf_name_data.push_back(processname.get_name_leafdata());
    if (startcnt.is_set || is_set(startcnt.yfilter)) leaf_name_data.push_back(startcnt.get_name_leafdata());
    if (pc.is_set || is_set(pc.yfilter)) leaf_name_data.push_back(pc.get_name_leafdata());
    if (esp.is_set || is_set(esp.yfilter)) leaf_name_data.push_back(esp.get_name_leafdata());
    if (processtype.is_set || is_set(processtype.yfilter)) leaf_name_data.push_back(processtype.get_name_leafdata());
    if (maxmemalloc.is_set || is_set(maxmemalloc.yfilter)) leaf_name_data.push_back(maxmemalloc.get_name_leafdata());
    if (memused.is_set || is_set(memused.yfilter)) leaf_name_data.push_back(memused.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (phymem.is_set || is_set(phymem.yfilter)) leaf_name_data.push_back(phymem.get_name_leafdata());
    if (procarg.is_set || is_set(procarg.yfilter)) leaf_name_data.push_back(procarg.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (cpuusgusr.is_set || is_set(cpuusgusr.yfilter)) leaf_name_data.push_back(cpuusgusr.get_name_leafdata());
    if (cpuusgsys.is_set || is_set(cpuusgsys.yfilter)) leaf_name_data.push_back(cpuusgsys.get_name_leafdata());
    if (cpuutil.is_set || is_set(cpuutil.yfilter)) leaf_name_data.push_back(cpuutil.get_name_leafdata());
    if (memutil.is_set || is_set(memutil.yfilter)) leaf_name_data.push_back(memutil.get_name_leafdata());
    if (cpuutil5sec.is_set || is_set(cpuutil5sec.yfilter)) leaf_name_data.push_back(cpuutil5sec.get_name_leafdata());
    if (cpuutil1min.is_set || is_set(cpuutil1min.yfilter)) leaf_name_data.push_back(cpuutil1min.get_name_leafdata());
    if (cpuutil5min.is_set || is_set(cpuutil5min.yfilter)) leaf_name_data.push_back(cpuutil5min.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (avgcpuutil.is_set || is_set(avgcpuutil.yfilter)) leaf_name_data.push_back(avgcpuutil.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ProcItems::ProcessItems::EntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ProcItems::ProcessItems::EntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ProcItems::ProcessItems::EntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processName")
    {
        processname = value;
        processname.value_namespace = name_space;
        processname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startCnt")
    {
        startcnt = value;
        startcnt.value_namespace = name_space;
        startcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pc")
    {
        pc = value;
        pc.value_namespace = name_space;
        pc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esp")
    {
        esp = value;
        esp.value_namespace = name_space;
        esp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processType")
    {
        processtype = value;
        processtype.value_namespace = name_space;
        processtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxMemAlloc")
    {
        maxmemalloc = value;
        maxmemalloc.value_namespace = name_space;
        maxmemalloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memUsed")
    {
        memused = value;
        memused.value_namespace = name_space;
        memused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phyMem")
    {
        phymem = value;
        phymem.value_namespace = name_space;
        phymem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "procArg")
    {
        procarg = value;
        procarg.value_namespace = name_space;
        procarg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTime")
    {
        starttime = value;
        starttime.value_namespace = name_space;
        starttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpuUsgUsr")
    {
        cpuusgusr = value;
        cpuusgusr.value_namespace = name_space;
        cpuusgusr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpuUsgSys")
    {
        cpuusgsys = value;
        cpuusgsys.value_namespace = name_space;
        cpuusgsys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpuUtil")
    {
        cpuutil = value;
        cpuutil.value_namespace = name_space;
        cpuutil.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memUtil")
    {
        memutil = value;
        memutil.value_namespace = name_space;
        memutil.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpuUtil5sec")
    {
        cpuutil5sec = value;
        cpuutil5sec.value_namespace = name_space;
        cpuutil5sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpuUtil1min")
    {
        cpuutil1min = value;
        cpuutil1min.value_namespace = name_space;
        cpuutil1min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpuUtil5min")
    {
        cpuutil5min = value;
        cpuutil5min.value_namespace = name_space;
        cpuutil5min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avgCpuUtil")
    {
        avgcpuutil = value;
        avgcpuutil.value_namespace = name_space;
        avgcpuutil.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ProcItems::ProcessItems::EntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "processName")
    {
        processname.yfilter = yfilter;
    }
    if(value_path == "startCnt")
    {
        startcnt.yfilter = yfilter;
    }
    if(value_path == "pc")
    {
        pc.yfilter = yfilter;
    }
    if(value_path == "esp")
    {
        esp.yfilter = yfilter;
    }
    if(value_path == "processType")
    {
        processtype.yfilter = yfilter;
    }
    if(value_path == "maxMemAlloc")
    {
        maxmemalloc.yfilter = yfilter;
    }
    if(value_path == "memUsed")
    {
        memused.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "phyMem")
    {
        phymem.yfilter = yfilter;
    }
    if(value_path == "procArg")
    {
        procarg.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "upTime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "cpuUsgUsr")
    {
        cpuusgusr.yfilter = yfilter;
    }
    if(value_path == "cpuUsgSys")
    {
        cpuusgsys.yfilter = yfilter;
    }
    if(value_path == "cpuUtil")
    {
        cpuutil.yfilter = yfilter;
    }
    if(value_path == "memUtil")
    {
        memutil.yfilter = yfilter;
    }
    if(value_path == "cpuUtil5sec")
    {
        cpuutil5sec.yfilter = yfilter;
    }
    if(value_path == "cpuUtil1min")
    {
        cpuutil1min.yfilter = yfilter;
    }
    if(value_path == "cpuUtil5min")
    {
        cpuutil5min.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "avgCpuUtil")
    {
        avgcpuutil.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ProcItems::ProcessItems::EntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "processName" || name == "startCnt" || name == "pc" || name == "esp" || name == "processType" || name == "maxMemAlloc" || name == "memUsed" || name == "operState" || name == "phyMem" || name == "procArg" || name == "startTime" || name == "upTime" || name == "cpuUsgUsr" || name == "cpuUsgSys" || name == "cpuUtil" || name == "memUtil" || name == "cpuUtil5sec" || name == "cpuUtil1min" || name == "cpuUtil5min" || name == "priority" || name == "avgCpuUtil" || name == "name")
        return true;
    return false;
}

System::RegrItems::RegrItems()
    :
    if_list(this, {"id"})
{

    yang_name = "regr-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RegrItems::~RegrItems()
{
}

bool System::RegrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RegrItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RegrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RegrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RegrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RegrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::RegrItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RegrItems::get_children() const
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

void System::RegrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RegrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RegrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::RegrItems::IfList::IfList()
    :
    id{YType::str, "id"},
    enumprop{YType::enumeration, "enumProp"},
    strprop{YType::str, "strProp"},
    intprop{YType::uint32, "intProp"},
    boolprop{YType::boolean, "boolProp"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    rtvrfmbr_items(std::make_shared<System::RegrItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::RegrItems::IfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "regr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RegrItems::IfList::~IfList()
{
}

bool System::RegrItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| enumprop.is_set
	|| strprop.is_set
	|| intprop.is_set
	|| boolprop.is_set
	|| name.is_set
	|| descr.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::RegrItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(enumprop.yfilter)
	|| ydk::is_set(strprop.yfilter)
	|| ydk::is_set(intprop.yfilter)
	|| ydk::is_set(boolprop.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::RegrItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/regr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RegrItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RegrItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (enumprop.is_set || is_set(enumprop.yfilter)) leaf_name_data.push_back(enumprop.get_name_leafdata());
    if (strprop.is_set || is_set(strprop.yfilter)) leaf_name_data.push_back(strprop.get_name_leafdata());
    if (intprop.is_set || is_set(intprop.yfilter)) leaf_name_data.push_back(intprop.get_name_leafdata());
    if (boolprop.is_set || is_set(boolprop.yfilter)) leaf_name_data.push_back(boolprop.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RegrItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::RegrItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::RegrItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RegrItems::IfList::get_children() const
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

void System::RegrItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enumProp")
    {
        enumprop = value;
        enumprop.value_namespace = name_space;
        enumprop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strProp")
    {
        strprop = value;
        strprop.value_namespace = name_space;
        strprop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intProp")
    {
        intprop = value;
        intprop.value_namespace = name_space;
        intprop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boolProp")
    {
        boolprop = value;
        boolprop.value_namespace = name_space;
        boolprop.value_namespace_prefix = name_space_prefix;
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

void System::RegrItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "enumProp")
    {
        enumprop.yfilter = yfilter;
    }
    if(value_path == "strProp")
    {
        strprop.yfilter = yfilter;
    }
    if(value_path == "intProp")
    {
        intprop.yfilter = yfilter;
    }
    if(value_path == "boolProp")
    {
        boolprop.yfilter = yfilter;
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

bool System::RegrItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "enumProp" || name == "strProp" || name == "intProp" || name == "boolProp" || name == "name" || name == "descr")
        return true;
    return false;
}

System::RegrItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RegrItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::RegrItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::RegrItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::RegrItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RegrItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RegrItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RegrItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RegrItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::RegrItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::RegrItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::RegrItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RegrItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::RegrItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RegrItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RegrItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RegrItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RegrItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::RegrItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RegrItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::RegrItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RegrItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RegrItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::RegrItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RegrItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::RegrItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::RegrItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::RegrItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RegrItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RegrItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RegrItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RegrItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::RegrItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::RegrItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::RpmItems::RpmItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    rtextcom_items(std::make_shared<System::RpmItems::RtextcomItems>())
    , accesslist_items(std::make_shared<System::RpmItems::AccesslistItems>())
    , maclist_items(std::make_shared<System::RpmItems::MaclistItems>())
    , rtmap_items(std::make_shared<System::RpmItems::RtmapItems>())
    , expcommlist_items(std::make_shared<System::RpmItems::ExpcommlistItems>())
    , pfxlistv4_items(std::make_shared<System::RpmItems::Pfxlistv4Items>())
    , pfxlistv6_items(std::make_shared<System::RpmItems::Pfxlistv6Items>())
    , rtregcom_items(std::make_shared<System::RpmItems::RtregcomItems>())
{
    rtextcom_items->parent = this;
    accesslist_items->parent = this;
    maclist_items->parent = this;
    rtmap_items->parent = this;
    expcommlist_items->parent = this;
    pfxlistv4_items->parent = this;
    pfxlistv6_items->parent = this;
    rtregcom_items->parent = this;

    yang_name = "rpm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RpmItems::~RpmItems()
{
}

bool System::RpmItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (rtextcom_items !=  nullptr && rtextcom_items->has_data())
	|| (accesslist_items !=  nullptr && accesslist_items->has_data())
	|| (maclist_items !=  nullptr && maclist_items->has_data())
	|| (rtmap_items !=  nullptr && rtmap_items->has_data())
	|| (expcommlist_items !=  nullptr && expcommlist_items->has_data())
	|| (pfxlistv4_items !=  nullptr && pfxlistv4_items->has_data())
	|| (pfxlistv6_items !=  nullptr && pfxlistv6_items->has_data())
	|| (rtregcom_items !=  nullptr && rtregcom_items->has_data());
}

bool System::RpmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (rtextcom_items !=  nullptr && rtextcom_items->has_operation())
	|| (accesslist_items !=  nullptr && accesslist_items->has_operation())
	|| (maclist_items !=  nullptr && maclist_items->has_operation())
	|| (rtmap_items !=  nullptr && rtmap_items->has_operation())
	|| (expcommlist_items !=  nullptr && expcommlist_items->has_operation())
	|| (pfxlistv4_items !=  nullptr && pfxlistv4_items->has_operation())
	|| (pfxlistv6_items !=  nullptr && pfxlistv6_items->has_operation())
	|| (rtregcom_items !=  nullptr && rtregcom_items->has_operation());
}

std::string System::RpmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RpmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtextcom-items")
    {
        if(rtextcom_items == nullptr)
        {
            rtextcom_items = std::make_shared<System::RpmItems::RtextcomItems>();
        }
        return rtextcom_items;
    }

    if(child_yang_name == "accesslist-items")
    {
        if(accesslist_items == nullptr)
        {
            accesslist_items = std::make_shared<System::RpmItems::AccesslistItems>();
        }
        return accesslist_items;
    }

    if(child_yang_name == "maclist-items")
    {
        if(maclist_items == nullptr)
        {
            maclist_items = std::make_shared<System::RpmItems::MaclistItems>();
        }
        return maclist_items;
    }

    if(child_yang_name == "rtmap-items")
    {
        if(rtmap_items == nullptr)
        {
            rtmap_items = std::make_shared<System::RpmItems::RtmapItems>();
        }
        return rtmap_items;
    }

    if(child_yang_name == "expcommlist-items")
    {
        if(expcommlist_items == nullptr)
        {
            expcommlist_items = std::make_shared<System::RpmItems::ExpcommlistItems>();
        }
        return expcommlist_items;
    }

    if(child_yang_name == "pfxlistv4-items")
    {
        if(pfxlistv4_items == nullptr)
        {
            pfxlistv4_items = std::make_shared<System::RpmItems::Pfxlistv4Items>();
        }
        return pfxlistv4_items;
    }

    if(child_yang_name == "pfxlistv6-items")
    {
        if(pfxlistv6_items == nullptr)
        {
            pfxlistv6_items = std::make_shared<System::RpmItems::Pfxlistv6Items>();
        }
        return pfxlistv6_items;
    }

    if(child_yang_name == "rtregcom-items")
    {
        if(rtregcom_items == nullptr)
        {
            rtregcom_items = std::make_shared<System::RpmItems::RtregcomItems>();
        }
        return rtregcom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtextcom_items != nullptr)
    {
        _children["rtextcom-items"] = rtextcom_items;
    }

    if(accesslist_items != nullptr)
    {
        _children["accesslist-items"] = accesslist_items;
    }

    if(maclist_items != nullptr)
    {
        _children["maclist-items"] = maclist_items;
    }

    if(rtmap_items != nullptr)
    {
        _children["rtmap-items"] = rtmap_items;
    }

    if(expcommlist_items != nullptr)
    {
        _children["expcommlist-items"] = expcommlist_items;
    }

    if(pfxlistv4_items != nullptr)
    {
        _children["pfxlistv4-items"] = pfxlistv4_items;
    }

    if(pfxlistv6_items != nullptr)
    {
        _children["pfxlistv6-items"] = pfxlistv6_items;
    }

    if(rtregcom_items != nullptr)
    {
        _children["rtregcom-items"] = rtregcom_items;
    }

    return _children;
}

void System::RpmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::RpmItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::RpmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtextcom-items" || name == "accesslist-items" || name == "maclist-items" || name == "rtmap-items" || name == "expcommlist-items" || name == "pfxlistv4-items" || name == "pfxlistv6-items" || name == "rtregcom-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::RpmItems::RtextcomItems::RtextcomItems()
    :
    rule_list(this, {"name"})
{

    yang_name = "rtextcom-items"; yang_parent_name = "rpm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RpmItems::RtextcomItems::~RtextcomItems()
{
}

bool System::RpmItems::RtextcomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtextcomItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtextcomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/rpm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RpmItems::RtextcomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtextcom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtextcomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtextcomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtextcomItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtextcomItems::get_children() const
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

void System::RpmItems::RtextcomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtextcomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtextcomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::RpmItems::RtextcomItems::RuleList::RuleList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"}
        ,
    ent_items(std::make_shared<System::RpmItems::RtextcomItems::RuleList::EntItems>())
    , rtextcommatt_items(std::make_shared<System::RpmItems::RtextcomItems::RuleList::RtExtCommAttItems>())
{
    ent_items->parent = this;
    rtextcommatt_items->parent = this;

    yang_name = "Rule-list"; yang_parent_name = "rtextcom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RpmItems::RtextcomItems::RuleList::~RuleList()
{
}

bool System::RpmItems::RtextcomItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| mode.is_set
	|| (ent_items !=  nullptr && ent_items->has_data())
	|| (rtextcommatt_items !=  nullptr && rtextcommatt_items->has_data());
}

bool System::RpmItems::RtextcomItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation())
	|| (rtextcommatt_items !=  nullptr && rtextcommatt_items->has_operation());
}

std::string System::RpmItems::RtextcomItems::RuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/rpm-items/rtextcom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RpmItems::RtextcomItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtextcomItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtextcomItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::RpmItems::RtextcomItems::RuleList::EntItems>();
        }
        return ent_items;
    }

    if(child_yang_name == "rtExtCommAtt-items")
    {
        if(rtextcommatt_items == nullptr)
        {
            rtextcommatt_items = std::make_shared<System::RpmItems::RtextcomItems::RuleList::RtExtCommAttItems>();
        }
        return rtextcommatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtextcomItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ent_items != nullptr)
    {
        _children["ent-items"] = ent_items;
    }

    if(rtextcommatt_items != nullptr)
    {
        _children["rtExtCommAtt-items"] = rtextcommatt_items;
    }

    return _children;
}

void System::RpmItems::RtextcomItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtextcomItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool System::RpmItems::RtextcomItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "rtExtCommAtt-items" || name == "name" || name == "descr" || name == "type" || name == "mode")
        return true;
    return false;
}

System::RpmItems::RtextcomItems::RuleList::EntItems::EntItems()
    :
    entry_list(this, {"order"})
{

    yang_name = "ent-items"; yang_parent_name = "Rule-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtextcomItems::RuleList::EntItems::~EntItems()
{
}

bool System::RpmItems::RtextcomItems::RuleList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entry_list.len(); index++)
    {
        if(entry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtextcomItems::RuleList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<entry_list.len(); index++)
    {
        if(entry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtextcomItems::RuleList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtextcomItems::RuleList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtextcomItems::RuleList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Entry-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList>();
        ent_->parent = this;
        entry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtextcomItems::RuleList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtextcomItems::RuleList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtextcomItems::RuleList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtextcomItems::RuleList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Entry-list")
        return true;
    return false;
}

System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::EntryList()
    :
    order{YType::uint32, "order"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    action{YType::enumeration, "action"},
    regex{YType::str, "regex"}
        ,
    item_items(std::make_shared<System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems>())
    , extrmac_items(std::make_shared<System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ExtrmacItems>())
{
    item_items->parent = this;
    extrmac_items->parent = this;

    yang_name = "Entry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::~EntryList()
{
}

bool System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| name.is_set
	|| descr.is_set
	|| action.is_set
	|| regex.is_set
	|| (item_items !=  nullptr && item_items->has_data())
	|| (extrmac_items !=  nullptr && extrmac_items->has_data());
}

bool System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(regex.yfilter)
	|| (item_items !=  nullptr && item_items->has_operation())
	|| (extrmac_items !=  nullptr && extrmac_items->has_operation());
}

std::string System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Entry-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "item-items")
    {
        if(item_items == nullptr)
        {
            item_items = std::make_shared<System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems>();
        }
        return item_items;
    }

    if(child_yang_name == "extrmac-items")
    {
        if(extrmac_items == nullptr)
        {
            extrmac_items = std::make_shared<System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ExtrmacItems>();
        }
        return extrmac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(item_items != nullptr)
    {
        _children["item-items"] = item_items;
    }

    if(extrmac_items != nullptr)
    {
        _children["extrmac-items"] = extrmac_items;
    }

    return _children;
}

void System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "item-items" || name == "extrmac-items" || name == "order" || name == "name" || name == "descr" || name == "action" || name == "regex")
        return true;
    return false;
}

System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::ItemItems()
    :
    item_list(this, {"scope", "community"})
{

    yang_name = "item-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::~ItemItems()
{
}

bool System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<item_list.len(); index++)
    {
        if(item_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::has_operation() const
{
    for (std::size_t index=0; index<item_list.len(); index++)
    {
        if(item_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "item-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Item-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList>();
        ent_->parent = this;
        item_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : item_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Item-list")
        return true;
    return false;
}

System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::ItemList()
    :
    scope{YType::enumeration, "scope"},
    community{YType::str, "community"},
    type{YType::enumeration, "type"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "Item-list"; yang_parent_name = "item-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::~ItemList()
{
}

bool System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::has_data() const
{
    if (is_presence_container) return true;
    return scope.is_set
	|| community.is_set
	|| type.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Item-list";
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
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

bool System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope" || name == "community" || name == "type" || name == "name" || name == "descr")
        return true;
    return false;
}

System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ExtrmacItems::ExtrmacItems()
    :
    commrmac{YType::str, "commRmac"}
{

    yang_name = "extrmac-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ExtrmacItems::~ExtrmacItems()
{
}

bool System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ExtrmacItems::has_data() const
{
    if (is_presence_container) return true;
    return commrmac.is_set;
}

bool System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ExtrmacItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(commrmac.yfilter);
}

std::string System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ExtrmacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extrmac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ExtrmacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (commrmac.is_set || is_set(commrmac.yfilter)) leaf_name_data.push_back(commrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ExtrmacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ExtrmacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ExtrmacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "commRmac")
    {
        commrmac = value;
        commrmac.value_namespace = name_space;
        commrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ExtrmacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "commRmac")
    {
        commrmac.yfilter = yfilter;
    }
}

bool System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ExtrmacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "commRmac")
        return true;
    return false;
}

System::RpmItems::RtextcomItems::RuleList::RtExtCommAttItems::RtExtCommAttItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtExtCommAtt-items"; yang_parent_name = "Rule-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtextcomItems::RuleList::RtExtCommAttItems::~RtExtCommAttItems()
{
}

bool System::RpmItems::RtextcomItems::RuleList::RtExtCommAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::RpmItems::RtextcomItems::RuleList::RtExtCommAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::RpmItems::RtextcomItems::RuleList::RtExtCommAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtExtCommAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtextcomItems::RuleList::RtExtCommAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtextcomItems::RuleList::RtExtCommAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtextcomItems::RuleList::RtExtCommAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtextcomItems::RuleList::RtExtCommAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtextcomItems::RuleList::RtExtCommAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::RpmItems::RtextcomItems::RuleList::RtExtCommAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::RpmItems::AccesslistItems::AccesslistItems()
    :
    rule_list(this, {"name"})
{

    yang_name = "accesslist-items"; yang_parent_name = "rpm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RpmItems::AccesslistItems::~AccesslistItems()
{
}

bool System::RpmItems::AccesslistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::AccesslistItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::AccesslistItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/rpm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RpmItems::AccesslistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::AccesslistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::AccesslistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::AccesslistItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::AccesslistItems::get_children() const
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

void System::RpmItems::AccesslistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::AccesslistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::AccesslistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::RpmItems::AccesslistItems::RuleList::RuleList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    ent_items(std::make_shared<System::RpmItems::AccesslistItems::RuleList::EntItems>())
    , rtrtmaprtdstaccatt_items(std::make_shared<System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems>())
    , rtrtmaprtaspathaccatt_items(std::make_shared<System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems>())
{
    ent_items->parent = this;
    rtrtmaprtdstaccatt_items->parent = this;
    rtrtmaprtaspathaccatt_items->parent = this;

    yang_name = "Rule-list"; yang_parent_name = "accesslist-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RpmItems::AccesslistItems::RuleList::~RuleList()
{
}

bool System::RpmItems::AccesslistItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (ent_items !=  nullptr && ent_items->has_data())
	|| (rtrtmaprtdstaccatt_items !=  nullptr && rtrtmaprtdstaccatt_items->has_data())
	|| (rtrtmaprtaspathaccatt_items !=  nullptr && rtrtmaprtaspathaccatt_items->has_data());
}

bool System::RpmItems::AccesslistItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation())
	|| (rtrtmaprtdstaccatt_items !=  nullptr && rtrtmaprtdstaccatt_items->has_operation())
	|| (rtrtmaprtaspathaccatt_items !=  nullptr && rtrtmaprtaspathaccatt_items->has_operation());
}

std::string System::RpmItems::AccesslistItems::RuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/rpm-items/accesslist-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RpmItems::AccesslistItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::AccesslistItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::AccesslistItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::RpmItems::AccesslistItems::RuleList::EntItems>();
        }
        return ent_items;
    }

    if(child_yang_name == "rtrtmapRtDstAccAtt-items")
    {
        if(rtrtmaprtdstaccatt_items == nullptr)
        {
            rtrtmaprtdstaccatt_items = std::make_shared<System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems>();
        }
        return rtrtmaprtdstaccatt_items;
    }

    if(child_yang_name == "rtrtmapRtAsPathAccAtt-items")
    {
        if(rtrtmaprtaspathaccatt_items == nullptr)
        {
            rtrtmaprtaspathaccatt_items = std::make_shared<System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems>();
        }
        return rtrtmaprtaspathaccatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::AccesslistItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ent_items != nullptr)
    {
        _children["ent-items"] = ent_items;
    }

    if(rtrtmaprtdstaccatt_items != nullptr)
    {
        _children["rtrtmapRtDstAccAtt-items"] = rtrtmaprtdstaccatt_items;
    }

    if(rtrtmaprtaspathaccatt_items != nullptr)
    {
        _children["rtrtmapRtAsPathAccAtt-items"] = rtrtmaprtaspathaccatt_items;
    }

    return _children;
}

void System::RpmItems::AccesslistItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::RpmItems::AccesslistItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::RpmItems::AccesslistItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "rtrtmapRtDstAccAtt-items" || name == "rtrtmapRtAsPathAccAtt-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::RpmItems::AccesslistItems::RuleList::EntItems::EntItems()
    :
    entry_list(this, {"order"})
{

    yang_name = "ent-items"; yang_parent_name = "Rule-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::AccesslistItems::RuleList::EntItems::~EntItems()
{
}

bool System::RpmItems::AccesslistItems::RuleList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entry_list.len(); index++)
    {
        if(entry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::AccesslistItems::RuleList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<entry_list.len(); index++)
    {
        if(entry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::AccesslistItems::RuleList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::AccesslistItems::RuleList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::AccesslistItems::RuleList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Entry-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::AccesslistItems::RuleList::EntItems::EntryList>();
        ent_->parent = this;
        entry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::AccesslistItems::RuleList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::AccesslistItems::RuleList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::AccesslistItems::RuleList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::AccesslistItems::RuleList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Entry-list")
        return true;
    return false;
}

System::RpmItems::AccesslistItems::RuleList::EntItems::EntryList::EntryList()
    :
    order{YType::uint32, "order"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    action{YType::enumeration, "action"},
    regex{YType::str, "regex"}
{

    yang_name = "Entry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::AccesslistItems::RuleList::EntItems::EntryList::~EntryList()
{
}

bool System::RpmItems::AccesslistItems::RuleList::EntItems::EntryList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| name.is_set
	|| descr.is_set
	|| action.is_set
	|| regex.is_set;
}

bool System::RpmItems::AccesslistItems::RuleList::EntItems::EntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(regex.yfilter);
}

std::string System::RpmItems::AccesslistItems::RuleList::EntItems::EntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Entry-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::AccesslistItems::RuleList::EntItems::EntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::AccesslistItems::RuleList::EntItems::EntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::AccesslistItems::RuleList::EntItems::EntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::AccesslistItems::RuleList::EntItems::EntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::AccesslistItems::RuleList::EntItems::EntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool System::RpmItems::AccesslistItems::RuleList::EntItems::EntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "name" || name == "descr" || name == "action" || name == "regex")
        return true;
    return false;
}

System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::RtrtmapRtDstAccAttItems()
    :
    rtrtmaprtdstaccatt_list(this, {"tdn"})
{

    yang_name = "rtrtmapRtDstAccAtt-items"; yang_parent_name = "Rule-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::~RtrtmapRtDstAccAttItems()
{
}

bool System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtrtmaprtdstaccatt_list.len(); index++)
    {
        if(rtrtmaprtdstaccatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtrtmaprtdstaccatt_list.len(); index++)
    {
        if(rtrtmaprtdstaccatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtrtmapRtDstAccAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtRtmapRtDstAccAtt-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::RtRtmapRtDstAccAttList>();
        ent_->parent = this;
        rtrtmaprtdstaccatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtrtmaprtdstaccatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtRtmapRtDstAccAtt-list")
        return true;
    return false;
}

System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::RtRtmapRtDstAccAttList::RtRtmapRtDstAccAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtRtmapRtDstAccAtt-list"; yang_parent_name = "rtrtmapRtDstAccAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::RtRtmapRtDstAccAttList::~RtRtmapRtDstAccAttList()
{
}

bool System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::RtRtmapRtDstAccAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::RtRtmapRtDstAccAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::RtRtmapRtDstAccAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtRtmapRtDstAccAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::RtRtmapRtDstAccAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::RtRtmapRtDstAccAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::RtRtmapRtDstAccAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::RtRtmapRtDstAccAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::RtRtmapRtDstAccAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::RtRtmapRtDstAccAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::RtrtmapRtAsPathAccAttItems()
    :
    rtrtmaprtaspathaccatt_list(this, {"tdn"})
{

    yang_name = "rtrtmapRtAsPathAccAtt-items"; yang_parent_name = "Rule-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::~RtrtmapRtAsPathAccAttItems()
{
}

bool System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtrtmaprtaspathaccatt_list.len(); index++)
    {
        if(rtrtmaprtaspathaccatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtrtmaprtaspathaccatt_list.len(); index++)
    {
        if(rtrtmaprtaspathaccatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtrtmapRtAsPathAccAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtRtmapRtAsPathAccAtt-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::RtRtmapRtAsPathAccAttList>();
        ent_->parent = this;
        rtrtmaprtaspathaccatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtrtmaprtaspathaccatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtRtmapRtAsPathAccAtt-list")
        return true;
    return false;
}

System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::RtRtmapRtAsPathAccAttList::RtRtmapRtAsPathAccAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtRtmapRtAsPathAccAtt-list"; yang_parent_name = "rtrtmapRtAsPathAccAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::RtRtmapRtAsPathAccAttList::~RtRtmapRtAsPathAccAttList()
{
}

bool System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::RtRtmapRtAsPathAccAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::RtRtmapRtAsPathAccAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::RtRtmapRtAsPathAccAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtRtmapRtAsPathAccAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::RtRtmapRtAsPathAccAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::RtRtmapRtAsPathAccAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::RtRtmapRtAsPathAccAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::RtRtmapRtAsPathAccAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::RtRtmapRtAsPathAccAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::RtRtmapRtAsPathAccAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::RpmItems::MaclistItems::MaclistItems()
    :
    rulemac_list(this, {"name"})
{

    yang_name = "maclist-items"; yang_parent_name = "rpm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RpmItems::MaclistItems::~MaclistItems()
{
}

bool System::RpmItems::MaclistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rulemac_list.len(); index++)
    {
        if(rulemac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::MaclistItems::has_operation() const
{
    for (std::size_t index=0; index<rulemac_list.len(); index++)
    {
        if(rulemac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::MaclistItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/rpm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RpmItems::MaclistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maclist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::MaclistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::MaclistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RuleMac-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::MaclistItems::RuleMacList>();
        ent_->parent = this;
        rulemac_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::MaclistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rulemac_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::MaclistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::MaclistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::MaclistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RuleMac-list")
        return true;
    return false;
}

System::RpmItems::MaclistItems::RuleMacList::RuleMacList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    ent_items(std::make_shared<System::RpmItems::MaclistItems::RuleMacList::EntItems>())
    , rtrtmaprtmaclistatt_items(std::make_shared<System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems>())
{
    ent_items->parent = this;
    rtrtmaprtmaclistatt_items->parent = this;

    yang_name = "RuleMac-list"; yang_parent_name = "maclist-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RpmItems::MaclistItems::RuleMacList::~RuleMacList()
{
}

bool System::RpmItems::MaclistItems::RuleMacList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (ent_items !=  nullptr && ent_items->has_data())
	|| (rtrtmaprtmaclistatt_items !=  nullptr && rtrtmaprtmaclistatt_items->has_data());
}

bool System::RpmItems::MaclistItems::RuleMacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation())
	|| (rtrtmaprtmaclistatt_items !=  nullptr && rtrtmaprtmaclistatt_items->has_operation());
}

std::string System::RpmItems::MaclistItems::RuleMacList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/rpm-items/maclist-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RpmItems::MaclistItems::RuleMacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RuleMac-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::MaclistItems::RuleMacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::MaclistItems::RuleMacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::RpmItems::MaclistItems::RuleMacList::EntItems>();
        }
        return ent_items;
    }

    if(child_yang_name == "rtrtmapRtMacListAtt-items")
    {
        if(rtrtmaprtmaclistatt_items == nullptr)
        {
            rtrtmaprtmaclistatt_items = std::make_shared<System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems>();
        }
        return rtrtmaprtmaclistatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::MaclistItems::RuleMacList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ent_items != nullptr)
    {
        _children["ent-items"] = ent_items;
    }

    if(rtrtmaprtmaclistatt_items != nullptr)
    {
        _children["rtrtmapRtMacListAtt-items"] = rtrtmaprtmaclistatt_items;
    }

    return _children;
}

void System::RpmItems::MaclistItems::RuleMacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::RpmItems::MaclistItems::RuleMacList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::RpmItems::MaclistItems::RuleMacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "rtrtmapRtMacListAtt-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::RpmItems::MaclistItems::RuleMacList::EntItems::EntItems()
    :
    entry_list(this, {"order"})
{

    yang_name = "ent-items"; yang_parent_name = "RuleMac-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::MaclistItems::RuleMacList::EntItems::~EntItems()
{
}

bool System::RpmItems::MaclistItems::RuleMacList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entry_list.len(); index++)
    {
        if(entry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::MaclistItems::RuleMacList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<entry_list.len(); index++)
    {
        if(entry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::MaclistItems::RuleMacList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::MaclistItems::RuleMacList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::MaclistItems::RuleMacList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Entry-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::MaclistItems::RuleMacList::EntItems::EntryList>();
        ent_->parent = this;
        entry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::MaclistItems::RuleMacList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::MaclistItems::RuleMacList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::MaclistItems::RuleMacList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::MaclistItems::RuleMacList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Entry-list")
        return true;
    return false;
}

System::RpmItems::MaclistItems::RuleMacList::EntItems::EntryList::EntryList()
    :
    order{YType::uint32, "order"},
    macaddr{YType::str, "macAddr"},
    macaddrmask{YType::str, "macAddrMask"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    action{YType::enumeration, "action"}
{

    yang_name = "Entry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::MaclistItems::RuleMacList::EntItems::EntryList::~EntryList()
{
}

bool System::RpmItems::MaclistItems::RuleMacList::EntItems::EntryList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| macaddr.is_set
	|| macaddrmask.is_set
	|| name.is_set
	|| descr.is_set
	|| action.is_set;
}

bool System::RpmItems::MaclistItems::RuleMacList::EntItems::EntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(macaddr.yfilter)
	|| ydk::is_set(macaddrmask.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(action.yfilter);
}

std::string System::RpmItems::MaclistItems::RuleMacList::EntItems::EntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Entry-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::MaclistItems::RuleMacList::EntItems::EntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());
    if (macaddrmask.is_set || is_set(macaddrmask.yfilter)) leaf_name_data.push_back(macaddrmask.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::MaclistItems::RuleMacList::EntItems::EntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::MaclistItems::RuleMacList::EntItems::EntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::MaclistItems::RuleMacList::EntItems::EntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macAddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macAddrMask")
    {
        macaddrmask = value;
        macaddrmask.value_namespace = name_space;
        macaddrmask.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::MaclistItems::RuleMacList::EntItems::EntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "macAddr")
    {
        macaddr.yfilter = yfilter;
    }
    if(value_path == "macAddrMask")
    {
        macaddrmask.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool System::RpmItems::MaclistItems::RuleMacList::EntItems::EntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "macAddr" || name == "macAddrMask" || name == "name" || name == "descr" || name == "action")
        return true;
    return false;
}

System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::RtrtmapRtMacListAttItems()
    :
    rtrtmaprtmaclistatt_list(this, {"tdn"})
{

    yang_name = "rtrtmapRtMacListAtt-items"; yang_parent_name = "RuleMac-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::~RtrtmapRtMacListAttItems()
{
}

bool System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtrtmaprtmaclistatt_list.len(); index++)
    {
        if(rtrtmaprtmaclistatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtrtmaprtmaclistatt_list.len(); index++)
    {
        if(rtrtmaprtmaclistatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtrtmapRtMacListAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtRtmapRtMacListAtt-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::RtRtmapRtMacListAttList>();
        ent_->parent = this;
        rtrtmaprtmaclistatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtrtmaprtmaclistatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtRtmapRtMacListAtt-list")
        return true;
    return false;
}

System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::RtRtmapRtMacListAttList::RtRtmapRtMacListAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtRtmapRtMacListAtt-list"; yang_parent_name = "rtrtmapRtMacListAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::RtRtmapRtMacListAttList::~RtRtmapRtMacListAttList()
{
}

bool System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::RtRtmapRtMacListAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::RtRtmapRtMacListAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::RtRtmapRtMacListAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtRtmapRtMacListAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::RtRtmapRtMacListAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::RtRtmapRtMacListAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::RtRtmapRtMacListAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::RtRtmapRtMacListAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::RtRtmapRtMacListAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::RtRtmapRtMacListAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RtmapItems()
    :
    rule_list(this, {"name"})
{

    yang_name = "rtmap-items"; yang_parent_name = "rpm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RpmItems::RtmapItems::~RtmapItems()
{
}

bool System::RpmItems::RtmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/rpm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RpmItems::RtmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::get_children() const
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

void System::RpmItems::RtmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::RuleList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    ent_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems>())
{
    ent_items->parent = this;

    yang_name = "Rule-list"; yang_parent_name = "rtmap-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RpmItems::RtmapItems::RuleList::~RuleList()
{
}

bool System::RpmItems::RtmapItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (ent_items !=  nullptr && ent_items->has_data());
}

bool System::RpmItems::RtmapItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation());
}

std::string System::RpmItems::RtmapItems::RuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/rpm-items/rtmap-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RpmItems::RtmapItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems>();
        }
        return ent_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ent_items != nullptr)
    {
        _children["ent-items"] = ent_items;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::RpmItems::RtmapItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::RpmItems::RtmapItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntItems()
    :
    entry_list(this, {"order"})
{

    yang_name = "ent-items"; yang_parent_name = "Rule-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::~EntItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entry_list.len(); index++)
    {
        if(entry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<entry_list.len(); index++)
    {
        if(entry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Entry-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList>();
        ent_->parent = this;
        entry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Entry-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::EntryList()
    :
    order{YType::uint32, "order"},
    loadsharev4{YType::enumeration, "loadShareV4"},
    loadsharev6{YType::enumeration, "loadShareV6"},
    forceorderv4{YType::enumeration, "forceOrderV4"},
    forceorderv6{YType::enumeration, "forceOrderV6"},
    droponfailv4{YType::enumeration, "dropOnFailV4"},
    droponfailv6{YType::enumeration, "dropOnFailV6"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    action{YType::enumeration, "action"}
        ,
    mregcomm_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems>())
    , mextcomm_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems>())
    , mrtdst_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems>())
    , mrtdstv6_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items>())
    , mipv4mcast_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv4mcastItems>())
    , mipv6mcast_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv6mcastItems>())
    , mrtnh_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems>())
    , mrtnhv6_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items>())
    , mrtsrc_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems>())
    , mrtsrcv6_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items>())
    , mrttype_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems>())
    , mrttag_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems>())
    , msrcprot_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems>())
    , mrtpervasive_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtpervasiveItems>())
    , mrtacclist_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems>())
    , mrtmetric_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems>())
    , mrtasn_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems>())
    , mrtif_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems>())
    , mrtospf_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems>())
    , mrtmaclist_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems>())
    , scontinue_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScontinueItems>())
    , sregcomm_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems>())
    , sextcomm_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems>())
    , sextcommcost_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems>())
    , sextcommcolor_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcolorItems>())
    , sextcommrmac_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommrmacItems>())
    , scommlist_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScommlistItems>())
    , sextcommlist_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommlistItems>())
    , srtt_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems>())
    , srtdist_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrtdistItems>())
    , srttag_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttagItems>())
    , sweight_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SweightItems>())
    , slblindex_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SlblindexItems>())
    , spref_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprefItems>())
    , smetric_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SmetricItems>())
    , smetrict_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SmetrictItems>())
    , sdamp_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SdampItems>())
    , sprec_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprecItems>())
    , sprecv6_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Sprecv6Items>())
    , snssa_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SnssaItems>())
    , sfwdaddr_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SfwdaddrItems>())
    , nh_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::NhItems>())
    , nhpa_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::NhpaItems>())
    , setaspathprepend_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SetaspathprependItems>())
    , setaspathlastas_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SetaspathlastasItems>())
    , setaspathtag_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SetaspathtagItems>())
    , origin_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::OriginItems>())
    , sevpn_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SevpnItems>())
{
    mregcomm_items->parent = this;
    mextcomm_items->parent = this;
    mrtdst_items->parent = this;
    mrtdstv6_items->parent = this;
    mipv4mcast_items->parent = this;
    mipv6mcast_items->parent = this;
    mrtnh_items->parent = this;
    mrtnhv6_items->parent = this;
    mrtsrc_items->parent = this;
    mrtsrcv6_items->parent = this;
    mrttype_items->parent = this;
    mrttag_items->parent = this;
    msrcprot_items->parent = this;
    mrtpervasive_items->parent = this;
    mrtacclist_items->parent = this;
    mrtmetric_items->parent = this;
    mrtasn_items->parent = this;
    mrtif_items->parent = this;
    mrtospf_items->parent = this;
    mrtmaclist_items->parent = this;
    scontinue_items->parent = this;
    sregcomm_items->parent = this;
    sextcomm_items->parent = this;
    sextcommcost_items->parent = this;
    sextcommcolor_items->parent = this;
    sextcommrmac_items->parent = this;
    scommlist_items->parent = this;
    sextcommlist_items->parent = this;
    srtt_items->parent = this;
    srtdist_items->parent = this;
    srttag_items->parent = this;
    sweight_items->parent = this;
    slblindex_items->parent = this;
    spref_items->parent = this;
    smetric_items->parent = this;
    smetrict_items->parent = this;
    sdamp_items->parent = this;
    sprec_items->parent = this;
    sprecv6_items->parent = this;
    snssa_items->parent = this;
    sfwdaddr_items->parent = this;
    nh_items->parent = this;
    nhpa_items->parent = this;
    setaspathprepend_items->parent = this;
    setaspathlastas_items->parent = this;
    setaspathtag_items->parent = this;
    origin_items->parent = this;
    sevpn_items->parent = this;

    yang_name = "Entry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::~EntryList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| loadsharev4.is_set
	|| loadsharev6.is_set
	|| forceorderv4.is_set
	|| forceorderv6.is_set
	|| droponfailv4.is_set
	|| droponfailv6.is_set
	|| name.is_set
	|| descr.is_set
	|| action.is_set
	|| (mregcomm_items !=  nullptr && mregcomm_items->has_data())
	|| (mextcomm_items !=  nullptr && mextcomm_items->has_data())
	|| (mrtdst_items !=  nullptr && mrtdst_items->has_data())
	|| (mrtdstv6_items !=  nullptr && mrtdstv6_items->has_data())
	|| (mipv4mcast_items !=  nullptr && mipv4mcast_items->has_data())
	|| (mipv6mcast_items !=  nullptr && mipv6mcast_items->has_data())
	|| (mrtnh_items !=  nullptr && mrtnh_items->has_data())
	|| (mrtnhv6_items !=  nullptr && mrtnhv6_items->has_data())
	|| (mrtsrc_items !=  nullptr && mrtsrc_items->has_data())
	|| (mrtsrcv6_items !=  nullptr && mrtsrcv6_items->has_data())
	|| (mrttype_items !=  nullptr && mrttype_items->has_data())
	|| (mrttag_items !=  nullptr && mrttag_items->has_data())
	|| (msrcprot_items !=  nullptr && msrcprot_items->has_data())
	|| (mrtpervasive_items !=  nullptr && mrtpervasive_items->has_data())
	|| (mrtacclist_items !=  nullptr && mrtacclist_items->has_data())
	|| (mrtmetric_items !=  nullptr && mrtmetric_items->has_data())
	|| (mrtasn_items !=  nullptr && mrtasn_items->has_data())
	|| (mrtif_items !=  nullptr && mrtif_items->has_data())
	|| (mrtospf_items !=  nullptr && mrtospf_items->has_data())
	|| (mrtmaclist_items !=  nullptr && mrtmaclist_items->has_data())
	|| (scontinue_items !=  nullptr && scontinue_items->has_data())
	|| (sregcomm_items !=  nullptr && sregcomm_items->has_data())
	|| (sextcomm_items !=  nullptr && sextcomm_items->has_data())
	|| (sextcommcost_items !=  nullptr && sextcommcost_items->has_data())
	|| (sextcommcolor_items !=  nullptr && sextcommcolor_items->has_data())
	|| (sextcommrmac_items !=  nullptr && sextcommrmac_items->has_data())
	|| (scommlist_items !=  nullptr && scommlist_items->has_data())
	|| (sextcommlist_items !=  nullptr && sextcommlist_items->has_data())
	|| (srtt_items !=  nullptr && srtt_items->has_data())
	|| (srtdist_items !=  nullptr && srtdist_items->has_data())
	|| (srttag_items !=  nullptr && srttag_items->has_data())
	|| (sweight_items !=  nullptr && sweight_items->has_data())
	|| (slblindex_items !=  nullptr && slblindex_items->has_data())
	|| (spref_items !=  nullptr && spref_items->has_data())
	|| (smetric_items !=  nullptr && smetric_items->has_data())
	|| (smetrict_items !=  nullptr && smetrict_items->has_data())
	|| (sdamp_items !=  nullptr && sdamp_items->has_data())
	|| (sprec_items !=  nullptr && sprec_items->has_data())
	|| (sprecv6_items !=  nullptr && sprecv6_items->has_data())
	|| (snssa_items !=  nullptr && snssa_items->has_data())
	|| (sfwdaddr_items !=  nullptr && sfwdaddr_items->has_data())
	|| (nh_items !=  nullptr && nh_items->has_data())
	|| (nhpa_items !=  nullptr && nhpa_items->has_data())
	|| (setaspathprepend_items !=  nullptr && setaspathprepend_items->has_data())
	|| (setaspathlastas_items !=  nullptr && setaspathlastas_items->has_data())
	|| (setaspathtag_items !=  nullptr && setaspathtag_items->has_data())
	|| (origin_items !=  nullptr && origin_items->has_data())
	|| (sevpn_items !=  nullptr && sevpn_items->has_data());
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(loadsharev4.yfilter)
	|| ydk::is_set(loadsharev6.yfilter)
	|| ydk::is_set(forceorderv4.yfilter)
	|| ydk::is_set(forceorderv6.yfilter)
	|| ydk::is_set(droponfailv4.yfilter)
	|| ydk::is_set(droponfailv6.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(action.yfilter)
	|| (mregcomm_items !=  nullptr && mregcomm_items->has_operation())
	|| (mextcomm_items !=  nullptr && mextcomm_items->has_operation())
	|| (mrtdst_items !=  nullptr && mrtdst_items->has_operation())
	|| (mrtdstv6_items !=  nullptr && mrtdstv6_items->has_operation())
	|| (mipv4mcast_items !=  nullptr && mipv4mcast_items->has_operation())
	|| (mipv6mcast_items !=  nullptr && mipv6mcast_items->has_operation())
	|| (mrtnh_items !=  nullptr && mrtnh_items->has_operation())
	|| (mrtnhv6_items !=  nullptr && mrtnhv6_items->has_operation())
	|| (mrtsrc_items !=  nullptr && mrtsrc_items->has_operation())
	|| (mrtsrcv6_items !=  nullptr && mrtsrcv6_items->has_operation())
	|| (mrttype_items !=  nullptr && mrttype_items->has_operation())
	|| (mrttag_items !=  nullptr && mrttag_items->has_operation())
	|| (msrcprot_items !=  nullptr && msrcprot_items->has_operation())
	|| (mrtpervasive_items !=  nullptr && mrtpervasive_items->has_operation())
	|| (mrtacclist_items !=  nullptr && mrtacclist_items->has_operation())
	|| (mrtmetric_items !=  nullptr && mrtmetric_items->has_operation())
	|| (mrtasn_items !=  nullptr && mrtasn_items->has_operation())
	|| (mrtif_items !=  nullptr && mrtif_items->has_operation())
	|| (mrtospf_items !=  nullptr && mrtospf_items->has_operation())
	|| (mrtmaclist_items !=  nullptr && mrtmaclist_items->has_operation())
	|| (scontinue_items !=  nullptr && scontinue_items->has_operation())
	|| (sregcomm_items !=  nullptr && sregcomm_items->has_operation())
	|| (sextcomm_items !=  nullptr && sextcomm_items->has_operation())
	|| (sextcommcost_items !=  nullptr && sextcommcost_items->has_operation())
	|| (sextcommcolor_items !=  nullptr && sextcommcolor_items->has_operation())
	|| (sextcommrmac_items !=  nullptr && sextcommrmac_items->has_operation())
	|| (scommlist_items !=  nullptr && scommlist_items->has_operation())
	|| (sextcommlist_items !=  nullptr && sextcommlist_items->has_operation())
	|| (srtt_items !=  nullptr && srtt_items->has_operation())
	|| (srtdist_items !=  nullptr && srtdist_items->has_operation())
	|| (srttag_items !=  nullptr && srttag_items->has_operation())
	|| (sweight_items !=  nullptr && sweight_items->has_operation())
	|| (slblindex_items !=  nullptr && slblindex_items->has_operation())
	|| (spref_items !=  nullptr && spref_items->has_operation())
	|| (smetric_items !=  nullptr && smetric_items->has_operation())
	|| (smetrict_items !=  nullptr && smetrict_items->has_operation())
	|| (sdamp_items !=  nullptr && sdamp_items->has_operation())
	|| (sprec_items !=  nullptr && sprec_items->has_operation())
	|| (sprecv6_items !=  nullptr && sprecv6_items->has_operation())
	|| (snssa_items !=  nullptr && snssa_items->has_operation())
	|| (sfwdaddr_items !=  nullptr && sfwdaddr_items->has_operation())
	|| (nh_items !=  nullptr && nh_items->has_operation())
	|| (nhpa_items !=  nullptr && nhpa_items->has_operation())
	|| (setaspathprepend_items !=  nullptr && setaspathprepend_items->has_operation())
	|| (setaspathlastas_items !=  nullptr && setaspathlastas_items->has_operation())
	|| (setaspathtag_items !=  nullptr && setaspathtag_items->has_operation())
	|| (origin_items !=  nullptr && origin_items->has_operation())
	|| (sevpn_items !=  nullptr && sevpn_items->has_operation());
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Entry-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (loadsharev4.is_set || is_set(loadsharev4.yfilter)) leaf_name_data.push_back(loadsharev4.get_name_leafdata());
    if (loadsharev6.is_set || is_set(loadsharev6.yfilter)) leaf_name_data.push_back(loadsharev6.get_name_leafdata());
    if (forceorderv4.is_set || is_set(forceorderv4.yfilter)) leaf_name_data.push_back(forceorderv4.get_name_leafdata());
    if (forceorderv6.is_set || is_set(forceorderv6.yfilter)) leaf_name_data.push_back(forceorderv6.get_name_leafdata());
    if (droponfailv4.is_set || is_set(droponfailv4.yfilter)) leaf_name_data.push_back(droponfailv4.get_name_leafdata());
    if (droponfailv6.is_set || is_set(droponfailv6.yfilter)) leaf_name_data.push_back(droponfailv6.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mregcomm-items")
    {
        if(mregcomm_items == nullptr)
        {
            mregcomm_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems>();
        }
        return mregcomm_items;
    }

    if(child_yang_name == "mextcomm-items")
    {
        if(mextcomm_items == nullptr)
        {
            mextcomm_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems>();
        }
        return mextcomm_items;
    }

    if(child_yang_name == "mrtdst-items")
    {
        if(mrtdst_items == nullptr)
        {
            mrtdst_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems>();
        }
        return mrtdst_items;
    }

    if(child_yang_name == "mrtdstv6-items")
    {
        if(mrtdstv6_items == nullptr)
        {
            mrtdstv6_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items>();
        }
        return mrtdstv6_items;
    }

    if(child_yang_name == "mipv4mcast-items")
    {
        if(mipv4mcast_items == nullptr)
        {
            mipv4mcast_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv4mcastItems>();
        }
        return mipv4mcast_items;
    }

    if(child_yang_name == "mipv6mcast-items")
    {
        if(mipv6mcast_items == nullptr)
        {
            mipv6mcast_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv6mcastItems>();
        }
        return mipv6mcast_items;
    }

    if(child_yang_name == "mrtnh-items")
    {
        if(mrtnh_items == nullptr)
        {
            mrtnh_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems>();
        }
        return mrtnh_items;
    }

    if(child_yang_name == "mrtnhv6-items")
    {
        if(mrtnhv6_items == nullptr)
        {
            mrtnhv6_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items>();
        }
        return mrtnhv6_items;
    }

    if(child_yang_name == "mrtsrc-items")
    {
        if(mrtsrc_items == nullptr)
        {
            mrtsrc_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems>();
        }
        return mrtsrc_items;
    }

    if(child_yang_name == "mrtsrcv6-items")
    {
        if(mrtsrcv6_items == nullptr)
        {
            mrtsrcv6_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items>();
        }
        return mrtsrcv6_items;
    }

    if(child_yang_name == "mrttype-items")
    {
        if(mrttype_items == nullptr)
        {
            mrttype_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems>();
        }
        return mrttype_items;
    }

    if(child_yang_name == "mrttag-items")
    {
        if(mrttag_items == nullptr)
        {
            mrttag_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems>();
        }
        return mrttag_items;
    }

    if(child_yang_name == "msrcprot-items")
    {
        if(msrcprot_items == nullptr)
        {
            msrcprot_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems>();
        }
        return msrcprot_items;
    }

    if(child_yang_name == "mrtpervasive-items")
    {
        if(mrtpervasive_items == nullptr)
        {
            mrtpervasive_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtpervasiveItems>();
        }
        return mrtpervasive_items;
    }

    if(child_yang_name == "mrtacclist-items")
    {
        if(mrtacclist_items == nullptr)
        {
            mrtacclist_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems>();
        }
        return mrtacclist_items;
    }

    if(child_yang_name == "mrtmetric-items")
    {
        if(mrtmetric_items == nullptr)
        {
            mrtmetric_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems>();
        }
        return mrtmetric_items;
    }

    if(child_yang_name == "mrtasn-items")
    {
        if(mrtasn_items == nullptr)
        {
            mrtasn_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems>();
        }
        return mrtasn_items;
    }

    if(child_yang_name == "mrtif-items")
    {
        if(mrtif_items == nullptr)
        {
            mrtif_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems>();
        }
        return mrtif_items;
    }

    if(child_yang_name == "mrtospf-items")
    {
        if(mrtospf_items == nullptr)
        {
            mrtospf_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems>();
        }
        return mrtospf_items;
    }

    if(child_yang_name == "mrtmaclist-items")
    {
        if(mrtmaclist_items == nullptr)
        {
            mrtmaclist_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems>();
        }
        return mrtmaclist_items;
    }

    if(child_yang_name == "scontinue-items")
    {
        if(scontinue_items == nullptr)
        {
            scontinue_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScontinueItems>();
        }
        return scontinue_items;
    }

    if(child_yang_name == "sregcomm-items")
    {
        if(sregcomm_items == nullptr)
        {
            sregcomm_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems>();
        }
        return sregcomm_items;
    }

    if(child_yang_name == "sextcomm-items")
    {
        if(sextcomm_items == nullptr)
        {
            sextcomm_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems>();
        }
        return sextcomm_items;
    }

    if(child_yang_name == "sextcommcost-items")
    {
        if(sextcommcost_items == nullptr)
        {
            sextcommcost_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems>();
        }
        return sextcommcost_items;
    }

    if(child_yang_name == "sextcommcolor-items")
    {
        if(sextcommcolor_items == nullptr)
        {
            sextcommcolor_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcolorItems>();
        }
        return sextcommcolor_items;
    }

    if(child_yang_name == "sextcommrmac-items")
    {
        if(sextcommrmac_items == nullptr)
        {
            sextcommrmac_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommrmacItems>();
        }
        return sextcommrmac_items;
    }

    if(child_yang_name == "scommlist-items")
    {
        if(scommlist_items == nullptr)
        {
            scommlist_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScommlistItems>();
        }
        return scommlist_items;
    }

    if(child_yang_name == "sextcommlist-items")
    {
        if(sextcommlist_items == nullptr)
        {
            sextcommlist_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommlistItems>();
        }
        return sextcommlist_items;
    }

    if(child_yang_name == "srtt-items")
    {
        if(srtt_items == nullptr)
        {
            srtt_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems>();
        }
        return srtt_items;
    }

    if(child_yang_name == "srtdist-items")
    {
        if(srtdist_items == nullptr)
        {
            srtdist_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrtdistItems>();
        }
        return srtdist_items;
    }

    if(child_yang_name == "srttag-items")
    {
        if(srttag_items == nullptr)
        {
            srttag_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttagItems>();
        }
        return srttag_items;
    }

    if(child_yang_name == "sweight-items")
    {
        if(sweight_items == nullptr)
        {
            sweight_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SweightItems>();
        }
        return sweight_items;
    }

    if(child_yang_name == "slblindex-items")
    {
        if(slblindex_items == nullptr)
        {
            slblindex_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SlblindexItems>();
        }
        return slblindex_items;
    }

    if(child_yang_name == "spref-items")
    {
        if(spref_items == nullptr)
        {
            spref_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprefItems>();
        }
        return spref_items;
    }

    if(child_yang_name == "smetric-items")
    {
        if(smetric_items == nullptr)
        {
            smetric_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SmetricItems>();
        }
        return smetric_items;
    }

    if(child_yang_name == "smetrict-items")
    {
        if(smetrict_items == nullptr)
        {
            smetrict_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SmetrictItems>();
        }
        return smetrict_items;
    }

    if(child_yang_name == "sdamp-items")
    {
        if(sdamp_items == nullptr)
        {
            sdamp_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SdampItems>();
        }
        return sdamp_items;
    }

    if(child_yang_name == "sprec-items")
    {
        if(sprec_items == nullptr)
        {
            sprec_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprecItems>();
        }
        return sprec_items;
    }

    if(child_yang_name == "sprecv6-items")
    {
        if(sprecv6_items == nullptr)
        {
            sprecv6_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Sprecv6Items>();
        }
        return sprecv6_items;
    }

    if(child_yang_name == "snssa-items")
    {
        if(snssa_items == nullptr)
        {
            snssa_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SnssaItems>();
        }
        return snssa_items;
    }

    if(child_yang_name == "sfwdaddr-items")
    {
        if(sfwdaddr_items == nullptr)
        {
            sfwdaddr_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SfwdaddrItems>();
        }
        return sfwdaddr_items;
    }

    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::NhItems>();
        }
        return nh_items;
    }

    if(child_yang_name == "nhpa-items")
    {
        if(nhpa_items == nullptr)
        {
            nhpa_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::NhpaItems>();
        }
        return nhpa_items;
    }

    if(child_yang_name == "setaspathprepend-items")
    {
        if(setaspathprepend_items == nullptr)
        {
            setaspathprepend_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SetaspathprependItems>();
        }
        return setaspathprepend_items;
    }

    if(child_yang_name == "setaspathlastas-items")
    {
        if(setaspathlastas_items == nullptr)
        {
            setaspathlastas_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SetaspathlastasItems>();
        }
        return setaspathlastas_items;
    }

    if(child_yang_name == "setaspathtag-items")
    {
        if(setaspathtag_items == nullptr)
        {
            setaspathtag_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SetaspathtagItems>();
        }
        return setaspathtag_items;
    }

    if(child_yang_name == "origin-items")
    {
        if(origin_items == nullptr)
        {
            origin_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::OriginItems>();
        }
        return origin_items;
    }

    if(child_yang_name == "sevpn-items")
    {
        if(sevpn_items == nullptr)
        {
            sevpn_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SevpnItems>();
        }
        return sevpn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mregcomm_items != nullptr)
    {
        _children["mregcomm-items"] = mregcomm_items;
    }

    if(mextcomm_items != nullptr)
    {
        _children["mextcomm-items"] = mextcomm_items;
    }

    if(mrtdst_items != nullptr)
    {
        _children["mrtdst-items"] = mrtdst_items;
    }

    if(mrtdstv6_items != nullptr)
    {
        _children["mrtdstv6-items"] = mrtdstv6_items;
    }

    if(mipv4mcast_items != nullptr)
    {
        _children["mipv4mcast-items"] = mipv4mcast_items;
    }

    if(mipv6mcast_items != nullptr)
    {
        _children["mipv6mcast-items"] = mipv6mcast_items;
    }

    if(mrtnh_items != nullptr)
    {
        _children["mrtnh-items"] = mrtnh_items;
    }

    if(mrtnhv6_items != nullptr)
    {
        _children["mrtnhv6-items"] = mrtnhv6_items;
    }

    if(mrtsrc_items != nullptr)
    {
        _children["mrtsrc-items"] = mrtsrc_items;
    }

    if(mrtsrcv6_items != nullptr)
    {
        _children["mrtsrcv6-items"] = mrtsrcv6_items;
    }

    if(mrttype_items != nullptr)
    {
        _children["mrttype-items"] = mrttype_items;
    }

    if(mrttag_items != nullptr)
    {
        _children["mrttag-items"] = mrttag_items;
    }

    if(msrcprot_items != nullptr)
    {
        _children["msrcprot-items"] = msrcprot_items;
    }

    if(mrtpervasive_items != nullptr)
    {
        _children["mrtpervasive-items"] = mrtpervasive_items;
    }

    if(mrtacclist_items != nullptr)
    {
        _children["mrtacclist-items"] = mrtacclist_items;
    }

    if(mrtmetric_items != nullptr)
    {
        _children["mrtmetric-items"] = mrtmetric_items;
    }

    if(mrtasn_items != nullptr)
    {
        _children["mrtasn-items"] = mrtasn_items;
    }

    if(mrtif_items != nullptr)
    {
        _children["mrtif-items"] = mrtif_items;
    }

    if(mrtospf_items != nullptr)
    {
        _children["mrtospf-items"] = mrtospf_items;
    }

    if(mrtmaclist_items != nullptr)
    {
        _children["mrtmaclist-items"] = mrtmaclist_items;
    }

    if(scontinue_items != nullptr)
    {
        _children["scontinue-items"] = scontinue_items;
    }

    if(sregcomm_items != nullptr)
    {
        _children["sregcomm-items"] = sregcomm_items;
    }

    if(sextcomm_items != nullptr)
    {
        _children["sextcomm-items"] = sextcomm_items;
    }

    if(sextcommcost_items != nullptr)
    {
        _children["sextcommcost-items"] = sextcommcost_items;
    }

    if(sextcommcolor_items != nullptr)
    {
        _children["sextcommcolor-items"] = sextcommcolor_items;
    }

    if(sextcommrmac_items != nullptr)
    {
        _children["sextcommrmac-items"] = sextcommrmac_items;
    }

    if(scommlist_items != nullptr)
    {
        _children["scommlist-items"] = scommlist_items;
    }

    if(sextcommlist_items != nullptr)
    {
        _children["sextcommlist-items"] = sextcommlist_items;
    }

    if(srtt_items != nullptr)
    {
        _children["srtt-items"] = srtt_items;
    }

    if(srtdist_items != nullptr)
    {
        _children["srtdist-items"] = srtdist_items;
    }

    if(srttag_items != nullptr)
    {
        _children["srttag-items"] = srttag_items;
    }

    if(sweight_items != nullptr)
    {
        _children["sweight-items"] = sweight_items;
    }

    if(slblindex_items != nullptr)
    {
        _children["slblindex-items"] = slblindex_items;
    }

    if(spref_items != nullptr)
    {
        _children["spref-items"] = spref_items;
    }

    if(smetric_items != nullptr)
    {
        _children["smetric-items"] = smetric_items;
    }

    if(smetrict_items != nullptr)
    {
        _children["smetrict-items"] = smetrict_items;
    }

    if(sdamp_items != nullptr)
    {
        _children["sdamp-items"] = sdamp_items;
    }

    if(sprec_items != nullptr)
    {
        _children["sprec-items"] = sprec_items;
    }

    if(sprecv6_items != nullptr)
    {
        _children["sprecv6-items"] = sprecv6_items;
    }

    if(snssa_items != nullptr)
    {
        _children["snssa-items"] = snssa_items;
    }

    if(sfwdaddr_items != nullptr)
    {
        _children["sfwdaddr-items"] = sfwdaddr_items;
    }

    if(nh_items != nullptr)
    {
        _children["nh-items"] = nh_items;
    }

    if(nhpa_items != nullptr)
    {
        _children["nhpa-items"] = nhpa_items;
    }

    if(setaspathprepend_items != nullptr)
    {
        _children["setaspathprepend-items"] = setaspathprepend_items;
    }

    if(setaspathlastas_items != nullptr)
    {
        _children["setaspathlastas-items"] = setaspathlastas_items;
    }

    if(setaspathtag_items != nullptr)
    {
        _children["setaspathtag-items"] = setaspathtag_items;
    }

    if(origin_items != nullptr)
    {
        _children["origin-items"] = origin_items;
    }

    if(sevpn_items != nullptr)
    {
        _children["sevpn-items"] = sevpn_items;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadShareV4")
    {
        loadsharev4 = value;
        loadsharev4.value_namespace = name_space;
        loadsharev4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadShareV6")
    {
        loadsharev6 = value;
        loadsharev6.value_namespace = name_space;
        loadsharev6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceOrderV4")
    {
        forceorderv4 = value;
        forceorderv4.value_namespace = name_space;
        forceorderv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceOrderV6")
    {
        forceorderv6 = value;
        forceorderv6.value_namespace = name_space;
        forceorderv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropOnFailV4")
    {
        droponfailv4 = value;
        droponfailv4.value_namespace = name_space;
        droponfailv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropOnFailV6")
    {
        droponfailv6 = value;
        droponfailv6.value_namespace = name_space;
        droponfailv6.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "loadShareV4")
    {
        loadsharev4.yfilter = yfilter;
    }
    if(value_path == "loadShareV6")
    {
        loadsharev6.yfilter = yfilter;
    }
    if(value_path == "forceOrderV4")
    {
        forceorderv4.yfilter = yfilter;
    }
    if(value_path == "forceOrderV6")
    {
        forceorderv6.yfilter = yfilter;
    }
    if(value_path == "dropOnFailV4")
    {
        droponfailv4.yfilter = yfilter;
    }
    if(value_path == "dropOnFailV6")
    {
        droponfailv6.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mregcomm-items" || name == "mextcomm-items" || name == "mrtdst-items" || name == "mrtdstv6-items" || name == "mipv4mcast-items" || name == "mipv6mcast-items" || name == "mrtnh-items" || name == "mrtnhv6-items" || name == "mrtsrc-items" || name == "mrtsrcv6-items" || name == "mrttype-items" || name == "mrttag-items" || name == "msrcprot-items" || name == "mrtpervasive-items" || name == "mrtacclist-items" || name == "mrtmetric-items" || name == "mrtasn-items" || name == "mrtif-items" || name == "mrtospf-items" || name == "mrtmaclist-items" || name == "scontinue-items" || name == "sregcomm-items" || name == "sextcomm-items" || name == "sextcommcost-items" || name == "sextcommcolor-items" || name == "sextcommrmac-items" || name == "scommlist-items" || name == "sextcommlist-items" || name == "srtt-items" || name == "srtdist-items" || name == "srttag-items" || name == "sweight-items" || name == "slblindex-items" || name == "spref-items" || name == "smetric-items" || name == "smetrict-items" || name == "sdamp-items" || name == "sprec-items" || name == "sprecv6-items" || name == "snssa-items" || name == "sfwdaddr-items" || name == "nh-items" || name == "nhpa-items" || name == "setaspathprepend-items" || name == "setaspathlastas-items" || name == "setaspathtag-items" || name == "origin-items" || name == "sevpn-items" || name == "order" || name == "loadShareV4" || name == "loadShareV6" || name == "forceOrderV4" || name == "forceOrderV6" || name == "dropOnFailV4" || name == "dropOnFailV6" || name == "name" || name == "descr" || name == "action")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::MregcommItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    criteria{YType::enumeration, "criteria"}
        ,
    rsregcommatt_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems>())
{
    rsregcommatt_items->parent = this;

    yang_name = "mregcomm-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::~MregcommItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| criteria.is_set
	|| (rsregcommatt_items !=  nullptr && rsregcommatt_items->has_data());
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(criteria.yfilter)
	|| (rsregcommatt_items !=  nullptr && rsregcommatt_items->has_operation());
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mregcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (criteria.is_set || is_set(criteria.yfilter)) leaf_name_data.push_back(criteria.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsregCommAtt-items")
    {
        if(rsregcommatt_items == nullptr)
        {
            rsregcommatt_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems>();
        }
        return rsregcommatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsregcommatt_items != nullptr)
    {
        _children["rsregCommAtt-items"] = rsregcommatt_items;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "criteria")
    {
        criteria = value;
        criteria.value_namespace = name_space;
        criteria.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "criteria")
    {
        criteria.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsregCommAtt-items" || name == "name" || name == "descr" || name == "type" || name == "criteria")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::RsregCommAttItems()
    :
    rsregcommatt_list(this, {"tdn"})
{

    yang_name = "rsregCommAtt-items"; yang_parent_name = "mregcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::~RsregCommAttItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsregcommatt_list.len(); index++)
    {
        if(rsregcommatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsregcommatt_list.len(); index++)
    {
        if(rsregcommatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsregCommAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsRegCommAtt-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::RsRegCommAttList>();
        ent_->parent = this;
        rsregcommatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsregcommatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsRegCommAtt-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::RsRegCommAttList::RsRegCommAttList()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "RsRegCommAtt-list"; yang_parent_name = "rsregCommAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::RsRegCommAttList::~RsRegCommAttList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::RsRegCommAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::RsRegCommAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::RsRegCommAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsRegCommAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::RsRegCommAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::RsRegCommAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::RsRegCommAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::RsRegCommAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::RsRegCommAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::RsRegCommAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::MextcommItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    criteria{YType::enumeration, "criteria"}
        ,
    rsextcommatt_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems>())
{
    rsextcommatt_items->parent = this;

    yang_name = "mextcomm-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::~MextcommItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| criteria.is_set
	|| (rsextcommatt_items !=  nullptr && rsextcommatt_items->has_data());
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(criteria.yfilter)
	|| (rsextcommatt_items !=  nullptr && rsextcommatt_items->has_operation());
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mextcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (criteria.is_set || is_set(criteria.yfilter)) leaf_name_data.push_back(criteria.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsextCommAtt-items")
    {
        if(rsextcommatt_items == nullptr)
        {
            rsextcommatt_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems>();
        }
        return rsextcommatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsextcommatt_items != nullptr)
    {
        _children["rsextCommAtt-items"] = rsextcommatt_items;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "criteria")
    {
        criteria = value;
        criteria.value_namespace = name_space;
        criteria.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "criteria")
    {
        criteria.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsextCommAtt-items" || name == "name" || name == "descr" || name == "type" || name == "criteria")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::RsextCommAttItems()
    :
    rsextcommatt_list(this, {"tdn"})
{

    yang_name = "rsextCommAtt-items"; yang_parent_name = "mextcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::~RsextCommAttItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsextcommatt_list.len(); index++)
    {
        if(rsextcommatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsextcommatt_list.len(); index++)
    {
        if(rsextcommatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsextCommAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsExtCommAtt-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::RsExtCommAttList>();
        ent_->parent = this;
        rsextcommatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsextcommatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsExtCommAtt-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::RsExtCommAttList::RsExtCommAttList()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "RsExtCommAtt-list"; yang_parent_name = "rsextCommAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::RsExtCommAttList::~RsExtCommAttList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::RsExtCommAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::RsExtCommAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::RsExtCommAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsExtCommAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::RsExtCommAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::RsExtCommAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::RsExtCommAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::RsExtCommAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::RsExtCommAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::RsExtCommAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::MrtdstItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
        ,
    rsrtdstatt_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems>())
    , rsrtdstaccatt_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems>())
{
    rsrtdstatt_items->parent = this;
    rsrtdstaccatt_items->parent = this;

    yang_name = "mrtdst-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::~MrtdstItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| (rsrtdstatt_items !=  nullptr && rsrtdstatt_items->has_data())
	|| (rsrtdstaccatt_items !=  nullptr && rsrtdstaccatt_items->has_data());
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (rsrtdstatt_items !=  nullptr && rsrtdstatt_items->has_operation())
	|| (rsrtdstaccatt_items !=  nullptr && rsrtdstaccatt_items->has_operation());
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrtdst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsrtDstAtt-items")
    {
        if(rsrtdstatt_items == nullptr)
        {
            rsrtdstatt_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems>();
        }
        return rsrtdstatt_items;
    }

    if(child_yang_name == "rsrtDstAccAtt-items")
    {
        if(rsrtdstaccatt_items == nullptr)
        {
            rsrtdstaccatt_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems>();
        }
        return rsrtdstaccatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsrtdstatt_items != nullptr)
    {
        _children["rsrtDstAtt-items"] = rsrtdstatt_items;
    }

    if(rsrtdstaccatt_items != nullptr)
    {
        _children["rsrtDstAccAtt-items"] = rsrtdstaccatt_items;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsrtDstAtt-items" || name == "rsrtDstAccAtt-items" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::RsrtDstAttItems()
    :
    rsrtdstatt_list(this, {"tdn"})
{

    yang_name = "rsrtDstAtt-items"; yang_parent_name = "mrtdst-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::~RsrtDstAttItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsrtdstatt_list.len(); index++)
    {
        if(rsrtdstatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsrtdstatt_list.len(); index++)
    {
        if(rsrtdstatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrtDstAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsRtDstAtt-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::RsRtDstAttList>();
        ent_->parent = this;
        rsrtdstatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsrtdstatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsRtDstAtt-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::RsRtDstAttList::RsRtDstAttList()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "RsRtDstAtt-list"; yang_parent_name = "rsrtDstAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::RsRtDstAttList::~RsRtDstAttList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::RsRtDstAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::RsRtDstAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::RsRtDstAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsRtDstAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::RsRtDstAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::RsRtDstAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::RsRtDstAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::RsRtDstAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::RsRtDstAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::RsRtDstAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::RsrtDstAccAttItems()
    :
    rsrtdstaccatt_list(this, {"tdn"})
{

    yang_name = "rsrtDstAccAtt-items"; yang_parent_name = "mrtdst-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::~RsrtDstAccAttItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsrtdstaccatt_list.len(); index++)
    {
        if(rsrtdstaccatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsrtdstaccatt_list.len(); index++)
    {
        if(rsrtdstaccatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrtDstAccAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsRtDstAccAtt-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::RsRtDstAccAttList>();
        ent_->parent = this;
        rsrtdstaccatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsrtdstaccatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsRtDstAccAtt-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::RsRtDstAccAttList::RsRtDstAccAttList()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "RsRtDstAccAtt-list"; yang_parent_name = "rsrtDstAccAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::RsRtDstAccAttList::~RsRtDstAccAttList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::RsRtDstAccAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::RsRtDstAccAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::RsRtDstAccAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsRtDstAccAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::RsRtDstAccAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::RsRtDstAccAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::RsRtDstAccAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::RsRtDstAccAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::RsRtDstAccAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::RsRtDstAccAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::Mrtdstv6Items()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
        ,
    rsrtdstv6att_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems>())
{
    rsrtdstv6att_items->parent = this;

    yang_name = "mrtdstv6-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::~Mrtdstv6Items()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| (rsrtdstv6att_items !=  nullptr && rsrtdstv6att_items->has_data());
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (rsrtdstv6att_items !=  nullptr && rsrtdstv6att_items->has_operation());
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrtdstv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsrtDstV6Att-items")
    {
        if(rsrtdstv6att_items == nullptr)
        {
            rsrtdstv6att_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems>();
        }
        return rsrtdstv6att_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsrtdstv6att_items != nullptr)
    {
        _children["rsrtDstV6Att-items"] = rsrtdstv6att_items;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsrtDstV6Att-items" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::RsrtDstV6AttItems()
    :
    rsrtdstv6att_list(this, {"tdn"})
{

    yang_name = "rsrtDstV6Att-items"; yang_parent_name = "mrtdstv6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::~RsrtDstV6AttItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsrtdstv6att_list.len(); index++)
    {
        if(rsrtdstv6att_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::has_operation() const
{
    for (std::size_t index=0; index<rsrtdstv6att_list.len(); index++)
    {
        if(rsrtdstv6att_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrtDstV6Att-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsRtDstV6Att-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::RsRtDstV6AttList>();
        ent_->parent = this;
        rsrtdstv6att_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsrtdstv6att_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsRtDstV6Att-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::RsRtDstV6AttList::RsRtDstV6AttList()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "RsRtDstV6Att-list"; yang_parent_name = "rsrtDstV6Att-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::RsRtDstV6AttList::~RsRtDstV6AttList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::RsRtDstV6AttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::RsRtDstV6AttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::RsRtDstV6AttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsRtDstV6Att-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::RsRtDstV6AttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::RsRtDstV6AttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::RsRtDstV6AttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::RsRtDstV6AttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::RsRtDstV6AttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::RsRtDstV6AttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv4mcastItems::Mipv4mcastItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    groupaddr{YType::str, "groupAddr"},
    groupstartaddr{YType::str, "groupStartAddr"},
    groupendaddr{YType::str, "groupEndAddr"},
    rp{YType::str, "rp"},
    rptype{YType::enumeration, "rpType"},
    sourceaddr{YType::str, "sourceAddr"}
{

    yang_name = "mipv4mcast-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv4mcastItems::~Mipv4mcastItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv4mcastItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| groupaddr.is_set
	|| groupstartaddr.is_set
	|| groupendaddr.is_set
	|| rp.is_set
	|| rptype.is_set
	|| sourceaddr.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv4mcastItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(groupaddr.yfilter)
	|| ydk::is_set(groupstartaddr.yfilter)
	|| ydk::is_set(groupendaddr.yfilter)
	|| ydk::is_set(rp.yfilter)
	|| ydk::is_set(rptype.yfilter)
	|| ydk::is_set(sourceaddr.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv4mcastItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mipv4mcast-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv4mcastItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (groupaddr.is_set || is_set(groupaddr.yfilter)) leaf_name_data.push_back(groupaddr.get_name_leafdata());
    if (groupstartaddr.is_set || is_set(groupstartaddr.yfilter)) leaf_name_data.push_back(groupstartaddr.get_name_leafdata());
    if (groupendaddr.is_set || is_set(groupendaddr.yfilter)) leaf_name_data.push_back(groupendaddr.get_name_leafdata());
    if (rp.is_set || is_set(rp.yfilter)) leaf_name_data.push_back(rp.get_name_leafdata());
    if (rptype.is_set || is_set(rptype.yfilter)) leaf_name_data.push_back(rptype.get_name_leafdata());
    if (sourceaddr.is_set || is_set(sourceaddr.yfilter)) leaf_name_data.push_back(sourceaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv4mcastItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv4mcastItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv4mcastItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "groupAddr")
    {
        groupaddr = value;
        groupaddr.value_namespace = name_space;
        groupaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupStartAddr")
    {
        groupstartaddr = value;
        groupstartaddr.value_namespace = name_space;
        groupstartaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupEndAddr")
    {
        groupendaddr = value;
        groupendaddr.value_namespace = name_space;
        groupendaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp")
    {
        rp = value;
        rp.value_namespace = name_space;
        rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpType")
    {
        rptype = value;
        rptype.value_namespace = name_space;
        rptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceAddr")
    {
        sourceaddr = value;
        sourceaddr.value_namespace = name_space;
        sourceaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv4mcastItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "groupAddr")
    {
        groupaddr.yfilter = yfilter;
    }
    if(value_path == "groupStartAddr")
    {
        groupstartaddr.yfilter = yfilter;
    }
    if(value_path == "groupEndAddr")
    {
        groupendaddr.yfilter = yfilter;
    }
    if(value_path == "rp")
    {
        rp.yfilter = yfilter;
    }
    if(value_path == "rpType")
    {
        rptype.yfilter = yfilter;
    }
    if(value_path == "sourceAddr")
    {
        sourceaddr.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv4mcastItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "type" || name == "groupAddr" || name == "groupStartAddr" || name == "groupEndAddr" || name == "rp" || name == "rpType" || name == "sourceAddr")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv6mcastItems::Mipv6mcastItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    groupaddr{YType::str, "groupAddr"},
    groupstartaddr{YType::str, "groupStartAddr"},
    groupendaddr{YType::str, "groupEndAddr"},
    rp{YType::str, "rp"},
    rptype{YType::enumeration, "rpType"},
    sourceaddr{YType::str, "sourceAddr"}
{

    yang_name = "mipv6mcast-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv6mcastItems::~Mipv6mcastItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv6mcastItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| groupaddr.is_set
	|| groupstartaddr.is_set
	|| groupendaddr.is_set
	|| rp.is_set
	|| rptype.is_set
	|| sourceaddr.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv6mcastItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(groupaddr.yfilter)
	|| ydk::is_set(groupstartaddr.yfilter)
	|| ydk::is_set(groupendaddr.yfilter)
	|| ydk::is_set(rp.yfilter)
	|| ydk::is_set(rptype.yfilter)
	|| ydk::is_set(sourceaddr.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv6mcastItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mipv6mcast-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv6mcastItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (groupaddr.is_set || is_set(groupaddr.yfilter)) leaf_name_data.push_back(groupaddr.get_name_leafdata());
    if (groupstartaddr.is_set || is_set(groupstartaddr.yfilter)) leaf_name_data.push_back(groupstartaddr.get_name_leafdata());
    if (groupendaddr.is_set || is_set(groupendaddr.yfilter)) leaf_name_data.push_back(groupendaddr.get_name_leafdata());
    if (rp.is_set || is_set(rp.yfilter)) leaf_name_data.push_back(rp.get_name_leafdata());
    if (rptype.is_set || is_set(rptype.yfilter)) leaf_name_data.push_back(rptype.get_name_leafdata());
    if (sourceaddr.is_set || is_set(sourceaddr.yfilter)) leaf_name_data.push_back(sourceaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv6mcastItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv6mcastItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv6mcastItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "groupAddr")
    {
        groupaddr = value;
        groupaddr.value_namespace = name_space;
        groupaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupStartAddr")
    {
        groupstartaddr = value;
        groupstartaddr.value_namespace = name_space;
        groupstartaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupEndAddr")
    {
        groupendaddr = value;
        groupendaddr.value_namespace = name_space;
        groupendaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp")
    {
        rp = value;
        rp.value_namespace = name_space;
        rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpType")
    {
        rptype = value;
        rptype.value_namespace = name_space;
        rptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceAddr")
    {
        sourceaddr = value;
        sourceaddr.value_namespace = name_space;
        sourceaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv6mcastItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "groupAddr")
    {
        groupaddr.yfilter = yfilter;
    }
    if(value_path == "groupStartAddr")
    {
        groupstartaddr.yfilter = yfilter;
    }
    if(value_path == "groupEndAddr")
    {
        groupendaddr.yfilter = yfilter;
    }
    if(value_path == "rp")
    {
        rp.yfilter = yfilter;
    }
    if(value_path == "rpType")
    {
        rptype.yfilter = yfilter;
    }
    if(value_path == "sourceAddr")
    {
        sourceaddr.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv6mcastItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "type" || name == "groupAddr" || name == "groupStartAddr" || name == "groupEndAddr" || name == "rp" || name == "rpType" || name == "sourceAddr")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::MrtnhItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
        ,
    rsrtnhatt_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems>())
{
    rsrtnhatt_items->parent = this;

    yang_name = "mrtnh-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::~MrtnhItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| (rsrtnhatt_items !=  nullptr && rsrtnhatt_items->has_data());
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (rsrtnhatt_items !=  nullptr && rsrtnhatt_items->has_operation());
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrtnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsrtNhAtt-items")
    {
        if(rsrtnhatt_items == nullptr)
        {
            rsrtnhatt_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems>();
        }
        return rsrtnhatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsrtnhatt_items != nullptr)
    {
        _children["rsrtNhAtt-items"] = rsrtnhatt_items;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsrtNhAtt-items" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::RsrtNhAttItems()
    :
    rsrtnhatt_list(this, {"tdn"})
{

    yang_name = "rsrtNhAtt-items"; yang_parent_name = "mrtnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::~RsrtNhAttItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsrtnhatt_list.len(); index++)
    {
        if(rsrtnhatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsrtnhatt_list.len(); index++)
    {
        if(rsrtnhatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrtNhAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsRtNhAtt-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::RsRtNhAttList>();
        ent_->parent = this;
        rsrtnhatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsrtnhatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsRtNhAtt-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::RsRtNhAttList::RsRtNhAttList()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "RsRtNhAtt-list"; yang_parent_name = "rsrtNhAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::RsRtNhAttList::~RsRtNhAttList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::RsRtNhAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::RsRtNhAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::RsRtNhAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsRtNhAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::RsRtNhAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::RsRtNhAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::RsRtNhAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::RsRtNhAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::RsRtNhAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::RsRtNhAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::Mrtnhv6Items()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
        ,
    rsrtnhv6att_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems>())
{
    rsrtnhv6att_items->parent = this;

    yang_name = "mrtnhv6-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::~Mrtnhv6Items()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| (rsrtnhv6att_items !=  nullptr && rsrtnhv6att_items->has_data());
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (rsrtnhv6att_items !=  nullptr && rsrtnhv6att_items->has_operation());
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrtnhv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsrtNhV6Att-items")
    {
        if(rsrtnhv6att_items == nullptr)
        {
            rsrtnhv6att_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems>();
        }
        return rsrtnhv6att_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsrtnhv6att_items != nullptr)
    {
        _children["rsrtNhV6Att-items"] = rsrtnhv6att_items;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsrtNhV6Att-items" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::RsrtNhV6AttItems()
    :
    rsrtnhv6att_list(this, {"tdn"})
{

    yang_name = "rsrtNhV6Att-items"; yang_parent_name = "mrtnhv6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::~RsrtNhV6AttItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsrtnhv6att_list.len(); index++)
    {
        if(rsrtnhv6att_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::has_operation() const
{
    for (std::size_t index=0; index<rsrtnhv6att_list.len(); index++)
    {
        if(rsrtnhv6att_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrtNhV6Att-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsRtNhV6Att-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::RsRtNhV6AttList>();
        ent_->parent = this;
        rsrtnhv6att_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsrtnhv6att_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsRtNhV6Att-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::RsRtNhV6AttList::RsRtNhV6AttList()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "RsRtNhV6Att-list"; yang_parent_name = "rsrtNhV6Att-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::RsRtNhV6AttList::~RsRtNhV6AttList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::RsRtNhV6AttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::RsRtNhV6AttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::RsRtNhV6AttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsRtNhV6Att-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::RsRtNhV6AttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::RsRtNhV6AttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::RsRtNhV6AttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::RsRtNhV6AttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::RsRtNhV6AttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::RsRtNhV6AttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::MrtsrcItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
        ,
    rsrtsrcatt_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems>())
{
    rsrtsrcatt_items->parent = this;

    yang_name = "mrtsrc-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::~MrtsrcItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| (rsrtsrcatt_items !=  nullptr && rsrtsrcatt_items->has_data());
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (rsrtsrcatt_items !=  nullptr && rsrtsrcatt_items->has_operation());
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrtsrc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsrtSrcAtt-items")
    {
        if(rsrtsrcatt_items == nullptr)
        {
            rsrtsrcatt_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems>();
        }
        return rsrtsrcatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsrtsrcatt_items != nullptr)
    {
        _children["rsrtSrcAtt-items"] = rsrtsrcatt_items;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsrtSrcAtt-items" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::RsrtSrcAttItems()
    :
    rsrtsrcatt_list(this, {"tdn"})
{

    yang_name = "rsrtSrcAtt-items"; yang_parent_name = "mrtsrc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::~RsrtSrcAttItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsrtsrcatt_list.len(); index++)
    {
        if(rsrtsrcatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsrtsrcatt_list.len(); index++)
    {
        if(rsrtsrcatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrtSrcAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsRtSrcAtt-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::RsRtSrcAttList>();
        ent_->parent = this;
        rsrtsrcatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsrtsrcatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsRtSrcAtt-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::RsRtSrcAttList::RsRtSrcAttList()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "RsRtSrcAtt-list"; yang_parent_name = "rsrtSrcAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::RsRtSrcAttList::~RsRtSrcAttList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::RsRtSrcAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::RsRtSrcAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::RsRtSrcAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsRtSrcAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::RsRtSrcAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::RsRtSrcAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::RsRtSrcAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::RsRtSrcAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::RsRtSrcAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::RsRtSrcAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::Mrtsrcv6Items()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
        ,
    rsrtsrcv6att_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems>())
{
    rsrtsrcv6att_items->parent = this;

    yang_name = "mrtsrcv6-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::~Mrtsrcv6Items()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| (rsrtsrcv6att_items !=  nullptr && rsrtsrcv6att_items->has_data());
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (rsrtsrcv6att_items !=  nullptr && rsrtsrcv6att_items->has_operation());
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrtsrcv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsrtSrcV6Att-items")
    {
        if(rsrtsrcv6att_items == nullptr)
        {
            rsrtsrcv6att_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems>();
        }
        return rsrtsrcv6att_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsrtsrcv6att_items != nullptr)
    {
        _children["rsrtSrcV6Att-items"] = rsrtsrcv6att_items;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsrtSrcV6Att-items" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::RsrtSrcV6AttItems()
    :
    rsrtsrcv6att_list(this, {"tdn"})
{

    yang_name = "rsrtSrcV6Att-items"; yang_parent_name = "mrtsrcv6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::~RsrtSrcV6AttItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsrtsrcv6att_list.len(); index++)
    {
        if(rsrtsrcv6att_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::has_operation() const
{
    for (std::size_t index=0; index<rsrtsrcv6att_list.len(); index++)
    {
        if(rsrtsrcv6att_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrtSrcV6Att-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsRtSrcV6Att-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::RsRtSrcV6AttList>();
        ent_->parent = this;
        rsrtsrcv6att_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsrtsrcv6att_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsRtSrcV6Att-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::RsRtSrcV6AttList::RsRtSrcV6AttList()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "RsRtSrcV6Att-list"; yang_parent_name = "rsrtSrcV6Att-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::RsRtSrcV6AttList::~RsRtSrcV6AttList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::RsRtSrcV6AttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::RsRtSrcV6AttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::RsRtSrcV6AttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsRtSrcV6Att-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::RsRtSrcV6AttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::RsRtSrcV6AttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::RsRtSrcV6AttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::RsRtSrcV6AttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::RsRtSrcV6AttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::RsRtSrcV6AttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::MrttypeItems()
    :
    matchrttype_list(this, {"routet"})
{

    yang_name = "mrttype-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::~MrttypeItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matchrttype_list.len(); index++)
    {
        if(matchrttype_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::has_operation() const
{
    for (std::size_t index=0; index<matchrttype_list.len(); index++)
    {
        if(matchrttype_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrttype-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MatchRtType-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::MatchRtTypeList>();
        ent_->parent = this;
        matchrttype_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : matchrttype_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MatchRtType-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::MatchRtTypeList::MatchRtTypeList()
    :
    routet{YType::enumeration, "routeT"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "MatchRtType-list"; yang_parent_name = "mrttype-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::MatchRtTypeList::~MatchRtTypeList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::MatchRtTypeList::has_data() const
{
    if (is_presence_container) return true;
    return routet.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::MatchRtTypeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(routet.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::MatchRtTypeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MatchRtType-list";
    ADD_KEY_TOKEN(routet, "routeT");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::MatchRtTypeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routet.is_set || is_set(routet.yfilter)) leaf_name_data.push_back(routet.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::MatchRtTypeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::MatchRtTypeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::MatchRtTypeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "routeT")
    {
        routet = value;
        routet.value_namespace = name_space;
        routet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::MatchRtTypeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "routeT")
    {
        routet.yfilter = yfilter;
    }
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::MatchRtTypeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routeT" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::MrttagItems()
    :
    matchrttag_list(this, {"tag"})
{

    yang_name = "mrttag-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::~MrttagItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matchrttag_list.len(); index++)
    {
        if(matchrttag_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::has_operation() const
{
    for (std::size_t index=0; index<matchrttag_list.len(); index++)
    {
        if(matchrttag_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrttag-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MatchRtTag-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::MatchRtTagList>();
        ent_->parent = this;
        matchrttag_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : matchrttag_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MatchRtTag-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::MatchRtTagList::MatchRtTagList()
    :
    tag{YType::uint32, "tag"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "MatchRtTag-list"; yang_parent_name = "mrttag-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::MatchRtTagList::~MatchRtTagList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::MatchRtTagList::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::MatchRtTagList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::MatchRtTagList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MatchRtTag-list";
    ADD_KEY_TOKEN(tag, "tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::MatchRtTagList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::MatchRtTagList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::MatchRtTagList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::MatchRtTagList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::MatchRtTagList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::MatchRtTagList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::MsrcprotItems()
    :
    matchsrcproto_list(this, {"proto"})
{

    yang_name = "msrcprot-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::~MsrcprotItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matchsrcproto_list.len(); index++)
    {
        if(matchsrcproto_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::has_operation() const
{
    for (std::size_t index=0; index<matchsrcproto_list.len(); index++)
    {
        if(matchsrcproto_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msrcprot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MatchSrcProto-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::MatchSrcProtoList>();
        ent_->parent = this;
        matchsrcproto_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : matchsrcproto_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MatchSrcProto-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::MatchSrcProtoList::MatchSrcProtoList()
    :
    proto{YType::str, "proto"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "MatchSrcProto-list"; yang_parent_name = "msrcprot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::MatchSrcProtoList::~MatchSrcProtoList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::MatchSrcProtoList::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::MatchSrcProtoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::MatchSrcProtoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MatchSrcProto-list";
    ADD_KEY_TOKEN(proto, "proto");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::MatchSrcProtoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::MatchSrcProtoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::MatchSrcProtoList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::MatchSrcProtoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::MatchSrcProtoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::MatchSrcProtoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtpervasiveItems::MrtpervasiveItems()
    :
    pervasive{YType::enumeration, "pervasive"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "mrtpervasive-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtpervasiveItems::~MrtpervasiveItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtpervasiveItems::has_data() const
{
    if (is_presence_container) return true;
    return pervasive.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtpervasiveItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pervasive.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtpervasiveItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrtpervasive-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtpervasiveItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pervasive.is_set || is_set(pervasive.yfilter)) leaf_name_data.push_back(pervasive.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtpervasiveItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtpervasiveItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtpervasiveItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pervasive")
    {
        pervasive = value;
        pervasive.value_namespace = name_space;
        pervasive.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtpervasiveItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pervasive")
    {
        pervasive.yfilter = yfilter;
    }
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtpervasiveItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pervasive" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::MrtacclistItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
        ,
    rsrtaspathaccatt_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems>())
{
    rsrtaspathaccatt_items->parent = this;

    yang_name = "mrtacclist-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::~MrtacclistItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| (rsrtaspathaccatt_items !=  nullptr && rsrtaspathaccatt_items->has_data());
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (rsrtaspathaccatt_items !=  nullptr && rsrtaspathaccatt_items->has_operation());
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrtacclist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsrtAsPathAccAtt-items")
    {
        if(rsrtaspathaccatt_items == nullptr)
        {
            rsrtaspathaccatt_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems>();
        }
        return rsrtaspathaccatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsrtaspathaccatt_items != nullptr)
    {
        _children["rsrtAsPathAccAtt-items"] = rsrtaspathaccatt_items;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsrtAsPathAccAtt-items" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::RsrtAsPathAccAttItems()
    :
    rsrtaspathaccatt_list(this, {"tdn"})
{

    yang_name = "rsrtAsPathAccAtt-items"; yang_parent_name = "mrtacclist-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::~RsrtAsPathAccAttItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsrtaspathaccatt_list.len(); index++)
    {
        if(rsrtaspathaccatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsrtaspathaccatt_list.len(); index++)
    {
        if(rsrtaspathaccatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrtAsPathAccAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsRtAsPathAccAtt-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::RsRtAsPathAccAttList>();
        ent_->parent = this;
        rsrtaspathaccatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsrtaspathaccatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsRtAsPathAccAtt-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::RsRtAsPathAccAttList::RsRtAsPathAccAttList()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "RsRtAsPathAccAtt-list"; yang_parent_name = "rsrtAsPathAccAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::RsRtAsPathAccAttList::~RsRtAsPathAccAttList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::RsRtAsPathAccAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::RsRtAsPathAccAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::RsRtAsPathAccAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsRtAsPathAccAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::RsRtAsPathAccAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::RsRtAsPathAccAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::RsRtAsPathAccAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::RsRtAsPathAccAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::RsRtAsPathAccAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::RsRtAsPathAccAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::MrtmetricItems()
    :
    matchrtmetric_list(this, {"measure", "deviation"})
{

    yang_name = "mrtmetric-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::~MrtmetricItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matchrtmetric_list.len(); index++)
    {
        if(matchrtmetric_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::has_operation() const
{
    for (std::size_t index=0; index<matchrtmetric_list.len(); index++)
    {
        if(matchrtmetric_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrtmetric-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MatchRtMetric-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::MatchRtMetricList>();
        ent_->parent = this;
        matchrtmetric_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : matchrtmetric_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MatchRtMetric-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::MatchRtMetricList::MatchRtMetricList()
    :
    measure{YType::uint32, "measure"},
    deviation{YType::uint32, "deviation"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "MatchRtMetric-list"; yang_parent_name = "mrtmetric-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::MatchRtMetricList::~MatchRtMetricList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::MatchRtMetricList::has_data() const
{
    if (is_presence_container) return true;
    return measure.is_set
	|| deviation.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::MatchRtMetricList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(measure.yfilter)
	|| ydk::is_set(deviation.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::MatchRtMetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MatchRtMetric-list";
    ADD_KEY_TOKEN(measure, "measure");
    ADD_KEY_TOKEN(deviation, "deviation");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::MatchRtMetricList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (measure.is_set || is_set(measure.yfilter)) leaf_name_data.push_back(measure.get_name_leafdata());
    if (deviation.is_set || is_set(deviation.yfilter)) leaf_name_data.push_back(deviation.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::MatchRtMetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::MatchRtMetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::MatchRtMetricList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "measure")
    {
        measure = value;
        measure.value_namespace = name_space;
        measure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deviation")
    {
        deviation = value;
        deviation.value_namespace = name_space;
        deviation.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::MatchRtMetricList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "measure")
    {
        measure.yfilter = yfilter;
    }
    if(value_path == "deviation")
    {
        deviation.yfilter = yfilter;
    }
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::MatchRtMetricList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "measure" || name == "deviation" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::MrtasnItems()
    :
    matchrtasn_list(this, {"asn"})
{

    yang_name = "mrtasn-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::~MrtasnItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matchrtasn_list.len(); index++)
    {
        if(matchrtasn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::has_operation() const
{
    for (std::size_t index=0; index<matchrtasn_list.len(); index++)
    {
        if(matchrtasn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrtasn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MatchRtAsn-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::MatchRtAsnList>();
        ent_->parent = this;
        matchrtasn_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : matchrtasn_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MatchRtAsn-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::MatchRtAsnList::MatchRtAsnList()
    :
    asn{YType::str, "asn"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "MatchRtAsn-list"; yang_parent_name = "mrtasn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::MatchRtAsnList::~MatchRtAsnList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::MatchRtAsnList::has_data() const
{
    if (is_presence_container) return true;
    return asn.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::MatchRtAsnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::MatchRtAsnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MatchRtAsn-list";
    ADD_KEY_TOKEN(asn, "asn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::MatchRtAsnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::MatchRtAsnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::MatchRtAsnList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::MatchRtAsnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::MatchRtAsnList::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::MatchRtAsnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::MrtifItems()
    :
    matchrtif_list(this, {"id"})
{

    yang_name = "mrtif-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::~MrtifItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matchrtif_list.len(); index++)
    {
        if(matchrtif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::has_operation() const
{
    for (std::size_t index=0; index<matchrtif_list.len(); index++)
    {
        if(matchrtif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrtif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MatchRtIf-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::MatchRtIfList>();
        ent_->parent = this;
        matchrtif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : matchrtif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MatchRtIf-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::MatchRtIfList::MatchRtIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "MatchRtIf-list"; yang_parent_name = "mrtif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::MatchRtIfList::~MatchRtIfList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::MatchRtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::MatchRtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::MatchRtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MatchRtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::MatchRtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::MatchRtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::MatchRtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::MatchRtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::MatchRtIfList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::MatchRtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::MrtospfItems()
    :
    matchrtospf_list(this, {"area"})
{

    yang_name = "mrtospf-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::~MrtospfItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matchrtospf_list.len(); index++)
    {
        if(matchrtospf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::has_operation() const
{
    for (std::size_t index=0; index<matchrtospf_list.len(); index++)
    {
        if(matchrtospf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrtospf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MatchRtOspf-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::MatchRtOspfList>();
        ent_->parent = this;
        matchrtospf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : matchrtospf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MatchRtOspf-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::MatchRtOspfList::MatchRtOspfList()
    :
    area{YType::uint32, "area"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "MatchRtOspf-list"; yang_parent_name = "mrtospf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::MatchRtOspfList::~MatchRtOspfList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::MatchRtOspfList::has_data() const
{
    if (is_presence_container) return true;
    return area.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::MatchRtOspfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::MatchRtOspfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MatchRtOspf-list";
    ADD_KEY_TOKEN(area, "area");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::MatchRtOspfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::MatchRtOspfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::MatchRtOspfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::MatchRtOspfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::MatchRtOspfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::MatchRtOspfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::MrtmaclistItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
        ,
    rsrtmaclistatt_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems>())
{
    rsrtmaclistatt_items->parent = this;

    yang_name = "mrtmaclist-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::~MrtmaclistItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| (rsrtmaclistatt_items !=  nullptr && rsrtmaclistatt_items->has_data());
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (rsrtmaclistatt_items !=  nullptr && rsrtmaclistatt_items->has_operation());
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrtmaclist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsrtMacListAtt-items")
    {
        if(rsrtmaclistatt_items == nullptr)
        {
            rsrtmaclistatt_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems>();
        }
        return rsrtmaclistatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsrtmaclistatt_items != nullptr)
    {
        _children["rsrtMacListAtt-items"] = rsrtmaclistatt_items;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsrtMacListAtt-items" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::RsrtMacListAttItems()
    :
    rsrtmaclistatt_list(this, {"tdn"})
{

    yang_name = "rsrtMacListAtt-items"; yang_parent_name = "mrtmaclist-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::~RsrtMacListAttItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsrtmaclistatt_list.len(); index++)
    {
        if(rsrtmaclistatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsrtmaclistatt_list.len(); index++)
    {
        if(rsrtmaclistatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrtMacListAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsRtMacListAtt-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::RsRtMacListAttList>();
        ent_->parent = this;
        rsrtmaclistatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsrtmaclistatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsRtMacListAtt-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::RsRtMacListAttList::RsRtMacListAttList()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "RsRtMacListAtt-list"; yang_parent_name = "rsrtMacListAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::RsRtMacListAttList::~RsRtMacListAttList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::RsRtMacListAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::RsRtMacListAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::RsRtMacListAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsRtMacListAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::RsRtMacListAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::RsRtMacListAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::RsRtMacListAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::RsRtMacListAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::RsRtMacListAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::RsRtMacListAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScontinueItems::ScontinueItems()
    :
    continue_{YType::uint16, "continue"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "scontinue-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScontinueItems::~ScontinueItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScontinueItems::has_data() const
{
    if (is_presence_container) return true;
    return continue_.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScontinueItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(continue_.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScontinueItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scontinue-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScontinueItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (continue_.is_set || is_set(continue_.yfilter)) leaf_name_data.push_back(continue_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScontinueItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScontinueItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScontinueItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "continue")
    {
        continue_ = value;
        continue_.value_namespace = name_space;
        continue_.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScontinueItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "continue")
    {
        continue_.yfilter = yfilter;
    }
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScontinueItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "continue" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::SregcommItems()
    :
    additive{YType::enumeration, "additive"},
    nocommattr{YType::enumeration, "noCommAttr"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    setcriteria{YType::enumeration, "setCriteria"}
        ,
    scomm_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems>())
    , item_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems>())
{
    scomm_items->parent = this;
    item_items->parent = this;

    yang_name = "sregcomm-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::~SregcommItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::has_data() const
{
    if (is_presence_container) return true;
    return additive.is_set
	|| nocommattr.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set
	|| setcriteria.is_set
	|| (scomm_items !=  nullptr && scomm_items->has_data())
	|| (item_items !=  nullptr && item_items->has_data());
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(additive.yfilter)
	|| ydk::is_set(nocommattr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(setcriteria.yfilter)
	|| (scomm_items !=  nullptr && scomm_items->has_operation())
	|| (item_items !=  nullptr && item_items->has_operation());
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sregcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (additive.is_set || is_set(additive.yfilter)) leaf_name_data.push_back(additive.get_name_leafdata());
    if (nocommattr.is_set || is_set(nocommattr.yfilter)) leaf_name_data.push_back(nocommattr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (setcriteria.is_set || is_set(setcriteria.yfilter)) leaf_name_data.push_back(setcriteria.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scomm-items")
    {
        if(scomm_items == nullptr)
        {
            scomm_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems>();
        }
        return scomm_items;
    }

    if(child_yang_name == "item-items")
    {
        if(item_items == nullptr)
        {
            item_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems>();
        }
        return item_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(scomm_items != nullptr)
    {
        _children["scomm-items"] = scomm_items;
    }

    if(item_items != nullptr)
    {
        _children["item-items"] = item_items;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "additive")
    {
        additive = value;
        additive.value_namespace = name_space;
        additive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noCommAttr")
    {
        nocommattr = value;
        nocommattr.value_namespace = name_space;
        nocommattr.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setCriteria")
    {
        setcriteria = value;
        setcriteria.value_namespace = name_space;
        setcriteria.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "additive")
    {
        additive.yfilter = yfilter;
    }
    if(value_path == "noCommAttr")
    {
        nocommattr.yfilter = yfilter;
    }
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
    if(value_path == "setCriteria")
    {
        setcriteria.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scomm-items" || name == "item-items" || name == "additive" || name == "noCommAttr" || name == "name" || name == "descr" || name == "type" || name == "setCriteria")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::ScommItems()
    :
    setcommitem_list(this, {"community"})
{

    yang_name = "scomm-items"; yang_parent_name = "sregcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::~ScommItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<setcommitem_list.len(); index++)
    {
        if(setcommitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::has_operation() const
{
    for (std::size_t index=0; index<setcommitem_list.len(); index++)
    {
        if(setcommitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SetCommItem-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::SetCommItemList>();
        ent_->parent = this;
        setcommitem_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : setcommitem_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SetCommItem-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::SetCommItemList::SetCommItemList()
    :
    community{YType::str, "community"}
{

    yang_name = "SetCommItem-list"; yang_parent_name = "scomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::SetCommItemList::~SetCommItemList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::SetCommItemList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::SetCommItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::SetCommItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SetCommItem-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::SetCommItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::SetCommItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::SetCommItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::SetCommItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::SetCommItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::SetCommItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::ItemItems()
    :
    item_list(this, {"community"})
{

    yang_name = "item-items"; yang_parent_name = "sregcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::~ItemItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<item_list.len(); index++)
    {
        if(item_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::has_operation() const
{
    for (std::size_t index=0; index<item_list.len(); index++)
    {
        if(item_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "item-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Item-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::ItemList>();
        ent_->parent = this;
        item_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : item_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Item-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::ItemList::ItemList()
    :
    community{YType::str, "community"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "Item-list"; yang_parent_name = "item-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::ItemList::~ItemList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::ItemList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::ItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::ItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Item-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::ItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::ItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::ItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::ItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
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

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::ItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
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

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::ItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community" || name == "name" || name == "descr")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::SextcommItems()
    :
    additive{YType::enumeration, "additive"},
    nocommattr{YType::enumeration, "noCommAttr"},
    scope{YType::enumeration, "scope"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    setcriteria{YType::enumeration, "setCriteria"}
        ,
    item_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems>())
    , scomm_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems>())
{
    item_items->parent = this;
    scomm_items->parent = this;

    yang_name = "sextcomm-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::~SextcommItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::has_data() const
{
    if (is_presence_container) return true;
    return additive.is_set
	|| nocommattr.is_set
	|| scope.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set
	|| setcriteria.is_set
	|| (item_items !=  nullptr && item_items->has_data())
	|| (scomm_items !=  nullptr && scomm_items->has_data());
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(additive.yfilter)
	|| ydk::is_set(nocommattr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(setcriteria.yfilter)
	|| (item_items !=  nullptr && item_items->has_operation())
	|| (scomm_items !=  nullptr && scomm_items->has_operation());
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sextcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (additive.is_set || is_set(additive.yfilter)) leaf_name_data.push_back(additive.get_name_leafdata());
    if (nocommattr.is_set || is_set(nocommattr.yfilter)) leaf_name_data.push_back(nocommattr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (setcriteria.is_set || is_set(setcriteria.yfilter)) leaf_name_data.push_back(setcriteria.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "item-items")
    {
        if(item_items == nullptr)
        {
            item_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems>();
        }
        return item_items;
    }

    if(child_yang_name == "scomm-items")
    {
        if(scomm_items == nullptr)
        {
            scomm_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems>();
        }
        return scomm_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(item_items != nullptr)
    {
        _children["item-items"] = item_items;
    }

    if(scomm_items != nullptr)
    {
        _children["scomm-items"] = scomm_items;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "additive")
    {
        additive = value;
        additive.value_namespace = name_space;
        additive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noCommAttr")
    {
        nocommattr = value;
        nocommattr.value_namespace = name_space;
        nocommattr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setCriteria")
    {
        setcriteria = value;
        setcriteria.value_namespace = name_space;
        setcriteria.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "additive")
    {
        additive.yfilter = yfilter;
    }
    if(value_path == "noCommAttr")
    {
        nocommattr.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
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
    if(value_path == "setCriteria")
    {
        setcriteria.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "item-items" || name == "scomm-items" || name == "additive" || name == "noCommAttr" || name == "scope" || name == "name" || name == "descr" || name == "type" || name == "setCriteria")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::ItemItems()
    :
    item_list(this, {"scope", "community"})
{

    yang_name = "item-items"; yang_parent_name = "sextcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::~ItemItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<item_list.len(); index++)
    {
        if(item_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::has_operation() const
{
    for (std::size_t index=0; index<item_list.len(); index++)
    {
        if(item_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "item-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Item-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::ItemList>();
        ent_->parent = this;
        item_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : item_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Item-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::ItemList::ItemList()
    :
    scope{YType::enumeration, "scope"},
    community{YType::str, "community"},
    type{YType::enumeration, "type"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "Item-list"; yang_parent_name = "item-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::ItemList::~ItemList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::ItemList::has_data() const
{
    if (is_presence_container) return true;
    return scope.is_set
	|| community.is_set
	|| type.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::ItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::ItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Item-list";
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::ItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::ItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::ItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::ItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::ItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
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

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::ItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope" || name == "community" || name == "type" || name == "name" || name == "descr")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::ScommItems()
    :
    setcommitem_list(this, {"community"})
{

    yang_name = "scomm-items"; yang_parent_name = "sextcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::~ScommItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<setcommitem_list.len(); index++)
    {
        if(setcommitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::has_operation() const
{
    for (std::size_t index=0; index<setcommitem_list.len(); index++)
    {
        if(setcommitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SetCommItem-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::SetCommItemList>();
        ent_->parent = this;
        setcommitem_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : setcommitem_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SetCommItem-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::SetCommItemList::SetCommItemList()
    :
    community{YType::str, "community"}
{

    yang_name = "SetCommItem-list"; yang_parent_name = "scomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::SetCommItemList::~SetCommItemList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::SetCommItemList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::SetCommItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::SetCommItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SetCommItem-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::SetCommItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::SetCommItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::SetCommItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::SetCommItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::SetCommItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::SetCommItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::SextcommcostItems()
    :
    setextcommcost_list(this, {"commcrit", "commid"})
{

    yang_name = "sextcommcost-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::~SextcommcostItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<setextcommcost_list.len(); index++)
    {
        if(setextcommcost_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::has_operation() const
{
    for (std::size_t index=0; index<setextcommcost_list.len(); index++)
    {
        if(setextcommcost_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sextcommcost-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SetExtCommCost-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::SetExtCommCostList>();
        ent_->parent = this;
        setextcommcost_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : setextcommcost_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SetExtCommCost-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::SetExtCommCostList::SetExtCommCostList()
    :
    commcrit{YType::enumeration, "commCrit"},
    commid{YType::uint8, "commId"},
    commvalue{YType::uint32, "commValue"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    setcriteria{YType::enumeration, "setCriteria"}
{

    yang_name = "SetExtCommCost-list"; yang_parent_name = "sextcommcost-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::SetExtCommCostList::~SetExtCommCostList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::SetExtCommCostList::has_data() const
{
    if (is_presence_container) return true;
    return commcrit.is_set
	|| commid.is_set
	|| commvalue.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set
	|| setcriteria.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::SetExtCommCostList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(commcrit.yfilter)
	|| ydk::is_set(commid.yfilter)
	|| ydk::is_set(commvalue.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(setcriteria.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::SetExtCommCostList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SetExtCommCost-list";
    ADD_KEY_TOKEN(commcrit, "commCrit");
    ADD_KEY_TOKEN(commid, "commId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::SetExtCommCostList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (commcrit.is_set || is_set(commcrit.yfilter)) leaf_name_data.push_back(commcrit.get_name_leafdata());
    if (commid.is_set || is_set(commid.yfilter)) leaf_name_data.push_back(commid.get_name_leafdata());
    if (commvalue.is_set || is_set(commvalue.yfilter)) leaf_name_data.push_back(commvalue.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (setcriteria.is_set || is_set(setcriteria.yfilter)) leaf_name_data.push_back(setcriteria.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::SetExtCommCostList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::SetExtCommCostList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::SetExtCommCostList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "commCrit")
    {
        commcrit = value;
        commcrit.value_namespace = name_space;
        commcrit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commId")
    {
        commid = value;
        commid.value_namespace = name_space;
        commid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commValue")
    {
        commvalue = value;
        commvalue.value_namespace = name_space;
        commvalue.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setCriteria")
    {
        setcriteria = value;
        setcriteria.value_namespace = name_space;
        setcriteria.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::SetExtCommCostList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "commCrit")
    {
        commcrit.yfilter = yfilter;
    }
    if(value_path == "commId")
    {
        commid.yfilter = yfilter;
    }
    if(value_path == "commValue")
    {
        commvalue.yfilter = yfilter;
    }
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
    if(value_path == "setCriteria")
    {
        setcriteria.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::SetExtCommCostList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "commCrit" || name == "commId" || name == "commValue" || name == "name" || name == "descr" || name == "type" || name == "setCriteria")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcolorItems::SextcommcolorItems()
    :
    commvalue{YType::uint32, "commValue"}
{

    yang_name = "sextcommcolor-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcolorItems::~SextcommcolorItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcolorItems::has_data() const
{
    if (is_presence_container) return true;
    return commvalue.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcolorItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(commvalue.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcolorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sextcommcolor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcolorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (commvalue.is_set || is_set(commvalue.yfilter)) leaf_name_data.push_back(commvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcolorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcolorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcolorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "commValue")
    {
        commvalue = value;
        commvalue.value_namespace = name_space;
        commvalue.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcolorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "commValue")
    {
        commvalue.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcolorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "commValue")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommrmacItems::SextcommrmacItems()
    :
    commrmac{YType::str, "commRmac"}
{

    yang_name = "sextcommrmac-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommrmacItems::~SextcommrmacItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommrmacItems::has_data() const
{
    if (is_presence_container) return true;
    return commrmac.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommrmacItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(commrmac.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommrmacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sextcommrmac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommrmacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (commrmac.is_set || is_set(commrmac.yfilter)) leaf_name_data.push_back(commrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommrmacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommrmacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommrmacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "commRmac")
    {
        commrmac = value;
        commrmac.value_namespace = name_space;
        commrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommrmacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "commRmac")
    {
        commrmac.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommrmacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "commRmac")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScommlistItems::ScommlistItems()
    :
    delete_{YType::enumeration, "delete"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    setcriteria{YType::enumeration, "setCriteria"}
{

    yang_name = "scommlist-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScommlistItems::~ScommlistItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScommlistItems::has_data() const
{
    if (is_presence_container) return true;
    return delete_.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set
	|| setcriteria.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScommlistItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delete_.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(setcriteria.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScommlistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scommlist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScommlistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (setcriteria.is_set || is_set(setcriteria.yfilter)) leaf_name_data.push_back(setcriteria.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScommlistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScommlistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScommlistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setCriteria")
    {
        setcriteria = value;
        setcriteria.value_namespace = name_space;
        setcriteria.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScommlistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
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
    if(value_path == "setCriteria")
    {
        setcriteria.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScommlistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delete" || name == "name" || name == "descr" || name == "type" || name == "setCriteria")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommlistItems::SextcommlistItems()
    :
    delete_{YType::enumeration, "delete"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    setcriteria{YType::enumeration, "setCriteria"}
{

    yang_name = "sextcommlist-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommlistItems::~SextcommlistItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommlistItems::has_data() const
{
    if (is_presence_container) return true;
    return delete_.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set
	|| setcriteria.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommlistItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delete_.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(setcriteria.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommlistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sextcommlist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommlistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (setcriteria.is_set || is_set(setcriteria.yfilter)) leaf_name_data.push_back(setcriteria.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommlistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommlistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommlistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setCriteria")
    {
        setcriteria = value;
        setcriteria.value_namespace = name_space;
        setcriteria.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommlistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
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
    if(value_path == "setCriteria")
    {
        setcriteria.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommlistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delete" || name == "name" || name == "descr" || name == "type" || name == "setCriteria")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::SrttItems()
    :
    additive{YType::enumeration, "additive"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    setcriteria{YType::enumeration, "setCriteria"}
        ,
    item_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems>())
    , scomm_items(std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems>())
{
    item_items->parent = this;
    scomm_items->parent = this;

    yang_name = "srtt-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::~SrttItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::has_data() const
{
    if (is_presence_container) return true;
    return additive.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set
	|| setcriteria.is_set
	|| (item_items !=  nullptr && item_items->has_data())
	|| (scomm_items !=  nullptr && scomm_items->has_data());
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(additive.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(setcriteria.yfilter)
	|| (item_items !=  nullptr && item_items->has_operation())
	|| (scomm_items !=  nullptr && scomm_items->has_operation());
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (additive.is_set || is_set(additive.yfilter)) leaf_name_data.push_back(additive.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (setcriteria.is_set || is_set(setcriteria.yfilter)) leaf_name_data.push_back(setcriteria.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "item-items")
    {
        if(item_items == nullptr)
        {
            item_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems>();
        }
        return item_items;
    }

    if(child_yang_name == "scomm-items")
    {
        if(scomm_items == nullptr)
        {
            scomm_items = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems>();
        }
        return scomm_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(item_items != nullptr)
    {
        _children["item-items"] = item_items;
    }

    if(scomm_items != nullptr)
    {
        _children["scomm-items"] = scomm_items;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "additive")
    {
        additive = value;
        additive.value_namespace = name_space;
        additive.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setCriteria")
    {
        setcriteria = value;
        setcriteria.value_namespace = name_space;
        setcriteria.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "additive")
    {
        additive.yfilter = yfilter;
    }
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
    if(value_path == "setCriteria")
    {
        setcriteria.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "item-items" || name == "scomm-items" || name == "additive" || name == "name" || name == "descr" || name == "type" || name == "setCriteria")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::ItemItems()
    :
    item_list(this, {"scope", "community"})
{

    yang_name = "item-items"; yang_parent_name = "srtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::~ItemItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<item_list.len(); index++)
    {
        if(item_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::has_operation() const
{
    for (std::size_t index=0; index<item_list.len(); index++)
    {
        if(item_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "item-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Item-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::ItemList>();
        ent_->parent = this;
        item_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : item_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Item-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::ItemList::ItemList()
    :
    scope{YType::enumeration, "scope"},
    community{YType::str, "community"},
    type{YType::enumeration, "type"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "Item-list"; yang_parent_name = "item-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::ItemList::~ItemList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::ItemList::has_data() const
{
    if (is_presence_container) return true;
    return scope.is_set
	|| community.is_set
	|| type.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::ItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::ItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Item-list";
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::ItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::ItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::ItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::ItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::ItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
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

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::ItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope" || name == "community" || name == "type" || name == "name" || name == "descr")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::ScommItems()
    :
    setcommitem_list(this, {"community"})
{

    yang_name = "scomm-items"; yang_parent_name = "srtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::~ScommItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<setcommitem_list.len(); index++)
    {
        if(setcommitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::has_operation() const
{
    for (std::size_t index=0; index<setcommitem_list.len(); index++)
    {
        if(setcommitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SetCommItem-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::SetCommItemList>();
        ent_->parent = this;
        setcommitem_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : setcommitem_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SetCommItem-list")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::SetCommItemList::SetCommItemList()
    :
    community{YType::str, "community"}
{

    yang_name = "SetCommItem-list"; yang_parent_name = "scomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::SetCommItemList::~SetCommItemList()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::SetCommItemList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::SetCommItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::SetCommItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SetCommItem-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::SetCommItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::SetCommItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::SetCommItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::SetCommItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::SetCommItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::SetCommItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrtdistItems::SrtdistItems()
    :
    dist{YType::uint8, "dist"},
    disti{YType::uint8, "distI"},
    distl{YType::uint8, "distL"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "srtdist-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrtdistItems::~SrtdistItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrtdistItems::has_data() const
{
    if (is_presence_container) return true;
    return dist.is_set
	|| disti.is_set
	|| distl.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrtdistItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dist.yfilter)
	|| ydk::is_set(disti.yfilter)
	|| ydk::is_set(distl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrtdistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srtdist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrtdistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dist.is_set || is_set(dist.yfilter)) leaf_name_data.push_back(dist.get_name_leafdata());
    if (disti.is_set || is_set(disti.yfilter)) leaf_name_data.push_back(disti.get_name_leafdata());
    if (distl.is_set || is_set(distl.yfilter)) leaf_name_data.push_back(distl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrtdistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrtdistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrtdistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dist")
    {
        dist = value;
        dist.value_namespace = name_space;
        dist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distI")
    {
        disti = value;
        disti.value_namespace = name_space;
        disti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distL")
    {
        distl = value;
        distl.value_namespace = name_space;
        distl.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrtdistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dist")
    {
        dist.yfilter = yfilter;
    }
    if(value_path == "distI")
    {
        disti.yfilter = yfilter;
    }
    if(value_path == "distL")
    {
        distl.yfilter = yfilter;
    }
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrtdistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dist" || name == "distI" || name == "distL" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttagItems::SrttagItems()
    :
    tag{YType::uint32, "tag"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "srttag-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttagItems::~SrttagItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttagItems::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttagItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttagItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srttag-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttagItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttagItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttagItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttagItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttagItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttagItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SweightItems::SweightItems()
    :
    weight{YType::uint16, "weight"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "sweight-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SweightItems::~SweightItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SweightItems::has_data() const
{
    if (is_presence_container) return true;
    return weight.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SweightItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SweightItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sweight-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SweightItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SweightItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SweightItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SweightItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SweightItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SweightItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "weight" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SlblindexItems::SlblindexItems()
    :
    index_{YType::uint32, "index"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "slblindex-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SlblindexItems::~SlblindexItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SlblindexItems::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SlblindexItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SlblindexItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slblindex-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SlblindexItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SlblindexItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SlblindexItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SlblindexItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SlblindexItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SlblindexItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprefItems::SprefItems()
    :
    localpref{YType::uint32, "localPref"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "spref-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprefItems::~SprefItems()
{
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprefItems::has_data() const
{
    if (is_presence_container) return true;
    return localpref.is_set
	|| name.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprefItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spref-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprefItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
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
}

bool System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localPref" || name == "name" || name == "descr" || name == "type")
        return true;
    return false;
}


}
}

