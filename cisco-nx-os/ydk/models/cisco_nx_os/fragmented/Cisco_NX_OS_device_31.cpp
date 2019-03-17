
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_31.hpp"
#include "Cisco_NX_OS_device_32.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::NpvItems::InstItems::SrvifItems::SrvifItems()
    :
    srvif_list(this, {"id"})
{

    yang_name = "srvif-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::InstItems::SrvifItems::~SrvifItems()
{
}

bool System::NpvItems::InstItems::SrvifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srvif_list.len(); index++)
    {
        if(srvif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::SrvifItems::has_operation() const
{
    for (std::size_t index=0; index<srvif_list.len(); index++)
    {
        if(srvif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/npv-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::InstItems::SrvifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srvif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::SrvifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SrvIf-list")
    {
        auto ent_ = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList>();
        ent_->parent = this;
        srvif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::SrvifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srvif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NpvItems::InstItems::SrvifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::SrvifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::SrvifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SrvIf-list")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvIfList()
    :
    id{YType::str, "id"},
    flags{YType::str, "flags"},
    defaultvsan{YType::uint32, "defaultVsan"},
    defaultextif{YType::str, "defaultExtIf"},
    fcid{YType::uint32, "fcid"},
    fsmst{YType::enumeration, "fsmSt"},
    wwpn{YType::str, "wwpn"},
    wwnn{YType::str, "wwnn"}
        ,
    targetif_items(std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems>())
    , vsan_items(std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems>())
    , srvif_items(std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_>())
{
    targetif_items->parent = this;
    vsan_items->parent = this;
    srvif_items->parent = this;

    yang_name = "SrvIf-list"; yang_parent_name = "srvif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::~SrvIfList()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| flags.is_set
	|| defaultvsan.is_set
	|| defaultextif.is_set
	|| fcid.is_set
	|| fsmst.is_set
	|| wwpn.is_set
	|| wwnn.is_set
	|| (targetif_items !=  nullptr && targetif_items->has_data())
	|| (vsan_items !=  nullptr && vsan_items->has_data())
	|| (srvif_items !=  nullptr && srvif_items->has_data());
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(defaultvsan.yfilter)
	|| ydk::is_set(defaultextif.yfilter)
	|| ydk::is_set(fcid.yfilter)
	|| ydk::is_set(fsmst.yfilter)
	|| ydk::is_set(wwpn.yfilter)
	|| ydk::is_set(wwnn.yfilter)
	|| (targetif_items !=  nullptr && targetif_items->has_operation())
	|| (vsan_items !=  nullptr && vsan_items->has_operation())
	|| (srvif_items !=  nullptr && srvif_items->has_operation());
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/npv-items/inst-items/srvif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SrvIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (defaultvsan.is_set || is_set(defaultvsan.yfilter)) leaf_name_data.push_back(defaultvsan.get_name_leafdata());
    if (defaultextif.is_set || is_set(defaultextif.yfilter)) leaf_name_data.push_back(defaultextif.get_name_leafdata());
    if (fcid.is_set || is_set(fcid.yfilter)) leaf_name_data.push_back(fcid.get_name_leafdata());
    if (fsmst.is_set || is_set(fsmst.yfilter)) leaf_name_data.push_back(fsmst.get_name_leafdata());
    if (wwpn.is_set || is_set(wwpn.yfilter)) leaf_name_data.push_back(wwpn.get_name_leafdata());
    if (wwnn.is_set || is_set(wwnn.yfilter)) leaf_name_data.push_back(wwnn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "targetif-items")
    {
        if(targetif_items == nullptr)
        {
            targetif_items = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems>();
        }
        return targetif_items;
    }

    if(child_yang_name == "vsan-items")
    {
        if(vsan_items == nullptr)
        {
            vsan_items = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems>();
        }
        return vsan_items;
    }

    if(child_yang_name == "srvif-items")
    {
        if(srvif_items == nullptr)
        {
            srvif_items = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_>();
        }
        return srvif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(targetif_items != nullptr)
    {
        _children["targetif-items"] = targetif_items;
    }

    if(vsan_items != nullptr)
    {
        _children["vsan-items"] = vsan_items;
    }

    if(srvif_items != nullptr)
    {
        _children["srvif-items"] = srvif_items;
    }

    return _children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultVsan")
    {
        defaultvsan = value;
        defaultvsan.value_namespace = name_space;
        defaultvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultExtIf")
    {
        defaultextif = value;
        defaultextif.value_namespace = name_space;
        defaultextif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcid")
    {
        fcid = value;
        fcid.value_namespace = name_space;
        fcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsmSt")
    {
        fsmst = value;
        fsmst.value_namespace = name_space;
        fsmst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwpn")
    {
        wwpn = value;
        wwpn.value_namespace = name_space;
        wwpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwnn")
    {
        wwnn = value;
        wwnn.value_namespace = name_space;
        wwnn.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "defaultVsan")
    {
        defaultvsan.yfilter = yfilter;
    }
    if(value_path == "defaultExtIf")
    {
        defaultextif.yfilter = yfilter;
    }
    if(value_path == "fcid")
    {
        fcid.yfilter = yfilter;
    }
    if(value_path == "fsmSt")
    {
        fsmst.yfilter = yfilter;
    }
    if(value_path == "wwpn")
    {
        wwpn.yfilter = yfilter;
    }
    if(value_path == "wwnn")
    {
        wwnn.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "targetif-items" || name == "vsan-items" || name == "srvif-items" || name == "id" || name == "flags" || name == "defaultVsan" || name == "defaultExtIf" || name == "fcid" || name == "fsmSt" || name == "wwpn" || name == "wwnn")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetifItems()
    :
    targetif_list(this, {"id"})
{

    yang_name = "targetif-items"; yang_parent_name = "SrvIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::~TargetifItems()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<targetif_list.len(); index++)
    {
        if(targetif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::has_operation() const
{
    for (std::size_t index=0; index<targetif_list.len(); index++)
    {
        if(targetif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targetif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TargetIf-list")
    {
        auto ent_ = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList>();
        ent_->parent = this;
        targetif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : targetif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TargetIf-list")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::TargetIfList()
    :
    id{YType::str, "id"}
{

    yang_name = "TargetIf-list"; yang_parent_name = "targetif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::~TargetIfList()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TargetIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::VsanItems()
    :
    srvvsan_list(this, {"id"})
{

    yang_name = "vsan-items"; yang_parent_name = "SrvIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::~VsanItems()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srvvsan_list.len(); index++)
    {
        if(srvvsan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::has_operation() const
{
    for (std::size_t index=0; index<srvvsan_list.len(); index++)
    {
        if(srvvsan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SrvVsan-list")
    {
        auto ent_ = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList>();
        ent_->parent = this;
        srvvsan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srvvsan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SrvVsan-list")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::SrvVsanList()
    :
    id{YType::uint32, "id"}
{

    yang_name = "SrvVsan-list"; yang_parent_name = "vsan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::~SrvVsanList()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SrvVsan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvifItems_()
    :
    srvifflogi_list(this, {"fcid"})
{

    yang_name = "srvif-items"; yang_parent_name = "SrvIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::~SrvifItems_()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srvifflogi_list.len(); index++)
    {
        if(srvifflogi_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::has_operation() const
{
    for (std::size_t index=0; index<srvifflogi_list.len(); index++)
    {
        if(srvifflogi_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srvif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SrvIfFlogi-list")
    {
        auto ent_ = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList>();
        ent_->parent = this;
        srvifflogi_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srvifflogi_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SrvIfFlogi-list")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::SrvIfFlogiList()
    :
    fcid{YType::uint32, "fcid"},
    wwpn{YType::str, "wwpn"},
    wwnn{YType::str, "wwnn"},
    defaultvsan{YType::uint32, "defaultVsan"},
    defaultextif{YType::str, "defaultExtIf"}
{

    yang_name = "SrvIfFlogi-list"; yang_parent_name = "srvif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::~SrvIfFlogiList()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::has_data() const
{
    if (is_presence_container) return true;
    return fcid.is_set
	|| wwpn.is_set
	|| wwnn.is_set
	|| defaultvsan.is_set
	|| defaultextif.is_set;
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fcid.yfilter)
	|| ydk::is_set(wwpn.yfilter)
	|| ydk::is_set(wwnn.yfilter)
	|| ydk::is_set(defaultvsan.yfilter)
	|| ydk::is_set(defaultextif.yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SrvIfFlogi-list";
    ADD_KEY_TOKEN(fcid, "fcid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fcid.is_set || is_set(fcid.yfilter)) leaf_name_data.push_back(fcid.get_name_leafdata());
    if (wwpn.is_set || is_set(wwpn.yfilter)) leaf_name_data.push_back(wwpn.get_name_leafdata());
    if (wwnn.is_set || is_set(wwnn.yfilter)) leaf_name_data.push_back(wwnn.get_name_leafdata());
    if (defaultvsan.is_set || is_set(defaultvsan.yfilter)) leaf_name_data.push_back(defaultvsan.get_name_leafdata());
    if (defaultextif.is_set || is_set(defaultextif.yfilter)) leaf_name_data.push_back(defaultextif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fcid")
    {
        fcid = value;
        fcid.value_namespace = name_space;
        fcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwpn")
    {
        wwpn = value;
        wwpn.value_namespace = name_space;
        wwpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwnn")
    {
        wwnn = value;
        wwnn.value_namespace = name_space;
        wwnn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultVsan")
    {
        defaultvsan = value;
        defaultvsan.value_namespace = name_space;
        defaultvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultExtIf")
    {
        defaultextif = value;
        defaultextif.value_namespace = name_space;
        defaultextif.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fcid")
    {
        fcid.yfilter = yfilter;
    }
    if(value_path == "wwpn")
    {
        wwpn.yfilter = yfilter;
    }
    if(value_path == "wwnn")
    {
        wwnn.yfilter = yfilter;
    }
    if(value_path == "defaultVsan")
    {
        defaultvsan.yfilter = yfilter;
    }
    if(value_path == "defaultExtIf")
    {
        defaultextif.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fcid" || name == "wwpn" || name == "wwnn" || name == "defaultVsan" || name == "defaultExtIf")
        return true;
    return false;
}

System::NpvItems::InstItems::ExtifItems::ExtifItems()
    :
    extif_list(this, {"id"})
{

    yang_name = "extif-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::InstItems::ExtifItems::~ExtifItems()
{
}

bool System::NpvItems::InstItems::ExtifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extif_list.len(); index++)
    {
        if(extif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::ExtifItems::has_operation() const
{
    for (std::size_t index=0; index<extif_list.len(); index++)
    {
        if(extif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::ExtifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/npv-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::InstItems::ExtifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::ExtifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::ExtifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtIf-list")
    {
        auto ent_ = std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList>();
        ent_->parent = this;
        extif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::ExtifItems::get_children() const
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

void System::NpvItems::InstItems::ExtifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::ExtifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::ExtifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtIf-list")
        return true;
    return false;
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::ExtIfList()
    :
    id{YType::str, "id"},
    fsmst{YType::enumeration, "fsmSt"},
    numvsan{YType::uint32, "numVsan"},
    defaultvsan{YType::uint32, "defaultVsan"},
    flogivsan{YType::uint32, "flogiVsan"},
    operportmode{YType::str, "operPortMode"},
    logifindex{YType::str, "logIfIndex"},
    flags{YType::str, "flags"},
    fcid{YType::uint32, "fcid"},
    wwpn{YType::str, "wwpn"},
    wwnn{YType::str, "wwnn"}
        ,
    targetif_items(std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems>())
    , vsan_items(std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems>())
{
    targetif_items->parent = this;
    vsan_items->parent = this;

    yang_name = "ExtIf-list"; yang_parent_name = "extif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::~ExtIfList()
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| fsmst.is_set
	|| numvsan.is_set
	|| defaultvsan.is_set
	|| flogivsan.is_set
	|| operportmode.is_set
	|| logifindex.is_set
	|| flags.is_set
	|| fcid.is_set
	|| wwpn.is_set
	|| wwnn.is_set
	|| (targetif_items !=  nullptr && targetif_items->has_data())
	|| (vsan_items !=  nullptr && vsan_items->has_data());
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(fsmst.yfilter)
	|| ydk::is_set(numvsan.yfilter)
	|| ydk::is_set(defaultvsan.yfilter)
	|| ydk::is_set(flogivsan.yfilter)
	|| ydk::is_set(operportmode.yfilter)
	|| ydk::is_set(logifindex.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(fcid.yfilter)
	|| ydk::is_set(wwpn.yfilter)
	|| ydk::is_set(wwnn.yfilter)
	|| (targetif_items !=  nullptr && targetif_items->has_operation())
	|| (vsan_items !=  nullptr && vsan_items->has_operation());
}

std::string System::NpvItems::InstItems::ExtifItems::ExtIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/npv-items/inst-items/extif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::InstItems::ExtifItems::ExtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::ExtifItems::ExtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (fsmst.is_set || is_set(fsmst.yfilter)) leaf_name_data.push_back(fsmst.get_name_leafdata());
    if (numvsan.is_set || is_set(numvsan.yfilter)) leaf_name_data.push_back(numvsan.get_name_leafdata());
    if (defaultvsan.is_set || is_set(defaultvsan.yfilter)) leaf_name_data.push_back(defaultvsan.get_name_leafdata());
    if (flogivsan.is_set || is_set(flogivsan.yfilter)) leaf_name_data.push_back(flogivsan.get_name_leafdata());
    if (operportmode.is_set || is_set(operportmode.yfilter)) leaf_name_data.push_back(operportmode.get_name_leafdata());
    if (logifindex.is_set || is_set(logifindex.yfilter)) leaf_name_data.push_back(logifindex.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (fcid.is_set || is_set(fcid.yfilter)) leaf_name_data.push_back(fcid.get_name_leafdata());
    if (wwpn.is_set || is_set(wwpn.yfilter)) leaf_name_data.push_back(wwpn.get_name_leafdata());
    if (wwnn.is_set || is_set(wwnn.yfilter)) leaf_name_data.push_back(wwnn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::ExtifItems::ExtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "targetif-items")
    {
        if(targetif_items == nullptr)
        {
            targetif_items = std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems>();
        }
        return targetif_items;
    }

    if(child_yang_name == "vsan-items")
    {
        if(vsan_items == nullptr)
        {
            vsan_items = std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems>();
        }
        return vsan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::ExtifItems::ExtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(targetif_items != nullptr)
    {
        _children["targetif-items"] = targetif_items;
    }

    if(vsan_items != nullptr)
    {
        _children["vsan-items"] = vsan_items;
    }

    return _children;
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsmSt")
    {
        fsmst = value;
        fsmst.value_namespace = name_space;
        fsmst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numVsan")
    {
        numvsan = value;
        numvsan.value_namespace = name_space;
        numvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultVsan")
    {
        defaultvsan = value;
        defaultvsan.value_namespace = name_space;
        defaultvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flogiVsan")
    {
        flogivsan = value;
        flogivsan.value_namespace = name_space;
        flogivsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operPortMode")
    {
        operportmode = value;
        operportmode.value_namespace = name_space;
        operportmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logIfIndex")
    {
        logifindex = value;
        logifindex.value_namespace = name_space;
        logifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcid")
    {
        fcid = value;
        fcid.value_namespace = name_space;
        fcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwpn")
    {
        wwpn = value;
        wwpn.value_namespace = name_space;
        wwpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwnn")
    {
        wwnn = value;
        wwnn.value_namespace = name_space;
        wwnn.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "fsmSt")
    {
        fsmst.yfilter = yfilter;
    }
    if(value_path == "numVsan")
    {
        numvsan.yfilter = yfilter;
    }
    if(value_path == "defaultVsan")
    {
        defaultvsan.yfilter = yfilter;
    }
    if(value_path == "flogiVsan")
    {
        flogivsan.yfilter = yfilter;
    }
    if(value_path == "operPortMode")
    {
        operportmode.yfilter = yfilter;
    }
    if(value_path == "logIfIndex")
    {
        logifindex.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "fcid")
    {
        fcid.yfilter = yfilter;
    }
    if(value_path == "wwpn")
    {
        wwpn.yfilter = yfilter;
    }
    if(value_path == "wwnn")
    {
        wwnn.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "targetif-items" || name == "vsan-items" || name == "id" || name == "fsmSt" || name == "numVsan" || name == "defaultVsan" || name == "flogiVsan" || name == "operPortMode" || name == "logIfIndex" || name == "flags" || name == "fcid" || name == "wwpn" || name == "wwnn")
        return true;
    return false;
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetifItems()
    :
    targetif_list(this, {"id"})
{

    yang_name = "targetif-items"; yang_parent_name = "ExtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::~TargetifItems()
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<targetif_list.len(); index++)
    {
        if(targetif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::has_operation() const
{
    for (std::size_t index=0; index<targetif_list.len(); index++)
    {
        if(targetif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targetif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TargetIf-list")
    {
        auto ent_ = std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList>();
        ent_->parent = this;
        targetif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : targetif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TargetIf-list")
        return true;
    return false;
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::TargetIfList()
    :
    id{YType::str, "id"}
{

    yang_name = "TargetIf-list"; yang_parent_name = "targetif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::~TargetIfList()
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TargetIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::VsanItems()
    :
    extvsan_list(this, {"id"})
{

    yang_name = "vsan-items"; yang_parent_name = "ExtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::~VsanItems()
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extvsan_list.len(); index++)
    {
        if(extvsan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::has_operation() const
{
    for (std::size_t index=0; index<extvsan_list.len(); index++)
    {
        if(extvsan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtVsan-list")
    {
        auto ent_ = std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList>();
        ent_->parent = this;
        extvsan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extvsan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtVsan-list")
        return true;
    return false;
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::ExtVsanList()
    :
    id{YType::uint32, "id"},
    fsmst{YType::enumeration, "fsmSt"}
{

    yang_name = "ExtVsan-list"; yang_parent_name = "vsan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::~ExtVsanList()
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| fsmst.is_set;
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(fsmst.yfilter);
}

std::string System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtVsan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (fsmst.is_set || is_set(fsmst.yfilter)) leaf_name_data.push_back(fsmst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsmSt")
    {
        fsmst = value;
        fsmst.value_namespace = name_space;
        fsmst.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "fsmSt")
    {
        fsmst.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "fsmSt")
        return true;
    return false;
}

System::VsanmgrItems::VsanmgrItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    vsan_items(std::make_shared<System::VsanmgrItems::VsanItems>())
    , bdvsancfg_items(std::make_shared<System::VsanmgrItems::BdvsancfgItems>())
    , inst_items(std::make_shared<System::VsanmgrItems::InstItems>())
{
    vsan_items->parent = this;
    bdvsancfg_items->parent = this;
    inst_items->parent = this;

    yang_name = "vsanmgr-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::~VsanmgrItems()
{
}

bool System::VsanmgrItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (vsan_items !=  nullptr && vsan_items->has_data())
	|| (bdvsancfg_items !=  nullptr && bdvsancfg_items->has_data())
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::VsanmgrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (vsan_items !=  nullptr && vsan_items->has_operation())
	|| (bdvsancfg_items !=  nullptr && bdvsancfg_items->has_operation())
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::VsanmgrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsanmgr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsan-items")
    {
        if(vsan_items == nullptr)
        {
            vsan_items = std::make_shared<System::VsanmgrItems::VsanItems>();
        }
        return vsan_items;
    }

    if(child_yang_name == "bdvsancfg-items")
    {
        if(bdvsancfg_items == nullptr)
        {
            bdvsancfg_items = std::make_shared<System::VsanmgrItems::BdvsancfgItems>();
        }
        return bdvsancfg_items;
    }

    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::VsanmgrItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vsan_items != nullptr)
    {
        _children["vsan-items"] = vsan_items;
    }

    if(bdvsancfg_items != nullptr)
    {
        _children["bdvsancfg-items"] = bdvsancfg_items;
    }

    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::VsanmgrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::VsanmgrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::VsanmgrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsan-items" || name == "bdvsancfg-items" || name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanItems()
    :
    vsan_list(this, {"encap"})
{

    yang_name = "vsan-items"; yang_parent_name = "vsanmgr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::VsanItems::~VsanItems()
{
}

bool System::VsanmgrItems::VsanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vsan_list.len(); index++)
    {
        if(vsan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VsanmgrItems::VsanItems::has_operation() const
{
    for (std::size_t index=0; index<vsan_list.len(); index++)
    {
        if(vsan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VsanmgrItems::VsanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vsanmgr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::VsanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::VsanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vsan-list")
    {
        auto ent_ = std::make_shared<System::VsanmgrItems::VsanItems::VsanList>();
        ent_->parent = this;
        vsan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::VsanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vsan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VsanmgrItems::VsanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VsanmgrItems::VsanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VsanmgrItems::VsanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vsan-list")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanList::VsanList()
    :
    encap{YType::str, "encap"},
    id{YType::uint32, "id"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    lbtype{YType::enumeration, "lbType"},
    vsanname{YType::str, "vsanName"},
    interop{YType::uint16, "interop"},
    name{YType::str, "name"}
        ,
    rtbdvsanmap_items(std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems>())
    , rsvsanifmap_items(std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems>())
    , rsvsanpathatt_items(std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems>())
{
    rtbdvsanmap_items->parent = this;
    rsvsanifmap_items->parent = this;
    rsvsanpathatt_items->parent = this;

    yang_name = "Vsan-list"; yang_parent_name = "vsan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::VsanItems::VsanList::~VsanList()
{
}

bool System::VsanmgrItems::VsanItems::VsanList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| id.is_set
	|| adminst.is_set
	|| operst.is_set
	|| lbtype.is_set
	|| vsanname.is_set
	|| interop.is_set
	|| name.is_set
	|| (rtbdvsanmap_items !=  nullptr && rtbdvsanmap_items->has_data())
	|| (rsvsanifmap_items !=  nullptr && rsvsanifmap_items->has_data())
	|| (rsvsanpathatt_items !=  nullptr && rsvsanpathatt_items->has_data());
}

bool System::VsanmgrItems::VsanItems::VsanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(lbtype.yfilter)
	|| ydk::is_set(vsanname.yfilter)
	|| ydk::is_set(interop.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rtbdvsanmap_items !=  nullptr && rtbdvsanmap_items->has_operation())
	|| (rsvsanifmap_items !=  nullptr && rsvsanifmap_items->has_operation())
	|| (rsvsanpathatt_items !=  nullptr && rsvsanpathatt_items->has_operation());
}

std::string System::VsanmgrItems::VsanItems::VsanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vsanmgr-items/vsan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::VsanItems::VsanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vsan-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::VsanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (lbtype.is_set || is_set(lbtype.yfilter)) leaf_name_data.push_back(lbtype.get_name_leafdata());
    if (vsanname.is_set || is_set(vsanname.yfilter)) leaf_name_data.push_back(vsanname.get_name_leafdata());
    if (interop.is_set || is_set(interop.yfilter)) leaf_name_data.push_back(interop.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::VsanItems::VsanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtBdVsanMap-items")
    {
        if(rtbdvsanmap_items == nullptr)
        {
            rtbdvsanmap_items = std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems>();
        }
        return rtbdvsanmap_items;
    }

    if(child_yang_name == "rsvsanIfMap-items")
    {
        if(rsvsanifmap_items == nullptr)
        {
            rsvsanifmap_items = std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems>();
        }
        return rsvsanifmap_items;
    }

    if(child_yang_name == "rsvsanPathAtt-items")
    {
        if(rsvsanpathatt_items == nullptr)
        {
            rsvsanpathatt_items = std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems>();
        }
        return rsvsanpathatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::VsanItems::VsanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtbdvsanmap_items != nullptr)
    {
        _children["rtBdVsanMap-items"] = rtbdvsanmap_items;
    }

    if(rsvsanifmap_items != nullptr)
    {
        _children["rsvsanIfMap-items"] = rsvsanifmap_items;
    }

    if(rsvsanpathatt_items != nullptr)
    {
        _children["rsvsanPathAtt-items"] = rsvsanpathatt_items;
    }

    return _children;
}

void System::VsanmgrItems::VsanItems::VsanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbType")
    {
        lbtype = value;
        lbtype.value_namespace = name_space;
        lbtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vsanName")
    {
        vsanname = value;
        vsanname.value_namespace = name_space;
        vsanname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interop")
    {
        interop = value;
        interop.value_namespace = name_space;
        interop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::VsanmgrItems::VsanItems::VsanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "lbType")
    {
        lbtype.yfilter = yfilter;
    }
    if(value_path == "vsanName")
    {
        vsanname.yfilter = yfilter;
    }
    if(value_path == "interop")
    {
        interop.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::VsanmgrItems::VsanItems::VsanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtBdVsanMap-items" || name == "rsvsanIfMap-items" || name == "rsvsanPathAtt-items" || name == "encap" || name == "id" || name == "adminSt" || name == "operSt" || name == "lbType" || name == "vsanName" || name == "interop" || name == "name")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::RtBdVsanMapItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtBdVsanMap-items"; yang_parent_name = "Vsan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::~RtBdVsanMapItems()
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtBdVsanMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsvsanIfMapItems()
    :
    rsvsanifmap_list(this, {"tdn"})
{

    yang_name = "rsvsanIfMap-items"; yang_parent_name = "Vsan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::~RsvsanIfMapItems()
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvsanifmap_list.len(); index++)
    {
        if(rsvsanifmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::has_operation() const
{
    for (std::size_t index=0; index<rsvsanifmap_list.len(); index++)
    {
        if(rsvsanifmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvsanIfMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsVsanIfMap-list")
    {
        auto ent_ = std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList>();
        ent_->parent = this;
        rsvsanifmap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvsanifmap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsVsanIfMap-list")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::RsVsanIfMapList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "RsVsanIfMap-list"; yang_parent_name = "rsvsanIfMap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::~RsVsanIfMapList()
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsVsanIfMap-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
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

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsvsanPathAttItems()
    :
    rsvsanpathatt_list(this, {"tdn"})
{

    yang_name = "rsvsanPathAtt-items"; yang_parent_name = "Vsan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::~RsvsanPathAttItems()
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvsanpathatt_list.len(); index++)
    {
        if(rsvsanpathatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsvsanpathatt_list.len(); index++)
    {
        if(rsvsanpathatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvsanPathAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsVsanPathAtt-list")
    {
        auto ent_ = std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList>();
        ent_->parent = this;
        rsvsanpathatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvsanpathatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsVsanPathAtt-list")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::RsVsanPathAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"},
    type{YType::enumeration, "type"}
{

    yang_name = "RsVsanPathAtt-list"; yang_parent_name = "rsvsanPathAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::~RsVsanPathAttList()
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set
	|| type.is_set;
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsVsanPathAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
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
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve" || name == "type")
        return true;
    return false;
}

System::VsanmgrItems::BdvsancfgItems::BdvsancfgItems()
    :
    vlanid{YType::uint32, "vlanId"},
    createflag{YType::enumeration, "createFlag"},
    name{YType::str, "name"}
{

    yang_name = "bdvsancfg-items"; yang_parent_name = "vsanmgr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::BdvsancfgItems::~BdvsancfgItems()
{
}

bool System::VsanmgrItems::BdvsancfgItems::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| createflag.is_set
	|| name.is_set;
}

bool System::VsanmgrItems::BdvsancfgItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(createflag.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::VsanmgrItems::BdvsancfgItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vsanmgr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::BdvsancfgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdvsancfg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::BdvsancfgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (createflag.is_set || is_set(createflag.yfilter)) leaf_name_data.push_back(createflag.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::BdvsancfgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::BdvsancfgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VsanmgrItems::BdvsancfgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanId")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createFlag")
    {
        createflag = value;
        createflag.value_namespace = name_space;
        createflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::VsanmgrItems::BdvsancfgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanId")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "createFlag")
    {
        createflag.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::VsanmgrItems::BdvsancfgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanId" || name == "createFlag" || name == "name")
        return true;
    return false;
}

System::VsanmgrItems::InstItems::InstItems()
    :
    numconfiguredvsan{YType::uint32, "numConfiguredVsan"},
    numcreatedvsan{YType::uint32, "numCreatedVsan"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    vsanmbr_items(std::make_shared<System::VsanmgrItems::InstItems::VsanmbrItems>())
{
    vsanmbr_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "vsanmgr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::InstItems::~InstItems()
{
}

bool System::VsanmgrItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return numconfiguredvsan.is_set
	|| numcreatedvsan.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (vsanmbr_items !=  nullptr && vsanmbr_items->has_data());
}

bool System::VsanmgrItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(numconfiguredvsan.yfilter)
	|| ydk::is_set(numcreatedvsan.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (vsanmbr_items !=  nullptr && vsanmbr_items->has_operation());
}

std::string System::VsanmgrItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vsanmgr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (numconfiguredvsan.is_set || is_set(numconfiguredvsan.yfilter)) leaf_name_data.push_back(numconfiguredvsan.get_name_leafdata());
    if (numcreatedvsan.is_set || is_set(numcreatedvsan.yfilter)) leaf_name_data.push_back(numcreatedvsan.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsanmbr-items")
    {
        if(vsanmbr_items == nullptr)
        {
            vsanmbr_items = std::make_shared<System::VsanmgrItems::InstItems::VsanmbrItems>();
        }
        return vsanmbr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vsanmbr_items != nullptr)
    {
        _children["vsanmbr-items"] = vsanmbr_items;
    }

    return _children;
}

void System::VsanmgrItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "numConfiguredVsan")
    {
        numconfiguredvsan = value;
        numconfiguredvsan.value_namespace = name_space;
        numconfiguredvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numCreatedVsan")
    {
        numcreatedvsan = value;
        numcreatedvsan.value_namespace = name_space;
        numcreatedvsan.value_namespace_prefix = name_space_prefix;
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
}

void System::VsanmgrItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "numConfiguredVsan")
    {
        numconfiguredvsan.yfilter = yfilter;
    }
    if(value_path == "numCreatedVsan")
    {
        numcreatedvsan.yfilter = yfilter;
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
}

bool System::VsanmgrItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsanmbr-items" || name == "numConfiguredVsan" || name == "numCreatedVsan" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::VsanmgrItems::InstItems::VsanmbrItems::VsanmbrItems()
    :
    vsanmbrif_list(this, {"id"})
{

    yang_name = "vsanmbr-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::InstItems::VsanmbrItems::~VsanmbrItems()
{
}

bool System::VsanmgrItems::InstItems::VsanmbrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vsanmbrif_list.len(); index++)
    {
        if(vsanmbrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VsanmgrItems::InstItems::VsanmbrItems::has_operation() const
{
    for (std::size_t index=0; index<vsanmbrif_list.len(); index++)
    {
        if(vsanmbrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VsanmgrItems::InstItems::VsanmbrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vsanmgr-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::InstItems::VsanmbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsanmbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::InstItems::VsanmbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::InstItems::VsanmbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VsanMbrIf-list")
    {
        auto ent_ = std::make_shared<System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList>();
        ent_->parent = this;
        vsanmbrif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::InstItems::VsanmbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vsanmbrif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VsanmgrItems::InstItems::VsanmbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VsanmgrItems::InstItems::VsanmbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VsanmgrItems::InstItems::VsanmbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VsanMbrIf-list")
        return true;
    return false;
}

System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::VsanMbrIfList()
    :
    id{YType::str, "id"},
    staticvsan{YType::uint32, "staticVsan"},
    allowedvsanbmp{YType::str, "allowedVsanBmp"},
    name{YType::str, "name"}
{

    yang_name = "VsanMbrIf-list"; yang_parent_name = "vsanmbr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::~VsanMbrIfList()
{
}

bool System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| staticvsan.is_set
	|| allowedvsanbmp.is_set
	|| name.is_set;
}

bool System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(staticvsan.yfilter)
	|| ydk::is_set(allowedvsanbmp.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vsanmgr-items/inst-items/vsanmbr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VsanMbrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (staticvsan.is_set || is_set(staticvsan.yfilter)) leaf_name_data.push_back(staticvsan.get_name_leafdata());
    if (allowedvsanbmp.is_set || is_set(allowedvsanbmp.yfilter)) leaf_name_data.push_back(allowedvsanbmp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staticVsan")
    {
        staticvsan = value;
        staticvsan.value_namespace = name_space;
        staticvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedVsanBmp")
    {
        allowedvsanbmp = value;
        allowedvsanbmp.value_namespace = name_space;
        allowedvsanbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "staticVsan")
    {
        staticvsan.yfilter = yfilter;
    }
    if(value_path == "allowedVsanBmp")
    {
        allowedvsanbmp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "staticVsan" || name == "allowedVsanBmp" || name == "name")
        return true;
    return false;
}

System::FmItems::FmItems()
    :
    mplsstatic_items(std::make_shared<System::FmItems::MplsstaticItems>())
    , mplsoam_items(std::make_shared<System::FmItems::MplsoamItems>())
    , srte_items(std::make_shared<System::FmItems::SrteItems>())
    , mplssgmntrtg_items(std::make_shared<System::FmItems::MplssgmntrtgItems>())
    , mplsldp_items(std::make_shared<System::FmItems::MplsldpItems>())
    , mplsl3vpn_items(std::make_shared<System::FmItems::Mplsl3vpnItems>())
    , mplsevpn_items(std::make_shared<System::FmItems::MplsevpnItems>())
    , bgp_items(std::make_shared<System::FmItems::BgpItems>())
    , hmm_items(std::make_shared<System::FmItems::HmmItems>())
    , evpn_items(std::make_shared<System::FmItems::EvpnItems>())
    , ngoam_items(std::make_shared<System::FmItems::NgoamItems>())
    , poe_items(std::make_shared<System::FmItems::PoeItems>())
    , msdp_items(std::make_shared<System::FmItems::MsdpItems>())
    , dhcp_items(std::make_shared<System::FmItems::DhcpItems>())
    , ifvlan_items(std::make_shared<System::FmItems::IfvlanItems>())
    , bashshell_items(std::make_shared<System::FmItems::BashshellItems>())
    , scpserver_items(std::make_shared<System::FmItems::ScpserverItems>())
    , lldp_items(std::make_shared<System::FmItems::LldpItems>())
    , lacp_items(std::make_shared<System::FmItems::LacpItems>())
    , nxapi_items(std::make_shared<System::FmItems::NxapiItems>())
    , telnet_items(std::make_shared<System::FmItems::TelnetItems>())
    , nxdb_items(std::make_shared<System::FmItems::NxdbItems>())
    , vnsegment_items(std::make_shared<System::FmItems::VnsegmentItems>())
    , tacacsplus_items(std::make_shared<System::FmItems::TacacsplusItems>())
    , udld_items(std::make_shared<System::FmItems::UdldItems>())
    , nat_items(std::make_shared<System::FmItems::NatItems>())
    , vrrpv3_items(std::make_shared<System::FmItems::Vrrpv3Items>())
    , vrrp_items(std::make_shared<System::FmItems::VrrpItems>())
    , hsrp_items(std::make_shared<System::FmItems::HsrpItems>())
    , netflow_items(std::make_shared<System::FmItems::NetflowItems>())
    , analytics_items(std::make_shared<System::FmItems::AnalyticsItems>())
    , bfd_items(std::make_shared<System::FmItems::BfdItems>())
    , tunnelif_items(std::make_shared<System::FmItems::TunnelifItems>())
    , nvo_items(std::make_shared<System::FmItems::NvoItems>())
    , pbr_items(std::make_shared<System::FmItems::PbrItems>())
    , pim_items(std::make_shared<System::FmItems::PimItems>())
    , ngmvpn_items(std::make_shared<System::FmItems::NgmvpnItems>())
    , vpc_items(std::make_shared<System::FmItems::VpcItems>())
    , vtp_items(std::make_shared<System::FmItems::VtpItems>())
    , pvlan_items(std::make_shared<System::FmItems::PvlanItems>())
    , ntpd_items(std::make_shared<System::FmItems::NtpdItems>())
    , telemetry_items(std::make_shared<System::FmItems::TelemetryItems>())
    , ospf_items(std::make_shared<System::FmItems::OspfItems>())
    , vctrl_items(std::make_shared<System::FmItems::VctrlItems>())
    , macsec_items(std::make_shared<System::FmItems::MacsecItems>())
    , npiv_items(std::make_shared<System::FmItems::NpivItems>())
    , pim6_items(std::make_shared<System::FmItems::Pim6Items>())
    , isis_items(std::make_shared<System::FmItems::IsisItems>())
    , hwtelemetry_items(std::make_shared<System::FmItems::HwtelemetryItems>())
    , portsec_items(std::make_shared<System::FmItems::PortsecItems>())
    , flexlink_items(std::make_shared<System::FmItems::FlexlinkItems>())
{
    mplsstatic_items->parent = this;
    mplsoam_items->parent = this;
    srte_items->parent = this;
    mplssgmntrtg_items->parent = this;
    mplsldp_items->parent = this;
    mplsl3vpn_items->parent = this;
    mplsevpn_items->parent = this;
    bgp_items->parent = this;
    hmm_items->parent = this;
    evpn_items->parent = this;
    ngoam_items->parent = this;
    poe_items->parent = this;
    msdp_items->parent = this;
    dhcp_items->parent = this;
    ifvlan_items->parent = this;
    bashshell_items->parent = this;
    scpserver_items->parent = this;
    lldp_items->parent = this;
    lacp_items->parent = this;
    nxapi_items->parent = this;
    telnet_items->parent = this;
    nxdb_items->parent = this;
    vnsegment_items->parent = this;
    tacacsplus_items->parent = this;
    udld_items->parent = this;
    nat_items->parent = this;
    vrrpv3_items->parent = this;
    vrrp_items->parent = this;
    hsrp_items->parent = this;
    netflow_items->parent = this;
    analytics_items->parent = this;
    bfd_items->parent = this;
    tunnelif_items->parent = this;
    nvo_items->parent = this;
    pbr_items->parent = this;
    pim_items->parent = this;
    ngmvpn_items->parent = this;
    vpc_items->parent = this;
    vtp_items->parent = this;
    pvlan_items->parent = this;
    ntpd_items->parent = this;
    telemetry_items->parent = this;
    ospf_items->parent = this;
    vctrl_items->parent = this;
    macsec_items->parent = this;
    npiv_items->parent = this;
    pim6_items->parent = this;
    isis_items->parent = this;
    hwtelemetry_items->parent = this;
    portsec_items->parent = this;
    flexlink_items->parent = this;

    yang_name = "fm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::~FmItems()
{
}

bool System::FmItems::has_data() const
{
    if (is_presence_container) return true;
    return (mplsstatic_items !=  nullptr && mplsstatic_items->has_data())
	|| (mplsoam_items !=  nullptr && mplsoam_items->has_data())
	|| (srte_items !=  nullptr && srte_items->has_data())
	|| (mplssgmntrtg_items !=  nullptr && mplssgmntrtg_items->has_data())
	|| (mplsldp_items !=  nullptr && mplsldp_items->has_data())
	|| (mplsl3vpn_items !=  nullptr && mplsl3vpn_items->has_data())
	|| (mplsevpn_items !=  nullptr && mplsevpn_items->has_data())
	|| (bgp_items !=  nullptr && bgp_items->has_data())
	|| (hmm_items !=  nullptr && hmm_items->has_data())
	|| (evpn_items !=  nullptr && evpn_items->has_data())
	|| (ngoam_items !=  nullptr && ngoam_items->has_data())
	|| (poe_items !=  nullptr && poe_items->has_data())
	|| (msdp_items !=  nullptr && msdp_items->has_data())
	|| (dhcp_items !=  nullptr && dhcp_items->has_data())
	|| (ifvlan_items !=  nullptr && ifvlan_items->has_data())
	|| (bashshell_items !=  nullptr && bashshell_items->has_data())
	|| (scpserver_items !=  nullptr && scpserver_items->has_data())
	|| (lldp_items !=  nullptr && lldp_items->has_data())
	|| (lacp_items !=  nullptr && lacp_items->has_data())
	|| (nxapi_items !=  nullptr && nxapi_items->has_data())
	|| (telnet_items !=  nullptr && telnet_items->has_data())
	|| (nxdb_items !=  nullptr && nxdb_items->has_data())
	|| (vnsegment_items !=  nullptr && vnsegment_items->has_data())
	|| (tacacsplus_items !=  nullptr && tacacsplus_items->has_data())
	|| (udld_items !=  nullptr && udld_items->has_data())
	|| (nat_items !=  nullptr && nat_items->has_data())
	|| (vrrpv3_items !=  nullptr && vrrpv3_items->has_data())
	|| (vrrp_items !=  nullptr && vrrp_items->has_data())
	|| (hsrp_items !=  nullptr && hsrp_items->has_data())
	|| (netflow_items !=  nullptr && netflow_items->has_data())
	|| (analytics_items !=  nullptr && analytics_items->has_data())
	|| (bfd_items !=  nullptr && bfd_items->has_data())
	|| (tunnelif_items !=  nullptr && tunnelif_items->has_data())
	|| (nvo_items !=  nullptr && nvo_items->has_data())
	|| (pbr_items !=  nullptr && pbr_items->has_data())
	|| (pim_items !=  nullptr && pim_items->has_data())
	|| (ngmvpn_items !=  nullptr && ngmvpn_items->has_data())
	|| (vpc_items !=  nullptr && vpc_items->has_data())
	|| (vtp_items !=  nullptr && vtp_items->has_data())
	|| (pvlan_items !=  nullptr && pvlan_items->has_data())
	|| (ntpd_items !=  nullptr && ntpd_items->has_data())
	|| (telemetry_items !=  nullptr && telemetry_items->has_data())
	|| (ospf_items !=  nullptr && ospf_items->has_data())
	|| (vctrl_items !=  nullptr && vctrl_items->has_data())
	|| (macsec_items !=  nullptr && macsec_items->has_data())
	|| (npiv_items !=  nullptr && npiv_items->has_data())
	|| (pim6_items !=  nullptr && pim6_items->has_data())
	|| (isis_items !=  nullptr && isis_items->has_data())
	|| (hwtelemetry_items !=  nullptr && hwtelemetry_items->has_data())
	|| (portsec_items !=  nullptr && portsec_items->has_data())
	|| (flexlink_items !=  nullptr && flexlink_items->has_data());
}

bool System::FmItems::has_operation() const
{
    return is_set(yfilter)
	|| (mplsstatic_items !=  nullptr && mplsstatic_items->has_operation())
	|| (mplsoam_items !=  nullptr && mplsoam_items->has_operation())
	|| (srte_items !=  nullptr && srte_items->has_operation())
	|| (mplssgmntrtg_items !=  nullptr && mplssgmntrtg_items->has_operation())
	|| (mplsldp_items !=  nullptr && mplsldp_items->has_operation())
	|| (mplsl3vpn_items !=  nullptr && mplsl3vpn_items->has_operation())
	|| (mplsevpn_items !=  nullptr && mplsevpn_items->has_operation())
	|| (bgp_items !=  nullptr && bgp_items->has_operation())
	|| (hmm_items !=  nullptr && hmm_items->has_operation())
	|| (evpn_items !=  nullptr && evpn_items->has_operation())
	|| (ngoam_items !=  nullptr && ngoam_items->has_operation())
	|| (poe_items !=  nullptr && poe_items->has_operation())
	|| (msdp_items !=  nullptr && msdp_items->has_operation())
	|| (dhcp_items !=  nullptr && dhcp_items->has_operation())
	|| (ifvlan_items !=  nullptr && ifvlan_items->has_operation())
	|| (bashshell_items !=  nullptr && bashshell_items->has_operation())
	|| (scpserver_items !=  nullptr && scpserver_items->has_operation())
	|| (lldp_items !=  nullptr && lldp_items->has_operation())
	|| (lacp_items !=  nullptr && lacp_items->has_operation())
	|| (nxapi_items !=  nullptr && nxapi_items->has_operation())
	|| (telnet_items !=  nullptr && telnet_items->has_operation())
	|| (nxdb_items !=  nullptr && nxdb_items->has_operation())
	|| (vnsegment_items !=  nullptr && vnsegment_items->has_operation())
	|| (tacacsplus_items !=  nullptr && tacacsplus_items->has_operation())
	|| (udld_items !=  nullptr && udld_items->has_operation())
	|| (nat_items !=  nullptr && nat_items->has_operation())
	|| (vrrpv3_items !=  nullptr && vrrpv3_items->has_operation())
	|| (vrrp_items !=  nullptr && vrrp_items->has_operation())
	|| (hsrp_items !=  nullptr && hsrp_items->has_operation())
	|| (netflow_items !=  nullptr && netflow_items->has_operation())
	|| (analytics_items !=  nullptr && analytics_items->has_operation())
	|| (bfd_items !=  nullptr && bfd_items->has_operation())
	|| (tunnelif_items !=  nullptr && tunnelif_items->has_operation())
	|| (nvo_items !=  nullptr && nvo_items->has_operation())
	|| (pbr_items !=  nullptr && pbr_items->has_operation())
	|| (pim_items !=  nullptr && pim_items->has_operation())
	|| (ngmvpn_items !=  nullptr && ngmvpn_items->has_operation())
	|| (vpc_items !=  nullptr && vpc_items->has_operation())
	|| (vtp_items !=  nullptr && vtp_items->has_operation())
	|| (pvlan_items !=  nullptr && pvlan_items->has_operation())
	|| (ntpd_items !=  nullptr && ntpd_items->has_operation())
	|| (telemetry_items !=  nullptr && telemetry_items->has_operation())
	|| (ospf_items !=  nullptr && ospf_items->has_operation())
	|| (vctrl_items !=  nullptr && vctrl_items->has_operation())
	|| (macsec_items !=  nullptr && macsec_items->has_operation())
	|| (npiv_items !=  nullptr && npiv_items->has_operation())
	|| (pim6_items !=  nullptr && pim6_items->has_operation())
	|| (isis_items !=  nullptr && isis_items->has_operation())
	|| (hwtelemetry_items !=  nullptr && hwtelemetry_items->has_operation())
	|| (portsec_items !=  nullptr && portsec_items->has_operation())
	|| (flexlink_items !=  nullptr && flexlink_items->has_operation());
}

std::string System::FmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsstatic-items")
    {
        if(mplsstatic_items == nullptr)
        {
            mplsstatic_items = std::make_shared<System::FmItems::MplsstaticItems>();
        }
        return mplsstatic_items;
    }

    if(child_yang_name == "mplsoam-items")
    {
        if(mplsoam_items == nullptr)
        {
            mplsoam_items = std::make_shared<System::FmItems::MplsoamItems>();
        }
        return mplsoam_items;
    }

    if(child_yang_name == "srte-items")
    {
        if(srte_items == nullptr)
        {
            srte_items = std::make_shared<System::FmItems::SrteItems>();
        }
        return srte_items;
    }

    if(child_yang_name == "mplssgmntrtg-items")
    {
        if(mplssgmntrtg_items == nullptr)
        {
            mplssgmntrtg_items = std::make_shared<System::FmItems::MplssgmntrtgItems>();
        }
        return mplssgmntrtg_items;
    }

    if(child_yang_name == "mplsldp-items")
    {
        if(mplsldp_items == nullptr)
        {
            mplsldp_items = std::make_shared<System::FmItems::MplsldpItems>();
        }
        return mplsldp_items;
    }

    if(child_yang_name == "mplsl3vpn-items")
    {
        if(mplsl3vpn_items == nullptr)
        {
            mplsl3vpn_items = std::make_shared<System::FmItems::Mplsl3vpnItems>();
        }
        return mplsl3vpn_items;
    }

    if(child_yang_name == "mplsevpn-items")
    {
        if(mplsevpn_items == nullptr)
        {
            mplsevpn_items = std::make_shared<System::FmItems::MplsevpnItems>();
        }
        return mplsevpn_items;
    }

    if(child_yang_name == "bgp-items")
    {
        if(bgp_items == nullptr)
        {
            bgp_items = std::make_shared<System::FmItems::BgpItems>();
        }
        return bgp_items;
    }

    if(child_yang_name == "hmm-items")
    {
        if(hmm_items == nullptr)
        {
            hmm_items = std::make_shared<System::FmItems::HmmItems>();
        }
        return hmm_items;
    }

    if(child_yang_name == "evpn-items")
    {
        if(evpn_items == nullptr)
        {
            evpn_items = std::make_shared<System::FmItems::EvpnItems>();
        }
        return evpn_items;
    }

    if(child_yang_name == "ngoam-items")
    {
        if(ngoam_items == nullptr)
        {
            ngoam_items = std::make_shared<System::FmItems::NgoamItems>();
        }
        return ngoam_items;
    }

    if(child_yang_name == "poe-items")
    {
        if(poe_items == nullptr)
        {
            poe_items = std::make_shared<System::FmItems::PoeItems>();
        }
        return poe_items;
    }

    if(child_yang_name == "msdp-items")
    {
        if(msdp_items == nullptr)
        {
            msdp_items = std::make_shared<System::FmItems::MsdpItems>();
        }
        return msdp_items;
    }

    if(child_yang_name == "dhcp-items")
    {
        if(dhcp_items == nullptr)
        {
            dhcp_items = std::make_shared<System::FmItems::DhcpItems>();
        }
        return dhcp_items;
    }

    if(child_yang_name == "ifvlan-items")
    {
        if(ifvlan_items == nullptr)
        {
            ifvlan_items = std::make_shared<System::FmItems::IfvlanItems>();
        }
        return ifvlan_items;
    }

    if(child_yang_name == "bashshell-items")
    {
        if(bashshell_items == nullptr)
        {
            bashshell_items = std::make_shared<System::FmItems::BashshellItems>();
        }
        return bashshell_items;
    }

    if(child_yang_name == "scpserver-items")
    {
        if(scpserver_items == nullptr)
        {
            scpserver_items = std::make_shared<System::FmItems::ScpserverItems>();
        }
        return scpserver_items;
    }

    if(child_yang_name == "lldp-items")
    {
        if(lldp_items == nullptr)
        {
            lldp_items = std::make_shared<System::FmItems::LldpItems>();
        }
        return lldp_items;
    }

    if(child_yang_name == "lacp-items")
    {
        if(lacp_items == nullptr)
        {
            lacp_items = std::make_shared<System::FmItems::LacpItems>();
        }
        return lacp_items;
    }

    if(child_yang_name == "nxapi-items")
    {
        if(nxapi_items == nullptr)
        {
            nxapi_items = std::make_shared<System::FmItems::NxapiItems>();
        }
        return nxapi_items;
    }

    if(child_yang_name == "telnet-items")
    {
        if(telnet_items == nullptr)
        {
            telnet_items = std::make_shared<System::FmItems::TelnetItems>();
        }
        return telnet_items;
    }

    if(child_yang_name == "nxdb-items")
    {
        if(nxdb_items == nullptr)
        {
            nxdb_items = std::make_shared<System::FmItems::NxdbItems>();
        }
        return nxdb_items;
    }

    if(child_yang_name == "vnsegment-items")
    {
        if(vnsegment_items == nullptr)
        {
            vnsegment_items = std::make_shared<System::FmItems::VnsegmentItems>();
        }
        return vnsegment_items;
    }

    if(child_yang_name == "tacacsplus-items")
    {
        if(tacacsplus_items == nullptr)
        {
            tacacsplus_items = std::make_shared<System::FmItems::TacacsplusItems>();
        }
        return tacacsplus_items;
    }

    if(child_yang_name == "udld-items")
    {
        if(udld_items == nullptr)
        {
            udld_items = std::make_shared<System::FmItems::UdldItems>();
        }
        return udld_items;
    }

    if(child_yang_name == "nat-items")
    {
        if(nat_items == nullptr)
        {
            nat_items = std::make_shared<System::FmItems::NatItems>();
        }
        return nat_items;
    }

    if(child_yang_name == "vrrpv3-items")
    {
        if(vrrpv3_items == nullptr)
        {
            vrrpv3_items = std::make_shared<System::FmItems::Vrrpv3Items>();
        }
        return vrrpv3_items;
    }

    if(child_yang_name == "vrrp-items")
    {
        if(vrrp_items == nullptr)
        {
            vrrp_items = std::make_shared<System::FmItems::VrrpItems>();
        }
        return vrrp_items;
    }

    if(child_yang_name == "hsrp-items")
    {
        if(hsrp_items == nullptr)
        {
            hsrp_items = std::make_shared<System::FmItems::HsrpItems>();
        }
        return hsrp_items;
    }

    if(child_yang_name == "netflow-items")
    {
        if(netflow_items == nullptr)
        {
            netflow_items = std::make_shared<System::FmItems::NetflowItems>();
        }
        return netflow_items;
    }

    if(child_yang_name == "analytics-items")
    {
        if(analytics_items == nullptr)
        {
            analytics_items = std::make_shared<System::FmItems::AnalyticsItems>();
        }
        return analytics_items;
    }

    if(child_yang_name == "bfd-items")
    {
        if(bfd_items == nullptr)
        {
            bfd_items = std::make_shared<System::FmItems::BfdItems>();
        }
        return bfd_items;
    }

    if(child_yang_name == "tunnelif-items")
    {
        if(tunnelif_items == nullptr)
        {
            tunnelif_items = std::make_shared<System::FmItems::TunnelifItems>();
        }
        return tunnelif_items;
    }

    if(child_yang_name == "nvo-items")
    {
        if(nvo_items == nullptr)
        {
            nvo_items = std::make_shared<System::FmItems::NvoItems>();
        }
        return nvo_items;
    }

    if(child_yang_name == "pbr-items")
    {
        if(pbr_items == nullptr)
        {
            pbr_items = std::make_shared<System::FmItems::PbrItems>();
        }
        return pbr_items;
    }

    if(child_yang_name == "pim-items")
    {
        if(pim_items == nullptr)
        {
            pim_items = std::make_shared<System::FmItems::PimItems>();
        }
        return pim_items;
    }

    if(child_yang_name == "ngmvpn-items")
    {
        if(ngmvpn_items == nullptr)
        {
            ngmvpn_items = std::make_shared<System::FmItems::NgmvpnItems>();
        }
        return ngmvpn_items;
    }

    if(child_yang_name == "vpc-items")
    {
        if(vpc_items == nullptr)
        {
            vpc_items = std::make_shared<System::FmItems::VpcItems>();
        }
        return vpc_items;
    }

    if(child_yang_name == "vtp-items")
    {
        if(vtp_items == nullptr)
        {
            vtp_items = std::make_shared<System::FmItems::VtpItems>();
        }
        return vtp_items;
    }

    if(child_yang_name == "pvlan-items")
    {
        if(pvlan_items == nullptr)
        {
            pvlan_items = std::make_shared<System::FmItems::PvlanItems>();
        }
        return pvlan_items;
    }

    if(child_yang_name == "ntpd-items")
    {
        if(ntpd_items == nullptr)
        {
            ntpd_items = std::make_shared<System::FmItems::NtpdItems>();
        }
        return ntpd_items;
    }

    if(child_yang_name == "telemetry-items")
    {
        if(telemetry_items == nullptr)
        {
            telemetry_items = std::make_shared<System::FmItems::TelemetryItems>();
        }
        return telemetry_items;
    }

    if(child_yang_name == "ospf-items")
    {
        if(ospf_items == nullptr)
        {
            ospf_items = std::make_shared<System::FmItems::OspfItems>();
        }
        return ospf_items;
    }

    if(child_yang_name == "vctrl-items")
    {
        if(vctrl_items == nullptr)
        {
            vctrl_items = std::make_shared<System::FmItems::VctrlItems>();
        }
        return vctrl_items;
    }

    if(child_yang_name == "macsec-items")
    {
        if(macsec_items == nullptr)
        {
            macsec_items = std::make_shared<System::FmItems::MacsecItems>();
        }
        return macsec_items;
    }

    if(child_yang_name == "npiv-items")
    {
        if(npiv_items == nullptr)
        {
            npiv_items = std::make_shared<System::FmItems::NpivItems>();
        }
        return npiv_items;
    }

    if(child_yang_name == "pim6-items")
    {
        if(pim6_items == nullptr)
        {
            pim6_items = std::make_shared<System::FmItems::Pim6Items>();
        }
        return pim6_items;
    }

    if(child_yang_name == "isis-items")
    {
        if(isis_items == nullptr)
        {
            isis_items = std::make_shared<System::FmItems::IsisItems>();
        }
        return isis_items;
    }

    if(child_yang_name == "hwtelemetry-items")
    {
        if(hwtelemetry_items == nullptr)
        {
            hwtelemetry_items = std::make_shared<System::FmItems::HwtelemetryItems>();
        }
        return hwtelemetry_items;
    }

    if(child_yang_name == "portsec-items")
    {
        if(portsec_items == nullptr)
        {
            portsec_items = std::make_shared<System::FmItems::PortsecItems>();
        }
        return portsec_items;
    }

    if(child_yang_name == "flexlink-items")
    {
        if(flexlink_items == nullptr)
        {
            flexlink_items = std::make_shared<System::FmItems::FlexlinkItems>();
        }
        return flexlink_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mplsstatic_items != nullptr)
    {
        _children["mplsstatic-items"] = mplsstatic_items;
    }

    if(mplsoam_items != nullptr)
    {
        _children["mplsoam-items"] = mplsoam_items;
    }

    if(srte_items != nullptr)
    {
        _children["srte-items"] = srte_items;
    }

    if(mplssgmntrtg_items != nullptr)
    {
        _children["mplssgmntrtg-items"] = mplssgmntrtg_items;
    }

    if(mplsldp_items != nullptr)
    {
        _children["mplsldp-items"] = mplsldp_items;
    }

    if(mplsl3vpn_items != nullptr)
    {
        _children["mplsl3vpn-items"] = mplsl3vpn_items;
    }

    if(mplsevpn_items != nullptr)
    {
        _children["mplsevpn-items"] = mplsevpn_items;
    }

    if(bgp_items != nullptr)
    {
        _children["bgp-items"] = bgp_items;
    }

    if(hmm_items != nullptr)
    {
        _children["hmm-items"] = hmm_items;
    }

    if(evpn_items != nullptr)
    {
        _children["evpn-items"] = evpn_items;
    }

    if(ngoam_items != nullptr)
    {
        _children["ngoam-items"] = ngoam_items;
    }

    if(poe_items != nullptr)
    {
        _children["poe-items"] = poe_items;
    }

    if(msdp_items != nullptr)
    {
        _children["msdp-items"] = msdp_items;
    }

    if(dhcp_items != nullptr)
    {
        _children["dhcp-items"] = dhcp_items;
    }

    if(ifvlan_items != nullptr)
    {
        _children["ifvlan-items"] = ifvlan_items;
    }

    if(bashshell_items != nullptr)
    {
        _children["bashshell-items"] = bashshell_items;
    }

    if(scpserver_items != nullptr)
    {
        _children["scpserver-items"] = scpserver_items;
    }

    if(lldp_items != nullptr)
    {
        _children["lldp-items"] = lldp_items;
    }

    if(lacp_items != nullptr)
    {
        _children["lacp-items"] = lacp_items;
    }

    if(nxapi_items != nullptr)
    {
        _children["nxapi-items"] = nxapi_items;
    }

    if(telnet_items != nullptr)
    {
        _children["telnet-items"] = telnet_items;
    }

    if(nxdb_items != nullptr)
    {
        _children["nxdb-items"] = nxdb_items;
    }

    if(vnsegment_items != nullptr)
    {
        _children["vnsegment-items"] = vnsegment_items;
    }

    if(tacacsplus_items != nullptr)
    {
        _children["tacacsplus-items"] = tacacsplus_items;
    }

    if(udld_items != nullptr)
    {
        _children["udld-items"] = udld_items;
    }

    if(nat_items != nullptr)
    {
        _children["nat-items"] = nat_items;
    }

    if(vrrpv3_items != nullptr)
    {
        _children["vrrpv3-items"] = vrrpv3_items;
    }

    if(vrrp_items != nullptr)
    {
        _children["vrrp-items"] = vrrp_items;
    }

    if(hsrp_items != nullptr)
    {
        _children["hsrp-items"] = hsrp_items;
    }

    if(netflow_items != nullptr)
    {
        _children["netflow-items"] = netflow_items;
    }

    if(analytics_items != nullptr)
    {
        _children["analytics-items"] = analytics_items;
    }

    if(bfd_items != nullptr)
    {
        _children["bfd-items"] = bfd_items;
    }

    if(tunnelif_items != nullptr)
    {
        _children["tunnelif-items"] = tunnelif_items;
    }

    if(nvo_items != nullptr)
    {
        _children["nvo-items"] = nvo_items;
    }

    if(pbr_items != nullptr)
    {
        _children["pbr-items"] = pbr_items;
    }

    if(pim_items != nullptr)
    {
        _children["pim-items"] = pim_items;
    }

    if(ngmvpn_items != nullptr)
    {
        _children["ngmvpn-items"] = ngmvpn_items;
    }

    if(vpc_items != nullptr)
    {
        _children["vpc-items"] = vpc_items;
    }

    if(vtp_items != nullptr)
    {
        _children["vtp-items"] = vtp_items;
    }

    if(pvlan_items != nullptr)
    {
        _children["pvlan-items"] = pvlan_items;
    }

    if(ntpd_items != nullptr)
    {
        _children["ntpd-items"] = ntpd_items;
    }

    if(telemetry_items != nullptr)
    {
        _children["telemetry-items"] = telemetry_items;
    }

    if(ospf_items != nullptr)
    {
        _children["ospf-items"] = ospf_items;
    }

    if(vctrl_items != nullptr)
    {
        _children["vctrl-items"] = vctrl_items;
    }

    if(macsec_items != nullptr)
    {
        _children["macsec-items"] = macsec_items;
    }

    if(npiv_items != nullptr)
    {
        _children["npiv-items"] = npiv_items;
    }

    if(pim6_items != nullptr)
    {
        _children["pim6-items"] = pim6_items;
    }

    if(isis_items != nullptr)
    {
        _children["isis-items"] = isis_items;
    }

    if(hwtelemetry_items != nullptr)
    {
        _children["hwtelemetry-items"] = hwtelemetry_items;
    }

    if(portsec_items != nullptr)
    {
        _children["portsec-items"] = portsec_items;
    }

    if(flexlink_items != nullptr)
    {
        _children["flexlink-items"] = flexlink_items;
    }

    return _children;
}

void System::FmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsstatic-items" || name == "mplsoam-items" || name == "srte-items" || name == "mplssgmntrtg-items" || name == "mplsldp-items" || name == "mplsl3vpn-items" || name == "mplsevpn-items" || name == "bgp-items" || name == "hmm-items" || name == "evpn-items" || name == "ngoam-items" || name == "poe-items" || name == "msdp-items" || name == "dhcp-items" || name == "ifvlan-items" || name == "bashshell-items" || name == "scpserver-items" || name == "lldp-items" || name == "lacp-items" || name == "nxapi-items" || name == "telnet-items" || name == "nxdb-items" || name == "vnsegment-items" || name == "tacacsplus-items" || name == "udld-items" || name == "nat-items" || name == "vrrpv3-items" || name == "vrrp-items" || name == "hsrp-items" || name == "netflow-items" || name == "analytics-items" || name == "bfd-items" || name == "tunnelif-items" || name == "nvo-items" || name == "pbr-items" || name == "pim-items" || name == "ngmvpn-items" || name == "vpc-items" || name == "vtp-items" || name == "pvlan-items" || name == "ntpd-items" || name == "telemetry-items" || name == "ospf-items" || name == "vctrl-items" || name == "macsec-items" || name == "npiv-items" || name == "pim6-items" || name == "isis-items" || name == "hwtelemetry-items" || name == "portsec-items" || name == "flexlink-items")
        return true;
    return false;
}

System::FmItems::MplsstaticItems::MplsstaticItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"},
    conflictingfeature{YType::str, "conflictingFeature"}
        ,
    service_items(std::make_shared<System::FmItems::MplsstaticItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "mplsstatic-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsstaticItems::~MplsstaticItems()
{
}

bool System::FmItems::MplsstaticItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| conflictingfeature.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::MplsstaticItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| ydk::is_set(conflictingfeature.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::MplsstaticItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsstaticItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsstatic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsstaticItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());
    if (conflictingfeature.is_set || is_set(conflictingfeature.yfilter)) leaf_name_data.push_back(conflictingfeature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsstaticItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::MplsstaticItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsstaticItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::MplsstaticItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature = value;
        conflictingfeature.value_namespace = name_space;
        conflictingfeature.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::MplsstaticItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature.yfilter = yfilter;
    }
}

bool System::FmItems::MplsstaticItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance" || name == "conflictingFeature")
        return true;
    return false;
}

System::FmItems::MplsstaticItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "mplsstatic-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsstaticItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::MplsstaticItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::MplsstaticItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::MplsstaticItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsstatic-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsstaticItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsstaticItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsstaticItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsstaticItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::MplsstaticItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::MplsstaticItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::MplsstaticItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsstatic-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::MplsoamItems::MplsoamItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"},
    conflictingfeature{YType::str, "conflictingFeature"}
        ,
    service_items(std::make_shared<System::FmItems::MplsoamItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "mplsoam-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsoamItems::~MplsoamItems()
{
}

bool System::FmItems::MplsoamItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| conflictingfeature.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::MplsoamItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| ydk::is_set(conflictingfeature.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::MplsoamItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsoamItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsoam-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsoamItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());
    if (conflictingfeature.is_set || is_set(conflictingfeature.yfilter)) leaf_name_data.push_back(conflictingfeature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsoamItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::MplsoamItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsoamItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::MplsoamItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature = value;
        conflictingfeature.value_namespace = name_space;
        conflictingfeature.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::MplsoamItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature.yfilter = yfilter;
    }
}

bool System::FmItems::MplsoamItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance" || name == "conflictingFeature")
        return true;
    return false;
}

System::FmItems::MplsoamItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "mplsoam-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsoamItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::MplsoamItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::MplsoamItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::MplsoamItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsoam-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsoamItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsoamItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsoamItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsoamItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::MplsoamItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::MplsoamItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::MplsoamItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsoam-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::SrteItems::SrteItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::SrteItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "srte-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SrteItems::~SrteItems()
{
}

bool System::FmItems::SrteItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::SrteItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::SrteItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SrteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SrteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SrteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::SrteItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SrteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::SrteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::SrteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::SrteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::SrteItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "srte-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SrteItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::SrteItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::SrteItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::SrteItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/srte-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SrteItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SrteItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SrteItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::SrteItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SrteItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::SrteItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::SrteItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::SrteItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/srte-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::MplssgmntrtgItems::MplssgmntrtgItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"},
    conflictingfeature{YType::str, "conflictingFeature"}
        ,
    service_items(std::make_shared<System::FmItems::MplssgmntrtgItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "mplssgmntrtg-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplssgmntrtgItems::~MplssgmntrtgItems()
{
}

bool System::FmItems::MplssgmntrtgItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| conflictingfeature.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::MplssgmntrtgItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| ydk::is_set(conflictingfeature.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::MplssgmntrtgItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplssgmntrtgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplssgmntrtg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplssgmntrtgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());
    if (conflictingfeature.is_set || is_set(conflictingfeature.yfilter)) leaf_name_data.push_back(conflictingfeature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplssgmntrtgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::MplssgmntrtgItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplssgmntrtgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::MplssgmntrtgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature = value;
        conflictingfeature.value_namespace = name_space;
        conflictingfeature.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::MplssgmntrtgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature.yfilter = yfilter;
    }
}

bool System::FmItems::MplssgmntrtgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance" || name == "conflictingFeature")
        return true;
    return false;
}

System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "mplssgmntrtg-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplssgmntrtgItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::MplssgmntrtgItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::MplssgmntrtgItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::MplssgmntrtgItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplssgmntrtg-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplssgmntrtgItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplssgmntrtgItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplssgmntrtgItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplssgmntrtgItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::MplssgmntrtgItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::MplssgmntrtgItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::MplssgmntrtgItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplssgmntrtg-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::MplsldpItems::MplsldpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"},
    conflictingfeature{YType::str, "conflictingFeature"}
        ,
    service_items(std::make_shared<System::FmItems::MplsldpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "mplsldp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsldpItems::~MplsldpItems()
{
}

bool System::FmItems::MplsldpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| conflictingfeature.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::MplsldpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| ydk::is_set(conflictingfeature.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::MplsldpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsldpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsldp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsldpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());
    if (conflictingfeature.is_set || is_set(conflictingfeature.yfilter)) leaf_name_data.push_back(conflictingfeature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsldpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::MplsldpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsldpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::MplsldpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature = value;
        conflictingfeature.value_namespace = name_space;
        conflictingfeature.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::MplsldpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature.yfilter = yfilter;
    }
}

bool System::FmItems::MplsldpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance" || name == "conflictingFeature")
        return true;
    return false;
}

System::FmItems::MplsldpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "mplsldp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsldpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::MplsldpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::MplsldpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::MplsldpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsldp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsldpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsldpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsldpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsldpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::MplsldpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::MplsldpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::MplsldpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsldp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::Mplsl3vpnItems::Mplsl3vpnItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"},
    conflictingfeature{YType::str, "conflictingFeature"}
        ,
    service_items(std::make_shared<System::FmItems::Mplsl3vpnItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "mplsl3vpn-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Mplsl3vpnItems::~Mplsl3vpnItems()
{
}

bool System::FmItems::Mplsl3vpnItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| conflictingfeature.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::Mplsl3vpnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| ydk::is_set(conflictingfeature.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::Mplsl3vpnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Mplsl3vpnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsl3vpn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Mplsl3vpnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());
    if (conflictingfeature.is_set || is_set(conflictingfeature.yfilter)) leaf_name_data.push_back(conflictingfeature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Mplsl3vpnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::Mplsl3vpnItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Mplsl3vpnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::Mplsl3vpnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature = value;
        conflictingfeature.value_namespace = name_space;
        conflictingfeature.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::Mplsl3vpnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature.yfilter = yfilter;
    }
}

bool System::FmItems::Mplsl3vpnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance" || name == "conflictingFeature")
        return true;
    return false;
}

System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "mplsl3vpn-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Mplsl3vpnItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::Mplsl3vpnItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::Mplsl3vpnItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::Mplsl3vpnItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsl3vpn-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Mplsl3vpnItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Mplsl3vpnItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Mplsl3vpnItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Mplsl3vpnItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::Mplsl3vpnItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::Mplsl3vpnItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::Mplsl3vpnItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsl3vpn-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::MplsevpnItems::MplsevpnItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"},
    conflictingfeature{YType::str, "conflictingFeature"}
{

    yang_name = "mplsevpn-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsevpnItems::~MplsevpnItems()
{
}

bool System::FmItems::MplsevpnItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| conflictingfeature.is_set;
}

bool System::FmItems::MplsevpnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| ydk::is_set(conflictingfeature.yfilter);
}

std::string System::FmItems::MplsevpnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsevpnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsevpn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsevpnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());
    if (conflictingfeature.is_set || is_set(conflictingfeature.yfilter)) leaf_name_data.push_back(conflictingfeature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsevpnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsevpnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::MplsevpnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature = value;
        conflictingfeature.value_namespace = name_space;
        conflictingfeature.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::MplsevpnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature.yfilter = yfilter;
    }
}

bool System::FmItems::MplsevpnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminSt" || name == "operSt" || name == "maxInstance" || name == "conflictingFeature")
        return true;
    return false;
}

System::FmItems::BgpItems::BgpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::BgpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "bgp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BgpItems::~BgpItems()
{
}

bool System::FmItems::BgpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::BgpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::BgpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BgpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BgpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::BgpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::BgpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::BgpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::BgpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::BgpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::BgpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::BgpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "bgp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BgpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::BgpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::BgpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::BgpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/bgp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BgpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BgpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::BgpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::BgpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::BgpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::BgpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::BgpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::BgpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/bgp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::HmmItems::HmmItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::HmmItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "hmm-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HmmItems::~HmmItems()
{
}

bool System::FmItems::HmmItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::HmmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::HmmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HmmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hmm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HmmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::HmmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::HmmItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::HmmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::HmmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::HmmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::HmmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::HmmItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "hmm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HmmItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::HmmItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::HmmItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::HmmItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/hmm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HmmItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HmmItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::HmmItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::HmmItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::HmmItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::HmmItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::HmmItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::HmmItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/hmm-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::EvpnItems::EvpnItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::EvpnItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "evpn-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::EvpnItems::~EvpnItems()
{
}

bool System::FmItems::EvpnItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::EvpnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::EvpnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::EvpnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::EvpnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::EvpnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::EvpnItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::EvpnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::EvpnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::EvpnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::EvpnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::EvpnItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "evpn-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::EvpnItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::EvpnItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::EvpnItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::EvpnItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/evpn-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::EvpnItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::EvpnItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::EvpnItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::EvpnItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::EvpnItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::EvpnItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::EvpnItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/evpn-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NgoamItems::NgoamItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::NgoamItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "ngoam-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NgoamItems::~NgoamItems()
{
}

bool System::FmItems::NgoamItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NgoamItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NgoamItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NgoamItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ngoam-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NgoamItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NgoamItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NgoamItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NgoamItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::NgoamItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::NgoamItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::NgoamItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::NgoamItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "ngoam-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NgoamItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NgoamItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NgoamItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NgoamItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ngoam-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NgoamItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NgoamItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NgoamItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NgoamItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::NgoamItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NgoamItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NgoamItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ngoam-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::PoeItems::PoeItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::PoeItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "poe-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PoeItems::~PoeItems()
{
}

bool System::FmItems::PoeItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::PoeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::PoeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PoeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PoeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PoeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::PoeItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PoeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::PoeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::PoeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::PoeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::PoeItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "poe-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PoeItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::PoeItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::PoeItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::PoeItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/poe-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PoeItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PoeItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PoeItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::PoeItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PoeItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::PoeItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::PoeItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::PoeItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/poe-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::MsdpItems::MsdpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::MsdpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "msdp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MsdpItems::~MsdpItems()
{
}

bool System::FmItems::MsdpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::MsdpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::MsdpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MsdpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MsdpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MsdpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::MsdpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MsdpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::MsdpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::MsdpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::MsdpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::MsdpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "msdp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MsdpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::MsdpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::MsdpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::MsdpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/msdp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MsdpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MsdpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MsdpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MsdpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::MsdpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::MsdpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::MsdpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/msdp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::DhcpItems::DhcpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::DhcpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "dhcp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::DhcpItems::~DhcpItems()
{
}

bool System::FmItems::DhcpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::DhcpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::DhcpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::DhcpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::DhcpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::DhcpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::DhcpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::DhcpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::DhcpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::DhcpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::DhcpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::DhcpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "dhcp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::DhcpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::DhcpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::DhcpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::DhcpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/dhcp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::DhcpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::DhcpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::DhcpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::DhcpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::DhcpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::DhcpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::DhcpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/dhcp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::IfvlanItems::IfvlanItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::IfvlanItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "ifvlan-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::IfvlanItems::~IfvlanItems()
{
}

bool System::FmItems::IfvlanItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::IfvlanItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::IfvlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::IfvlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifvlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::IfvlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::IfvlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::IfvlanItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::IfvlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::IfvlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::IfvlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::IfvlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::IfvlanItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "ifvlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::IfvlanItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::IfvlanItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::IfvlanItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::IfvlanItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ifvlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::IfvlanItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::IfvlanItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::IfvlanItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::IfvlanItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::IfvlanItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::IfvlanItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::IfvlanItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ifvlan-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::BashshellItems::BashshellItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::BashshellItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "bashshell-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BashshellItems::~BashshellItems()
{
}

bool System::FmItems::BashshellItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::BashshellItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::BashshellItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BashshellItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bashshell-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BashshellItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::BashshellItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::BashshellItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::BashshellItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::BashshellItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::BashshellItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::BashshellItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::BashshellItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "bashshell-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BashshellItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::BashshellItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::BashshellItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::BashshellItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/bashshell-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BashshellItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BashshellItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::BashshellItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::BashshellItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::BashshellItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::BashshellItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::BashshellItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/bashshell-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::ScpserverItems::ScpserverItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    service_items(std::make_shared<System::FmItems::ScpserverItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "scpserver-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::ScpserverItems::~ScpserverItems()
{
}

bool System::FmItems::ScpserverItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::ScpserverItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::ScpserverItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::ScpserverItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scpserver-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::ScpserverItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::ScpserverItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::ScpserverItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::ScpserverItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::ScpserverItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FmItems::ScpserverItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FmItems::ScpserverItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::ScpserverItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "scpserver-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::ScpserverItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::ScpserverItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::ScpserverItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::ScpserverItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/scpserver-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::ScpserverItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::ScpserverItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::ScpserverItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::ScpserverItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::ScpserverItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::ScpserverItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::ScpserverItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/scpserver-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::LldpItems::LldpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::LldpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "lldp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::LldpItems::~LldpItems()
{
}

bool System::FmItems::LldpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::LldpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::LldpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::LldpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::LldpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::LldpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::LldpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::LldpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::LldpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::LldpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::LldpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::LldpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "lldp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::LldpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::LldpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::LldpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::LldpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/lldp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::LldpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::LldpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::LldpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::LldpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::LldpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::LldpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::LldpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::LldpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/lldp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::LacpItems::LacpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::LacpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "lacp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::LacpItems::~LacpItems()
{
}

bool System::FmItems::LacpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::LacpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::LacpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::LacpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::LacpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::LacpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::LacpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::LacpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::LacpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::LacpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::LacpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::LacpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "lacp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::LacpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::LacpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::LacpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::LacpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/lacp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::LacpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::LacpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::LacpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::LacpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::LacpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::LacpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::LacpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::LacpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/lacp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NxapiItems::NxapiItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::NxapiItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "nxapi-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NxapiItems::~NxapiItems()
{
}

bool System::FmItems::NxapiItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NxapiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NxapiItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NxapiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nxapi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NxapiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NxapiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NxapiItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NxapiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::NxapiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::NxapiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::NxapiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::NxapiItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "nxapi-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NxapiItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NxapiItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NxapiItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NxapiItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/nxapi-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NxapiItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NxapiItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NxapiItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NxapiItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::NxapiItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NxapiItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NxapiItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/nxapi-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::TelnetItems::TelnetItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "telnet-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TelnetItems::~TelnetItems()
{
}

bool System::FmItems::TelnetItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set;
}

bool System::FmItems::TelnetItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::TelnetItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TelnetItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TelnetItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TelnetItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TelnetItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::TelnetItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FmItems::TelnetItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FmItems::TelnetItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NxdbItems::NxdbItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::NxdbItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "nxdb-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NxdbItems::~NxdbItems()
{
}

bool System::FmItems::NxdbItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NxdbItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NxdbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NxdbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nxdb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NxdbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NxdbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NxdbItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NxdbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::NxdbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::NxdbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::NxdbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::NxdbItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "nxdb-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NxdbItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NxdbItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NxdbItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NxdbItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/nxdb-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NxdbItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NxdbItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NxdbItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NxdbItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::NxdbItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NxdbItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NxdbItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/nxdb-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::VnsegmentItems::VnsegmentItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::VnsegmentItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "vnsegment-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VnsegmentItems::~VnsegmentItems()
{
}

bool System::FmItems::VnsegmentItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::VnsegmentItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::VnsegmentItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VnsegmentItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vnsegment-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VnsegmentItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VnsegmentItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::VnsegmentItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VnsegmentItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::VnsegmentItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::VnsegmentItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::VnsegmentItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::VnsegmentItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "vnsegment-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VnsegmentItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::VnsegmentItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::VnsegmentItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::VnsegmentItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vnsegment-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VnsegmentItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VnsegmentItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VnsegmentItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VnsegmentItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::VnsegmentItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::VnsegmentItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::VnsegmentItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vnsegment-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::TacacsplusItems::TacacsplusItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    service_items(std::make_shared<System::FmItems::TacacsplusItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "tacacsplus-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TacacsplusItems::~TacacsplusItems()
{
}

bool System::FmItems::TacacsplusItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::TacacsplusItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::TacacsplusItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TacacsplusItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacsplus-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TacacsplusItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TacacsplusItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::TacacsplusItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TacacsplusItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::TacacsplusItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FmItems::TacacsplusItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FmItems::TacacsplusItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::TacacsplusItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "tacacsplus-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TacacsplusItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::TacacsplusItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::TacacsplusItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::TacacsplusItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/tacacsplus-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TacacsplusItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TacacsplusItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TacacsplusItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TacacsplusItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::TacacsplusItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::TacacsplusItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::TacacsplusItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/tacacsplus-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::UdldItems::UdldItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::UdldItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "udld-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::UdldItems::~UdldItems()
{
}

bool System::FmItems::UdldItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::UdldItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::UdldItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::UdldItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udld-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::UdldItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::UdldItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::UdldItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::UdldItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::UdldItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::UdldItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::UdldItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::UdldItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "udld-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::UdldItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::UdldItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::UdldItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::UdldItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/udld-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::UdldItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::UdldItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::UdldItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::UdldItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::UdldItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::UdldItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::UdldItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::UdldItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/udld-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NatItems::NatItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::NatItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "nat-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NatItems::~NatItems()
{
}

bool System::FmItems::NatItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NatItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NatItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::NatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::NatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::NatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::NatItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "nat-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NatItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NatItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NatItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NatItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/nat-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NatItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NatItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NatItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::NatItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NatItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::NatItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NatItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NatItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::NatItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NatItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::NatItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::NatItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NatItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/nat-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NatItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NatItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NatItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NatItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NatItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::NatItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NatItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::Vrrpv3Items::Vrrpv3Items()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::Vrrpv3Items::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "vrrpv3-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Vrrpv3Items::~Vrrpv3Items()
{
}

bool System::FmItems::Vrrpv3Items::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::Vrrpv3Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::Vrrpv3Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Vrrpv3Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrpv3-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Vrrpv3Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Vrrpv3Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::Vrrpv3Items::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Vrrpv3Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::Vrrpv3Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::Vrrpv3Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::Vrrpv3Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::Vrrpv3Items::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "vrrpv3-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Vrrpv3Items::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::Vrrpv3Items::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::Vrrpv3Items::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::Vrrpv3Items::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vrrpv3-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Vrrpv3Items::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Vrrpv3Items::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Vrrpv3Items::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Vrrpv3Items::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::Vrrpv3Items::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::Vrrpv3Items::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::Vrrpv3Items::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vrrpv3-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::VrrpItems::VrrpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::VrrpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "vrrp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VrrpItems::~VrrpItems()
{
}

bool System::FmItems::VrrpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::VrrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::VrrpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VrrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VrrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VrrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::VrrpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VrrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::VrrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::VrrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::VrrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::VrrpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "vrrp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VrrpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::VrrpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::VrrpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::VrrpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vrrp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VrrpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VrrpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VrrpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VrrpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::VrrpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::VrrpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::VrrpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vrrp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::HsrpItems::HsrpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::HsrpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "hsrp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HsrpItems::~HsrpItems()
{
}

bool System::FmItems::HsrpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::HsrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::HsrpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HsrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hsrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HsrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::HsrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::HsrpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::HsrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::HsrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::HsrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::HsrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::HsrpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "hsrp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HsrpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::HsrpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::HsrpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::HsrpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/hsrp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HsrpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HsrpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::HsrpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::HsrpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::HsrpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::HsrpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::HsrpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/hsrp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NetflowItems::NetflowItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::NetflowItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "netflow-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NetflowItems::~NetflowItems()
{
}

bool System::FmItems::NetflowItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NetflowItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NetflowItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NetflowItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netflow-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NetflowItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NetflowItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NetflowItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NetflowItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::NetflowItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::NetflowItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::NetflowItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::NetflowItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "netflow-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NetflowItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NetflowItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NetflowItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NetflowItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/netflow-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NetflowItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NetflowItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NetflowItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NetflowItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::NetflowItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NetflowItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NetflowItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/netflow-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::AnalyticsItems::AnalyticsItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::AnalyticsItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "analytics-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::AnalyticsItems::~AnalyticsItems()
{
}

bool System::FmItems::AnalyticsItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::AnalyticsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::AnalyticsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::AnalyticsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "analytics-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::AnalyticsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::AnalyticsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::AnalyticsItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::AnalyticsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::AnalyticsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::AnalyticsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::AnalyticsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::AnalyticsItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "analytics-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::AnalyticsItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::AnalyticsItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::AnalyticsItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::AnalyticsItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/analytics-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::AnalyticsItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::AnalyticsItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::AnalyticsItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::AnalyticsItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::AnalyticsItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::AnalyticsItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::AnalyticsItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/analytics-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::BfdItems::BfdItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::BfdItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "bfd-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BfdItems::~BfdItems()
{
}

bool System::FmItems::BfdItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::BfdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::BfdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BfdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BfdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::BfdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::BfdItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::BfdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::BfdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::BfdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::BfdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::BfdItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "bfd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BfdItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::BfdItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::BfdItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::BfdItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/bfd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BfdItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BfdItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::BfdItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::BfdItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::BfdItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::BfdItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::BfdItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::BfdItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/bfd-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::TunnelifItems::TunnelifItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::TunnelifItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "tunnelif-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TunnelifItems::~TunnelifItems()
{
}

bool System::FmItems::TunnelifItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::TunnelifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::TunnelifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TunnelifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TunnelifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TunnelifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::TunnelifItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TunnelifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::TunnelifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::TunnelifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::TunnelifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::TunnelifItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "tunnelif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TunnelifItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::TunnelifItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::TunnelifItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::TunnelifItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/tunnelif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TunnelifItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TunnelifItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TunnelifItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TunnelifItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::TunnelifItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::TunnelifItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::TunnelifItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/tunnelif-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NvoItems::NvoItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::NvoItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "nvo-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NvoItems::~NvoItems()
{
}

bool System::FmItems::NvoItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NvoItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NvoItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NvoItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nvo-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NvoItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NvoItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NvoItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NvoItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::NvoItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::NvoItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::NvoItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::NvoItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "nvo-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NvoItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NvoItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NvoItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NvoItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/nvo-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NvoItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NvoItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NvoItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::NvoItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NvoItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::NvoItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NvoItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NvoItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/nvo-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::PbrItems::PbrItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::PbrItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "pbr-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PbrItems::~PbrItems()
{
}

bool System::FmItems::PbrItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::PbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::PbrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::PbrItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::PbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::PbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::PbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::PbrItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "pbr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PbrItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::PbrItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::PbrItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::PbrItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/pbr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PbrItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PbrItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PbrItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::PbrItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PbrItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::PbrItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::PbrItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::PbrItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/pbr-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::PimItems::PimItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::PimItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "pim-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PimItems::~PimItems()
{
}

bool System::FmItems::PimItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::PimItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::PimItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PimItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PimItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PimItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::PimItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PimItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::PimItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::PimItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::PimItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::PimItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "pim-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PimItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::PimItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::PimItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::PimItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/pim-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PimItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PimItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PimItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::PimItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PimItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::PimItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::PimItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::PimItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::PimItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PimItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::PimItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::PimItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::PimItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/pim-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PimItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PimItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PimItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PimItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::PimItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::PimItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::PimItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NgmvpnItems::NgmvpnItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::NgmvpnItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "ngmvpn-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NgmvpnItems::~NgmvpnItems()
{
}

bool System::FmItems::NgmvpnItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NgmvpnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NgmvpnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NgmvpnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ngmvpn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NgmvpnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NgmvpnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NgmvpnItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NgmvpnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::NgmvpnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::NgmvpnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::NgmvpnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::NgmvpnItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "ngmvpn-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NgmvpnItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NgmvpnItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NgmvpnItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NgmvpnItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ngmvpn-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NgmvpnItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NgmvpnItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NgmvpnItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NgmvpnItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::NgmvpnItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NgmvpnItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NgmvpnItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ngmvpn-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::VpcItems::VpcItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::VpcItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "vpc-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VpcItems::~VpcItems()
{
}

bool System::FmItems::VpcItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::VpcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::VpcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VpcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VpcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VpcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::VpcItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VpcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::VpcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::VpcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::VpcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::VpcItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "vpc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VpcItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::VpcItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::VpcItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::VpcItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vpc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VpcItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VpcItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VpcItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::VpcItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VpcItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::VpcItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::VpcItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::VpcItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vpc-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::VtpItems::VtpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::VtpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "vtp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VtpItems::~VtpItems()
{
}

bool System::FmItems::VtpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::VtpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::VtpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VtpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VtpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VtpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::VtpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VtpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::VtpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::VtpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::VtpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::VtpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "vtp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VtpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::VtpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::VtpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::VtpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vtp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VtpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VtpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VtpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::VtpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VtpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::VtpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::VtpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::VtpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vtp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::PvlanItems::PvlanItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::PvlanItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "pvlan-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PvlanItems::~PvlanItems()
{
}

bool System::FmItems::PvlanItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::PvlanItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::PvlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PvlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PvlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PvlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::PvlanItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PvlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::PvlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::PvlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::PvlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::PvlanItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "pvlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PvlanItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::PvlanItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::PvlanItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::PvlanItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/pvlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PvlanItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PvlanItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PvlanItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PvlanItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::PvlanItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::PvlanItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::PvlanItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/pvlan-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NtpdItems::NtpdItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ntpd-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NtpdItems::~NtpdItems()
{
}

bool System::FmItems::NtpdItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set;
}

bool System::FmItems::NtpdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NtpdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NtpdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntpd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NtpdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NtpdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NtpdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NtpdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FmItems::NtpdItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FmItems::NtpdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::TelemetryItems::TelemetryItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::TelemetryItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "telemetry-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TelemetryItems::~TelemetryItems()
{
}

bool System::FmItems::TelemetryItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::TelemetryItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::TelemetryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TelemetryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telemetry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TelemetryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TelemetryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::TelemetryItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TelemetryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::TelemetryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::TelemetryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::TelemetryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::TelemetryItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "telemetry-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TelemetryItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::TelemetryItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::TelemetryItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::TelemetryItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/telemetry-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TelemetryItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TelemetryItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TelemetryItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TelemetryItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::TelemetryItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::TelemetryItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::TelemetryItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/telemetry-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::OspfItems::OspfItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::OspfItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "ospf-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::OspfItems::~OspfItems()
{
}

bool System::FmItems::OspfItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::OspfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::OspfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::OspfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::OspfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::OspfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::OspfItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::OspfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::OspfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::OspfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::OspfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::OspfItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "ospf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::OspfItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::OspfItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::OspfItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::OspfItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ospf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::OspfItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::OspfItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::OspfItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::OspfItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::OspfItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::OspfItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::OspfItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::OspfItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ospf-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}


}
}

