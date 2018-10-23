
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_40.hpp"
#include "Cisco_NX_OS_device_41.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsmbrSessItems()
    :
    rsmbrsess_list(this, {"tdn"})
{

    yang_name = "rsmbrSess-items"; yang_parent_name = "Sess-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::~RsmbrSessItems()
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmbrsess_list.len(); index++)
    {
        if(rsmbrsess_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::has_operation() const
{
    for (std::size_t index=0; index<rsmbrsess_list.len(); index++)
    {
        if(rsmbrsess_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmbrSess-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMbrSess-list")
    {
        auto ent_ = std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList>();
        ent_->parent = this;
        rsmbrsess_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsmbrsess_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMbrSess-list")
        return true;
    return false;
}

System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::RsMbrSessList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMbrSess-list"; yang_parent_name = "rsmbrSess-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::~RsMbrSessList()
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMbrSess-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::HsrpItems::HsrpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::HsrpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "hsrp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HsrpItems::~HsrpItems()
{
}

bool System::HsrpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::HsrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::HsrpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HsrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hsrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HsrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::HsrpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HsrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::HsrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::HsrpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::HsrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::HsrpItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    if_items(std::make_shared<System::HsrpItems::InstItems::IfItems>())
{
    if_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "hsrp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HsrpItems::InstItems::~InstItems()
{
}

bool System::HsrpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::HsrpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::HsrpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hsrp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HsrpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HsrpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::HsrpItems::InstItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HsrpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::HsrpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::HsrpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::HsrpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::HsrpItems::InstItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HsrpItems::InstItems::IfItems::~IfItems()
{
}

bool System::HsrpItems::InstItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HsrpItems::InstItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HsrpItems::InstItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hsrp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HsrpItems::InstItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HsrpItems::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::HsrpItems::InstItems::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HsrpItems::InstItems::IfItems::get_children() const
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

void System::HsrpItems::InstItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HsrpItems::InstItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HsrpItems::InstItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::HsrpItems::InstItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    version{YType::enumeration, "version"},
    ctrl{YType::str, "ctrl"},
    biascope{YType::enumeration, "biaScope"},
    iscreate{YType::uint8, "isCreate"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    grp_items(std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::GrpItems>())
    , rtvrfmbr_items(std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems>())
{
    grp_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HsrpItems::InstItems::IfItems::IfList::~IfList()
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| version.is_set
	|| ctrl.is_set
	|| biascope.is_set
	|| iscreate.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (grp_items !=  nullptr && grp_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::HsrpItems::InstItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(biascope.yfilter)
	|| ydk::is_set(iscreate.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (grp_items !=  nullptr && grp_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::HsrpItems::InstItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hsrp-items/inst-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HsrpItems::InstItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (biascope.is_set || is_set(biascope.yfilter)) leaf_name_data.push_back(biascope.get_name_leafdata());
    if (iscreate.is_set || is_set(iscreate.yfilter)) leaf_name_data.push_back(iscreate.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HsrpItems::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "grp-items")
    {
        if(grp_items == nullptr)
        {
            grp_items = std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::GrpItems>();
        }
        return grp_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HsrpItems::InstItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(grp_items != nullptr)
    {
        _children["grp-items"] = grp_items;
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

void System::HsrpItems::InstItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "biaScope")
    {
        biascope = value;
        biascope.value_namespace = name_space;
        biascope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isCreate")
    {
        iscreate = value;
        iscreate.value_namespace = name_space;
        iscreate.value_namespace_prefix = name_space_prefix;
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

void System::HsrpItems::InstItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "biaScope")
    {
        biascope.yfilter = yfilter;
    }
    if(value_path == "isCreate")
    {
        iscreate.yfilter = yfilter;
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

bool System::HsrpItems::InstItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grp-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "version" || name == "ctrl" || name == "biaScope" || name == "isCreate" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GrpItems()
    :
    group_list(this, {"id", "af"})
{

    yang_name = "grp-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HsrpItems::InstItems::IfItems::IfList::GrpItems::~GrpItems()
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::has_operation() const
{
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HsrpItems::InstItems::IfItems::IfList::GrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::IfItems::IfList::GrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HsrpItems::InstItems::IfItems::IfList::GrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Group-list")
    {
        auto ent_ = std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList>();
        ent_->parent = this;
        group_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HsrpItems::InstItems::IfItems::IfList::GrpItems::get_children() const
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

void System::HsrpItems::InstItems::IfItems::IfList::GrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HsrpItems::InstItems::IfItems::IfList::GrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Group-list")
        return true;
    return false;
}

System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::GroupList()
    :
    id{YType::uint16, "id"},
    af{YType::enumeration, "af"},
    ip{YType::str, "ip"},
    ipobtainmode{YType::enumeration, "ipObtainMode"},
    ctrl{YType::str, "ctrl"},
    preemptdelaymin{YType::uint16, "preemptDelayMin"},
    preemptdelayreload{YType::uint16, "preemptDelayReload"},
    preemptdelaysync{YType::uint16, "preemptDelaySync"},
    hellointvl{YType::uint32, "helloIntvl"},
    holdintvl{YType::uint32, "holdIntvl"},
    prio{YType::uint16, "prio"},
    fwdlwrthrld{YType::uint16, "fwdLwrThrld"},
    fwduprthrld{YType::uint16, "fwdUprThrld"},
    name{YType::str, "name"},
    follow{YType::str, "follow"},
    type{YType::enumeration, "type"},
    key{YType::str, "key"},
    mac{YType::str, "mac"}
        ,
    addr_items(std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems>())
{
    addr_items->parent = this;

    yang_name = "Group-list"; yang_parent_name = "grp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::~GroupList()
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| af.is_set
	|| ip.is_set
	|| ipobtainmode.is_set
	|| ctrl.is_set
	|| preemptdelaymin.is_set
	|| preemptdelayreload.is_set
	|| preemptdelaysync.is_set
	|| hellointvl.is_set
	|| holdintvl.is_set
	|| prio.is_set
	|| fwdlwrthrld.is_set
	|| fwduprthrld.is_set
	|| name.is_set
	|| follow.is_set
	|| type.is_set
	|| key.is_set
	|| mac.is_set
	|| (addr_items !=  nullptr && addr_items->has_data());
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(ipobtainmode.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(preemptdelaymin.yfilter)
	|| ydk::is_set(preemptdelayreload.yfilter)
	|| ydk::is_set(preemptdelaysync.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(holdintvl.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(fwdlwrthrld.yfilter)
	|| ydk::is_set(fwduprthrld.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(follow.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| (addr_items !=  nullptr && addr_items->has_operation());
}

std::string System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Group-list";
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(af, "af");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ipobtainmode.is_set || is_set(ipobtainmode.yfilter)) leaf_name_data.push_back(ipobtainmode.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (preemptdelaymin.is_set || is_set(preemptdelaymin.yfilter)) leaf_name_data.push_back(preemptdelaymin.get_name_leafdata());
    if (preemptdelayreload.is_set || is_set(preemptdelayreload.yfilter)) leaf_name_data.push_back(preemptdelayreload.get_name_leafdata());
    if (preemptdelaysync.is_set || is_set(preemptdelaysync.yfilter)) leaf_name_data.push_back(preemptdelaysync.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (holdintvl.is_set || is_set(holdintvl.yfilter)) leaf_name_data.push_back(holdintvl.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (fwdlwrthrld.is_set || is_set(fwdlwrthrld.yfilter)) leaf_name_data.push_back(fwdlwrthrld.get_name_leafdata());
    if (fwduprthrld.is_set || is_set(fwduprthrld.yfilter)) leaf_name_data.push_back(fwduprthrld.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (follow.is_set || is_set(follow.yfilter)) leaf_name_data.push_back(follow.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr-items")
    {
        if(addr_items == nullptr)
        {
            addr_items = std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems>();
        }
        return addr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr_items != nullptr)
    {
        _children["addr-items"] = addr_items;
    }

    return _children;
}

void System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipObtainMode")
    {
        ipobtainmode = value;
        ipobtainmode.value_namespace = name_space;
        ipobtainmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preemptDelayMin")
    {
        preemptdelaymin = value;
        preemptdelaymin.value_namespace = name_space;
        preemptdelaymin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preemptDelayReload")
    {
        preemptdelayreload = value;
        preemptdelayreload.value_namespace = name_space;
        preemptdelayreload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preemptDelaySync")
    {
        preemptdelaysync = value;
        preemptdelaysync.value_namespace = name_space;
        preemptdelaysync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl = value;
        holdintvl.value_namespace = name_space;
        holdintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow")
    {
        follow = value;
        follow.value_namespace = name_space;
        follow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
}

void System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "ipObtainMode")
    {
        ipobtainmode.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "preemptDelayMin")
    {
        preemptdelaymin.yfilter = yfilter;
    }
    if(value_path == "preemptDelayReload")
    {
        preemptdelayreload.yfilter = yfilter;
    }
    if(value_path == "preemptDelaySync")
    {
        preemptdelaysync.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "fwdLwrThrld")
    {
        fwdlwrthrld.yfilter = yfilter;
    }
    if(value_path == "fwdUprThrld")
    {
        fwduprthrld.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "follow")
    {
        follow.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-items" || name == "id" || name == "af" || name == "ip" || name == "ipObtainMode" || name == "ctrl" || name == "preemptDelayMin" || name == "preemptDelayReload" || name == "preemptDelaySync" || name == "helloIntvl" || name == "holdIntvl" || name == "prio" || name == "fwdLwrThrld" || name == "fwdUprThrld" || name == "name" || name == "follow" || name == "type" || name == "key" || name == "mac")
        return true;
    return false;
}

System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrItems()
    :
    addr_list(this, {"ip"})
{

    yang_name = "addr-items"; yang_parent_name = "Group-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::~AddrItems()
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<addr_list.len(); index++)
    {
        if(addr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::has_operation() const
{
    for (std::size_t index=0; index<addr_list.len(); index++)
    {
        if(addr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Addr-list")
    {
        auto ent_ = std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList>();
        ent_->parent = this;
        addr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : addr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Addr-list")
        return true;
    return false;
}

System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::AddrList()
    :
    ip{YType::str, "ip"}
{

    yang_name = "Addr-list"; yang_parent_name = "addr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::~AddrList()
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set;
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Addr-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Icmpv4Items::Icmpv4Items()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::Icmpv4Items::InstItems>())
{
    inst_items->parent = this;

    yang_name = "icmpv4-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv4Items::~Icmpv4Items()
{
}

bool System::Icmpv4Items::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::Icmpv4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::Icmpv4Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::Icmpv4Items::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::Icmpv4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Icmpv4Items::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Icmpv4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::Icmpv4Items::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    dom_items(std::make_shared<System::Icmpv4Items::InstItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "icmpv4-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv4Items::InstItems::~InstItems()
{
}

bool System::Icmpv4Items::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (dom_items !=  nullptr && dom_items->has_data());
}

bool System::Icmpv4Items::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::Icmpv4Items::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icmpv4-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv4Items::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv4Items::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv4Items::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::Icmpv4Items::InstItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv4Items::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    return _children;
}

void System::Icmpv4Items::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Icmpv4Items::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Icmpv4Items::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::Icmpv4Items::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv4Items::InstItems::DomItems::~DomItems()
{
}

bool System::Icmpv4Items::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Icmpv4Items::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Icmpv4Items::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icmpv4-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv4Items::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv4Items::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv4Items::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::Icmpv4Items::InstItems::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv4Items::InstItems::DomItems::get_children() const
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

void System::Icmpv4Items::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Icmpv4Items::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Icmpv4Items::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::Icmpv4Items::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"}
        ,
    if_items(std::make_shared<System::Icmpv4Items::InstItems::DomItems::DomList::IfItems>())
{
    if_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv4Items::InstItems::DomItems::DomList::~DomList()
{
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::Icmpv4Items::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icmpv4-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv4Items::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv4Items::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv4Items::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::Icmpv4Items::InstItems::DomItems::DomList::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv4Items::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::Icmpv4Items::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Icmpv4Items::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "name")
        return true;
    return false;
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::get_children() const
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

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    rtvrfmbr_items(std::make_shared<System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::get_children() const
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

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Icmpv6Items::Icmpv6Items()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::Icmpv6Items::InstItems>())
{
    inst_items->parent = this;

    yang_name = "icmpv6-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv6Items::~Icmpv6Items()
{
}

bool System::Icmpv6Items::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::Icmpv6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::Icmpv6Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::Icmpv6Items::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::Icmpv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Icmpv6Items::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Icmpv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::InstItems()
    :
    operst{YType::enumeration, "operSt"},
    adjstaletimer{YType::uint16, "adjStaleTimer"},
    adjstaletimericmp{YType::enumeration, "adjStaleTimerIcmp"},
    logginglevel{YType::enumeration, "loggingLevel"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    if_items(std::make_shared<System::Icmpv6Items::InstItems::IfItems>())
    , logs_items(std::make_shared<System::Icmpv6Items::InstItems::LogsItems>())
    , ifstats_items(std::make_shared<System::Icmpv6Items::InstItems::IfstatsItems>())
{
    if_items->parent = this;
    logs_items->parent = this;
    ifstats_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "icmpv6-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv6Items::InstItems::~InstItems()
{
}

bool System::Icmpv6Items::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return operst.is_set
	|| adjstaletimer.is_set
	|| adjstaletimericmp.is_set
	|| logginglevel.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (logs_items !=  nullptr && logs_items->has_data())
	|| (ifstats_items !=  nullptr && ifstats_items->has_data());
}

bool System::Icmpv6Items::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(adjstaletimer.yfilter)
	|| ydk::is_set(adjstaletimericmp.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (logs_items !=  nullptr && logs_items->has_operation())
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation());
}

std::string System::Icmpv6Items::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icmpv6-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv6Items::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (adjstaletimer.is_set || is_set(adjstaletimer.yfilter)) leaf_name_data.push_back(adjstaletimer.get_name_leafdata());
    if (adjstaletimericmp.is_set || is_set(adjstaletimericmp.yfilter)) leaf_name_data.push_back(adjstaletimericmp.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv6Items::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::Icmpv6Items::InstItems::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "logs-items")
    {
        if(logs_items == nullptr)
        {
            logs_items = std::make_shared<System::Icmpv6Items::InstItems::LogsItems>();
        }
        return logs_items;
    }

    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::Icmpv6Items::InstItems::IfstatsItems>();
        }
        return ifstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv6Items::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    if(logs_items != nullptr)
    {
        _children["logs-items"] = logs_items;
    }

    if(ifstats_items != nullptr)
    {
        _children["ifstats-items"] = ifstats_items;
    }

    return _children;
}

void System::Icmpv6Items::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjStaleTimer")
    {
        adjstaletimer = value;
        adjstaletimer.value_namespace = name_space;
        adjstaletimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjStaleTimerIcmp")
    {
        adjstaletimericmp = value;
        adjstaletimericmp.value_namespace = name_space;
        adjstaletimericmp.value_namespace_prefix = name_space_prefix;
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

void System::Icmpv6Items::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "adjStaleTimer")
    {
        adjstaletimer.yfilter = yfilter;
    }
    if(value_path == "adjStaleTimerIcmp")
    {
        adjstaletimericmp.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
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

bool System::Icmpv6Items::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "logs-items" || name == "ifstats-items" || name == "operSt" || name == "adjStaleTimer" || name == "adjStaleTimerIcmp" || name == "loggingLevel" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv6Items::InstItems::IfItems::~IfItems()
{
}

bool System::Icmpv6Items::InstItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Icmpv6Items::InstItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Icmpv6Items::InstItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icmpv6-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv6Items::InstItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv6Items::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::Icmpv6Items::InstItems::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv6Items::InstItems::IfItems::get_children() const
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

void System::Icmpv6Items::InstItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Icmpv6Items::InstItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Icmpv6Items::InstItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    ctrl{YType::str, "ctrl"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    ifstats_items(std::make_shared<System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems>())
    , rtvrfmbr_items(std::make_shared<System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems>())
{
    ifstats_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv6Items::InstItems::IfItems::IfList::~IfList()
{
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ctrl.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (ifstats_items !=  nullptr && ifstats_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::Icmpv6Items::InstItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icmpv6-items/inst-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv6Items::InstItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv6Items::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems>();
        }
        return ifstats_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv6Items::InstItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ifstats_items != nullptr)
    {
        _children["ifstats-items"] = ifstats_items;
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

void System::Icmpv6Items::InstItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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

void System::Icmpv6Items::InstItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
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

bool System::Icmpv6Items::InstItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifstats-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "ctrl" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::IfstatsItems()
    :
    totsent{YType::uint64, "totSent"},
    totrvcd{YType::uint64, "totRvcd"},
    errsent{YType::uint64, "errSent"},
    errrcvd{YType::uint64, "errRcvd"},
    ifdowndropsent{YType::uint64, "ifDownDropSent"},
    ifdowndroprcvd{YType::uint64, "ifDownDropRcvd"},
    drophanotrdy{YType::uint64, "dropHaNotRdy"},
    dropinvldttlmct{YType::uint64, "dropInvldTtlMct"},
    dropsrcmacownrcvd{YType::uint64, "dropSrcMacOwnRcvd"},
    droptgtipnotownrcvd{YType::uint64, "dropTgtIpNotOwnRcvd"},
    dropsrcipnotownrcvd{YType::uint64, "dropSrcIpNotOwnRcvd"},
    destunreachsent{YType::uint64, "destUnreachSent"},
    destunreachrcvd{YType::uint64, "destUnreachRcvd"},
    adminprohibsent{YType::uint64, "adminProhibSent"},
    adminprohibrcvd{YType::uint64, "adminProhibRcvd"},
    timeexcdsent{YType::uint64, "timeExcdSent"},
    timeexcdrcvd{YType::uint64, "timeExcdRcvd"},
    parmprblmsent{YType::uint64, "parmPrblmSent"},
    parmprblmrcvd{YType::uint64, "parmPrblmRcvd"},
    echoreqsent{YType::uint64, "echoReqSent"},
    echoreqrcvd{YType::uint64, "echoReqRcvd"},
    echorepsent{YType::uint64, "echoRepSent"},
    echoreprcvd{YType::uint64, "echoRepRcvd"},
    redirsent{YType::uint64, "redirSent"},
    redirrcvd{YType::uint64, "redirRcvd"},
    toobigsent{YType::uint64, "tooBigSent"},
    toobigrcvd{YType::uint64, "tooBigRcvd"},
    rasent{YType::uint64, "raSent"},
    rarcvd{YType::uint64, "raRcvd"},
    rssent{YType::uint64, "rsSent"},
    rsrcvd{YType::uint64, "rsRcvd"},
    nasent{YType::uint64, "naSent"},
    narcvd{YType::uint64, "naRcvd"},
    nssent{YType::uint64, "nsSent"},
    nsrcvd{YType::uint64, "nsRcvd"},
    duprareceived{YType::uint64, "dupRAReceived"},
    fastpthrcvd{YType::uint64, "fastpthRcvd"},
    fastpathdsbleignrcvd{YType::uint64, "fastpathDsbleIgnRcvd"},
    fastpathotherignrcvd{YType::uint64, "fastpathOtherIgnRcvd"},
    mldv1queriessent{YType::uint64, "mldV1QueriesSent"},
    mldv1queriesrecv{YType::uint64, "mldV1QueriesRecv"},
    mldv2queriessent{YType::uint64, "mldV2QueriesSent"},
    mldv2queriesrecv{YType::uint64, "mldV2QueriesRecv"},
    mldv1reportssent{YType::uint64, "mldV1ReportsSent"},
    mldv1reportsrecv{YType::uint64, "mldV1ReportsRecv"},
    mldv2reportssent{YType::uint64, "mldV2ReportsSent"},
    mldv2reportsrecv{YType::uint64, "mldV2ReportsRecv"},
    mldv1leavessent{YType::uint64, "mldV1LeavesSent"},
    mldv1leavesrecv{YType::uint64, "mldV1LeavesRecv"}
{

    yang_name = "ifstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::~IfstatsItems()
{
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return totsent.is_set
	|| totrvcd.is_set
	|| errsent.is_set
	|| errrcvd.is_set
	|| ifdowndropsent.is_set
	|| ifdowndroprcvd.is_set
	|| drophanotrdy.is_set
	|| dropinvldttlmct.is_set
	|| dropsrcmacownrcvd.is_set
	|| droptgtipnotownrcvd.is_set
	|| dropsrcipnotownrcvd.is_set
	|| destunreachsent.is_set
	|| destunreachrcvd.is_set
	|| adminprohibsent.is_set
	|| adminprohibrcvd.is_set
	|| timeexcdsent.is_set
	|| timeexcdrcvd.is_set
	|| parmprblmsent.is_set
	|| parmprblmrcvd.is_set
	|| echoreqsent.is_set
	|| echoreqrcvd.is_set
	|| echorepsent.is_set
	|| echoreprcvd.is_set
	|| redirsent.is_set
	|| redirrcvd.is_set
	|| toobigsent.is_set
	|| toobigrcvd.is_set
	|| rasent.is_set
	|| rarcvd.is_set
	|| rssent.is_set
	|| rsrcvd.is_set
	|| nasent.is_set
	|| narcvd.is_set
	|| nssent.is_set
	|| nsrcvd.is_set
	|| duprareceived.is_set
	|| fastpthrcvd.is_set
	|| fastpathdsbleignrcvd.is_set
	|| fastpathotherignrcvd.is_set
	|| mldv1queriessent.is_set
	|| mldv1queriesrecv.is_set
	|| mldv2queriessent.is_set
	|| mldv2queriesrecv.is_set
	|| mldv1reportssent.is_set
	|| mldv1reportsrecv.is_set
	|| mldv2reportssent.is_set
	|| mldv2reportsrecv.is_set
	|| mldv1leavessent.is_set
	|| mldv1leavesrecv.is_set;
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totsent.yfilter)
	|| ydk::is_set(totrvcd.yfilter)
	|| ydk::is_set(errsent.yfilter)
	|| ydk::is_set(errrcvd.yfilter)
	|| ydk::is_set(ifdowndropsent.yfilter)
	|| ydk::is_set(ifdowndroprcvd.yfilter)
	|| ydk::is_set(drophanotrdy.yfilter)
	|| ydk::is_set(dropinvldttlmct.yfilter)
	|| ydk::is_set(dropsrcmacownrcvd.yfilter)
	|| ydk::is_set(droptgtipnotownrcvd.yfilter)
	|| ydk::is_set(dropsrcipnotownrcvd.yfilter)
	|| ydk::is_set(destunreachsent.yfilter)
	|| ydk::is_set(destunreachrcvd.yfilter)
	|| ydk::is_set(adminprohibsent.yfilter)
	|| ydk::is_set(adminprohibrcvd.yfilter)
	|| ydk::is_set(timeexcdsent.yfilter)
	|| ydk::is_set(timeexcdrcvd.yfilter)
	|| ydk::is_set(parmprblmsent.yfilter)
	|| ydk::is_set(parmprblmrcvd.yfilter)
	|| ydk::is_set(echoreqsent.yfilter)
	|| ydk::is_set(echoreqrcvd.yfilter)
	|| ydk::is_set(echorepsent.yfilter)
	|| ydk::is_set(echoreprcvd.yfilter)
	|| ydk::is_set(redirsent.yfilter)
	|| ydk::is_set(redirrcvd.yfilter)
	|| ydk::is_set(toobigsent.yfilter)
	|| ydk::is_set(toobigrcvd.yfilter)
	|| ydk::is_set(rasent.yfilter)
	|| ydk::is_set(rarcvd.yfilter)
	|| ydk::is_set(rssent.yfilter)
	|| ydk::is_set(rsrcvd.yfilter)
	|| ydk::is_set(nasent.yfilter)
	|| ydk::is_set(narcvd.yfilter)
	|| ydk::is_set(nssent.yfilter)
	|| ydk::is_set(nsrcvd.yfilter)
	|| ydk::is_set(duprareceived.yfilter)
	|| ydk::is_set(fastpthrcvd.yfilter)
	|| ydk::is_set(fastpathdsbleignrcvd.yfilter)
	|| ydk::is_set(fastpathotherignrcvd.yfilter)
	|| ydk::is_set(mldv1queriessent.yfilter)
	|| ydk::is_set(mldv1queriesrecv.yfilter)
	|| ydk::is_set(mldv2queriessent.yfilter)
	|| ydk::is_set(mldv2queriesrecv.yfilter)
	|| ydk::is_set(mldv1reportssent.yfilter)
	|| ydk::is_set(mldv1reportsrecv.yfilter)
	|| ydk::is_set(mldv2reportssent.yfilter)
	|| ydk::is_set(mldv2reportsrecv.yfilter)
	|| ydk::is_set(mldv1leavessent.yfilter)
	|| ydk::is_set(mldv1leavesrecv.yfilter);
}

std::string System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (totsent.is_set || is_set(totsent.yfilter)) leaf_name_data.push_back(totsent.get_name_leafdata());
    if (totrvcd.is_set || is_set(totrvcd.yfilter)) leaf_name_data.push_back(totrvcd.get_name_leafdata());
    if (errsent.is_set || is_set(errsent.yfilter)) leaf_name_data.push_back(errsent.get_name_leafdata());
    if (errrcvd.is_set || is_set(errrcvd.yfilter)) leaf_name_data.push_back(errrcvd.get_name_leafdata());
    if (ifdowndropsent.is_set || is_set(ifdowndropsent.yfilter)) leaf_name_data.push_back(ifdowndropsent.get_name_leafdata());
    if (ifdowndroprcvd.is_set || is_set(ifdowndroprcvd.yfilter)) leaf_name_data.push_back(ifdowndroprcvd.get_name_leafdata());
    if (drophanotrdy.is_set || is_set(drophanotrdy.yfilter)) leaf_name_data.push_back(drophanotrdy.get_name_leafdata());
    if (dropinvldttlmct.is_set || is_set(dropinvldttlmct.yfilter)) leaf_name_data.push_back(dropinvldttlmct.get_name_leafdata());
    if (dropsrcmacownrcvd.is_set || is_set(dropsrcmacownrcvd.yfilter)) leaf_name_data.push_back(dropsrcmacownrcvd.get_name_leafdata());
    if (droptgtipnotownrcvd.is_set || is_set(droptgtipnotownrcvd.yfilter)) leaf_name_data.push_back(droptgtipnotownrcvd.get_name_leafdata());
    if (dropsrcipnotownrcvd.is_set || is_set(dropsrcipnotownrcvd.yfilter)) leaf_name_data.push_back(dropsrcipnotownrcvd.get_name_leafdata());
    if (destunreachsent.is_set || is_set(destunreachsent.yfilter)) leaf_name_data.push_back(destunreachsent.get_name_leafdata());
    if (destunreachrcvd.is_set || is_set(destunreachrcvd.yfilter)) leaf_name_data.push_back(destunreachrcvd.get_name_leafdata());
    if (adminprohibsent.is_set || is_set(adminprohibsent.yfilter)) leaf_name_data.push_back(adminprohibsent.get_name_leafdata());
    if (adminprohibrcvd.is_set || is_set(adminprohibrcvd.yfilter)) leaf_name_data.push_back(adminprohibrcvd.get_name_leafdata());
    if (timeexcdsent.is_set || is_set(timeexcdsent.yfilter)) leaf_name_data.push_back(timeexcdsent.get_name_leafdata());
    if (timeexcdrcvd.is_set || is_set(timeexcdrcvd.yfilter)) leaf_name_data.push_back(timeexcdrcvd.get_name_leafdata());
    if (parmprblmsent.is_set || is_set(parmprblmsent.yfilter)) leaf_name_data.push_back(parmprblmsent.get_name_leafdata());
    if (parmprblmrcvd.is_set || is_set(parmprblmrcvd.yfilter)) leaf_name_data.push_back(parmprblmrcvd.get_name_leafdata());
    if (echoreqsent.is_set || is_set(echoreqsent.yfilter)) leaf_name_data.push_back(echoreqsent.get_name_leafdata());
    if (echoreqrcvd.is_set || is_set(echoreqrcvd.yfilter)) leaf_name_data.push_back(echoreqrcvd.get_name_leafdata());
    if (echorepsent.is_set || is_set(echorepsent.yfilter)) leaf_name_data.push_back(echorepsent.get_name_leafdata());
    if (echoreprcvd.is_set || is_set(echoreprcvd.yfilter)) leaf_name_data.push_back(echoreprcvd.get_name_leafdata());
    if (redirsent.is_set || is_set(redirsent.yfilter)) leaf_name_data.push_back(redirsent.get_name_leafdata());
    if (redirrcvd.is_set || is_set(redirrcvd.yfilter)) leaf_name_data.push_back(redirrcvd.get_name_leafdata());
    if (toobigsent.is_set || is_set(toobigsent.yfilter)) leaf_name_data.push_back(toobigsent.get_name_leafdata());
    if (toobigrcvd.is_set || is_set(toobigrcvd.yfilter)) leaf_name_data.push_back(toobigrcvd.get_name_leafdata());
    if (rasent.is_set || is_set(rasent.yfilter)) leaf_name_data.push_back(rasent.get_name_leafdata());
    if (rarcvd.is_set || is_set(rarcvd.yfilter)) leaf_name_data.push_back(rarcvd.get_name_leafdata());
    if (rssent.is_set || is_set(rssent.yfilter)) leaf_name_data.push_back(rssent.get_name_leafdata());
    if (rsrcvd.is_set || is_set(rsrcvd.yfilter)) leaf_name_data.push_back(rsrcvd.get_name_leafdata());
    if (nasent.is_set || is_set(nasent.yfilter)) leaf_name_data.push_back(nasent.get_name_leafdata());
    if (narcvd.is_set || is_set(narcvd.yfilter)) leaf_name_data.push_back(narcvd.get_name_leafdata());
    if (nssent.is_set || is_set(nssent.yfilter)) leaf_name_data.push_back(nssent.get_name_leafdata());
    if (nsrcvd.is_set || is_set(nsrcvd.yfilter)) leaf_name_data.push_back(nsrcvd.get_name_leafdata());
    if (duprareceived.is_set || is_set(duprareceived.yfilter)) leaf_name_data.push_back(duprareceived.get_name_leafdata());
    if (fastpthrcvd.is_set || is_set(fastpthrcvd.yfilter)) leaf_name_data.push_back(fastpthrcvd.get_name_leafdata());
    if (fastpathdsbleignrcvd.is_set || is_set(fastpathdsbleignrcvd.yfilter)) leaf_name_data.push_back(fastpathdsbleignrcvd.get_name_leafdata());
    if (fastpathotherignrcvd.is_set || is_set(fastpathotherignrcvd.yfilter)) leaf_name_data.push_back(fastpathotherignrcvd.get_name_leafdata());
    if (mldv1queriessent.is_set || is_set(mldv1queriessent.yfilter)) leaf_name_data.push_back(mldv1queriessent.get_name_leafdata());
    if (mldv1queriesrecv.is_set || is_set(mldv1queriesrecv.yfilter)) leaf_name_data.push_back(mldv1queriesrecv.get_name_leafdata());
    if (mldv2queriessent.is_set || is_set(mldv2queriessent.yfilter)) leaf_name_data.push_back(mldv2queriessent.get_name_leafdata());
    if (mldv2queriesrecv.is_set || is_set(mldv2queriesrecv.yfilter)) leaf_name_data.push_back(mldv2queriesrecv.get_name_leafdata());
    if (mldv1reportssent.is_set || is_set(mldv1reportssent.yfilter)) leaf_name_data.push_back(mldv1reportssent.get_name_leafdata());
    if (mldv1reportsrecv.is_set || is_set(mldv1reportsrecv.yfilter)) leaf_name_data.push_back(mldv1reportsrecv.get_name_leafdata());
    if (mldv2reportssent.is_set || is_set(mldv2reportssent.yfilter)) leaf_name_data.push_back(mldv2reportssent.get_name_leafdata());
    if (mldv2reportsrecv.is_set || is_set(mldv2reportsrecv.yfilter)) leaf_name_data.push_back(mldv2reportsrecv.get_name_leafdata());
    if (mldv1leavessent.is_set || is_set(mldv1leavessent.yfilter)) leaf_name_data.push_back(mldv1leavessent.get_name_leafdata());
    if (mldv1leavesrecv.is_set || is_set(mldv1leavesrecv.yfilter)) leaf_name_data.push_back(mldv1leavesrecv.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totSent")
    {
        totsent = value;
        totsent.value_namespace = name_space;
        totsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totRvcd")
    {
        totrvcd = value;
        totrvcd.value_namespace = name_space;
        totrvcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errSent")
    {
        errsent = value;
        errsent.value_namespace = name_space;
        errsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errRcvd")
    {
        errrcvd = value;
        errrcvd.value_namespace = name_space;
        errrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifDownDropSent")
    {
        ifdowndropsent = value;
        ifdowndropsent.value_namespace = name_space;
        ifdowndropsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifDownDropRcvd")
    {
        ifdowndroprcvd = value;
        ifdowndroprcvd.value_namespace = name_space;
        ifdowndroprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropHaNotRdy")
    {
        drophanotrdy = value;
        drophanotrdy.value_namespace = name_space;
        drophanotrdy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropInvldTtlMct")
    {
        dropinvldttlmct = value;
        dropinvldttlmct.value_namespace = name_space;
        dropinvldttlmct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropSrcMacOwnRcvd")
    {
        dropsrcmacownrcvd = value;
        dropsrcmacownrcvd.value_namespace = name_space;
        dropsrcmacownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropTgtIpNotOwnRcvd")
    {
        droptgtipnotownrcvd = value;
        droptgtipnotownrcvd.value_namespace = name_space;
        droptgtipnotownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropSrcIpNotOwnRcvd")
    {
        dropsrcipnotownrcvd = value;
        dropsrcipnotownrcvd.value_namespace = name_space;
        dropsrcipnotownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destUnreachSent")
    {
        destunreachsent = value;
        destunreachsent.value_namespace = name_space;
        destunreachsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destUnreachRcvd")
    {
        destunreachrcvd = value;
        destunreachrcvd.value_namespace = name_space;
        destunreachrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminProhibSent")
    {
        adminprohibsent = value;
        adminprohibsent.value_namespace = name_space;
        adminprohibsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminProhibRcvd")
    {
        adminprohibrcvd = value;
        adminprohibrcvd.value_namespace = name_space;
        adminprohibrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeExcdSent")
    {
        timeexcdsent = value;
        timeexcdsent.value_namespace = name_space;
        timeexcdsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeExcdRcvd")
    {
        timeexcdrcvd = value;
        timeexcdrcvd.value_namespace = name_space;
        timeexcdrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parmPrblmSent")
    {
        parmprblmsent = value;
        parmprblmsent.value_namespace = name_space;
        parmprblmsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parmPrblmRcvd")
    {
        parmprblmrcvd = value;
        parmprblmrcvd.value_namespace = name_space;
        parmprblmrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoReqSent")
    {
        echoreqsent = value;
        echoreqsent.value_namespace = name_space;
        echoreqsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoReqRcvd")
    {
        echoreqrcvd = value;
        echoreqrcvd.value_namespace = name_space;
        echoreqrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRepSent")
    {
        echorepsent = value;
        echorepsent.value_namespace = name_space;
        echorepsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRepRcvd")
    {
        echoreprcvd = value;
        echoreprcvd.value_namespace = name_space;
        echoreprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirSent")
    {
        redirsent = value;
        redirsent.value_namespace = name_space;
        redirsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirRcvd")
    {
        redirrcvd = value;
        redirrcvd.value_namespace = name_space;
        redirrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tooBigSent")
    {
        toobigsent = value;
        toobigsent.value_namespace = name_space;
        toobigsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tooBigRcvd")
    {
        toobigrcvd = value;
        toobigrcvd.value_namespace = name_space;
        toobigrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raSent")
    {
        rasent = value;
        rasent.value_namespace = name_space;
        rasent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raRcvd")
    {
        rarcvd = value;
        rarcvd.value_namespace = name_space;
        rarcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsSent")
    {
        rssent = value;
        rssent.value_namespace = name_space;
        rssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsRcvd")
    {
        rsrcvd = value;
        rsrcvd.value_namespace = name_space;
        rsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "naSent")
    {
        nasent = value;
        nasent.value_namespace = name_space;
        nasent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "naRcvd")
    {
        narcvd = value;
        narcvd.value_namespace = name_space;
        narcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsSent")
    {
        nssent = value;
        nssent.value_namespace = name_space;
        nssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsRcvd")
    {
        nsrcvd = value;
        nsrcvd.value_namespace = name_space;
        nsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupRAReceived")
    {
        duprareceived = value;
        duprareceived.value_namespace = name_space;
        duprareceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastpthRcvd")
    {
        fastpthrcvd = value;
        fastpthrcvd.value_namespace = name_space;
        fastpthrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastpathDsbleIgnRcvd")
    {
        fastpathdsbleignrcvd = value;
        fastpathdsbleignrcvd.value_namespace = name_space;
        fastpathdsbleignrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastpathOtherIgnRcvd")
    {
        fastpathotherignrcvd = value;
        fastpathotherignrcvd.value_namespace = name_space;
        fastpathotherignrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1QueriesSent")
    {
        mldv1queriessent = value;
        mldv1queriessent.value_namespace = name_space;
        mldv1queriessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1QueriesRecv")
    {
        mldv1queriesrecv = value;
        mldv1queriesrecv.value_namespace = name_space;
        mldv1queriesrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2QueriesSent")
    {
        mldv2queriessent = value;
        mldv2queriessent.value_namespace = name_space;
        mldv2queriessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2QueriesRecv")
    {
        mldv2queriesrecv = value;
        mldv2queriesrecv.value_namespace = name_space;
        mldv2queriesrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1ReportsSent")
    {
        mldv1reportssent = value;
        mldv1reportssent.value_namespace = name_space;
        mldv1reportssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1ReportsRecv")
    {
        mldv1reportsrecv = value;
        mldv1reportsrecv.value_namespace = name_space;
        mldv1reportsrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2ReportsSent")
    {
        mldv2reportssent = value;
        mldv2reportssent.value_namespace = name_space;
        mldv2reportssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2ReportsRecv")
    {
        mldv2reportsrecv = value;
        mldv2reportsrecv.value_namespace = name_space;
        mldv2reportsrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1LeavesSent")
    {
        mldv1leavessent = value;
        mldv1leavessent.value_namespace = name_space;
        mldv1leavessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1LeavesRecv")
    {
        mldv1leavesrecv = value;
        mldv1leavesrecv.value_namespace = name_space;
        mldv1leavesrecv.value_namespace_prefix = name_space_prefix;
    }
}

void System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totSent")
    {
        totsent.yfilter = yfilter;
    }
    if(value_path == "totRvcd")
    {
        totrvcd.yfilter = yfilter;
    }
    if(value_path == "errSent")
    {
        errsent.yfilter = yfilter;
    }
    if(value_path == "errRcvd")
    {
        errrcvd.yfilter = yfilter;
    }
    if(value_path == "ifDownDropSent")
    {
        ifdowndropsent.yfilter = yfilter;
    }
    if(value_path == "ifDownDropRcvd")
    {
        ifdowndroprcvd.yfilter = yfilter;
    }
    if(value_path == "dropHaNotRdy")
    {
        drophanotrdy.yfilter = yfilter;
    }
    if(value_path == "dropInvldTtlMct")
    {
        dropinvldttlmct.yfilter = yfilter;
    }
    if(value_path == "dropSrcMacOwnRcvd")
    {
        dropsrcmacownrcvd.yfilter = yfilter;
    }
    if(value_path == "dropTgtIpNotOwnRcvd")
    {
        droptgtipnotownrcvd.yfilter = yfilter;
    }
    if(value_path == "dropSrcIpNotOwnRcvd")
    {
        dropsrcipnotownrcvd.yfilter = yfilter;
    }
    if(value_path == "destUnreachSent")
    {
        destunreachsent.yfilter = yfilter;
    }
    if(value_path == "destUnreachRcvd")
    {
        destunreachrcvd.yfilter = yfilter;
    }
    if(value_path == "adminProhibSent")
    {
        adminprohibsent.yfilter = yfilter;
    }
    if(value_path == "adminProhibRcvd")
    {
        adminprohibrcvd.yfilter = yfilter;
    }
    if(value_path == "timeExcdSent")
    {
        timeexcdsent.yfilter = yfilter;
    }
    if(value_path == "timeExcdRcvd")
    {
        timeexcdrcvd.yfilter = yfilter;
    }
    if(value_path == "parmPrblmSent")
    {
        parmprblmsent.yfilter = yfilter;
    }
    if(value_path == "parmPrblmRcvd")
    {
        parmprblmrcvd.yfilter = yfilter;
    }
    if(value_path == "echoReqSent")
    {
        echoreqsent.yfilter = yfilter;
    }
    if(value_path == "echoReqRcvd")
    {
        echoreqrcvd.yfilter = yfilter;
    }
    if(value_path == "echoRepSent")
    {
        echorepsent.yfilter = yfilter;
    }
    if(value_path == "echoRepRcvd")
    {
        echoreprcvd.yfilter = yfilter;
    }
    if(value_path == "redirSent")
    {
        redirsent.yfilter = yfilter;
    }
    if(value_path == "redirRcvd")
    {
        redirrcvd.yfilter = yfilter;
    }
    if(value_path == "tooBigSent")
    {
        toobigsent.yfilter = yfilter;
    }
    if(value_path == "tooBigRcvd")
    {
        toobigrcvd.yfilter = yfilter;
    }
    if(value_path == "raSent")
    {
        rasent.yfilter = yfilter;
    }
    if(value_path == "raRcvd")
    {
        rarcvd.yfilter = yfilter;
    }
    if(value_path == "rsSent")
    {
        rssent.yfilter = yfilter;
    }
    if(value_path == "rsRcvd")
    {
        rsrcvd.yfilter = yfilter;
    }
    if(value_path == "naSent")
    {
        nasent.yfilter = yfilter;
    }
    if(value_path == "naRcvd")
    {
        narcvd.yfilter = yfilter;
    }
    if(value_path == "nsSent")
    {
        nssent.yfilter = yfilter;
    }
    if(value_path == "nsRcvd")
    {
        nsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupRAReceived")
    {
        duprareceived.yfilter = yfilter;
    }
    if(value_path == "fastpthRcvd")
    {
        fastpthrcvd.yfilter = yfilter;
    }
    if(value_path == "fastpathDsbleIgnRcvd")
    {
        fastpathdsbleignrcvd.yfilter = yfilter;
    }
    if(value_path == "fastpathOtherIgnRcvd")
    {
        fastpathotherignrcvd.yfilter = yfilter;
    }
    if(value_path == "mldV1QueriesSent")
    {
        mldv1queriessent.yfilter = yfilter;
    }
    if(value_path == "mldV1QueriesRecv")
    {
        mldv1queriesrecv.yfilter = yfilter;
    }
    if(value_path == "mldV2QueriesSent")
    {
        mldv2queriessent.yfilter = yfilter;
    }
    if(value_path == "mldV2QueriesRecv")
    {
        mldv2queriesrecv.yfilter = yfilter;
    }
    if(value_path == "mldV1ReportsSent")
    {
        mldv1reportssent.yfilter = yfilter;
    }
    if(value_path == "mldV1ReportsRecv")
    {
        mldv1reportsrecv.yfilter = yfilter;
    }
    if(value_path == "mldV2ReportsSent")
    {
        mldv2reportssent.yfilter = yfilter;
    }
    if(value_path == "mldV2ReportsRecv")
    {
        mldv2reportsrecv.yfilter = yfilter;
    }
    if(value_path == "mldV1LeavesSent")
    {
        mldv1leavessent.yfilter = yfilter;
    }
    if(value_path == "mldV1LeavesRecv")
    {
        mldv1leavesrecv.yfilter = yfilter;
    }
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totSent" || name == "totRvcd" || name == "errSent" || name == "errRcvd" || name == "ifDownDropSent" || name == "ifDownDropRcvd" || name == "dropHaNotRdy" || name == "dropInvldTtlMct" || name == "dropSrcMacOwnRcvd" || name == "dropTgtIpNotOwnRcvd" || name == "dropSrcIpNotOwnRcvd" || name == "destUnreachSent" || name == "destUnreachRcvd" || name == "adminProhibSent" || name == "adminProhibRcvd" || name == "timeExcdSent" || name == "timeExcdRcvd" || name == "parmPrblmSent" || name == "parmPrblmRcvd" || name == "echoReqSent" || name == "echoReqRcvd" || name == "echoRepSent" || name == "echoRepRcvd" || name == "redirSent" || name == "redirRcvd" || name == "tooBigSent" || name == "tooBigRcvd" || name == "raSent" || name == "raRcvd" || name == "rsSent" || name == "rsRcvd" || name == "naSent" || name == "naRcvd" || name == "nsSent" || name == "nsRcvd" || name == "dupRAReceived" || name == "fastpthRcvd" || name == "fastpathDsbleIgnRcvd" || name == "fastpathOtherIgnRcvd" || name == "mldV1QueriesSent" || name == "mldV1QueriesRecv" || name == "mldV2QueriesSent" || name == "mldV2QueriesRecv" || name == "mldV1ReportsSent" || name == "mldV1ReportsRecv" || name == "mldV2ReportsSent" || name == "mldV2ReportsRecv" || name == "mldV1LeavesSent" || name == "mldV1LeavesRecv")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::LogsItems::LogsItems()
    :
    icmpv6eventlogs_list(this, {"eventtype"})
{

    yang_name = "logs-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv6Items::InstItems::LogsItems::~LogsItems()
{
}

bool System::Icmpv6Items::InstItems::LogsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<icmpv6eventlogs_list.len(); index++)
    {
        if(icmpv6eventlogs_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Icmpv6Items::InstItems::LogsItems::has_operation() const
{
    for (std::size_t index=0; index<icmpv6eventlogs_list.len(); index++)
    {
        if(icmpv6eventlogs_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Icmpv6Items::InstItems::LogsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icmpv6-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv6Items::InstItems::LogsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::LogsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv6Items::InstItems::LogsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ICMPv6EventLogs-list")
    {
        auto ent_ = std::make_shared<System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList>();
        ent_->parent = this;
        icmpv6eventlogs_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv6Items::InstItems::LogsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : icmpv6eventlogs_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Icmpv6Items::InstItems::LogsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Icmpv6Items::InstItems::LogsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Icmpv6Items::InstItems::LogsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ICMPv6EventLogs-list")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::ICMPv6EventLogsList()
    :
    eventtype{YType::enumeration, "eventType"},
    logsize{YType::enumeration, "logSize"}
{

    yang_name = "ICMPv6EventLogs-list"; yang_parent_name = "logs-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::~ICMPv6EventLogsList()
{
}

bool System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::has_data() const
{
    if (is_presence_container) return true;
    return eventtype.is_set
	|| logsize.is_set;
}

bool System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eventtype.yfilter)
	|| ydk::is_set(logsize.yfilter);
}

std::string System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icmpv6-items/inst-items/logs-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ICMPv6EventLogs-list";
    ADD_KEY_TOKEN(eventtype, "eventType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eventtype.is_set || is_set(eventtype.yfilter)) leaf_name_data.push_back(eventtype.get_name_leafdata());
    if (logsize.is_set || is_set(logsize.yfilter)) leaf_name_data.push_back(logsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eventType")
    {
        eventtype.yfilter = yfilter;
    }
    if(value_path == "logSize")
    {
        logsize.yfilter = yfilter;
    }
}

bool System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eventType" || name == "logSize")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::IfstatsItems::IfstatsItems()
    :
    totsent{YType::uint64, "totSent"},
    totrvcd{YType::uint64, "totRvcd"},
    errsent{YType::uint64, "errSent"},
    errrcvd{YType::uint64, "errRcvd"},
    ifdowndropsent{YType::uint64, "ifDownDropSent"},
    ifdowndroprcvd{YType::uint64, "ifDownDropRcvd"},
    drophanotrdy{YType::uint64, "dropHaNotRdy"},
    dropinvldttlmct{YType::uint64, "dropInvldTtlMct"},
    dropsrcmacownrcvd{YType::uint64, "dropSrcMacOwnRcvd"},
    droptgtipnotownrcvd{YType::uint64, "dropTgtIpNotOwnRcvd"},
    dropsrcipnotownrcvd{YType::uint64, "dropSrcIpNotOwnRcvd"},
    destunreachsent{YType::uint64, "destUnreachSent"},
    destunreachrcvd{YType::uint64, "destUnreachRcvd"},
    adminprohibsent{YType::uint64, "adminProhibSent"},
    adminprohibrcvd{YType::uint64, "adminProhibRcvd"},
    timeexcdsent{YType::uint64, "timeExcdSent"},
    timeexcdrcvd{YType::uint64, "timeExcdRcvd"},
    parmprblmsent{YType::uint64, "parmPrblmSent"},
    parmprblmrcvd{YType::uint64, "parmPrblmRcvd"},
    echoreqsent{YType::uint64, "echoReqSent"},
    echoreqrcvd{YType::uint64, "echoReqRcvd"},
    echorepsent{YType::uint64, "echoRepSent"},
    echoreprcvd{YType::uint64, "echoRepRcvd"},
    redirsent{YType::uint64, "redirSent"},
    redirrcvd{YType::uint64, "redirRcvd"},
    toobigsent{YType::uint64, "tooBigSent"},
    toobigrcvd{YType::uint64, "tooBigRcvd"},
    rasent{YType::uint64, "raSent"},
    rarcvd{YType::uint64, "raRcvd"},
    rssent{YType::uint64, "rsSent"},
    rsrcvd{YType::uint64, "rsRcvd"},
    nasent{YType::uint64, "naSent"},
    narcvd{YType::uint64, "naRcvd"},
    nssent{YType::uint64, "nsSent"},
    nsrcvd{YType::uint64, "nsRcvd"},
    duprareceived{YType::uint64, "dupRAReceived"},
    fastpthrcvd{YType::uint64, "fastpthRcvd"},
    fastpathdsbleignrcvd{YType::uint64, "fastpathDsbleIgnRcvd"},
    fastpathotherignrcvd{YType::uint64, "fastpathOtherIgnRcvd"},
    mldv1queriessent{YType::uint64, "mldV1QueriesSent"},
    mldv1queriesrecv{YType::uint64, "mldV1QueriesRecv"},
    mldv2queriessent{YType::uint64, "mldV2QueriesSent"},
    mldv2queriesrecv{YType::uint64, "mldV2QueriesRecv"},
    mldv1reportssent{YType::uint64, "mldV1ReportsSent"},
    mldv1reportsrecv{YType::uint64, "mldV1ReportsRecv"},
    mldv2reportssent{YType::uint64, "mldV2ReportsSent"},
    mldv2reportsrecv{YType::uint64, "mldV2ReportsRecv"},
    mldv1leavessent{YType::uint64, "mldV1LeavesSent"},
    mldv1leavesrecv{YType::uint64, "mldV1LeavesRecv"}
{

    yang_name = "ifstats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv6Items::InstItems::IfstatsItems::~IfstatsItems()
{
}

bool System::Icmpv6Items::InstItems::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return totsent.is_set
	|| totrvcd.is_set
	|| errsent.is_set
	|| errrcvd.is_set
	|| ifdowndropsent.is_set
	|| ifdowndroprcvd.is_set
	|| drophanotrdy.is_set
	|| dropinvldttlmct.is_set
	|| dropsrcmacownrcvd.is_set
	|| droptgtipnotownrcvd.is_set
	|| dropsrcipnotownrcvd.is_set
	|| destunreachsent.is_set
	|| destunreachrcvd.is_set
	|| adminprohibsent.is_set
	|| adminprohibrcvd.is_set
	|| timeexcdsent.is_set
	|| timeexcdrcvd.is_set
	|| parmprblmsent.is_set
	|| parmprblmrcvd.is_set
	|| echoreqsent.is_set
	|| echoreqrcvd.is_set
	|| echorepsent.is_set
	|| echoreprcvd.is_set
	|| redirsent.is_set
	|| redirrcvd.is_set
	|| toobigsent.is_set
	|| toobigrcvd.is_set
	|| rasent.is_set
	|| rarcvd.is_set
	|| rssent.is_set
	|| rsrcvd.is_set
	|| nasent.is_set
	|| narcvd.is_set
	|| nssent.is_set
	|| nsrcvd.is_set
	|| duprareceived.is_set
	|| fastpthrcvd.is_set
	|| fastpathdsbleignrcvd.is_set
	|| fastpathotherignrcvd.is_set
	|| mldv1queriessent.is_set
	|| mldv1queriesrecv.is_set
	|| mldv2queriessent.is_set
	|| mldv2queriesrecv.is_set
	|| mldv1reportssent.is_set
	|| mldv1reportsrecv.is_set
	|| mldv2reportssent.is_set
	|| mldv2reportsrecv.is_set
	|| mldv1leavessent.is_set
	|| mldv1leavesrecv.is_set;
}

bool System::Icmpv6Items::InstItems::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totsent.yfilter)
	|| ydk::is_set(totrvcd.yfilter)
	|| ydk::is_set(errsent.yfilter)
	|| ydk::is_set(errrcvd.yfilter)
	|| ydk::is_set(ifdowndropsent.yfilter)
	|| ydk::is_set(ifdowndroprcvd.yfilter)
	|| ydk::is_set(drophanotrdy.yfilter)
	|| ydk::is_set(dropinvldttlmct.yfilter)
	|| ydk::is_set(dropsrcmacownrcvd.yfilter)
	|| ydk::is_set(droptgtipnotownrcvd.yfilter)
	|| ydk::is_set(dropsrcipnotownrcvd.yfilter)
	|| ydk::is_set(destunreachsent.yfilter)
	|| ydk::is_set(destunreachrcvd.yfilter)
	|| ydk::is_set(adminprohibsent.yfilter)
	|| ydk::is_set(adminprohibrcvd.yfilter)
	|| ydk::is_set(timeexcdsent.yfilter)
	|| ydk::is_set(timeexcdrcvd.yfilter)
	|| ydk::is_set(parmprblmsent.yfilter)
	|| ydk::is_set(parmprblmrcvd.yfilter)
	|| ydk::is_set(echoreqsent.yfilter)
	|| ydk::is_set(echoreqrcvd.yfilter)
	|| ydk::is_set(echorepsent.yfilter)
	|| ydk::is_set(echoreprcvd.yfilter)
	|| ydk::is_set(redirsent.yfilter)
	|| ydk::is_set(redirrcvd.yfilter)
	|| ydk::is_set(toobigsent.yfilter)
	|| ydk::is_set(toobigrcvd.yfilter)
	|| ydk::is_set(rasent.yfilter)
	|| ydk::is_set(rarcvd.yfilter)
	|| ydk::is_set(rssent.yfilter)
	|| ydk::is_set(rsrcvd.yfilter)
	|| ydk::is_set(nasent.yfilter)
	|| ydk::is_set(narcvd.yfilter)
	|| ydk::is_set(nssent.yfilter)
	|| ydk::is_set(nsrcvd.yfilter)
	|| ydk::is_set(duprareceived.yfilter)
	|| ydk::is_set(fastpthrcvd.yfilter)
	|| ydk::is_set(fastpathdsbleignrcvd.yfilter)
	|| ydk::is_set(fastpathotherignrcvd.yfilter)
	|| ydk::is_set(mldv1queriessent.yfilter)
	|| ydk::is_set(mldv1queriesrecv.yfilter)
	|| ydk::is_set(mldv2queriessent.yfilter)
	|| ydk::is_set(mldv2queriesrecv.yfilter)
	|| ydk::is_set(mldv1reportssent.yfilter)
	|| ydk::is_set(mldv1reportsrecv.yfilter)
	|| ydk::is_set(mldv2reportssent.yfilter)
	|| ydk::is_set(mldv2reportsrecv.yfilter)
	|| ydk::is_set(mldv1leavessent.yfilter)
	|| ydk::is_set(mldv1leavesrecv.yfilter);
}

std::string System::Icmpv6Items::InstItems::IfstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icmpv6-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv6Items::InstItems::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (totsent.is_set || is_set(totsent.yfilter)) leaf_name_data.push_back(totsent.get_name_leafdata());
    if (totrvcd.is_set || is_set(totrvcd.yfilter)) leaf_name_data.push_back(totrvcd.get_name_leafdata());
    if (errsent.is_set || is_set(errsent.yfilter)) leaf_name_data.push_back(errsent.get_name_leafdata());
    if (errrcvd.is_set || is_set(errrcvd.yfilter)) leaf_name_data.push_back(errrcvd.get_name_leafdata());
    if (ifdowndropsent.is_set || is_set(ifdowndropsent.yfilter)) leaf_name_data.push_back(ifdowndropsent.get_name_leafdata());
    if (ifdowndroprcvd.is_set || is_set(ifdowndroprcvd.yfilter)) leaf_name_data.push_back(ifdowndroprcvd.get_name_leafdata());
    if (drophanotrdy.is_set || is_set(drophanotrdy.yfilter)) leaf_name_data.push_back(drophanotrdy.get_name_leafdata());
    if (dropinvldttlmct.is_set || is_set(dropinvldttlmct.yfilter)) leaf_name_data.push_back(dropinvldttlmct.get_name_leafdata());
    if (dropsrcmacownrcvd.is_set || is_set(dropsrcmacownrcvd.yfilter)) leaf_name_data.push_back(dropsrcmacownrcvd.get_name_leafdata());
    if (droptgtipnotownrcvd.is_set || is_set(droptgtipnotownrcvd.yfilter)) leaf_name_data.push_back(droptgtipnotownrcvd.get_name_leafdata());
    if (dropsrcipnotownrcvd.is_set || is_set(dropsrcipnotownrcvd.yfilter)) leaf_name_data.push_back(dropsrcipnotownrcvd.get_name_leafdata());
    if (destunreachsent.is_set || is_set(destunreachsent.yfilter)) leaf_name_data.push_back(destunreachsent.get_name_leafdata());
    if (destunreachrcvd.is_set || is_set(destunreachrcvd.yfilter)) leaf_name_data.push_back(destunreachrcvd.get_name_leafdata());
    if (adminprohibsent.is_set || is_set(adminprohibsent.yfilter)) leaf_name_data.push_back(adminprohibsent.get_name_leafdata());
    if (adminprohibrcvd.is_set || is_set(adminprohibrcvd.yfilter)) leaf_name_data.push_back(adminprohibrcvd.get_name_leafdata());
    if (timeexcdsent.is_set || is_set(timeexcdsent.yfilter)) leaf_name_data.push_back(timeexcdsent.get_name_leafdata());
    if (timeexcdrcvd.is_set || is_set(timeexcdrcvd.yfilter)) leaf_name_data.push_back(timeexcdrcvd.get_name_leafdata());
    if (parmprblmsent.is_set || is_set(parmprblmsent.yfilter)) leaf_name_data.push_back(parmprblmsent.get_name_leafdata());
    if (parmprblmrcvd.is_set || is_set(parmprblmrcvd.yfilter)) leaf_name_data.push_back(parmprblmrcvd.get_name_leafdata());
    if (echoreqsent.is_set || is_set(echoreqsent.yfilter)) leaf_name_data.push_back(echoreqsent.get_name_leafdata());
    if (echoreqrcvd.is_set || is_set(echoreqrcvd.yfilter)) leaf_name_data.push_back(echoreqrcvd.get_name_leafdata());
    if (echorepsent.is_set || is_set(echorepsent.yfilter)) leaf_name_data.push_back(echorepsent.get_name_leafdata());
    if (echoreprcvd.is_set || is_set(echoreprcvd.yfilter)) leaf_name_data.push_back(echoreprcvd.get_name_leafdata());
    if (redirsent.is_set || is_set(redirsent.yfilter)) leaf_name_data.push_back(redirsent.get_name_leafdata());
    if (redirrcvd.is_set || is_set(redirrcvd.yfilter)) leaf_name_data.push_back(redirrcvd.get_name_leafdata());
    if (toobigsent.is_set || is_set(toobigsent.yfilter)) leaf_name_data.push_back(toobigsent.get_name_leafdata());
    if (toobigrcvd.is_set || is_set(toobigrcvd.yfilter)) leaf_name_data.push_back(toobigrcvd.get_name_leafdata());
    if (rasent.is_set || is_set(rasent.yfilter)) leaf_name_data.push_back(rasent.get_name_leafdata());
    if (rarcvd.is_set || is_set(rarcvd.yfilter)) leaf_name_data.push_back(rarcvd.get_name_leafdata());
    if (rssent.is_set || is_set(rssent.yfilter)) leaf_name_data.push_back(rssent.get_name_leafdata());
    if (rsrcvd.is_set || is_set(rsrcvd.yfilter)) leaf_name_data.push_back(rsrcvd.get_name_leafdata());
    if (nasent.is_set || is_set(nasent.yfilter)) leaf_name_data.push_back(nasent.get_name_leafdata());
    if (narcvd.is_set || is_set(narcvd.yfilter)) leaf_name_data.push_back(narcvd.get_name_leafdata());
    if (nssent.is_set || is_set(nssent.yfilter)) leaf_name_data.push_back(nssent.get_name_leafdata());
    if (nsrcvd.is_set || is_set(nsrcvd.yfilter)) leaf_name_data.push_back(nsrcvd.get_name_leafdata());
    if (duprareceived.is_set || is_set(duprareceived.yfilter)) leaf_name_data.push_back(duprareceived.get_name_leafdata());
    if (fastpthrcvd.is_set || is_set(fastpthrcvd.yfilter)) leaf_name_data.push_back(fastpthrcvd.get_name_leafdata());
    if (fastpathdsbleignrcvd.is_set || is_set(fastpathdsbleignrcvd.yfilter)) leaf_name_data.push_back(fastpathdsbleignrcvd.get_name_leafdata());
    if (fastpathotherignrcvd.is_set || is_set(fastpathotherignrcvd.yfilter)) leaf_name_data.push_back(fastpathotherignrcvd.get_name_leafdata());
    if (mldv1queriessent.is_set || is_set(mldv1queriessent.yfilter)) leaf_name_data.push_back(mldv1queriessent.get_name_leafdata());
    if (mldv1queriesrecv.is_set || is_set(mldv1queriesrecv.yfilter)) leaf_name_data.push_back(mldv1queriesrecv.get_name_leafdata());
    if (mldv2queriessent.is_set || is_set(mldv2queriessent.yfilter)) leaf_name_data.push_back(mldv2queriessent.get_name_leafdata());
    if (mldv2queriesrecv.is_set || is_set(mldv2queriesrecv.yfilter)) leaf_name_data.push_back(mldv2queriesrecv.get_name_leafdata());
    if (mldv1reportssent.is_set || is_set(mldv1reportssent.yfilter)) leaf_name_data.push_back(mldv1reportssent.get_name_leafdata());
    if (mldv1reportsrecv.is_set || is_set(mldv1reportsrecv.yfilter)) leaf_name_data.push_back(mldv1reportsrecv.get_name_leafdata());
    if (mldv2reportssent.is_set || is_set(mldv2reportssent.yfilter)) leaf_name_data.push_back(mldv2reportssent.get_name_leafdata());
    if (mldv2reportsrecv.is_set || is_set(mldv2reportsrecv.yfilter)) leaf_name_data.push_back(mldv2reportsrecv.get_name_leafdata());
    if (mldv1leavessent.is_set || is_set(mldv1leavessent.yfilter)) leaf_name_data.push_back(mldv1leavessent.get_name_leafdata());
    if (mldv1leavesrecv.is_set || is_set(mldv1leavesrecv.yfilter)) leaf_name_data.push_back(mldv1leavesrecv.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Icmpv6Items::InstItems::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Icmpv6Items::InstItems::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Icmpv6Items::InstItems::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totSent")
    {
        totsent = value;
        totsent.value_namespace = name_space;
        totsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totRvcd")
    {
        totrvcd = value;
        totrvcd.value_namespace = name_space;
        totrvcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errSent")
    {
        errsent = value;
        errsent.value_namespace = name_space;
        errsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errRcvd")
    {
        errrcvd = value;
        errrcvd.value_namespace = name_space;
        errrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifDownDropSent")
    {
        ifdowndropsent = value;
        ifdowndropsent.value_namespace = name_space;
        ifdowndropsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifDownDropRcvd")
    {
        ifdowndroprcvd = value;
        ifdowndroprcvd.value_namespace = name_space;
        ifdowndroprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropHaNotRdy")
    {
        drophanotrdy = value;
        drophanotrdy.value_namespace = name_space;
        drophanotrdy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropInvldTtlMct")
    {
        dropinvldttlmct = value;
        dropinvldttlmct.value_namespace = name_space;
        dropinvldttlmct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropSrcMacOwnRcvd")
    {
        dropsrcmacownrcvd = value;
        dropsrcmacownrcvd.value_namespace = name_space;
        dropsrcmacownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropTgtIpNotOwnRcvd")
    {
        droptgtipnotownrcvd = value;
        droptgtipnotownrcvd.value_namespace = name_space;
        droptgtipnotownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropSrcIpNotOwnRcvd")
    {
        dropsrcipnotownrcvd = value;
        dropsrcipnotownrcvd.value_namespace = name_space;
        dropsrcipnotownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destUnreachSent")
    {
        destunreachsent = value;
        destunreachsent.value_namespace = name_space;
        destunreachsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destUnreachRcvd")
    {
        destunreachrcvd = value;
        destunreachrcvd.value_namespace = name_space;
        destunreachrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminProhibSent")
    {
        adminprohibsent = value;
        adminprohibsent.value_namespace = name_space;
        adminprohibsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminProhibRcvd")
    {
        adminprohibrcvd = value;
        adminprohibrcvd.value_namespace = name_space;
        adminprohibrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeExcdSent")
    {
        timeexcdsent = value;
        timeexcdsent.value_namespace = name_space;
        timeexcdsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeExcdRcvd")
    {
        timeexcdrcvd = value;
        timeexcdrcvd.value_namespace = name_space;
        timeexcdrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parmPrblmSent")
    {
        parmprblmsent = value;
        parmprblmsent.value_namespace = name_space;
        parmprblmsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parmPrblmRcvd")
    {
        parmprblmrcvd = value;
        parmprblmrcvd.value_namespace = name_space;
        parmprblmrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoReqSent")
    {
        echoreqsent = value;
        echoreqsent.value_namespace = name_space;
        echoreqsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoReqRcvd")
    {
        echoreqrcvd = value;
        echoreqrcvd.value_namespace = name_space;
        echoreqrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRepSent")
    {
        echorepsent = value;
        echorepsent.value_namespace = name_space;
        echorepsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRepRcvd")
    {
        echoreprcvd = value;
        echoreprcvd.value_namespace = name_space;
        echoreprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirSent")
    {
        redirsent = value;
        redirsent.value_namespace = name_space;
        redirsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirRcvd")
    {
        redirrcvd = value;
        redirrcvd.value_namespace = name_space;
        redirrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tooBigSent")
    {
        toobigsent = value;
        toobigsent.value_namespace = name_space;
        toobigsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tooBigRcvd")
    {
        toobigrcvd = value;
        toobigrcvd.value_namespace = name_space;
        toobigrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raSent")
    {
        rasent = value;
        rasent.value_namespace = name_space;
        rasent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raRcvd")
    {
        rarcvd = value;
        rarcvd.value_namespace = name_space;
        rarcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsSent")
    {
        rssent = value;
        rssent.value_namespace = name_space;
        rssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsRcvd")
    {
        rsrcvd = value;
        rsrcvd.value_namespace = name_space;
        rsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "naSent")
    {
        nasent = value;
        nasent.value_namespace = name_space;
        nasent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "naRcvd")
    {
        narcvd = value;
        narcvd.value_namespace = name_space;
        narcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsSent")
    {
        nssent = value;
        nssent.value_namespace = name_space;
        nssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsRcvd")
    {
        nsrcvd = value;
        nsrcvd.value_namespace = name_space;
        nsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupRAReceived")
    {
        duprareceived = value;
        duprareceived.value_namespace = name_space;
        duprareceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastpthRcvd")
    {
        fastpthrcvd = value;
        fastpthrcvd.value_namespace = name_space;
        fastpthrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastpathDsbleIgnRcvd")
    {
        fastpathdsbleignrcvd = value;
        fastpathdsbleignrcvd.value_namespace = name_space;
        fastpathdsbleignrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastpathOtherIgnRcvd")
    {
        fastpathotherignrcvd = value;
        fastpathotherignrcvd.value_namespace = name_space;
        fastpathotherignrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1QueriesSent")
    {
        mldv1queriessent = value;
        mldv1queriessent.value_namespace = name_space;
        mldv1queriessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1QueriesRecv")
    {
        mldv1queriesrecv = value;
        mldv1queriesrecv.value_namespace = name_space;
        mldv1queriesrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2QueriesSent")
    {
        mldv2queriessent = value;
        mldv2queriessent.value_namespace = name_space;
        mldv2queriessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2QueriesRecv")
    {
        mldv2queriesrecv = value;
        mldv2queriesrecv.value_namespace = name_space;
        mldv2queriesrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1ReportsSent")
    {
        mldv1reportssent = value;
        mldv1reportssent.value_namespace = name_space;
        mldv1reportssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1ReportsRecv")
    {
        mldv1reportsrecv = value;
        mldv1reportsrecv.value_namespace = name_space;
        mldv1reportsrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2ReportsSent")
    {
        mldv2reportssent = value;
        mldv2reportssent.value_namespace = name_space;
        mldv2reportssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2ReportsRecv")
    {
        mldv2reportsrecv = value;
        mldv2reportsrecv.value_namespace = name_space;
        mldv2reportsrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1LeavesSent")
    {
        mldv1leavessent = value;
        mldv1leavessent.value_namespace = name_space;
        mldv1leavessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1LeavesRecv")
    {
        mldv1leavesrecv = value;
        mldv1leavesrecv.value_namespace = name_space;
        mldv1leavesrecv.value_namespace_prefix = name_space_prefix;
    }
}

void System::Icmpv6Items::InstItems::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totSent")
    {
        totsent.yfilter = yfilter;
    }
    if(value_path == "totRvcd")
    {
        totrvcd.yfilter = yfilter;
    }
    if(value_path == "errSent")
    {
        errsent.yfilter = yfilter;
    }
    if(value_path == "errRcvd")
    {
        errrcvd.yfilter = yfilter;
    }
    if(value_path == "ifDownDropSent")
    {
        ifdowndropsent.yfilter = yfilter;
    }
    if(value_path == "ifDownDropRcvd")
    {
        ifdowndroprcvd.yfilter = yfilter;
    }
    if(value_path == "dropHaNotRdy")
    {
        drophanotrdy.yfilter = yfilter;
    }
    if(value_path == "dropInvldTtlMct")
    {
        dropinvldttlmct.yfilter = yfilter;
    }
    if(value_path == "dropSrcMacOwnRcvd")
    {
        dropsrcmacownrcvd.yfilter = yfilter;
    }
    if(value_path == "dropTgtIpNotOwnRcvd")
    {
        droptgtipnotownrcvd.yfilter = yfilter;
    }
    if(value_path == "dropSrcIpNotOwnRcvd")
    {
        dropsrcipnotownrcvd.yfilter = yfilter;
    }
    if(value_path == "destUnreachSent")
    {
        destunreachsent.yfilter = yfilter;
    }
    if(value_path == "destUnreachRcvd")
    {
        destunreachrcvd.yfilter = yfilter;
    }
    if(value_path == "adminProhibSent")
    {
        adminprohibsent.yfilter = yfilter;
    }
    if(value_path == "adminProhibRcvd")
    {
        adminprohibrcvd.yfilter = yfilter;
    }
    if(value_path == "timeExcdSent")
    {
        timeexcdsent.yfilter = yfilter;
    }
    if(value_path == "timeExcdRcvd")
    {
        timeexcdrcvd.yfilter = yfilter;
    }
    if(value_path == "parmPrblmSent")
    {
        parmprblmsent.yfilter = yfilter;
    }
    if(value_path == "parmPrblmRcvd")
    {
        parmprblmrcvd.yfilter = yfilter;
    }
    if(value_path == "echoReqSent")
    {
        echoreqsent.yfilter = yfilter;
    }
    if(value_path == "echoReqRcvd")
    {
        echoreqrcvd.yfilter = yfilter;
    }
    if(value_path == "echoRepSent")
    {
        echorepsent.yfilter = yfilter;
    }
    if(value_path == "echoRepRcvd")
    {
        echoreprcvd.yfilter = yfilter;
    }
    if(value_path == "redirSent")
    {
        redirsent.yfilter = yfilter;
    }
    if(value_path == "redirRcvd")
    {
        redirrcvd.yfilter = yfilter;
    }
    if(value_path == "tooBigSent")
    {
        toobigsent.yfilter = yfilter;
    }
    if(value_path == "tooBigRcvd")
    {
        toobigrcvd.yfilter = yfilter;
    }
    if(value_path == "raSent")
    {
        rasent.yfilter = yfilter;
    }
    if(value_path == "raRcvd")
    {
        rarcvd.yfilter = yfilter;
    }
    if(value_path == "rsSent")
    {
        rssent.yfilter = yfilter;
    }
    if(value_path == "rsRcvd")
    {
        rsrcvd.yfilter = yfilter;
    }
    if(value_path == "naSent")
    {
        nasent.yfilter = yfilter;
    }
    if(value_path == "naRcvd")
    {
        narcvd.yfilter = yfilter;
    }
    if(value_path == "nsSent")
    {
        nssent.yfilter = yfilter;
    }
    if(value_path == "nsRcvd")
    {
        nsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupRAReceived")
    {
        duprareceived.yfilter = yfilter;
    }
    if(value_path == "fastpthRcvd")
    {
        fastpthrcvd.yfilter = yfilter;
    }
    if(value_path == "fastpathDsbleIgnRcvd")
    {
        fastpathdsbleignrcvd.yfilter = yfilter;
    }
    if(value_path == "fastpathOtherIgnRcvd")
    {
        fastpathotherignrcvd.yfilter = yfilter;
    }
    if(value_path == "mldV1QueriesSent")
    {
        mldv1queriessent.yfilter = yfilter;
    }
    if(value_path == "mldV1QueriesRecv")
    {
        mldv1queriesrecv.yfilter = yfilter;
    }
    if(value_path == "mldV2QueriesSent")
    {
        mldv2queriessent.yfilter = yfilter;
    }
    if(value_path == "mldV2QueriesRecv")
    {
        mldv2queriesrecv.yfilter = yfilter;
    }
    if(value_path == "mldV1ReportsSent")
    {
        mldv1reportssent.yfilter = yfilter;
    }
    if(value_path == "mldV1ReportsRecv")
    {
        mldv1reportsrecv.yfilter = yfilter;
    }
    if(value_path == "mldV2ReportsSent")
    {
        mldv2reportssent.yfilter = yfilter;
    }
    if(value_path == "mldV2ReportsRecv")
    {
        mldv2reportsrecv.yfilter = yfilter;
    }
    if(value_path == "mldV1LeavesSent")
    {
        mldv1leavessent.yfilter = yfilter;
    }
    if(value_path == "mldV1LeavesRecv")
    {
        mldv1leavesrecv.yfilter = yfilter;
    }
}

bool System::Icmpv6Items::InstItems::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totSent" || name == "totRvcd" || name == "errSent" || name == "errRcvd" || name == "ifDownDropSent" || name == "ifDownDropRcvd" || name == "dropHaNotRdy" || name == "dropInvldTtlMct" || name == "dropSrcMacOwnRcvd" || name == "dropTgtIpNotOwnRcvd" || name == "dropSrcIpNotOwnRcvd" || name == "destUnreachSent" || name == "destUnreachRcvd" || name == "adminProhibSent" || name == "adminProhibRcvd" || name == "timeExcdSent" || name == "timeExcdRcvd" || name == "parmPrblmSent" || name == "parmPrblmRcvd" || name == "echoReqSent" || name == "echoReqRcvd" || name == "echoRepSent" || name == "echoRepRcvd" || name == "redirSent" || name == "redirRcvd" || name == "tooBigSent" || name == "tooBigRcvd" || name == "raSent" || name == "raRcvd" || name == "rsSent" || name == "rsRcvd" || name == "naSent" || name == "naRcvd" || name == "nsSent" || name == "nsRcvd" || name == "dupRAReceived" || name == "fastpthRcvd" || name == "fastpathDsbleIgnRcvd" || name == "fastpathOtherIgnRcvd" || name == "mldV1QueriesSent" || name == "mldV1QueriesRecv" || name == "mldV2QueriesSent" || name == "mldV2QueriesRecv" || name == "mldV1ReportsSent" || name == "mldV1ReportsRecv" || name == "mldV2ReportsSent" || name == "mldV2ReportsRecv" || name == "mldV1LeavesSent" || name == "mldV1LeavesRecv")
        return true;
    return false;
}

System::IgmpsnoopItems::IgmpsnoopItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::IgmpsnoopItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "igmpsnoop-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::~IgmpsnoopItems()
{
}

bool System::IgmpsnoopItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::IgmpsnoopItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::IgmpsnoopItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmpsnoop-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::IgmpsnoopItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::IgmpsnoopItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"},
    allrtrmcastencap{YType::str, "allRtrMcastEncap"},
    flags{YType::str, "flags"}
        ,
    dom_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems>())
    , inststats_items(std::make_shared<System::IgmpsnoopItems::InstItems::InststatsItems>())
{
    dom_items->parent = this;
    inststats_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "igmpsnoop-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::~InstItems()
{
}

bool System::IgmpsnoopItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| allrtrmcastencap.is_set
	|| flags.is_set
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (inststats_items !=  nullptr && inststats_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| ydk::is_set(allrtrmcastencap.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (inststats_items !=  nullptr && inststats_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());
    if (allrtrmcastencap.is_set || is_set(allrtrmcastencap.yfilter)) leaf_name_data.push_back(allrtrmcastencap.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "inststats-items")
    {
        if(inststats_items == nullptr)
        {
            inststats_items = std::make_shared<System::IgmpsnoopItems::InstItems::InststatsItems>();
        }
        return inststats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "allRtrMcastEncap")
    {
        allrtrmcastencap.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "inststats-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr" || name == "allRtrMcastEncap" || name == "flags")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DomItems()
    :
    opercfgrecovery{YType::boolean, "operCfgRecovery"},
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    encap{YType::str, "encap"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    flags{YType::str, "flags"},
    fwdmode{YType::enumeration, "fwdMode"},
    numrtrif{YType::uint32, "numRtrIf"},
    nummcgrp{YType::uint32, "numMcGrp"},
    numsrcgrp{YType::uint32, "numSrcGrp"},
    grpflushts{YType::str, "grpFlushTs"},
    nextqueryts{YType::str, "nextQueryTs"},
    nextqueryexpts{YType::str, "nextQueryExpTs"},
    mrtrepgid{YType::uint32, "mrtrEpgId"}
        ,
    db_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems>())
    , domstats_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems>())
    , strtrif_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems>())
    , rtrif_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::RtrifItems>())
    , vlan_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems>())
    , bd_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::BdItems>())
    , gl_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems>())
{
    db_items->parent = this;
    domstats_items->parent = this;
    strtrif_items->parent = this;
    rtrif_items->parent = this;
    vlan_items->parent = this;
    bd_items->parent = this;
    gl_items->parent = this;

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::~DomItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    return opercfgrecovery.is_set
	|| name.is_set
	|| id.is_set
	|| encap.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| flags.is_set
	|| fwdmode.is_set
	|| numrtrif.is_set
	|| nummcgrp.is_set
	|| numsrcgrp.is_set
	|| grpflushts.is_set
	|| nextqueryts.is_set
	|| nextqueryexpts.is_set
	|| mrtrepgid.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (domstats_items !=  nullptr && domstats_items->has_data())
	|| (strtrif_items !=  nullptr && strtrif_items->has_data())
	|| (rtrif_items !=  nullptr && rtrif_items->has_data())
	|| (vlan_items !=  nullptr && vlan_items->has_data())
	|| (bd_items !=  nullptr && bd_items->has_data())
	|| (gl_items !=  nullptr && gl_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opercfgrecovery.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(fwdmode.yfilter)
	|| ydk::is_set(numrtrif.yfilter)
	|| ydk::is_set(nummcgrp.yfilter)
	|| ydk::is_set(numsrcgrp.yfilter)
	|| ydk::is_set(grpflushts.yfilter)
	|| ydk::is_set(nextqueryts.yfilter)
	|| ydk::is_set(nextqueryexpts.yfilter)
	|| ydk::is_set(mrtrepgid.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (domstats_items !=  nullptr && domstats_items->has_operation())
	|| (strtrif_items !=  nullptr && strtrif_items->has_operation())
	|| (rtrif_items !=  nullptr && rtrif_items->has_operation())
	|| (vlan_items !=  nullptr && vlan_items->has_operation())
	|| (bd_items !=  nullptr && bd_items->has_operation())
	|| (gl_items !=  nullptr && gl_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opercfgrecovery.is_set || is_set(opercfgrecovery.yfilter)) leaf_name_data.push_back(opercfgrecovery.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (fwdmode.is_set || is_set(fwdmode.yfilter)) leaf_name_data.push_back(fwdmode.get_name_leafdata());
    if (numrtrif.is_set || is_set(numrtrif.yfilter)) leaf_name_data.push_back(numrtrif.get_name_leafdata());
    if (nummcgrp.is_set || is_set(nummcgrp.yfilter)) leaf_name_data.push_back(nummcgrp.get_name_leafdata());
    if (numsrcgrp.is_set || is_set(numsrcgrp.yfilter)) leaf_name_data.push_back(numsrcgrp.get_name_leafdata());
    if (grpflushts.is_set || is_set(grpflushts.yfilter)) leaf_name_data.push_back(grpflushts.get_name_leafdata());
    if (nextqueryts.is_set || is_set(nextqueryts.yfilter)) leaf_name_data.push_back(nextqueryts.get_name_leafdata());
    if (nextqueryexpts.is_set || is_set(nextqueryexpts.yfilter)) leaf_name_data.push_back(nextqueryexpts.get_name_leafdata());
    if (mrtrepgid.is_set || is_set(mrtrepgid.yfilter)) leaf_name_data.push_back(mrtrepgid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "domstats-items")
    {
        if(domstats_items == nullptr)
        {
            domstats_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems>();
        }
        return domstats_items;
    }

    if(child_yang_name == "strtrif-items")
    {
        if(strtrif_items == nullptr)
        {
            strtrif_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems>();
        }
        return strtrif_items;
    }

    if(child_yang_name == "rtrif-items")
    {
        if(rtrif_items == nullptr)
        {
            rtrif_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::RtrifItems>();
        }
        return rtrif_items;
    }

    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems>();
        }
        return vlan_items;
    }

    if(child_yang_name == "bd-items")
    {
        if(bd_items == nullptr)
        {
            bd_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::BdItems>();
        }
        return bd_items;
    }

    if(child_yang_name == "gl-items")
    {
        if(gl_items == nullptr)
        {
            gl_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems>();
        }
        return gl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::get_children() const
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

    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    if(bd_items != nullptr)
    {
        _children["bd-items"] = bd_items;
    }

    if(gl_items != nullptr)
    {
        _children["gl-items"] = gl_items;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operCfgRecovery")
    {
        opercfgrecovery = value;
        opercfgrecovery.value_namespace = name_space;
        opercfgrecovery.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "fwdMode")
    {
        fwdmode = value;
        fwdmode.value_namespace = name_space;
        fwdmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numRtrIf")
    {
        numrtrif = value;
        numrtrif.value_namespace = name_space;
        numrtrif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numMcGrp")
    {
        nummcgrp = value;
        nummcgrp.value_namespace = name_space;
        nummcgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numSrcGrp")
    {
        numsrcgrp = value;
        numsrcgrp.value_namespace = name_space;
        numsrcgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpFlushTs")
    {
        grpflushts = value;
        grpflushts.value_namespace = name_space;
        grpflushts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextQueryTs")
    {
        nextqueryts = value;
        nextqueryts.value_namespace = name_space;
        nextqueryts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextQueryExpTs")
    {
        nextqueryexpts = value;
        nextqueryexpts.value_namespace = name_space;
        nextqueryexpts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mrtrEpgId")
    {
        mrtrepgid = value;
        mrtrepgid.value_namespace = name_space;
        mrtrepgid.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operCfgRecovery")
    {
        opercfgrecovery.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
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
    if(value_path == "fwdMode")
    {
        fwdmode.yfilter = yfilter;
    }
    if(value_path == "numRtrIf")
    {
        numrtrif.yfilter = yfilter;
    }
    if(value_path == "numMcGrp")
    {
        nummcgrp.yfilter = yfilter;
    }
    if(value_path == "numSrcGrp")
    {
        numsrcgrp.yfilter = yfilter;
    }
    if(value_path == "grpFlushTs")
    {
        grpflushts.yfilter = yfilter;
    }
    if(value_path == "nextQueryTs")
    {
        nextqueryts.yfilter = yfilter;
    }
    if(value_path == "nextQueryExpTs")
    {
        nextqueryexpts.yfilter = yfilter;
    }
    if(value_path == "mrtrEpgId")
    {
        mrtrepgid.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "domstats-items" || name == "strtrif-items" || name == "rtrif-items" || name == "vlan-items" || name == "bd-items" || name == "gl-items" || name == "operCfgRecovery" || name == "name" || name == "id" || name == "encap" || name == "adminSt" || name == "ctrl" || name == "flags" || name == "fwdMode" || name == "numRtrIf" || name == "numMcGrp" || name == "numSrcGrp" || name == "grpFlushTs" || name == "nextQueryTs" || name == "nextQueryExpTs" || name == "mrtrEpgId")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::~DbItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"},
    totalmaccount{YType::uint32, "totalMacCount"}
        ,
    gsnoop_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems>())
    , vsnoop_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems>())
    , vlanrec_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems>())
    , mrouter_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems>())
    , exptrack_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems>())
    , vstats_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems>())
    , gstats_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems>())
    , policy_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems>())
    , group_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems>())
    , mcgrp_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems>())
    , querier_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems>())
{
    gsnoop_items->parent = this;
    vsnoop_items->parent = this;
    vlanrec_items->parent = this;
    mrouter_items->parent = this;
    exptrack_items->parent = this;
    vstats_items->parent = this;
    gstats_items->parent = this;
    policy_items->parent = this;
    group_items->parent = this;
    mcgrp_items->parent = this;
    querier_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::~DbList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| totalmaccount.is_set
	|| (gsnoop_items !=  nullptr && gsnoop_items->has_data())
	|| (vsnoop_items !=  nullptr && vsnoop_items->has_data())
	|| (vlanrec_items !=  nullptr && vlanrec_items->has_data())
	|| (mrouter_items !=  nullptr && mrouter_items->has_data())
	|| (exptrack_items !=  nullptr && exptrack_items->has_data())
	|| (vstats_items !=  nullptr && vstats_items->has_data())
	|| (gstats_items !=  nullptr && gstats_items->has_data())
	|| (policy_items !=  nullptr && policy_items->has_data())
	|| (group_items !=  nullptr && group_items->has_data())
	|| (mcgrp_items !=  nullptr && mcgrp_items->has_data())
	|| (querier_items !=  nullptr && querier_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(totalmaccount.yfilter)
	|| (gsnoop_items !=  nullptr && gsnoop_items->has_operation())
	|| (vsnoop_items !=  nullptr && vsnoop_items->has_operation())
	|| (vlanrec_items !=  nullptr && vlanrec_items->has_operation())
	|| (mrouter_items !=  nullptr && mrouter_items->has_operation())
	|| (exptrack_items !=  nullptr && exptrack_items->has_operation())
	|| (vstats_items !=  nullptr && vstats_items->has_operation())
	|| (gstats_items !=  nullptr && gstats_items->has_operation())
	|| (policy_items !=  nullptr && policy_items->has_operation())
	|| (group_items !=  nullptr && group_items->has_operation())
	|| (mcgrp_items !=  nullptr && mcgrp_items->has_operation())
	|| (querier_items !=  nullptr && querier_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/db-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (totalmaccount.is_set || is_set(totalmaccount.yfilter)) leaf_name_data.push_back(totalmaccount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gsnoop-items")
    {
        if(gsnoop_items == nullptr)
        {
            gsnoop_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems>();
        }
        return gsnoop_items;
    }

    if(child_yang_name == "vsnoop-items")
    {
        if(vsnoop_items == nullptr)
        {
            vsnoop_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems>();
        }
        return vsnoop_items;
    }

    if(child_yang_name == "vlanrec-items")
    {
        if(vlanrec_items == nullptr)
        {
            vlanrec_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems>();
        }
        return vlanrec_items;
    }

    if(child_yang_name == "mrouter-items")
    {
        if(mrouter_items == nullptr)
        {
            mrouter_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems>();
        }
        return mrouter_items;
    }

    if(child_yang_name == "expTrack-items")
    {
        if(exptrack_items == nullptr)
        {
            exptrack_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems>();
        }
        return exptrack_items;
    }

    if(child_yang_name == "vstats-items")
    {
        if(vstats_items == nullptr)
        {
            vstats_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems>();
        }
        return vstats_items;
    }

    if(child_yang_name == "gstats-items")
    {
        if(gstats_items == nullptr)
        {
            gstats_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems>();
        }
        return gstats_items;
    }

    if(child_yang_name == "policy-items")
    {
        if(policy_items == nullptr)
        {
            policy_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems>();
        }
        return policy_items;
    }

    if(child_yang_name == "group-items")
    {
        if(group_items == nullptr)
        {
            group_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems>();
        }
        return group_items;
    }

    if(child_yang_name == "mcgrp-items")
    {
        if(mcgrp_items == nullptr)
        {
            mcgrp_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems>();
        }
        return mcgrp_items;
    }

    if(child_yang_name == "querier-items")
    {
        if(querier_items == nullptr)
        {
            querier_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems>();
        }
        return querier_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gsnoop_items != nullptr)
    {
        _children["gsnoop-items"] = gsnoop_items;
    }

    if(vsnoop_items != nullptr)
    {
        _children["vsnoop-items"] = vsnoop_items;
    }

    if(vlanrec_items != nullptr)
    {
        _children["vlanrec-items"] = vlanrec_items;
    }

    if(mrouter_items != nullptr)
    {
        _children["mrouter-items"] = mrouter_items;
    }

    if(exptrack_items != nullptr)
    {
        _children["expTrack-items"] = exptrack_items;
    }

    if(vstats_items != nullptr)
    {
        _children["vstats-items"] = vstats_items;
    }

    if(gstats_items != nullptr)
    {
        _children["gstats-items"] = gstats_items;
    }

    if(policy_items != nullptr)
    {
        _children["policy-items"] = policy_items;
    }

    if(group_items != nullptr)
    {
        _children["group-items"] = group_items;
    }

    if(mcgrp_items != nullptr)
    {
        _children["mcgrp-items"] = mcgrp_items;
    }

    if(querier_items != nullptr)
    {
        _children["querier-items"] = querier_items;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gsnoop-items" || name == "vsnoop-items" || name == "vlanrec-items" || name == "mrouter-items" || name == "expTrack-items" || name == "vstats-items" || name == "gstats-items" || name == "policy-items" || name == "group-items" || name == "mcgrp-items" || name == "querier-items" || name == "type" || name == "name" || name == "totalMacCount")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::GsnoopItems()
    :
    name{YType::str, "name"},
    snooping{YType::boolean, "snooping"},
    omf{YType::boolean, "omf"},
    grepsup{YType::boolean, "grepsup"},
    gv3repsup{YType::boolean, "gv3repsup"},
    glinklocalgrpsup{YType::boolean, "glinklocalgrpsup"},
    grouptimeout{YType::uint32, "groupTimeout"},
    proxygeneralquery{YType::boolean, "proxyGeneralQuery"},
    gmaxresponsetime{YType::uint32, "gmaxResponseTime"}
{

    yang_name = "gsnoop-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::~GsnoopItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| snooping.is_set
	|| omf.is_set
	|| grepsup.is_set
	|| gv3repsup.is_set
	|| glinklocalgrpsup.is_set
	|| grouptimeout.is_set
	|| proxygeneralquery.is_set
	|| gmaxresponsetime.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(snooping.yfilter)
	|| ydk::is_set(omf.yfilter)
	|| ydk::is_set(grepsup.yfilter)
	|| ydk::is_set(gv3repsup.yfilter)
	|| ydk::is_set(glinklocalgrpsup.yfilter)
	|| ydk::is_set(grouptimeout.yfilter)
	|| ydk::is_set(proxygeneralquery.yfilter)
	|| ydk::is_set(gmaxresponsetime.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gsnoop-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (snooping.is_set || is_set(snooping.yfilter)) leaf_name_data.push_back(snooping.get_name_leafdata());
    if (omf.is_set || is_set(omf.yfilter)) leaf_name_data.push_back(omf.get_name_leafdata());
    if (grepsup.is_set || is_set(grepsup.yfilter)) leaf_name_data.push_back(grepsup.get_name_leafdata());
    if (gv3repsup.is_set || is_set(gv3repsup.yfilter)) leaf_name_data.push_back(gv3repsup.get_name_leafdata());
    if (glinklocalgrpsup.is_set || is_set(glinklocalgrpsup.yfilter)) leaf_name_data.push_back(glinklocalgrpsup.get_name_leafdata());
    if (grouptimeout.is_set || is_set(grouptimeout.yfilter)) leaf_name_data.push_back(grouptimeout.get_name_leafdata());
    if (proxygeneralquery.is_set || is_set(proxygeneralquery.yfilter)) leaf_name_data.push_back(proxygeneralquery.get_name_leafdata());
    if (gmaxresponsetime.is_set || is_set(gmaxresponsetime.yfilter)) leaf_name_data.push_back(gmaxresponsetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snooping")
    {
        snooping = value;
        snooping.value_namespace = name_space;
        snooping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "omf")
    {
        omf = value;
        omf.value_namespace = name_space;
        omf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grepsup")
    {
        grepsup = value;
        grepsup.value_namespace = name_space;
        grepsup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gv3repsup")
    {
        gv3repsup = value;
        gv3repsup.value_namespace = name_space;
        gv3repsup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "glinklocalgrpsup")
    {
        glinklocalgrpsup = value;
        glinklocalgrpsup.value_namespace = name_space;
        glinklocalgrpsup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupTimeout")
    {
        grouptimeout = value;
        grouptimeout.value_namespace = name_space;
        grouptimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxyGeneralQuery")
    {
        proxygeneralquery = value;
        proxygeneralquery.value_namespace = name_space;
        proxygeneralquery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmaxResponseTime")
    {
        gmaxresponsetime = value;
        gmaxresponsetime.value_namespace = name_space;
        gmaxresponsetime.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "snooping")
    {
        snooping.yfilter = yfilter;
    }
    if(value_path == "omf")
    {
        omf.yfilter = yfilter;
    }
    if(value_path == "grepsup")
    {
        grepsup.yfilter = yfilter;
    }
    if(value_path == "gv3repsup")
    {
        gv3repsup.yfilter = yfilter;
    }
    if(value_path == "glinklocalgrpsup")
    {
        glinklocalgrpsup.yfilter = yfilter;
    }
    if(value_path == "groupTimeout")
    {
        grouptimeout.yfilter = yfilter;
    }
    if(value_path == "proxyGeneralQuery")
    {
        proxygeneralquery.yfilter = yfilter;
    }
    if(value_path == "gmaxResponseTime")
    {
        gmaxresponsetime.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "snooping" || name == "omf" || name == "grepsup" || name == "gv3repsup" || name == "glinklocalgrpsup" || name == "groupTimeout" || name == "proxyGeneralQuery" || name == "gmaxResponseTime")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VsnoopItems()
    :
    vsnooprec_list(this, {"vlanid"})
{

    yang_name = "vsnoop-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::~VsnoopItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vsnooprec_list.len(); index++)
    {
        if(vsnooprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::has_operation() const
{
    for (std::size_t index=0; index<vsnooprec_list.len(); index++)
    {
        if(vsnooprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsnoop-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VSnoopRec-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList>();
        ent_->parent = this;
        vsnooprec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vsnooprec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VSnoopRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::VSnoopRecList()
    :
    vlanid{YType::uint32, "vlanid"},
    name{YType::str, "name"},
    lkpmode{YType::str, "lkpmode"},
    snoopon{YType::boolean, "snoopOn"},
    repsup{YType::boolean, "repsup"},
    v3repsup{YType::boolean, "v3repsup"},
    vlinklocalgrpsup{YType::boolean, "vlinklocalgrpsup"},
    omf_enabled{YType::boolean, "omf_enabled"},
    lastmbrintvl{YType::uint16, "lastMbrIntvl"},
    ver{YType::enumeration, "ver"},
    addr{YType::str, "addr"},
    queryintvl{YType::uint16, "queryIntvl"},
    robustfac{YType::uint8, "robustFac"},
    routeportcnt{YType::uint32, "routePortcnt"},
    groupcnt{YType::uint32, "groupcnt"},
    vpcfunction{YType::boolean, "vpcFunction"},
    fastleave{YType::boolean, "fastleave"}
{

    yang_name = "VSnoopRec-list"; yang_parent_name = "vsnoop-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::~VSnoopRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| name.is_set
	|| lkpmode.is_set
	|| snoopon.is_set
	|| repsup.is_set
	|| v3repsup.is_set
	|| vlinklocalgrpsup.is_set
	|| omf_enabled.is_set
	|| lastmbrintvl.is_set
	|| ver.is_set
	|| addr.is_set
	|| queryintvl.is_set
	|| robustfac.is_set
	|| routeportcnt.is_set
	|| groupcnt.is_set
	|| vpcfunction.is_set
	|| fastleave.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(lkpmode.yfilter)
	|| ydk::is_set(snoopon.yfilter)
	|| ydk::is_set(repsup.yfilter)
	|| ydk::is_set(v3repsup.yfilter)
	|| ydk::is_set(vlinklocalgrpsup.yfilter)
	|| ydk::is_set(omf_enabled.yfilter)
	|| ydk::is_set(lastmbrintvl.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(queryintvl.yfilter)
	|| ydk::is_set(robustfac.yfilter)
	|| ydk::is_set(routeportcnt.yfilter)
	|| ydk::is_set(groupcnt.yfilter)
	|| ydk::is_set(vpcfunction.yfilter)
	|| ydk::is_set(fastleave.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VSnoopRec-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (lkpmode.is_set || is_set(lkpmode.yfilter)) leaf_name_data.push_back(lkpmode.get_name_leafdata());
    if (snoopon.is_set || is_set(snoopon.yfilter)) leaf_name_data.push_back(snoopon.get_name_leafdata());
    if (repsup.is_set || is_set(repsup.yfilter)) leaf_name_data.push_back(repsup.get_name_leafdata());
    if (v3repsup.is_set || is_set(v3repsup.yfilter)) leaf_name_data.push_back(v3repsup.get_name_leafdata());
    if (vlinklocalgrpsup.is_set || is_set(vlinklocalgrpsup.yfilter)) leaf_name_data.push_back(vlinklocalgrpsup.get_name_leafdata());
    if (omf_enabled.is_set || is_set(omf_enabled.yfilter)) leaf_name_data.push_back(omf_enabled.get_name_leafdata());
    if (lastmbrintvl.is_set || is_set(lastmbrintvl.yfilter)) leaf_name_data.push_back(lastmbrintvl.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (queryintvl.is_set || is_set(queryintvl.yfilter)) leaf_name_data.push_back(queryintvl.get_name_leafdata());
    if (robustfac.is_set || is_set(robustfac.yfilter)) leaf_name_data.push_back(robustfac.get_name_leafdata());
    if (routeportcnt.is_set || is_set(routeportcnt.yfilter)) leaf_name_data.push_back(routeportcnt.get_name_leafdata());
    if (groupcnt.is_set || is_set(groupcnt.yfilter)) leaf_name_data.push_back(groupcnt.get_name_leafdata());
    if (vpcfunction.is_set || is_set(vpcfunction.yfilter)) leaf_name_data.push_back(vpcfunction.get_name_leafdata());
    if (fastleave.is_set || is_set(fastleave.yfilter)) leaf_name_data.push_back(fastleave.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanid")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lkpmode")
    {
        lkpmode = value;
        lkpmode.value_namespace = name_space;
        lkpmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snoopOn")
    {
        snoopon = value;
        snoopon.value_namespace = name_space;
        snoopon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repsup")
    {
        repsup = value;
        repsup.value_namespace = name_space;
        repsup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3repsup")
    {
        v3repsup = value;
        v3repsup.value_namespace = name_space;
        v3repsup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlinklocalgrpsup")
    {
        vlinklocalgrpsup = value;
        vlinklocalgrpsup.value_namespace = name_space;
        vlinklocalgrpsup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "omf_enabled")
    {
        omf_enabled = value;
        omf_enabled.value_namespace = name_space;
        omf_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastMbrIntvl")
    {
        lastmbrintvl = value;
        lastmbrintvl.value_namespace = name_space;
        lastmbrintvl.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "robustFac")
    {
        robustfac = value;
        robustfac.value_namespace = name_space;
        robustfac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routePortcnt")
    {
        routeportcnt = value;
        routeportcnt.value_namespace = name_space;
        routeportcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupcnt")
    {
        groupcnt = value;
        groupcnt.value_namespace = name_space;
        groupcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcFunction")
    {
        vpcfunction = value;
        vpcfunction.value_namespace = name_space;
        vpcfunction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastleave")
    {
        fastleave = value;
        fastleave.value_namespace = name_space;
        fastleave.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "lkpmode")
    {
        lkpmode.yfilter = yfilter;
    }
    if(value_path == "snoopOn")
    {
        snoopon.yfilter = yfilter;
    }
    if(value_path == "repsup")
    {
        repsup.yfilter = yfilter;
    }
    if(value_path == "v3repsup")
    {
        v3repsup.yfilter = yfilter;
    }
    if(value_path == "vlinklocalgrpsup")
    {
        vlinklocalgrpsup.yfilter = yfilter;
    }
    if(value_path == "omf_enabled")
    {
        omf_enabled.yfilter = yfilter;
    }
    if(value_path == "lastMbrIntvl")
    {
        lastmbrintvl.yfilter = yfilter;
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
    if(value_path == "robustFac")
    {
        robustfac.yfilter = yfilter;
    }
    if(value_path == "routePortcnt")
    {
        routeportcnt.yfilter = yfilter;
    }
    if(value_path == "groupcnt")
    {
        groupcnt.yfilter = yfilter;
    }
    if(value_path == "vpcFunction")
    {
        vpcfunction.yfilter = yfilter;
    }
    if(value_path == "fastleave")
    {
        fastleave.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanid" || name == "name" || name == "lkpmode" || name == "snoopOn" || name == "repsup" || name == "v3repsup" || name == "vlinklocalgrpsup" || name == "omf_enabled" || name == "lastMbrIntvl" || name == "ver" || name == "addr" || name == "queryIntvl" || name == "robustFac" || name == "routePortcnt" || name == "groupcnt" || name == "vpcFunction" || name == "fastleave")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanrecItems()
    :
    vlanrec_list(this, {"vlanid"})
{

    yang_name = "vlanrec-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::~VlanrecItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlanrec_list.len(); index++)
    {
        if(vlanrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::has_operation() const
{
    for (std::size_t index=0; index<vlanrec_list.len(); index++)
    {
        if(vlanrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanrec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanRec-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList>();
        ent_->parent = this;
        vlanrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlanrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::VlanRecList()
    :
    vlanid{YType::uint32, "vlanid"},
    maccount{YType::uint32, "macCount"}
        ,
    mac_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems>())
{
    mac_items->parent = this;

    yang_name = "VlanRec-list"; yang_parent_name = "vlanrec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::~VlanRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| maccount.is_set
	|| (mac_items !=  nullptr && mac_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(maccount.yfilter)
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanRec-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (maccount.is_set || is_set(maccount.yfilter)) leaf_name_data.push_back(maccount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_items != nullptr)
    {
        _children["mac-items"] = mac_items;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanid")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macCount")
    {
        maccount = value;
        maccount.value_namespace = name_space;
        maccount.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "macCount")
    {
        maccount.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-items" || name == "vlanid" || name == "macCount")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacItems()
    :
    macrec_list(this, {"macaddress"})
{

    yang_name = "mac-items"; yang_parent_name = "VlanRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::~MacItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macrec_list.len(); index++)
    {
        if(macrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macrec_list.len(); index++)
    {
        if(macrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacRec-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList>();
        ent_->parent = this;
        macrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::MacRecList()
    :
    macaddress{YType::str, "macAddress"},
    type{YType::enumeration, "type"},
    age{YType::uint32, "age"}
        ,
    oif_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "MacRec-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::~MacRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::has_data() const
{
    if (is_presence_container) return true;
    return macaddress.is_set
	|| type.is_set
	|| age.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddress.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(age.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacRec-list";
    ADD_KEY_TOKEN(macaddress, "macAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddress.is_set || is_set(macaddress.yfilter)) leaf_name_data.push_back(macaddress.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oif_items != nullptr)
    {
        _children["oif-items"] = oif_items;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macAddress")
    {
        macaddress = value;
        macaddress.value_namespace = name_space;
        macaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macAddress")
    {
        macaddress.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "macAddress" || name == "type" || name == "age")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::OifItems()
    :
    macoifrec_list(this, {"oif"})
{

    yang_name = "oif-items"; yang_parent_name = "MacRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::~OifItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macoifrec_list.len(); index++)
    {
        if(macoifrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<macoifrec_list.len(); index++)
    {
        if(macoifrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacOifRec-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::MacOifRecList>();
        ent_->parent = this;
        macoifrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macoifrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacOifRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::MacOifRecList::MacOifRecList()
    :
    oif{YType::str, "oif"}
{

    yang_name = "MacOifRec-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::MacOifRecList::~MacOifRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::MacOifRecList::has_data() const
{
    if (is_presence_container) return true;
    return oif.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::MacOifRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oif.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::MacOifRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacOifRec-list";
    ADD_KEY_TOKEN(oif, "oif");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::MacOifRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oif.is_set || is_set(oif.yfilter)) leaf_name_data.push_back(oif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::MacOifRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::MacOifRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::MacOifRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oif")
    {
        oif = value;
        oif.value_namespace = name_space;
        oif.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::MacOifRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oif")
    {
        oif.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::MacOifRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MrouterItems()
    :
    mrouterrec_list(this, {"vlanid", "interface"})
{

    yang_name = "mrouter-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::~MrouterItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mrouterrec_list.len(); index++)
    {
        if(mrouterrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::has_operation() const
{
    for (std::size_t index=0; index<mrouterrec_list.len(); index++)
    {
        if(mrouterrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrouter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MRouterRec-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList>();
        ent_->parent = this;
        mrouterrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mrouterrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MRouterRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::MRouterRecList()
    :
    vlanid{YType::uint32, "vlanid"},
    interface{YType::str, "interface"},
    type{YType::enumeration, "type"},
    uptime{YType::str, "uptime"},
    exptime{YType::str, "expTime"}
{

    yang_name = "MRouterRec-list"; yang_parent_name = "mrouter-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::~MRouterRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| interface.is_set
	|| type.is_set
	|| uptime.is_set
	|| exptime.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(exptime.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MRouterRec-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (exptime.is_set || is_set(exptime.yfilter)) leaf_name_data.push_back(exptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanid")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expTime")
    {
        exptime = value;
        exptime.value_namespace = name_space;
        exptime.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "expTime")
    {
        exptime.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanid" || name == "interface" || name == "type" || name == "uptime" || name == "expTime")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackItems()
    :
    exptrackrec_list(this, {"vlanid", "grpaddr", "srcaddr", "intf"})
{

    yang_name = "expTrack-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::~ExpTrackItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<exptrackrec_list.len(); index++)
    {
        if(exptrackrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::has_operation() const
{
    for (std::size_t index=0; index<exptrackrec_list.len(); index++)
    {
        if(exptrackrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expTrack-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExpTrackRec-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList>();
        ent_->parent = this;
        exptrackrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : exptrackrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExpTrackRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::ExpTrackRecList()
    :
    vlanid{YType::uint32, "vlanid"},
    grpaddr{YType::str, "grpAddr"},
    srcaddr{YType::str, "srcAddr"},
    intf{YType::str, "intf"},
    name{YType::str, "name"},
    reporter{YType::str, "reporter"},
    uptime{YType::str, "uptime"},
    lastjoin{YType::str, "lastJoin"},
    expires{YType::str, "expires"},
    version{YType::str, "version"},
    numreports{YType::uint32, "numReports"}
{

    yang_name = "ExpTrackRec-list"; yang_parent_name = "expTrack-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::~ExpTrackRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| grpaddr.is_set
	|| srcaddr.is_set
	|| intf.is_set
	|| name.is_set
	|| reporter.is_set
	|| uptime.is_set
	|| lastjoin.is_set
	|| expires.is_set
	|| version.is_set
	|| numreports.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(grpaddr.yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(reporter.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(lastjoin.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(numreports.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExpTrackRec-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    ADD_KEY_TOKEN(grpaddr, "grpAddr");
    ADD_KEY_TOKEN(srcaddr, "srcAddr");
    ADD_KEY_TOKEN(intf, "intf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (grpaddr.is_set || is_set(grpaddr.yfilter)) leaf_name_data.push_back(grpaddr.get_name_leafdata());
    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (reporter.is_set || is_set(reporter.yfilter)) leaf_name_data.push_back(reporter.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (lastjoin.is_set || is_set(lastjoin.yfilter)) leaf_name_data.push_back(lastjoin.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (numreports.is_set || is_set(numreports.yfilter)) leaf_name_data.push_back(numreports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanid")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpAddr")
    {
        grpaddr = value;
        grpaddr.value_namespace = name_space;
        grpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporter")
    {
        reporter = value;
        reporter.value_namespace = name_space;
        reporter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastJoin")
    {
        lastjoin = value;
        lastjoin.value_namespace = name_space;
        lastjoin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numReports")
    {
        numreports = value;
        numreports.value_namespace = name_space;
        numreports.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "grpAddr")
    {
        grpaddr.yfilter = yfilter;
    }
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "reporter")
    {
        reporter.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "lastJoin")
    {
        lastjoin.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "numReports")
    {
        numreports.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanid" || name == "grpAddr" || name == "srcAddr" || name == "intf" || name == "name" || name == "reporter" || name == "uptime" || name == "lastJoin" || name == "expires" || name == "version" || name == "numReports")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VstatsItems()
    :
    vlanstatsrec_list(this, {"vlanid"})
{

    yang_name = "vstats-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::~VstatsItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlanstatsrec_list.len(); index++)
    {
        if(vlanstatsrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::has_operation() const
{
    for (std::size_t index=0; index<vlanstatsrec_list.len(); index++)
    {
        if(vlanstatsrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanStatsRec-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList>();
        ent_->parent = this;
        vlanstatsrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlanstatsrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanStatsRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::VlanStatsRecList()
    :
    vlanid{YType::uint32, "vlanid"},
    uptime{YType::str, "uptime"},
    vpr{YType::uint32, "vpr"},
    v1rr{YType::uint32, "v1rr"},
    v2rr{YType::uint32, "v2rr"},
    v3rr{YType::uint32, "v3rr"},
    v3qr{YType::uint32, "v3qr"},
    v2lr{YType::uint32, "v2lr"},
    phr{YType::uint32, "phr"},
    irr{YType::uint32, "irr"},
    iqr{YType::uint32, "iqr"},
    v2ls{YType::uint32, "v2ls"},
    v3gs{YType::uint32, "v3gs"},
    vmr{YType::uint32, "vmr"},
    upr{YType::uint32, "upr"},
    qo{YType::uint32, "qo"},
    v2ro{YType::uint32, "v2ro"},
    v2lo{YType::uint32, "v2lo"},
    v3ro{YType::uint32, "v3ro"},
    vpsr{YType::uint32, "vpsr"},
    str{YType::uint32, "str"},
    cps{YType::uint32, "cps"},
    cpr{YType::uint32, "cpr"},
    cpe{YType::uint32, "cpe"},
    mps{YType::uint32, "mps"},
    mpr{YType::uint32, "mpr"},
    mpe{YType::uint32, "mpe"},
    v1qr{YType::uint32, "v1qr"},
    v2qr{YType::uint32, "v2qr"},
    v1rs{YType::uint32, "v1rs"},
    v2rs{YType::uint32, "v2rs"}
{

    yang_name = "VlanStatsRec-list"; yang_parent_name = "vstats-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::~VlanStatsRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| uptime.is_set
	|| vpr.is_set
	|| v1rr.is_set
	|| v2rr.is_set
	|| v3rr.is_set
	|| v3qr.is_set
	|| v2lr.is_set
	|| phr.is_set
	|| irr.is_set
	|| iqr.is_set
	|| v2ls.is_set
	|| v3gs.is_set
	|| vmr.is_set
	|| upr.is_set
	|| qo.is_set
	|| v2ro.is_set
	|| v2lo.is_set
	|| v3ro.is_set
	|| vpsr.is_set
	|| str.is_set
	|| cps.is_set
	|| cpr.is_set
	|| cpe.is_set
	|| mps.is_set
	|| mpr.is_set
	|| mpe.is_set
	|| v1qr.is_set
	|| v2qr.is_set
	|| v1rs.is_set
	|| v2rs.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(vpr.yfilter)
	|| ydk::is_set(v1rr.yfilter)
	|| ydk::is_set(v2rr.yfilter)
	|| ydk::is_set(v3rr.yfilter)
	|| ydk::is_set(v3qr.yfilter)
	|| ydk::is_set(v2lr.yfilter)
	|| ydk::is_set(phr.yfilter)
	|| ydk::is_set(irr.yfilter)
	|| ydk::is_set(iqr.yfilter)
	|| ydk::is_set(v2ls.yfilter)
	|| ydk::is_set(v3gs.yfilter)
	|| ydk::is_set(vmr.yfilter)
	|| ydk::is_set(upr.yfilter)
	|| ydk::is_set(qo.yfilter)
	|| ydk::is_set(v2ro.yfilter)
	|| ydk::is_set(v2lo.yfilter)
	|| ydk::is_set(v3ro.yfilter)
	|| ydk::is_set(vpsr.yfilter)
	|| ydk::is_set(str.yfilter)
	|| ydk::is_set(cps.yfilter)
	|| ydk::is_set(cpr.yfilter)
	|| ydk::is_set(cpe.yfilter)
	|| ydk::is_set(mps.yfilter)
	|| ydk::is_set(mpr.yfilter)
	|| ydk::is_set(mpe.yfilter)
	|| ydk::is_set(v1qr.yfilter)
	|| ydk::is_set(v2qr.yfilter)
	|| ydk::is_set(v1rs.yfilter)
	|| ydk::is_set(v2rs.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanStatsRec-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (vpr.is_set || is_set(vpr.yfilter)) leaf_name_data.push_back(vpr.get_name_leafdata());
    if (v1rr.is_set || is_set(v1rr.yfilter)) leaf_name_data.push_back(v1rr.get_name_leafdata());
    if (v2rr.is_set || is_set(v2rr.yfilter)) leaf_name_data.push_back(v2rr.get_name_leafdata());
    if (v3rr.is_set || is_set(v3rr.yfilter)) leaf_name_data.push_back(v3rr.get_name_leafdata());
    if (v3qr.is_set || is_set(v3qr.yfilter)) leaf_name_data.push_back(v3qr.get_name_leafdata());
    if (v2lr.is_set || is_set(v2lr.yfilter)) leaf_name_data.push_back(v2lr.get_name_leafdata());
    if (phr.is_set || is_set(phr.yfilter)) leaf_name_data.push_back(phr.get_name_leafdata());
    if (irr.is_set || is_set(irr.yfilter)) leaf_name_data.push_back(irr.get_name_leafdata());
    if (iqr.is_set || is_set(iqr.yfilter)) leaf_name_data.push_back(iqr.get_name_leafdata());
    if (v2ls.is_set || is_set(v2ls.yfilter)) leaf_name_data.push_back(v2ls.get_name_leafdata());
    if (v3gs.is_set || is_set(v3gs.yfilter)) leaf_name_data.push_back(v3gs.get_name_leafdata());
    if (vmr.is_set || is_set(vmr.yfilter)) leaf_name_data.push_back(vmr.get_name_leafdata());
    if (upr.is_set || is_set(upr.yfilter)) leaf_name_data.push_back(upr.get_name_leafdata());
    if (qo.is_set || is_set(qo.yfilter)) leaf_name_data.push_back(qo.get_name_leafdata());
    if (v2ro.is_set || is_set(v2ro.yfilter)) leaf_name_data.push_back(v2ro.get_name_leafdata());
    if (v2lo.is_set || is_set(v2lo.yfilter)) leaf_name_data.push_back(v2lo.get_name_leafdata());
    if (v3ro.is_set || is_set(v3ro.yfilter)) leaf_name_data.push_back(v3ro.get_name_leafdata());
    if (vpsr.is_set || is_set(vpsr.yfilter)) leaf_name_data.push_back(vpsr.get_name_leafdata());
    if (str.is_set || is_set(str.yfilter)) leaf_name_data.push_back(str.get_name_leafdata());
    if (cps.is_set || is_set(cps.yfilter)) leaf_name_data.push_back(cps.get_name_leafdata());
    if (cpr.is_set || is_set(cpr.yfilter)) leaf_name_data.push_back(cpr.get_name_leafdata());
    if (cpe.is_set || is_set(cpe.yfilter)) leaf_name_data.push_back(cpe.get_name_leafdata());
    if (mps.is_set || is_set(mps.yfilter)) leaf_name_data.push_back(mps.get_name_leafdata());
    if (mpr.is_set || is_set(mpr.yfilter)) leaf_name_data.push_back(mpr.get_name_leafdata());
    if (mpe.is_set || is_set(mpe.yfilter)) leaf_name_data.push_back(mpe.get_name_leafdata());
    if (v1qr.is_set || is_set(v1qr.yfilter)) leaf_name_data.push_back(v1qr.get_name_leafdata());
    if (v2qr.is_set || is_set(v2qr.yfilter)) leaf_name_data.push_back(v2qr.get_name_leafdata());
    if (v1rs.is_set || is_set(v1rs.yfilter)) leaf_name_data.push_back(v1rs.get_name_leafdata());
    if (v2rs.is_set || is_set(v2rs.yfilter)) leaf_name_data.push_back(v2rs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanid")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpr")
    {
        vpr = value;
        vpr.value_namespace = name_space;
        vpr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v1rr")
    {
        v1rr = value;
        v1rr.value_namespace = name_space;
        v1rr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2rr")
    {
        v2rr = value;
        v2rr.value_namespace = name_space;
        v2rr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3rr")
    {
        v3rr = value;
        v3rr.value_namespace = name_space;
        v3rr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3qr")
    {
        v3qr = value;
        v3qr.value_namespace = name_space;
        v3qr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2lr")
    {
        v2lr = value;
        v2lr.value_namespace = name_space;
        v2lr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phr")
    {
        phr = value;
        phr.value_namespace = name_space;
        phr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "irr")
    {
        irr = value;
        irr.value_namespace = name_space;
        irr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iqr")
    {
        iqr = value;
        iqr.value_namespace = name_space;
        iqr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2ls")
    {
        v2ls = value;
        v2ls.value_namespace = name_space;
        v2ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3gs")
    {
        v3gs = value;
        v3gs.value_namespace = name_space;
        v3gs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmr")
    {
        vmr = value;
        vmr.value_namespace = name_space;
        vmr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upr")
    {
        upr = value;
        upr.value_namespace = name_space;
        upr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qo")
    {
        qo = value;
        qo.value_namespace = name_space;
        qo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2ro")
    {
        v2ro = value;
        v2ro.value_namespace = name_space;
        v2ro.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2lo")
    {
        v2lo = value;
        v2lo.value_namespace = name_space;
        v2lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3ro")
    {
        v3ro = value;
        v3ro.value_namespace = name_space;
        v3ro.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpsr")
    {
        vpsr = value;
        vpsr.value_namespace = name_space;
        vpsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "str")
    {
        str = value;
        str.value_namespace = name_space;
        str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cps")
    {
        cps = value;
        cps.value_namespace = name_space;
        cps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpr")
    {
        cpr = value;
        cpr.value_namespace = name_space;
        cpr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpe")
    {
        cpe = value;
        cpe.value_namespace = name_space;
        cpe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mps")
    {
        mps = value;
        mps.value_namespace = name_space;
        mps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpr")
    {
        mpr = value;
        mpr.value_namespace = name_space;
        mpr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpe")
    {
        mpe = value;
        mpe.value_namespace = name_space;
        mpe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v1qr")
    {
        v1qr = value;
        v1qr.value_namespace = name_space;
        v1qr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2qr")
    {
        v2qr = value;
        v2qr.value_namespace = name_space;
        v2qr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v1rs")
    {
        v1rs = value;
        v1rs.value_namespace = name_space;
        v1rs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2rs")
    {
        v2rs = value;
        v2rs.value_namespace = name_space;
        v2rs.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "vpr")
    {
        vpr.yfilter = yfilter;
    }
    if(value_path == "v1rr")
    {
        v1rr.yfilter = yfilter;
    }
    if(value_path == "v2rr")
    {
        v2rr.yfilter = yfilter;
    }
    if(value_path == "v3rr")
    {
        v3rr.yfilter = yfilter;
    }
    if(value_path == "v3qr")
    {
        v3qr.yfilter = yfilter;
    }
    if(value_path == "v2lr")
    {
        v2lr.yfilter = yfilter;
    }
    if(value_path == "phr")
    {
        phr.yfilter = yfilter;
    }
    if(value_path == "irr")
    {
        irr.yfilter = yfilter;
    }
    if(value_path == "iqr")
    {
        iqr.yfilter = yfilter;
    }
    if(value_path == "v2ls")
    {
        v2ls.yfilter = yfilter;
    }
    if(value_path == "v3gs")
    {
        v3gs.yfilter = yfilter;
    }
    if(value_path == "vmr")
    {
        vmr.yfilter = yfilter;
    }
    if(value_path == "upr")
    {
        upr.yfilter = yfilter;
    }
    if(value_path == "qo")
    {
        qo.yfilter = yfilter;
    }
    if(value_path == "v2ro")
    {
        v2ro.yfilter = yfilter;
    }
    if(value_path == "v2lo")
    {
        v2lo.yfilter = yfilter;
    }
    if(value_path == "v3ro")
    {
        v3ro.yfilter = yfilter;
    }
    if(value_path == "vpsr")
    {
        vpsr.yfilter = yfilter;
    }
    if(value_path == "str")
    {
        str.yfilter = yfilter;
    }
    if(value_path == "cps")
    {
        cps.yfilter = yfilter;
    }
    if(value_path == "cpr")
    {
        cpr.yfilter = yfilter;
    }
    if(value_path == "cpe")
    {
        cpe.yfilter = yfilter;
    }
    if(value_path == "mps")
    {
        mps.yfilter = yfilter;
    }
    if(value_path == "mpr")
    {
        mpr.yfilter = yfilter;
    }
    if(value_path == "mpe")
    {
        mpe.yfilter = yfilter;
    }
    if(value_path == "v1qr")
    {
        v1qr.yfilter = yfilter;
    }
    if(value_path == "v2qr")
    {
        v2qr.yfilter = yfilter;
    }
    if(value_path == "v1rs")
    {
        v1rs.yfilter = yfilter;
    }
    if(value_path == "v2rs")
    {
        v2rs.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanid" || name == "uptime" || name == "vpr" || name == "v1rr" || name == "v2rr" || name == "v3rr" || name == "v3qr" || name == "v2lr" || name == "phr" || name == "irr" || name == "iqr" || name == "v2ls" || name == "v3gs" || name == "vmr" || name == "upr" || name == "qo" || name == "v2ro" || name == "v2lo" || name == "v3ro" || name == "vpsr" || name == "str" || name == "cps" || name == "cpr" || name == "cpe" || name == "mps" || name == "mpr" || name == "mpe" || name == "v1qr" || name == "v2qr" || name == "v1rs" || name == "v2rs")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::GstatsItems()
    :
    pr{YType::uint32, "pr"},
    invpkt{YType::uint32, "invPkt"},
    pnv{YType::uint32, "pnv"},
    loopbkpkt{YType::uint32, "loopBkPkt"},
    mrdloopbk{YType::uint32, "mrdLoopBk"},
    pf{YType::uint32, "pf"},
    vpcdrqs{YType::uint32, "vpcDrQs"},
    vpcdrqr{YType::uint32, "vpcDrQr"},
    vpcdrqf{YType::uint32, "vpcDrQf"},
    vpcdrus{YType::uint32, "vpcDrUs"},
    vpcdrur{YType::uint32, "vpcDrUr"},
    vpcdruf{YType::uint32, "vpcDrUf"},
    vpccfssf{YType::uint32, "vpcCfsSf"},
    vpccfsrs{YType::uint32, "vpcCfsRs"},
    vpccfsrr{YType::uint32, "vpcCfsRr"},
    vpccfsrf{YType::uint32, "vpcCfsRf"},
    vpccfsrfp{YType::uint32, "vpcCfsRfp"},
    vpccfsurls{YType::uint32, "vpcCfsUrls"},
    vpccfsurr{YType::uint32, "vpcCfsUrR"},
    vpccfscrlf{YType::uint32, "vpcCfsCrlF"},
    vpccfsrls{YType::uint32, "vpccfsrls"},
    vpccfsrlr{YType::uint32, "vpccfsrlr"},
    vpccfsrlf{YType::uint32, "vpccfsrlf"},
    inviod{YType::uint32, "invIod"},
    stptcnr{YType::uint32, "stptcnr"},
    imapif{YType::uint32, "imapif"},
    mfreqr{YType::uint32, "mfreqr"},
    mfcmps{YType::uint32, "mfcmps"},
    mfdgcmps{YType::uint32, "mfdgcmps"},
    bufsnt{YType::uint32, "bufsnt"},
    bufackr{YType::uint32, "bufackr"},
    vpcmismatch{YType::uint32, "vpcmismatch"}
{

    yang_name = "gstats-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::~GstatsItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return pr.is_set
	|| invpkt.is_set
	|| pnv.is_set
	|| loopbkpkt.is_set
	|| mrdloopbk.is_set
	|| pf.is_set
	|| vpcdrqs.is_set
	|| vpcdrqr.is_set
	|| vpcdrqf.is_set
	|| vpcdrus.is_set
	|| vpcdrur.is_set
	|| vpcdruf.is_set
	|| vpccfssf.is_set
	|| vpccfsrs.is_set
	|| vpccfsrr.is_set
	|| vpccfsrf.is_set
	|| vpccfsrfp.is_set
	|| vpccfsurls.is_set
	|| vpccfsurr.is_set
	|| vpccfscrlf.is_set
	|| vpccfsrls.is_set
	|| vpccfsrlr.is_set
	|| vpccfsrlf.is_set
	|| inviod.is_set
	|| stptcnr.is_set
	|| imapif.is_set
	|| mfreqr.is_set
	|| mfcmps.is_set
	|| mfdgcmps.is_set
	|| bufsnt.is_set
	|| bufackr.is_set
	|| vpcmismatch.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pr.yfilter)
	|| ydk::is_set(invpkt.yfilter)
	|| ydk::is_set(pnv.yfilter)
	|| ydk::is_set(loopbkpkt.yfilter)
	|| ydk::is_set(mrdloopbk.yfilter)
	|| ydk::is_set(pf.yfilter)
	|| ydk::is_set(vpcdrqs.yfilter)
	|| ydk::is_set(vpcdrqr.yfilter)
	|| ydk::is_set(vpcdrqf.yfilter)
	|| ydk::is_set(vpcdrus.yfilter)
	|| ydk::is_set(vpcdrur.yfilter)
	|| ydk::is_set(vpcdruf.yfilter)
	|| ydk::is_set(vpccfssf.yfilter)
	|| ydk::is_set(vpccfsrs.yfilter)
	|| ydk::is_set(vpccfsrr.yfilter)
	|| ydk::is_set(vpccfsrf.yfilter)
	|| ydk::is_set(vpccfsrfp.yfilter)
	|| ydk::is_set(vpccfsurls.yfilter)
	|| ydk::is_set(vpccfsurr.yfilter)
	|| ydk::is_set(vpccfscrlf.yfilter)
	|| ydk::is_set(vpccfsrls.yfilter)
	|| ydk::is_set(vpccfsrlr.yfilter)
	|| ydk::is_set(vpccfsrlf.yfilter)
	|| ydk::is_set(inviod.yfilter)
	|| ydk::is_set(stptcnr.yfilter)
	|| ydk::is_set(imapif.yfilter)
	|| ydk::is_set(mfreqr.yfilter)
	|| ydk::is_set(mfcmps.yfilter)
	|| ydk::is_set(mfdgcmps.yfilter)
	|| ydk::is_set(bufsnt.yfilter)
	|| ydk::is_set(bufackr.yfilter)
	|| ydk::is_set(vpcmismatch.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pr.is_set || is_set(pr.yfilter)) leaf_name_data.push_back(pr.get_name_leafdata());
    if (invpkt.is_set || is_set(invpkt.yfilter)) leaf_name_data.push_back(invpkt.get_name_leafdata());
    if (pnv.is_set || is_set(pnv.yfilter)) leaf_name_data.push_back(pnv.get_name_leafdata());
    if (loopbkpkt.is_set || is_set(loopbkpkt.yfilter)) leaf_name_data.push_back(loopbkpkt.get_name_leafdata());
    if (mrdloopbk.is_set || is_set(mrdloopbk.yfilter)) leaf_name_data.push_back(mrdloopbk.get_name_leafdata());
    if (pf.is_set || is_set(pf.yfilter)) leaf_name_data.push_back(pf.get_name_leafdata());
    if (vpcdrqs.is_set || is_set(vpcdrqs.yfilter)) leaf_name_data.push_back(vpcdrqs.get_name_leafdata());
    if (vpcdrqr.is_set || is_set(vpcdrqr.yfilter)) leaf_name_data.push_back(vpcdrqr.get_name_leafdata());
    if (vpcdrqf.is_set || is_set(vpcdrqf.yfilter)) leaf_name_data.push_back(vpcdrqf.get_name_leafdata());
    if (vpcdrus.is_set || is_set(vpcdrus.yfilter)) leaf_name_data.push_back(vpcdrus.get_name_leafdata());
    if (vpcdrur.is_set || is_set(vpcdrur.yfilter)) leaf_name_data.push_back(vpcdrur.get_name_leafdata());
    if (vpcdruf.is_set || is_set(vpcdruf.yfilter)) leaf_name_data.push_back(vpcdruf.get_name_leafdata());
    if (vpccfssf.is_set || is_set(vpccfssf.yfilter)) leaf_name_data.push_back(vpccfssf.get_name_leafdata());
    if (vpccfsrs.is_set || is_set(vpccfsrs.yfilter)) leaf_name_data.push_back(vpccfsrs.get_name_leafdata());
    if (vpccfsrr.is_set || is_set(vpccfsrr.yfilter)) leaf_name_data.push_back(vpccfsrr.get_name_leafdata());
    if (vpccfsrf.is_set || is_set(vpccfsrf.yfilter)) leaf_name_data.push_back(vpccfsrf.get_name_leafdata());
    if (vpccfsrfp.is_set || is_set(vpccfsrfp.yfilter)) leaf_name_data.push_back(vpccfsrfp.get_name_leafdata());
    if (vpccfsurls.is_set || is_set(vpccfsurls.yfilter)) leaf_name_data.push_back(vpccfsurls.get_name_leafdata());
    if (vpccfsurr.is_set || is_set(vpccfsurr.yfilter)) leaf_name_data.push_back(vpccfsurr.get_name_leafdata());
    if (vpccfscrlf.is_set || is_set(vpccfscrlf.yfilter)) leaf_name_data.push_back(vpccfscrlf.get_name_leafdata());
    if (vpccfsrls.is_set || is_set(vpccfsrls.yfilter)) leaf_name_data.push_back(vpccfsrls.get_name_leafdata());
    if (vpccfsrlr.is_set || is_set(vpccfsrlr.yfilter)) leaf_name_data.push_back(vpccfsrlr.get_name_leafdata());
    if (vpccfsrlf.is_set || is_set(vpccfsrlf.yfilter)) leaf_name_data.push_back(vpccfsrlf.get_name_leafdata());
    if (inviod.is_set || is_set(inviod.yfilter)) leaf_name_data.push_back(inviod.get_name_leafdata());
    if (stptcnr.is_set || is_set(stptcnr.yfilter)) leaf_name_data.push_back(stptcnr.get_name_leafdata());
    if (imapif.is_set || is_set(imapif.yfilter)) leaf_name_data.push_back(imapif.get_name_leafdata());
    if (mfreqr.is_set || is_set(mfreqr.yfilter)) leaf_name_data.push_back(mfreqr.get_name_leafdata());
    if (mfcmps.is_set || is_set(mfcmps.yfilter)) leaf_name_data.push_back(mfcmps.get_name_leafdata());
    if (mfdgcmps.is_set || is_set(mfdgcmps.yfilter)) leaf_name_data.push_back(mfdgcmps.get_name_leafdata());
    if (bufsnt.is_set || is_set(bufsnt.yfilter)) leaf_name_data.push_back(bufsnt.get_name_leafdata());
    if (bufackr.is_set || is_set(bufackr.yfilter)) leaf_name_data.push_back(bufackr.get_name_leafdata());
    if (vpcmismatch.is_set || is_set(vpcmismatch.yfilter)) leaf_name_data.push_back(vpcmismatch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pr")
    {
        pr = value;
        pr.value_namespace = name_space;
        pr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invPkt")
    {
        invpkt = value;
        invpkt.value_namespace = name_space;
        invpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pnv")
    {
        pnv = value;
        pnv.value_namespace = name_space;
        pnv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopBkPkt")
    {
        loopbkpkt = value;
        loopbkpkt.value_namespace = name_space;
        loopbkpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mrdLoopBk")
    {
        mrdloopbk = value;
        mrdloopbk.value_namespace = name_space;
        mrdloopbk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pf")
    {
        pf = value;
        pf.value_namespace = name_space;
        pf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcDrQs")
    {
        vpcdrqs = value;
        vpcdrqs.value_namespace = name_space;
        vpcdrqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcDrQr")
    {
        vpcdrqr = value;
        vpcdrqr.value_namespace = name_space;
        vpcdrqr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcDrQf")
    {
        vpcdrqf = value;
        vpcdrqf.value_namespace = name_space;
        vpcdrqf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcDrUs")
    {
        vpcdrus = value;
        vpcdrus.value_namespace = name_space;
        vpcdrus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcDrUr")
    {
        vpcdrur = value;
        vpcdrur.value_namespace = name_space;
        vpcdrur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcDrUf")
    {
        vpcdruf = value;
        vpcdruf.value_namespace = name_space;
        vpcdruf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcCfsSf")
    {
        vpccfssf = value;
        vpccfssf.value_namespace = name_space;
        vpccfssf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcCfsRs")
    {
        vpccfsrs = value;
        vpccfsrs.value_namespace = name_space;
        vpccfsrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcCfsRr")
    {
        vpccfsrr = value;
        vpccfsrr.value_namespace = name_space;
        vpccfsrr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcCfsRf")
    {
        vpccfsrf = value;
        vpccfsrf.value_namespace = name_space;
        vpccfsrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcCfsRfp")
    {
        vpccfsrfp = value;
        vpccfsrfp.value_namespace = name_space;
        vpccfsrfp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcCfsUrls")
    {
        vpccfsurls = value;
        vpccfsurls.value_namespace = name_space;
        vpccfsurls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcCfsUrR")
    {
        vpccfsurr = value;
        vpccfsurr.value_namespace = name_space;
        vpccfsurr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcCfsCrlF")
    {
        vpccfscrlf = value;
        vpccfscrlf.value_namespace = name_space;
        vpccfscrlf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpccfsrls")
    {
        vpccfsrls = value;
        vpccfsrls.value_namespace = name_space;
        vpccfsrls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpccfsrlr")
    {
        vpccfsrlr = value;
        vpccfsrlr.value_namespace = name_space;
        vpccfsrlr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpccfsrlf")
    {
        vpccfsrlf = value;
        vpccfsrlf.value_namespace = name_space;
        vpccfsrlf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invIod")
    {
        inviod = value;
        inviod.value_namespace = name_space;
        inviod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stptcnr")
    {
        stptcnr = value;
        stptcnr.value_namespace = name_space;
        stptcnr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imapif")
    {
        imapif = value;
        imapif.value_namespace = name_space;
        imapif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfreqr")
    {
        mfreqr = value;
        mfreqr.value_namespace = name_space;
        mfreqr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfcmps")
    {
        mfcmps = value;
        mfcmps.value_namespace = name_space;
        mfcmps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfdgcmps")
    {
        mfdgcmps = value;
        mfdgcmps.value_namespace = name_space;
        mfdgcmps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufsnt")
    {
        bufsnt = value;
        bufsnt.value_namespace = name_space;
        bufsnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufackr")
    {
        bufackr = value;
        bufackr.value_namespace = name_space;
        bufackr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcmismatch")
    {
        vpcmismatch = value;
        vpcmismatch.value_namespace = name_space;
        vpcmismatch.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pr")
    {
        pr.yfilter = yfilter;
    }
    if(value_path == "invPkt")
    {
        invpkt.yfilter = yfilter;
    }
    if(value_path == "pnv")
    {
        pnv.yfilter = yfilter;
    }
    if(value_path == "loopBkPkt")
    {
        loopbkpkt.yfilter = yfilter;
    }
    if(value_path == "mrdLoopBk")
    {
        mrdloopbk.yfilter = yfilter;
    }
    if(value_path == "pf")
    {
        pf.yfilter = yfilter;
    }
    if(value_path == "vpcDrQs")
    {
        vpcdrqs.yfilter = yfilter;
    }
    if(value_path == "vpcDrQr")
    {
        vpcdrqr.yfilter = yfilter;
    }
    if(value_path == "vpcDrQf")
    {
        vpcdrqf.yfilter = yfilter;
    }
    if(value_path == "vpcDrUs")
    {
        vpcdrus.yfilter = yfilter;
    }
    if(value_path == "vpcDrUr")
    {
        vpcdrur.yfilter = yfilter;
    }
    if(value_path == "vpcDrUf")
    {
        vpcdruf.yfilter = yfilter;
    }
    if(value_path == "vpcCfsSf")
    {
        vpccfssf.yfilter = yfilter;
    }
    if(value_path == "vpcCfsRs")
    {
        vpccfsrs.yfilter = yfilter;
    }
    if(value_path == "vpcCfsRr")
    {
        vpccfsrr.yfilter = yfilter;
    }
    if(value_path == "vpcCfsRf")
    {
        vpccfsrf.yfilter = yfilter;
    }
    if(value_path == "vpcCfsRfp")
    {
        vpccfsrfp.yfilter = yfilter;
    }
    if(value_path == "vpcCfsUrls")
    {
        vpccfsurls.yfilter = yfilter;
    }
    if(value_path == "vpcCfsUrR")
    {
        vpccfsurr.yfilter = yfilter;
    }
    if(value_path == "vpcCfsCrlF")
    {
        vpccfscrlf.yfilter = yfilter;
    }
    if(value_path == "vpccfsrls")
    {
        vpccfsrls.yfilter = yfilter;
    }
    if(value_path == "vpccfsrlr")
    {
        vpccfsrlr.yfilter = yfilter;
    }
    if(value_path == "vpccfsrlf")
    {
        vpccfsrlf.yfilter = yfilter;
    }
    if(value_path == "invIod")
    {
        inviod.yfilter = yfilter;
    }
    if(value_path == "stptcnr")
    {
        stptcnr.yfilter = yfilter;
    }
    if(value_path == "imapif")
    {
        imapif.yfilter = yfilter;
    }
    if(value_path == "mfreqr")
    {
        mfreqr.yfilter = yfilter;
    }
    if(value_path == "mfcmps")
    {
        mfcmps.yfilter = yfilter;
    }
    if(value_path == "mfdgcmps")
    {
        mfdgcmps.yfilter = yfilter;
    }
    if(value_path == "bufsnt")
    {
        bufsnt.yfilter = yfilter;
    }
    if(value_path == "bufackr")
    {
        bufackr.yfilter = yfilter;
    }
    if(value_path == "vpcmismatch")
    {
        vpcmismatch.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pr" || name == "invPkt" || name == "pnv" || name == "loopBkPkt" || name == "mrdLoopBk" || name == "pf" || name == "vpcDrQs" || name == "vpcDrQr" || name == "vpcDrQf" || name == "vpcDrUs" || name == "vpcDrUr" || name == "vpcDrUf" || name == "vpcCfsSf" || name == "vpcCfsRs" || name == "vpcCfsRr" || name == "vpcCfsRf" || name == "vpcCfsRfp" || name == "vpcCfsUrls" || name == "vpcCfsUrR" || name == "vpcCfsCrlF" || name == "vpccfsrls" || name == "vpccfsrlr" || name == "vpccfsrlf" || name == "invIod" || name == "stptcnr" || name == "imapif" || name == "mfreqr" || name == "mfcmps" || name == "mfdgcmps" || name == "bufsnt" || name == "bufackr" || name == "vpcmismatch")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::PolicyItems()
    :
    reportpolicystats_list(this, {"vlanid", "qcount"})
{

    yang_name = "policy-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::~PolicyItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reportpolicystats_list.len(); index++)
    {
        if(reportpolicystats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::has_operation() const
{
    for (std::size_t index=0; index<reportpolicystats_list.len(); index++)
    {
        if(reportpolicystats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReportPolicyStats-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList>();
        ent_->parent = this;
        reportpolicystats_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reportpolicystats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReportPolicyStats-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::ReportPolicyStatsList()
    :
    vlanid{YType::uint32, "vlanid"},
    qcount{YType::uint32, "qcount"},
    rpmtype{YType::uint32, "rpmType"},
    policyname{YType::str, "policyName"},
    acceptcount{YType::uint32, "acceptCount"},
    rejectcount{YType::uint32, "rejectCount"}
{

    yang_name = "ReportPolicyStats-list"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::~ReportPolicyStatsList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| qcount.is_set
	|| rpmtype.is_set
	|| policyname.is_set
	|| acceptcount.is_set
	|| rejectcount.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(qcount.yfilter)
	|| ydk::is_set(rpmtype.yfilter)
	|| ydk::is_set(policyname.yfilter)
	|| ydk::is_set(acceptcount.yfilter)
	|| ydk::is_set(rejectcount.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReportPolicyStats-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    ADD_KEY_TOKEN(qcount, "qcount");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (qcount.is_set || is_set(qcount.yfilter)) leaf_name_data.push_back(qcount.get_name_leafdata());
    if (rpmtype.is_set || is_set(rpmtype.yfilter)) leaf_name_data.push_back(rpmtype.get_name_leafdata());
    if (policyname.is_set || is_set(policyname.yfilter)) leaf_name_data.push_back(policyname.get_name_leafdata());
    if (acceptcount.is_set || is_set(acceptcount.yfilter)) leaf_name_data.push_back(acceptcount.get_name_leafdata());
    if (rejectcount.is_set || is_set(rejectcount.yfilter)) leaf_name_data.push_back(rejectcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanid")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qcount")
    {
        qcount = value;
        qcount.value_namespace = name_space;
        qcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpmType")
    {
        rpmtype = value;
        rpmtype.value_namespace = name_space;
        rpmtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policyName")
    {
        policyname = value;
        policyname.value_namespace = name_space;
        policyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acceptCount")
    {
        acceptcount = value;
        acceptcount.value_namespace = name_space;
        acceptcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejectCount")
    {
        rejectcount = value;
        rejectcount.value_namespace = name_space;
        rejectcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "qcount")
    {
        qcount.yfilter = yfilter;
    }
    if(value_path == "rpmType")
    {
        rpmtype.yfilter = yfilter;
    }
    if(value_path == "policyName")
    {
        policyname.yfilter = yfilter;
    }
    if(value_path == "acceptCount")
    {
        acceptcount.yfilter = yfilter;
    }
    if(value_path == "rejectCount")
    {
        rejectcount.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanid" || name == "qcount" || name == "rpmType" || name == "policyName" || name == "acceptCount" || name == "rejectCount")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::GroupItems()
    :
    igmpsngrouprec_list(this, {"vlanid", "groupaddr", "sourceaddr", "ifname"})
{

    yang_name = "group-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::~GroupItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<igmpsngrouprec_list.len(); index++)
    {
        if(igmpsngrouprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::has_operation() const
{
    for (std::size_t index=0; index<igmpsngrouprec_list.len(); index++)
    {
        if(igmpsngrouprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IgmpsnGroupRec-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList>();
        ent_->parent = this;
        igmpsngrouprec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : igmpsngrouprec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IgmpsnGroupRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::IgmpsnGroupRecList()
    :
    vlanid{YType::uint32, "vlanid"},
    groupaddr{YType::str, "groupaddr"},
    sourceaddr{YType::str, "sourceaddr"},
    ifname{YType::str, "ifname"},
    ver{YType::str, "ver"},
    sporttype{YType::str, "sportType"},
    gporttype{YType::str, "gportType"},
    rporttype{YType::str, "rportType"},
    rifname{YType::str, "rifname"}
{

    yang_name = "IgmpsnGroupRec-list"; yang_parent_name = "group-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::~IgmpsnGroupRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| groupaddr.is_set
	|| sourceaddr.is_set
	|| ifname.is_set
	|| ver.is_set
	|| sporttype.is_set
	|| gporttype.is_set
	|| rporttype.is_set
	|| rifname.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(groupaddr.yfilter)
	|| ydk::is_set(sourceaddr.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(sporttype.yfilter)
	|| ydk::is_set(gporttype.yfilter)
	|| ydk::is_set(rporttype.yfilter)
	|| ydk::is_set(rifname.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IgmpsnGroupRec-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    ADD_KEY_TOKEN(groupaddr, "groupaddr");
    ADD_KEY_TOKEN(sourceaddr, "sourceaddr");
    ADD_KEY_TOKEN(ifname, "ifname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (groupaddr.is_set || is_set(groupaddr.yfilter)) leaf_name_data.push_back(groupaddr.get_name_leafdata());
    if (sourceaddr.is_set || is_set(sourceaddr.yfilter)) leaf_name_data.push_back(sourceaddr.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (sporttype.is_set || is_set(sporttype.yfilter)) leaf_name_data.push_back(sporttype.get_name_leafdata());
    if (gporttype.is_set || is_set(gporttype.yfilter)) leaf_name_data.push_back(gporttype.get_name_leafdata());
    if (rporttype.is_set || is_set(rporttype.yfilter)) leaf_name_data.push_back(rporttype.get_name_leafdata());
    if (rifname.is_set || is_set(rifname.yfilter)) leaf_name_data.push_back(rifname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanid")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupaddr")
    {
        groupaddr = value;
        groupaddr.value_namespace = name_space;
        groupaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceaddr")
    {
        sourceaddr = value;
        sourceaddr.value_namespace = name_space;
        sourceaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sportType")
    {
        sporttype = value;
        sporttype.value_namespace = name_space;
        sporttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gportType")
    {
        gporttype = value;
        gporttype.value_namespace = name_space;
        gporttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rportType")
    {
        rporttype = value;
        rporttype.value_namespace = name_space;
        rporttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rifname")
    {
        rifname = value;
        rifname.value_namespace = name_space;
        rifname.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "groupaddr")
    {
        groupaddr.yfilter = yfilter;
    }
    if(value_path == "sourceaddr")
    {
        sourceaddr.yfilter = yfilter;
    }
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "sportType")
    {
        sporttype.yfilter = yfilter;
    }
    if(value_path == "gportType")
    {
        gporttype.yfilter = yfilter;
    }
    if(value_path == "rportType")
    {
        rporttype.yfilter = yfilter;
    }
    if(value_path == "rifname")
    {
        rifname.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanid" || name == "groupaddr" || name == "sourceaddr" || name == "ifname" || name == "ver" || name == "sportType" || name == "gportType" || name == "rportType" || name == "rifname")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McgrpItems()
    :
    mcgrprec_list(this, {"addr"})
{

    yang_name = "mcgrp-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::~McgrpItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcgrprec_list.len(); index++)
    {
        if(mcgrprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::has_operation() const
{
    for (std::size_t index=0; index<mcgrprec_list.len(); index++)
    {
        if(mcgrprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McGrpRec-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList>();
        ent_->parent = this;
        mcgrprec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McGrpRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::McGrpRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ver{YType::enumeration, "ver"},
    latreporter{YType::str, "latReporter"},
    oldhostts{YType::str, "oldHostTs"},
    reportts{YType::str, "reportTs"},
    numsrc{YType::uint32, "numSrc"}
        ,
    epg_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems>())
    , rep_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems>())
{
    epg_items->parent = this;
    rep_items->parent = this;

    yang_name = "McGrpRec-list"; yang_parent_name = "mcgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::~McGrpRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ver.is_set
	|| latreporter.is_set
	|| oldhostts.is_set
	|| reportts.is_set
	|| numsrc.is_set
	|| (epg_items !=  nullptr && epg_items->has_data())
	|| (rep_items !=  nullptr && rep_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(latreporter.yfilter)
	|| ydk::is_set(oldhostts.yfilter)
	|| ydk::is_set(reportts.yfilter)
	|| ydk::is_set(numsrc.yfilter)
	|| (epg_items !=  nullptr && epg_items->has_operation())
	|| (rep_items !=  nullptr && rep_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McGrpRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (latreporter.is_set || is_set(latreporter.yfilter)) leaf_name_data.push_back(latreporter.get_name_leafdata());
    if (oldhostts.is_set || is_set(oldhostts.yfilter)) leaf_name_data.push_back(oldhostts.get_name_leafdata());
    if (reportts.is_set || is_set(reportts.yfilter)) leaf_name_data.push_back(reportts.get_name_leafdata());
    if (numsrc.is_set || is_set(numsrc.yfilter)) leaf_name_data.push_back(numsrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "epg-items")
    {
        if(epg_items == nullptr)
        {
            epg_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems>();
        }
        return epg_items;
    }

    if(child_yang_name == "rep-items")
    {
        if(rep_items == nullptr)
        {
            rep_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems>();
        }
        return rep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "latReporter")
    {
        latreporter = value;
        latreporter.value_namespace = name_space;
        latreporter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oldHostTs")
    {
        oldhostts = value;
        oldhostts.value_namespace = name_space;
        oldhostts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reportTs")
    {
        reportts = value;
        reportts.value_namespace = name_space;
        reportts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numSrc")
    {
        numsrc = value;
        numsrc.value_namespace = name_space;
        numsrc.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "latReporter")
    {
        latreporter.yfilter = yfilter;
    }
    if(value_path == "oldHostTs")
    {
        oldhostts.yfilter = yfilter;
    }
    if(value_path == "reportTs")
    {
        reportts.yfilter = yfilter;
    }
    if(value_path == "numSrc")
    {
        numsrc.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "epg-items" || name == "rep-items" || name == "addr" || name == "name" || name == "ver" || name == "latReporter" || name == "oldHostTs" || name == "reportTs" || name == "numSrc")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgItems()
    :
    epgrec_list(this, {"fabencap"})
{

    yang_name = "epg-items"; yang_parent_name = "McGrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::~EpgItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<epgrec_list.len(); index++)
    {
        if(epgrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::has_operation() const
{
    for (std::size_t index=0; index<epgrec_list.len(); index++)
    {
        if(epgrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EpgRec-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList>();
        ent_->parent = this;
        epgrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EpgRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::EpgRecList()
    :
    fabencap{YType::str, "fabEncap"},
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    mcastencap{YType::str, "mcastEncap"}
        ,
    rep_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems>())
{
    rep_items->parent = this;

    yang_name = "EpgRec-list"; yang_parent_name = "epg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::~EpgRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::has_data() const
{
    if (is_presence_container) return true;
    return fabencap.is_set
	|| name.is_set
	|| id.is_set
	|| mcastencap.is_set
	|| (rep_items !=  nullptr && rep_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fabencap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(mcastencap.yfilter)
	|| (rep_items !=  nullptr && rep_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EpgRec-list";
    ADD_KEY_TOKEN(fabencap, "fabEncap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabencap.is_set || is_set(fabencap.yfilter)) leaf_name_data.push_back(fabencap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mcastencap.is_set || is_set(mcastencap.yfilter)) leaf_name_data.push_back(mcastencap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rep-items")
    {
        if(rep_items == nullptr)
        {
            rep_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems>();
        }
        return rep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rep_items != nullptr)
    {
        _children["rep-items"] = rep_items;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mcastEncap")
    {
        mcastencap = value;
        mcastencap.value_namespace = name_space;
        mcastencap.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mcastEncap")
    {
        mcastencap.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rep-items" || name == "fabEncap" || name == "name" || name == "id" || name == "mcastEncap")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::RepItems()
    :
    reportrec_list(this, {"mcastsrc", "ver"})
{

    yang_name = "rep-items"; yang_parent_name = "EpgRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::~RepItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reportrec_list.len(); index++)
    {
        if(reportrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::has_operation() const
{
    for (std::size_t index=0; index<reportrec_list.len(); index++)
    {
        if(reportrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReportRec-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList>();
        ent_->parent = this;
        reportrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReportRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::ReportRecList()
    :
    mcastsrc{YType::str, "mcastSrc"},
    ver{YType::enumeration, "ver"},
    name{YType::str, "name"},
    filtmode{YType::enumeration, "filtMode"},
    flags{YType::str, "flags"}
        ,
    oif_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "ReportRec-list"; yang_parent_name = "rep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::~ReportRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::has_data() const
{
    if (is_presence_container) return true;
    return mcastsrc.is_set
	|| ver.is_set
	|| name.is_set
	|| filtmode.is_set
	|| flags.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcastsrc.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(filtmode.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReportRec-list";
    ADD_KEY_TOKEN(mcastsrc, "mcastSrc");
    ADD_KEY_TOKEN(ver, "ver");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcastsrc.is_set || is_set(mcastsrc.yfilter)) leaf_name_data.push_back(mcastsrc.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (filtmode.is_set || is_set(filtmode.yfilter)) leaf_name_data.push_back(filtmode.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oif_items != nullptr)
    {
        _children["oif-items"] = oif_items;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "mcastSrc" || name == "ver" || name == "name" || name == "filtMode" || name == "flags")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OifItems()
    :
    oifrec_list(this, {"id"})
{

    yang_name = "oif-items"; yang_parent_name = "ReportRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::~OifItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oifrec_list.len(); index++)
    {
        if(oifrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oifrec_list.len(); index++)
    {
        if(oifrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OIFRec-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList>();
        ent_->parent = this;
        oifrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OIFRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::OIFRecList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    numgqmiss{YType::uint16, "numGqMiss"},
    expirets{YType::str, "expireTs"}
        ,
    host_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems>())
{
    host_items->parent = this;

    yang_name = "OIFRec-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::~OIFRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| numgqmiss.is_set
	|| expirets.is_set
	|| (host_items !=  nullptr && host_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(numgqmiss.yfilter)
	|| ydk::is_set(expirets.yfilter)
	|| (host_items !=  nullptr && host_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OIFRec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (numgqmiss.is_set || is_set(numgqmiss.yfilter)) leaf_name_data.push_back(numgqmiss.get_name_leafdata());
    if (expirets.is_set || is_set(expirets.yfilter)) leaf_name_data.push_back(expirets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-items")
    {
        if(host_items == nullptr)
        {
            host_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems>();
        }
        return host_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host_items != nullptr)
    {
        _children["host-items"] = host_items;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "numGqMiss")
    {
        numgqmiss = value;
        numgqmiss.value_namespace = name_space;
        numgqmiss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expireTs")
    {
        expirets = value;
        expirets.value_namespace = name_space;
        expirets.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "numGqMiss")
    {
        numgqmiss.yfilter = yfilter;
    }
    if(value_path == "expireTs")
    {
        expirets.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-items" || name == "id" || name == "name" || name == "numGqMiss" || name == "expireTs")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostItems()
    :
    hostrec_list(this, {"addr"})
{

    yang_name = "host-items"; yang_parent_name = "OIFRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::~HostItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostrec_list.len(); index++)
    {
        if(hostrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_operation() const
{
    for (std::size_t index=0; index<hostrec_list.len(); index++)
    {
        if(hostrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "HostRec-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList>();
        ent_->parent = this;
        hostrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "HostRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::HostRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    upts{YType::str, "upTs"},
    lastjoints{YType::str, "lastJoinTs"},
    nextexpiryts{YType::str, "nextExpiryTs"}
{

    yang_name = "HostRec-list"; yang_parent_name = "host-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::~HostRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| upts.is_set
	|| lastjoints.is_set
	|| nextexpiryts.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(lastjoints.yfilter)
	|| ydk::is_set(nextexpiryts.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "HostRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (lastjoints.is_set || is_set(lastjoints.yfilter)) leaf_name_data.push_back(lastjoints.get_name_leafdata());
    if (nextexpiryts.is_set || is_set(nextexpiryts.yfilter)) leaf_name_data.push_back(nextexpiryts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "upTs")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastJoinTs")
    {
        lastjoints = value;
        lastjoints.value_namespace = name_space;
        lastjoints.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextExpiryTs")
    {
        nextexpiryts = value;
        nextexpiryts.value_namespace = name_space;
        nextexpiryts.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "upTs")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "lastJoinTs")
    {
        lastjoints.yfilter = yfilter;
    }
    if(value_path == "nextExpiryTs")
    {
        nextexpiryts.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "upTs" || name == "lastJoinTs" || name == "nextExpiryTs")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::RepItems()
    :
    reportrec_list(this, {"mcastsrc", "ver"})
{

    yang_name = "rep-items"; yang_parent_name = "McGrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::~RepItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reportrec_list.len(); index++)
    {
        if(reportrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::has_operation() const
{
    for (std::size_t index=0; index<reportrec_list.len(); index++)
    {
        if(reportrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReportRec-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList>();
        ent_->parent = this;
        reportrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReportRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::ReportRecList()
    :
    mcastsrc{YType::str, "mcastSrc"},
    ver{YType::enumeration, "ver"},
    name{YType::str, "name"},
    filtmode{YType::enumeration, "filtMode"},
    flags{YType::str, "flags"}
        ,
    oif_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "ReportRec-list"; yang_parent_name = "rep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::~ReportRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::has_data() const
{
    if (is_presence_container) return true;
    return mcastsrc.is_set
	|| ver.is_set
	|| name.is_set
	|| filtmode.is_set
	|| flags.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcastsrc.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(filtmode.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReportRec-list";
    ADD_KEY_TOKEN(mcastsrc, "mcastSrc");
    ADD_KEY_TOKEN(ver, "ver");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcastsrc.is_set || is_set(mcastsrc.yfilter)) leaf_name_data.push_back(mcastsrc.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (filtmode.is_set || is_set(filtmode.yfilter)) leaf_name_data.push_back(filtmode.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oif_items != nullptr)
    {
        _children["oif-items"] = oif_items;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "mcastSrc" || name == "ver" || name == "name" || name == "filtMode" || name == "flags")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OifItems()
    :
    oifrec_list(this, {"id"})
{

    yang_name = "oif-items"; yang_parent_name = "ReportRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::~OifItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oifrec_list.len(); index++)
    {
        if(oifrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oifrec_list.len(); index++)
    {
        if(oifrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OIFRec-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList>();
        ent_->parent = this;
        oifrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OIFRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::OIFRecList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    numgqmiss{YType::uint16, "numGqMiss"},
    expirets{YType::str, "expireTs"}
        ,
    host_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems>())
{
    host_items->parent = this;

    yang_name = "OIFRec-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::~OIFRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| numgqmiss.is_set
	|| expirets.is_set
	|| (host_items !=  nullptr && host_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(numgqmiss.yfilter)
	|| ydk::is_set(expirets.yfilter)
	|| (host_items !=  nullptr && host_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OIFRec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (numgqmiss.is_set || is_set(numgqmiss.yfilter)) leaf_name_data.push_back(numgqmiss.get_name_leafdata());
    if (expirets.is_set || is_set(expirets.yfilter)) leaf_name_data.push_back(expirets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-items")
    {
        if(host_items == nullptr)
        {
            host_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems>();
        }
        return host_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host_items != nullptr)
    {
        _children["host-items"] = host_items;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "numGqMiss")
    {
        numgqmiss = value;
        numgqmiss.value_namespace = name_space;
        numgqmiss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expireTs")
    {
        expirets = value;
        expirets.value_namespace = name_space;
        expirets.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "numGqMiss")
    {
        numgqmiss.yfilter = yfilter;
    }
    if(value_path == "expireTs")
    {
        expirets.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-items" || name == "id" || name == "name" || name == "numGqMiss" || name == "expireTs")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostItems()
    :
    hostrec_list(this, {"addr"})
{

    yang_name = "host-items"; yang_parent_name = "OIFRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::~HostItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostrec_list.len(); index++)
    {
        if(hostrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_operation() const
{
    for (std::size_t index=0; index<hostrec_list.len(); index++)
    {
        if(hostrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "HostRec-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList>();
        ent_->parent = this;
        hostrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "HostRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::HostRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    upts{YType::str, "upTs"},
    lastjoints{YType::str, "lastJoinTs"},
    nextexpiryts{YType::str, "nextExpiryTs"}
{

    yang_name = "HostRec-list"; yang_parent_name = "host-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::~HostRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| upts.is_set
	|| lastjoints.is_set
	|| nextexpiryts.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(lastjoints.yfilter)
	|| ydk::is_set(nextexpiryts.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "HostRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (lastjoints.is_set || is_set(lastjoints.yfilter)) leaf_name_data.push_back(lastjoints.get_name_leafdata());
    if (nextexpiryts.is_set || is_set(nextexpiryts.yfilter)) leaf_name_data.push_back(nextexpiryts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "upTs")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastJoinTs")
    {
        lastjoints = value;
        lastjoints.value_namespace = name_space;
        lastjoints.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextExpiryTs")
    {
        nextexpiryts = value;
        nextexpiryts.value_namespace = name_space;
        nextexpiryts.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "upTs")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "lastJoinTs")
    {
        lastjoints.yfilter = yfilter;
    }
    if(value_path == "nextExpiryTs")
    {
        nextexpiryts.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "upTs" || name == "lastJoinTs" || name == "nextExpiryTs")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierItems()
    :
    querierrec_list(this, {"vlanid"})
{

    yang_name = "querier-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::~QuerierItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<querierrec_list.len(); index++)
    {
        if(querierrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::has_operation() const
{
    for (std::size_t index=0; index<querierrec_list.len(); index++)
    {
        if(querierrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "QuerierRec-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList>();
        ent_->parent = this;
        querierrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : querierrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QuerierRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList::QuerierRecList()
    :
    vlanid{YType::uint32, "vlanid"},
    name{YType::str, "name"},
    timeout{YType::uint16, "timeout"},
    lastmbrintvl{YType::uint16, "lastMbrIntvl"},
    ver{YType::str, "ver"},
    addr{YType::str, "addr"},
    queryintvl{YType::uint16, "queryIntvl"},
    rspintvl{YType::uint16, "rspIntvl"},
    robustfac{YType::uint8, "robustFac"},
    startqueryintvl{YType::uint16, "startQueryIntvl"},
    startquerycnt{YType::uint8, "startQueryCnt"},
    port{YType::str, "port"},
    exptime{YType::str, "expTime"}
{

    yang_name = "QuerierRec-list"; yang_parent_name = "querier-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList::~QuerierRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| name.is_set
	|| timeout.is_set
	|| lastmbrintvl.is_set
	|| ver.is_set
	|| addr.is_set
	|| queryintvl.is_set
	|| rspintvl.is_set
	|| robustfac.is_set
	|| startqueryintvl.is_set
	|| startquerycnt.is_set
	|| port.is_set
	|| exptime.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(lastmbrintvl.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(queryintvl.yfilter)
	|| ydk::is_set(rspintvl.yfilter)
	|| ydk::is_set(robustfac.yfilter)
	|| ydk::is_set(startqueryintvl.yfilter)
	|| ydk::is_set(startquerycnt.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(exptime.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QuerierRec-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (lastmbrintvl.is_set || is_set(lastmbrintvl.yfilter)) leaf_name_data.push_back(lastmbrintvl.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (queryintvl.is_set || is_set(queryintvl.yfilter)) leaf_name_data.push_back(queryintvl.get_name_leafdata());
    if (rspintvl.is_set || is_set(rspintvl.yfilter)) leaf_name_data.push_back(rspintvl.get_name_leafdata());
    if (robustfac.is_set || is_set(robustfac.yfilter)) leaf_name_data.push_back(robustfac.get_name_leafdata());
    if (startqueryintvl.is_set || is_set(startqueryintvl.yfilter)) leaf_name_data.push_back(startqueryintvl.get_name_leafdata());
    if (startquerycnt.is_set || is_set(startquerycnt.yfilter)) leaf_name_data.push_back(startquerycnt.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (exptime.is_set || is_set(exptime.yfilter)) leaf_name_data.push_back(exptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanid")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastMbrIntvl")
    {
        lastmbrintvl = value;
        lastmbrintvl.value_namespace = name_space;
        lastmbrintvl.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expTime")
    {
        exptime = value;
        exptime.value_namespace = name_space;
        exptime.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "lastMbrIntvl")
    {
        lastmbrintvl.yfilter = yfilter;
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
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "expTime")
    {
        exptime.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanid" || name == "name" || name == "timeout" || name == "lastMbrIntvl" || name == "ver" || name == "addr" || name == "queryIntvl" || name == "rspIntvl" || name == "robustFac" || name == "startQueryIntvl" || name == "startQueryCnt" || name == "port" || name == "expTime")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems::DomstatsItems()
    :
    v1reprcvd{YType::uint32, "v1RepRcvd"},
    v2reprcvd{YType::uint32, "v2RepRcvd"},
    v2leavercvd{YType::uint32, "v2LeaveRcvd"},
    v1queryrcvd{YType::uint32, "v1QueryRcvd"},
    v2queryrcvd{YType::uint32, "v2QueryRcvd"},
    v1repsupr{YType::uint32, "v1RepSupr"},
    v2repsupr{YType::uint32, "v2RepSupr"},
    v2leavesupr{YType::uint32, "v2LeaveSupr"},
    v1reporig{YType::uint32, "v1RepOrig"},
    v2reporig{YType::uint32, "v2RepOrig"},
    v2leaveorig{YType::uint32, "v2LeaveOrig"},
    v3reprcvd{YType::uint32, "v3RepRcvd"},
    v3queryrcvd{YType::uint32, "v3QueryRcvd"},
    v3grprecsupr{YType::uint32, "v3GrpRecSupr"},
    v3reporig{YType::uint32, "v3RepOrig"},
    lastclearts{YType::str, "lastClearTs"},
    pktsrcvd{YType::uint32, "pktsRcvd"},
    pimhellorcvd{YType::uint32, "pimHelloRcvd"},
    invqueryrcvd{YType::uint32, "invQueryRcvd"},
    invreprcvd{YType::uint32, "invRepRcvd"},
    vermismatchrcvd{YType::uint32, "verMisMatchRcvd"},
    unknpktrcvd{YType::uint32, "unknPktRcvd"},
    querypktsorig{YType::uint32, "queryPktsOrig"},
    pktstorport{YType::uint32, "pktsToRport"},
    vpcsyncsent{YType::uint32, "vpcSyncSent"},
    vpcsyncrcvd{YType::uint32, "vpcSyncRcvd"},
    vpcsyncfail{YType::uint32, "vpcSyncFail"},
    mrdsyncsent{YType::uint32, "mrdSyncSent"},
    mrdsyncrcvd{YType::uint32, "mrdSyncRcvd"},
    mrdsyncfail{YType::uint32, "mrdSyncFail"}
{

    yang_name = "domstats-items"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems::~DomstatsItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return v1reprcvd.is_set
	|| v2reprcvd.is_set
	|| v2leavercvd.is_set
	|| v1queryrcvd.is_set
	|| v2queryrcvd.is_set
	|| v1repsupr.is_set
	|| v2repsupr.is_set
	|| v2leavesupr.is_set
	|| v1reporig.is_set
	|| v2reporig.is_set
	|| v2leaveorig.is_set
	|| v3reprcvd.is_set
	|| v3queryrcvd.is_set
	|| v3grprecsupr.is_set
	|| v3reporig.is_set
	|| lastclearts.is_set
	|| pktsrcvd.is_set
	|| pimhellorcvd.is_set
	|| invqueryrcvd.is_set
	|| invreprcvd.is_set
	|| vermismatchrcvd.is_set
	|| unknpktrcvd.is_set
	|| querypktsorig.is_set
	|| pktstorport.is_set
	|| vpcsyncsent.is_set
	|| vpcsyncrcvd.is_set
	|| vpcsyncfail.is_set
	|| mrdsyncsent.is_set
	|| mrdsyncrcvd.is_set
	|| mrdsyncfail.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(v1reprcvd.yfilter)
	|| ydk::is_set(v2reprcvd.yfilter)
	|| ydk::is_set(v2leavercvd.yfilter)
	|| ydk::is_set(v1queryrcvd.yfilter)
	|| ydk::is_set(v2queryrcvd.yfilter)
	|| ydk::is_set(v1repsupr.yfilter)
	|| ydk::is_set(v2repsupr.yfilter)
	|| ydk::is_set(v2leavesupr.yfilter)
	|| ydk::is_set(v1reporig.yfilter)
	|| ydk::is_set(v2reporig.yfilter)
	|| ydk::is_set(v2leaveorig.yfilter)
	|| ydk::is_set(v3reprcvd.yfilter)
	|| ydk::is_set(v3queryrcvd.yfilter)
	|| ydk::is_set(v3grprecsupr.yfilter)
	|| ydk::is_set(v3reporig.yfilter)
	|| ydk::is_set(lastclearts.yfilter)
	|| ydk::is_set(pktsrcvd.yfilter)
	|| ydk::is_set(pimhellorcvd.yfilter)
	|| ydk::is_set(invqueryrcvd.yfilter)
	|| ydk::is_set(invreprcvd.yfilter)
	|| ydk::is_set(vermismatchrcvd.yfilter)
	|| ydk::is_set(unknpktrcvd.yfilter)
	|| ydk::is_set(querypktsorig.yfilter)
	|| ydk::is_set(pktstorport.yfilter)
	|| ydk::is_set(vpcsyncsent.yfilter)
	|| ydk::is_set(vpcsyncrcvd.yfilter)
	|| ydk::is_set(vpcsyncfail.yfilter)
	|| ydk::is_set(mrdsyncsent.yfilter)
	|| ydk::is_set(mrdsyncrcvd.yfilter)
	|| ydk::is_set(mrdsyncfail.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v1reprcvd.is_set || is_set(v1reprcvd.yfilter)) leaf_name_data.push_back(v1reprcvd.get_name_leafdata());
    if (v2reprcvd.is_set || is_set(v2reprcvd.yfilter)) leaf_name_data.push_back(v2reprcvd.get_name_leafdata());
    if (v2leavercvd.is_set || is_set(v2leavercvd.yfilter)) leaf_name_data.push_back(v2leavercvd.get_name_leafdata());
    if (v1queryrcvd.is_set || is_set(v1queryrcvd.yfilter)) leaf_name_data.push_back(v1queryrcvd.get_name_leafdata());
    if (v2queryrcvd.is_set || is_set(v2queryrcvd.yfilter)) leaf_name_data.push_back(v2queryrcvd.get_name_leafdata());
    if (v1repsupr.is_set || is_set(v1repsupr.yfilter)) leaf_name_data.push_back(v1repsupr.get_name_leafdata());
    if (v2repsupr.is_set || is_set(v2repsupr.yfilter)) leaf_name_data.push_back(v2repsupr.get_name_leafdata());
    if (v2leavesupr.is_set || is_set(v2leavesupr.yfilter)) leaf_name_data.push_back(v2leavesupr.get_name_leafdata());
    if (v1reporig.is_set || is_set(v1reporig.yfilter)) leaf_name_data.push_back(v1reporig.get_name_leafdata());
    if (v2reporig.is_set || is_set(v2reporig.yfilter)) leaf_name_data.push_back(v2reporig.get_name_leafdata());
    if (v2leaveorig.is_set || is_set(v2leaveorig.yfilter)) leaf_name_data.push_back(v2leaveorig.get_name_leafdata());
    if (v3reprcvd.is_set || is_set(v3reprcvd.yfilter)) leaf_name_data.push_back(v3reprcvd.get_name_leafdata());
    if (v3queryrcvd.is_set || is_set(v3queryrcvd.yfilter)) leaf_name_data.push_back(v3queryrcvd.get_name_leafdata());
    if (v3grprecsupr.is_set || is_set(v3grprecsupr.yfilter)) leaf_name_data.push_back(v3grprecsupr.get_name_leafdata());
    if (v3reporig.is_set || is_set(v3reporig.yfilter)) leaf_name_data.push_back(v3reporig.get_name_leafdata());
    if (lastclearts.is_set || is_set(lastclearts.yfilter)) leaf_name_data.push_back(lastclearts.get_name_leafdata());
    if (pktsrcvd.is_set || is_set(pktsrcvd.yfilter)) leaf_name_data.push_back(pktsrcvd.get_name_leafdata());
    if (pimhellorcvd.is_set || is_set(pimhellorcvd.yfilter)) leaf_name_data.push_back(pimhellorcvd.get_name_leafdata());
    if (invqueryrcvd.is_set || is_set(invqueryrcvd.yfilter)) leaf_name_data.push_back(invqueryrcvd.get_name_leafdata());
    if (invreprcvd.is_set || is_set(invreprcvd.yfilter)) leaf_name_data.push_back(invreprcvd.get_name_leafdata());
    if (vermismatchrcvd.is_set || is_set(vermismatchrcvd.yfilter)) leaf_name_data.push_back(vermismatchrcvd.get_name_leafdata());
    if (unknpktrcvd.is_set || is_set(unknpktrcvd.yfilter)) leaf_name_data.push_back(unknpktrcvd.get_name_leafdata());
    if (querypktsorig.is_set || is_set(querypktsorig.yfilter)) leaf_name_data.push_back(querypktsorig.get_name_leafdata());
    if (pktstorport.is_set || is_set(pktstorport.yfilter)) leaf_name_data.push_back(pktstorport.get_name_leafdata());
    if (vpcsyncsent.is_set || is_set(vpcsyncsent.yfilter)) leaf_name_data.push_back(vpcsyncsent.get_name_leafdata());
    if (vpcsyncrcvd.is_set || is_set(vpcsyncrcvd.yfilter)) leaf_name_data.push_back(vpcsyncrcvd.get_name_leafdata());
    if (vpcsyncfail.is_set || is_set(vpcsyncfail.yfilter)) leaf_name_data.push_back(vpcsyncfail.get_name_leafdata());
    if (mrdsyncsent.is_set || is_set(mrdsyncsent.yfilter)) leaf_name_data.push_back(mrdsyncsent.get_name_leafdata());
    if (mrdsyncrcvd.is_set || is_set(mrdsyncrcvd.yfilter)) leaf_name_data.push_back(mrdsyncrcvd.get_name_leafdata());
    if (mrdsyncfail.is_set || is_set(mrdsyncfail.yfilter)) leaf_name_data.push_back(mrdsyncfail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "v1RepRcvd")
    {
        v1reprcvd = value;
        v1reprcvd.value_namespace = name_space;
        v1reprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2RepRcvd")
    {
        v2reprcvd = value;
        v2reprcvd.value_namespace = name_space;
        v2reprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2LeaveRcvd")
    {
        v2leavercvd = value;
        v2leavercvd.value_namespace = name_space;
        v2leavercvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v1QueryRcvd")
    {
        v1queryrcvd = value;
        v1queryrcvd.value_namespace = name_space;
        v1queryrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2QueryRcvd")
    {
        v2queryrcvd = value;
        v2queryrcvd.value_namespace = name_space;
        v2queryrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v1RepSupr")
    {
        v1repsupr = value;
        v1repsupr.value_namespace = name_space;
        v1repsupr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2RepSupr")
    {
        v2repsupr = value;
        v2repsupr.value_namespace = name_space;
        v2repsupr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2LeaveSupr")
    {
        v2leavesupr = value;
        v2leavesupr.value_namespace = name_space;
        v2leavesupr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v1RepOrig")
    {
        v1reporig = value;
        v1reporig.value_namespace = name_space;
        v1reporig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2RepOrig")
    {
        v2reporig = value;
        v2reporig.value_namespace = name_space;
        v2reporig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2LeaveOrig")
    {
        v2leaveorig = value;
        v2leaveorig.value_namespace = name_space;
        v2leaveorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3RepRcvd")
    {
        v3reprcvd = value;
        v3reprcvd.value_namespace = name_space;
        v3reprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3QueryRcvd")
    {
        v3queryrcvd = value;
        v3queryrcvd.value_namespace = name_space;
        v3queryrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3GrpRecSupr")
    {
        v3grprecsupr = value;
        v3grprecsupr.value_namespace = name_space;
        v3grprecsupr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3RepOrig")
    {
        v3reporig = value;
        v3reporig.value_namespace = name_space;
        v3reporig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastClearTs")
    {
        lastclearts = value;
        lastclearts.value_namespace = name_space;
        lastclearts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktsRcvd")
    {
        pktsrcvd = value;
        pktsrcvd.value_namespace = name_space;
        pktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimHelloRcvd")
    {
        pimhellorcvd = value;
        pimhellorcvd.value_namespace = name_space;
        pimhellorcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invQueryRcvd")
    {
        invqueryrcvd = value;
        invqueryrcvd.value_namespace = name_space;
        invqueryrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invRepRcvd")
    {
        invreprcvd = value;
        invreprcvd.value_namespace = name_space;
        invreprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verMisMatchRcvd")
    {
        vermismatchrcvd = value;
        vermismatchrcvd.value_namespace = name_space;
        vermismatchrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknPktRcvd")
    {
        unknpktrcvd = value;
        unknpktrcvd.value_namespace = name_space;
        unknpktrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queryPktsOrig")
    {
        querypktsorig = value;
        querypktsorig.value_namespace = name_space;
        querypktsorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktsToRport")
    {
        pktstorport = value;
        pktstorport.value_namespace = name_space;
        pktstorport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcSyncSent")
    {
        vpcsyncsent = value;
        vpcsyncsent.value_namespace = name_space;
        vpcsyncsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcSyncRcvd")
    {
        vpcsyncrcvd = value;
        vpcsyncrcvd.value_namespace = name_space;
        vpcsyncrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcSyncFail")
    {
        vpcsyncfail = value;
        vpcsyncfail.value_namespace = name_space;
        vpcsyncfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mrdSyncSent")
    {
        mrdsyncsent = value;
        mrdsyncsent.value_namespace = name_space;
        mrdsyncsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mrdSyncRcvd")
    {
        mrdsyncrcvd = value;
        mrdsyncrcvd.value_namespace = name_space;
        mrdsyncrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mrdSyncFail")
    {
        mrdsyncfail = value;
        mrdsyncfail.value_namespace = name_space;
        mrdsyncfail.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "v1RepRcvd")
    {
        v1reprcvd.yfilter = yfilter;
    }
    if(value_path == "v2RepRcvd")
    {
        v2reprcvd.yfilter = yfilter;
    }
    if(value_path == "v2LeaveRcvd")
    {
        v2leavercvd.yfilter = yfilter;
    }
    if(value_path == "v1QueryRcvd")
    {
        v1queryrcvd.yfilter = yfilter;
    }
    if(value_path == "v2QueryRcvd")
    {
        v2queryrcvd.yfilter = yfilter;
    }
    if(value_path == "v1RepSupr")
    {
        v1repsupr.yfilter = yfilter;
    }
    if(value_path == "v2RepSupr")
    {
        v2repsupr.yfilter = yfilter;
    }
    if(value_path == "v2LeaveSupr")
    {
        v2leavesupr.yfilter = yfilter;
    }
    if(value_path == "v1RepOrig")
    {
        v1reporig.yfilter = yfilter;
    }
    if(value_path == "v2RepOrig")
    {
        v2reporig.yfilter = yfilter;
    }
    if(value_path == "v2LeaveOrig")
    {
        v2leaveorig.yfilter = yfilter;
    }
    if(value_path == "v3RepRcvd")
    {
        v3reprcvd.yfilter = yfilter;
    }
    if(value_path == "v3QueryRcvd")
    {
        v3queryrcvd.yfilter = yfilter;
    }
    if(value_path == "v3GrpRecSupr")
    {
        v3grprecsupr.yfilter = yfilter;
    }
    if(value_path == "v3RepOrig")
    {
        v3reporig.yfilter = yfilter;
    }
    if(value_path == "lastClearTs")
    {
        lastclearts.yfilter = yfilter;
    }
    if(value_path == "pktsRcvd")
    {
        pktsrcvd.yfilter = yfilter;
    }
    if(value_path == "pimHelloRcvd")
    {
        pimhellorcvd.yfilter = yfilter;
    }
    if(value_path == "invQueryRcvd")
    {
        invqueryrcvd.yfilter = yfilter;
    }
    if(value_path == "invRepRcvd")
    {
        invreprcvd.yfilter = yfilter;
    }
    if(value_path == "verMisMatchRcvd")
    {
        vermismatchrcvd.yfilter = yfilter;
    }
    if(value_path == "unknPktRcvd")
    {
        unknpktrcvd.yfilter = yfilter;
    }
    if(value_path == "queryPktsOrig")
    {
        querypktsorig.yfilter = yfilter;
    }
    if(value_path == "pktsToRport")
    {
        pktstorport.yfilter = yfilter;
    }
    if(value_path == "vpcSyncSent")
    {
        vpcsyncsent.yfilter = yfilter;
    }
    if(value_path == "vpcSyncRcvd")
    {
        vpcsyncrcvd.yfilter = yfilter;
    }
    if(value_path == "vpcSyncFail")
    {
        vpcsyncfail.yfilter = yfilter;
    }
    if(value_path == "mrdSyncSent")
    {
        mrdsyncsent.yfilter = yfilter;
    }
    if(value_path == "mrdSyncRcvd")
    {
        mrdsyncrcvd.yfilter = yfilter;
    }
    if(value_path == "mrdSyncFail")
    {
        mrdsyncfail.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v1RepRcvd" || name == "v2RepRcvd" || name == "v2LeaveRcvd" || name == "v1QueryRcvd" || name == "v2QueryRcvd" || name == "v1RepSupr" || name == "v2RepSupr" || name == "v2LeaveSupr" || name == "v1RepOrig" || name == "v2RepOrig" || name == "v2LeaveOrig" || name == "v3RepRcvd" || name == "v3QueryRcvd" || name == "v3GrpRecSupr" || name == "v3RepOrig" || name == "lastClearTs" || name == "pktsRcvd" || name == "pimHelloRcvd" || name == "invQueryRcvd" || name == "invRepRcvd" || name == "verMisMatchRcvd" || name == "unknPktRcvd" || name == "queryPktsOrig" || name == "pktsToRport" || name == "vpcSyncSent" || name == "vpcSyncRcvd" || name == "vpcSyncFail" || name == "mrdSyncSent" || name == "mrdSyncRcvd" || name == "mrdSyncFail")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StrtrifItems()
    :
    strtrif_list(this, {"id"})
{

    yang_name = "strtrif-items"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::~StrtrifItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<strtrif_list.len(); index++)
    {
        if(strtrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::has_operation() const
{
    for (std::size_t index=0; index<strtrif_list.len(); index++)
    {
        if(strtrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strtrif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StRtrIf-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList>();
        ent_->parent = this;
        strtrif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StRtrIf-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::StRtrIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    encap{YType::str, "encap"}
        ,
    rtvrfmbr_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "StRtrIf-list"; yang_parent_name = "strtrif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::~StRtrIfList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::has_data() const
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

bool System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::has_operation() const
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

std::string System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/strtrif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StRtrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "encap")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "StRtrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "StRtrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrifItems()
    :
    rtrif_list(this, {"id"})
{

    yang_name = "rtrif-items"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::~RtrifItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtrif_list.len(); index++)
    {
        if(rtrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::has_operation() const
{
    for (std::size_t index=0; index<rtrif_list.len(); index++)
    {
        if(rtrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtrif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtrIf-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList>();
        ent_->parent = this;
        rtrif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtrIf-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList::RtrIfList()
    :
    id{YType::str, "id"},
    lcc{YType::str, "lcC"},
    upts{YType::str, "upTs"},
    nextexpiryts{YType::str, "nextExpiryTs"}
{

    yang_name = "RtrIf-list"; yang_parent_name = "rtrif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList::~RtrIfList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| lcc.is_set
	|| upts.is_set
	|| nextexpiryts.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(lcc.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(nextexpiryts.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/rtrif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (lcc.is_set || is_set(lcc.yfilter)) leaf_name_data.push_back(lcc.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (nextexpiryts.is_set || is_set(nextexpiryts.yfilter)) leaf_name_data.push_back(nextexpiryts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lcC")
    {
        lcc = value;
        lcc.value_namespace = name_space;
        lcc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTs")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextExpiryTs")
    {
        nextexpiryts = value;
        nextexpiryts.value_namespace = name_space;
        nextexpiryts.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "lcC")
    {
        lcc.yfilter = yfilter;
    }
    if(value_path == "upTs")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "nextExpiryTs")
    {
        nextexpiryts.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "lcC" || name == "upTs" || name == "nextExpiryTs")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanItems()
    :
    vlan_list(this, {"vlanid"})
{

    yang_name = "vlan-items"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::~VlanItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_list.len(); index++)
    {
        if(vlan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<vlan_list.len(); index++)
    {
        if(vlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vlan-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList>();
        ent_->parent = this;
        vlan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vlan-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::VlanList()
    :
    vlanid{YType::str, "vlanid"}
        ,
    cktep_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems>())
    , mcgrp_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems>())
    , igmpsnbase_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems>())
    , gtimers_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems>())
    , mactable_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems>())
    , mrouter_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems>())
    , proxy_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems>())
    , querierp_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems>())
    , querierst_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems>())
    , actrl_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems>())
    , rpolicy_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems>())
{
    cktep_items->parent = this;
    mcgrp_items->parent = this;
    igmpsnbase_items->parent = this;
    gtimers_items->parent = this;
    mactable_items->parent = this;
    mrouter_items->parent = this;
    proxy_items->parent = this;
    querierp_items->parent = this;
    querierst_items->parent = this;
    actrl_items->parent = this;
    rpolicy_items->parent = this;

    yang_name = "Vlan-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::~VlanList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| (cktep_items !=  nullptr && cktep_items->has_data())
	|| (mcgrp_items !=  nullptr && mcgrp_items->has_data())
	|| (igmpsnbase_items !=  nullptr && igmpsnbase_items->has_data())
	|| (gtimers_items !=  nullptr && gtimers_items->has_data())
	|| (mactable_items !=  nullptr && mactable_items->has_data())
	|| (mrouter_items !=  nullptr && mrouter_items->has_data())
	|| (proxy_items !=  nullptr && proxy_items->has_data())
	|| (querierp_items !=  nullptr && querierp_items->has_data())
	|| (querierst_items !=  nullptr && querierst_items->has_data())
	|| (actrl_items !=  nullptr && actrl_items->has_data())
	|| (rpolicy_items !=  nullptr && rpolicy_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| (cktep_items !=  nullptr && cktep_items->has_operation())
	|| (mcgrp_items !=  nullptr && mcgrp_items->has_operation())
	|| (igmpsnbase_items !=  nullptr && igmpsnbase_items->has_operation())
	|| (gtimers_items !=  nullptr && gtimers_items->has_operation())
	|| (mactable_items !=  nullptr && mactable_items->has_operation())
	|| (mrouter_items !=  nullptr && mrouter_items->has_operation())
	|| (proxy_items !=  nullptr && proxy_items->has_operation())
	|| (querierp_items !=  nullptr && querierp_items->has_operation())
	|| (querierst_items !=  nullptr && querierst_items->has_operation())
	|| (actrl_items !=  nullptr && actrl_items->has_operation())
	|| (rpolicy_items !=  nullptr && rpolicy_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/vlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vlan-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cktep-items")
    {
        if(cktep_items == nullptr)
        {
            cktep_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems>();
        }
        return cktep_items;
    }

    if(child_yang_name == "mcgrp-items")
    {
        if(mcgrp_items == nullptr)
        {
            mcgrp_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems>();
        }
        return mcgrp_items;
    }

    if(child_yang_name == "igmpsnbase-items")
    {
        if(igmpsnbase_items == nullptr)
        {
            igmpsnbase_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems>();
        }
        return igmpsnbase_items;
    }

    if(child_yang_name == "gTimers-items")
    {
        if(gtimers_items == nullptr)
        {
            gtimers_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems>();
        }
        return gtimers_items;
    }

    if(child_yang_name == "mactable-items")
    {
        if(mactable_items == nullptr)
        {
            mactable_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems>();
        }
        return mactable_items;
    }

    if(child_yang_name == "mrouter-items")
    {
        if(mrouter_items == nullptr)
        {
            mrouter_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems>();
        }
        return mrouter_items;
    }

    if(child_yang_name == "proxy-items")
    {
        if(proxy_items == nullptr)
        {
            proxy_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems>();
        }
        return proxy_items;
    }

    if(child_yang_name == "querierp-items")
    {
        if(querierp_items == nullptr)
        {
            querierp_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems>();
        }
        return querierp_items;
    }

    if(child_yang_name == "querierst-items")
    {
        if(querierst_items == nullptr)
        {
            querierst_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems>();
        }
        return querierst_items;
    }

    if(child_yang_name == "actrl-items")
    {
        if(actrl_items == nullptr)
        {
            actrl_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems>();
        }
        return actrl_items;
    }

    if(child_yang_name == "rpolicy-items")
    {
        if(rpolicy_items == nullptr)
        {
            rpolicy_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems>();
        }
        return rpolicy_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cktep_items != nullptr)
    {
        _children["cktep-items"] = cktep_items;
    }

    if(mcgrp_items != nullptr)
    {
        _children["mcgrp-items"] = mcgrp_items;
    }

    if(igmpsnbase_items != nullptr)
    {
        _children["igmpsnbase-items"] = igmpsnbase_items;
    }

    if(gtimers_items != nullptr)
    {
        _children["gTimers-items"] = gtimers_items;
    }

    if(mactable_items != nullptr)
    {
        _children["mactable-items"] = mactable_items;
    }

    if(mrouter_items != nullptr)
    {
        _children["mrouter-items"] = mrouter_items;
    }

    if(proxy_items != nullptr)
    {
        _children["proxy-items"] = proxy_items;
    }

    if(querierp_items != nullptr)
    {
        _children["querierp-items"] = querierp_items;
    }

    if(querierst_items != nullptr)
    {
        _children["querierst-items"] = querierst_items;
    }

    if(actrl_items != nullptr)
    {
        _children["actrl-items"] = actrl_items;
    }

    if(rpolicy_items != nullptr)
    {
        _children["rpolicy-items"] = rpolicy_items;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanid")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cktep-items" || name == "mcgrp-items" || name == "igmpsnbase-items" || name == "gTimers-items" || name == "mactable-items" || name == "mrouter-items" || name == "proxy-items" || name == "querierp-items" || name == "querierst-items" || name == "actrl-items" || name == "rpolicy-items" || name == "vlanid")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktepItems()
    :
    cktep_list(this, {"encap"})
{

    yang_name = "cktep-items"; yang_parent_name = "Vlan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::~CktepItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::has_operation() const
{
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cktep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CktEp-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList>();
        ent_->parent = this;
        cktep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cktep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CktEp-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList::CktEpList()
    :
    encap{YType::str, "encap"}
{

    yang_name = "CktEp-list"; yang_parent_name = "cktep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList::~CktEpList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CktEp-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encap")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::McgrpItems()
    :
    stmcgrp_list(this, {"addr"})
{

    yang_name = "mcgrp-items"; yang_parent_name = "Vlan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::~McgrpItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stmcgrp_list.len(); index++)
    {
        if(stmcgrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::has_operation() const
{
    for (std::size_t index=0; index<stmcgrp_list.len(); index++)
    {
        if(stmcgrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StMcGrp-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList>();
        ent_->parent = this;
        stmcgrp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stmcgrp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StMcGrp-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::StMcGrpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
        ,
    src_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems>())
    , if_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems>())
{
    src_items->parent = this;
    if_items->parent = this;

    yang_name = "StMcGrp-list"; yang_parent_name = "mcgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::~StMcGrpList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| (src_items !=  nullptr && src_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (src_items !=  nullptr && src_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StMcGrp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "src-items")
    {
        if(src_items == nullptr)
        {
            src_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems>();
        }
        return src_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(src_items != nullptr)
    {
        _children["src-items"] = src_items;
    }

    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-items" || name == "if-items" || name == "addr" || name == "name")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::SrcItems()
    :
    mcsrc_list(this, {"id"})
{

    yang_name = "src-items"; yang_parent_name = "StMcGrp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::~SrcItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcsrc_list.len(); index++)
    {
        if(mcsrc_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::has_operation() const
{
    for (std::size_t index=0; index<mcsrc_list.len(); index++)
    {
        if(mcsrc_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McSrc-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList>();
        ent_->parent = this;
        mcsrc_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mcsrc_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McSrc-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::McSrcList()
    :
    id{YType::str, "id"}
        ,
    if_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems>())
{
    if_items->parent = this;

    yang_name = "McSrc-list"; yang_parent_name = "src-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::~McSrcList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McSrc-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "id")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::IfItems()
    :
    tgtif_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "McSrc-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::~IfItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tgtif_list.len(); index++)
    {
        if(tgtif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<tgtif_list.len(); index++)
    {
        if(tgtif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TgtIf-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList>();
        ent_->parent = this;
        tgtif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TgtIf-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList::TgtIfList()
    :
    id{YType::str, "id"},
    vsi{YType::boolean, "vsi"},
    accgrp{YType::boolean, "accGrp"},
    pfxlist{YType::boolean, "pfxList"}
{

    yang_name = "TgtIf-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList::~TgtIfList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vsi.is_set
	|| accgrp.is_set
	|| pfxlist.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vsi.yfilter)
	|| ydk::is_set(accgrp.yfilter)
	|| ydk::is_set(pfxlist.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TgtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vsi.is_set || is_set(vsi.yfilter)) leaf_name_data.push_back(vsi.get_name_leafdata());
    if (accgrp.is_set || is_set(accgrp.yfilter)) leaf_name_data.push_back(accgrp.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vsi" || name == "accGrp" || name == "pfxList")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::IfItems()
    :
    tgtif_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "StMcGrp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::~IfItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tgtif_list.len(); index++)
    {
        if(tgtif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<tgtif_list.len(); index++)
    {
        if(tgtif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TgtIf-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList>();
        ent_->parent = this;
        tgtif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TgtIf-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList::TgtIfList()
    :
    id{YType::str, "id"},
    vsi{YType::boolean, "vsi"},
    accgrp{YType::boolean, "accGrp"},
    pfxlist{YType::boolean, "pfxList"}
{

    yang_name = "TgtIf-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList::~TgtIfList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vsi.is_set
	|| accgrp.is_set
	|| pfxlist.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vsi.yfilter)
	|| ydk::is_set(accgrp.yfilter)
	|| ydk::is_set(pfxlist.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TgtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vsi.is_set || is_set(vsi.yfilter)) leaf_name_data.push_back(vsi.get_name_leafdata());
    if (accgrp.is_set || is_set(accgrp.yfilter)) leaf_name_data.push_back(accgrp.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vsi" || name == "accGrp" || name == "pfxList")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems::IgmpsnbaseItems()
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

    yang_name = "igmpsnbase-items"; yang_parent_name = "Vlan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems::~IgmpsnbaseItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems::has_data() const
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

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems::has_operation() const
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

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmpsnbase-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lookupMac" || name == "llGrpSuppr" || name == "reportSuppr" || name == "v3ReportSuppr" || name == "expTracking" || name == "igmpSnoop" || name == "minVer" || name == "maxGrp")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems::GTimersItems()
    :
    fastleave{YType::boolean, "fastLeave"},
    grptimeout{YType::uint16, "grpTimeout"},
    maxgqmiss{YType::uint16, "maxGqMiss"}
{

    yang_name = "gTimers-items"; yang_parent_name = "Vlan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems::~GTimersItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems::has_data() const
{
    if (is_presence_container) return true;
    return fastleave.is_set
	|| grptimeout.is_set
	|| maxgqmiss.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastleave.yfilter)
	|| ydk::is_set(grptimeout.yfilter)
	|| ydk::is_set(maxgqmiss.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gTimers-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastleave.is_set || is_set(fastleave.yfilter)) leaf_name_data.push_back(fastleave.get_name_leafdata());
    if (grptimeout.is_set || is_set(grptimeout.yfilter)) leaf_name_data.push_back(grptimeout.get_name_leafdata());
    if (maxgqmiss.is_set || is_set(maxgqmiss.yfilter)) leaf_name_data.push_back(maxgqmiss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastLeave" || name == "grpTimeout" || name == "maxGqMiss")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MactableItems()
    :
    mactable_list(this, {"macaddress"})
{

    yang_name = "mactable-items"; yang_parent_name = "Vlan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::~MactableItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mactable_list.len(); index++)
    {
        if(mactable_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::has_operation() const
{
    for (std::size_t index=0; index<mactable_list.len(); index++)
    {
        if(mactable_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mactable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacTable-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList>();
        ent_->parent = this;
        mactable_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mactable_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacTable-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MacTableList()
    :
    macaddress{YType::str, "macAddress"}
        ,
    if_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems>())
    , mif_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems>())
{
    if_items->parent = this;
    mif_items->parent = this;

    yang_name = "MacTable-list"; yang_parent_name = "mactable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::~MacTableList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::has_data() const
{
    if (is_presence_container) return true;
    return macaddress.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (mif_items !=  nullptr && mif_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddress.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (mif_items !=  nullptr && mif_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacTable-list";
    ADD_KEY_TOKEN(macaddress, "macAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddress.is_set || is_set(macaddress.yfilter)) leaf_name_data.push_back(macaddress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "mif-items")
    {
        if(mif_items == nullptr)
        {
            mif_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems>();
        }
        return mif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macAddress")
    {
        macaddress = value;
        macaddress.value_namespace = name_space;
        macaddress.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macAddress")
    {
        macaddress.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "mif-items" || name == "macAddress")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::IfItems()
    :
    tgtif_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "MacTable-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::~IfItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tgtif_list.len(); index++)
    {
        if(tgtif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<tgtif_list.len(); index++)
    {
        if(tgtif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TgtIf-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::TgtIfList>();
        ent_->parent = this;
        tgtif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TgtIf-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::TgtIfList::TgtIfList()
    :
    id{YType::str, "id"},
    vsi{YType::boolean, "vsi"},
    accgrp{YType::boolean, "accGrp"},
    pfxlist{YType::boolean, "pfxList"}
{

    yang_name = "TgtIf-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::TgtIfList::~TgtIfList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::TgtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vsi.is_set
	|| accgrp.is_set
	|| pfxlist.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::TgtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vsi.yfilter)
	|| ydk::is_set(accgrp.yfilter)
	|| ydk::is_set(pfxlist.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::TgtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TgtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::TgtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vsi.is_set || is_set(vsi.yfilter)) leaf_name_data.push_back(vsi.get_name_leafdata());
    if (accgrp.is_set || is_set(accgrp.yfilter)) leaf_name_data.push_back(accgrp.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::TgtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::TgtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::TgtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::TgtIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::TgtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vsi" || name == "accGrp" || name == "pfxList")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::MifItems()
    :
    mif_list(this, {"intf"})
{

    yang_name = "mif-items"; yang_parent_name = "MacTable-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::~MifItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mif_list.len(); index++)
    {
        if(mif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::has_operation() const
{
    for (std::size_t index=0; index<mif_list.len(); index++)
    {
        if(mif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MIf-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::MIfList>();
        ent_->parent = this;
        mif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MIf-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::MIfList::MIfList()
    :
    intf{YType::str, "intf"},
    vsi{YType::boolean, "vsi"}
{

    yang_name = "MIf-list"; yang_parent_name = "mif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::MIfList::~MIfList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::MIfList::has_data() const
{
    if (is_presence_container) return true;
    return intf.is_set
	|| vsi.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::MIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(vsi.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::MIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MIf-list";
    ADD_KEY_TOKEN(intf, "intf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::MIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (vsi.is_set || is_set(vsi.yfilter)) leaf_name_data.push_back(vsi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::MIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::MIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::MIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::MIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::MIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf" || name == "vsi")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MrouterItems()
    :
    vpcpeerlink{YType::boolean, "vpcPeerLink"}
        ,
    if_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems>())
    , mif_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems>())
{
    if_items->parent = this;
    mif_items->parent = this;

    yang_name = "mrouter-items"; yang_parent_name = "Vlan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::~MrouterItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::has_data() const
{
    if (is_presence_container) return true;
    return vpcpeerlink.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (mif_items !=  nullptr && mif_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpcpeerlink.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (mif_items !=  nullptr && mif_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrouter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpcpeerlink.is_set || is_set(vpcpeerlink.yfilter)) leaf_name_data.push_back(vpcpeerlink.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "mif-items")
    {
        if(mif_items == nullptr)
        {
            mif_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems>();
        }
        return mif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpcPeerLink")
    {
        vpcpeerlink = value;
        vpcpeerlink.value_namespace = name_space;
        vpcpeerlink.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpcPeerLink")
    {
        vpcpeerlink.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "mif-items" || name == "vpcPeerLink")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::IfItems()
    :
    tgtif_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "mrouter-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::~IfItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tgtif_list.len(); index++)
    {
        if(tgtif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<tgtif_list.len(); index++)
    {
        if(tgtif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TgtIf-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList>();
        ent_->parent = this;
        tgtif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TgtIf-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList::TgtIfList()
    :
    id{YType::str, "id"},
    vsi{YType::boolean, "vsi"},
    accgrp{YType::boolean, "accGrp"},
    pfxlist{YType::boolean, "pfxList"}
{

    yang_name = "TgtIf-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList::~TgtIfList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vsi.is_set
	|| accgrp.is_set
	|| pfxlist.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vsi.yfilter)
	|| ydk::is_set(accgrp.yfilter)
	|| ydk::is_set(pfxlist.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TgtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vsi.is_set || is_set(vsi.yfilter)) leaf_name_data.push_back(vsi.get_name_leafdata());
    if (accgrp.is_set || is_set(accgrp.yfilter)) leaf_name_data.push_back(accgrp.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vsi" || name == "accGrp" || name == "pfxList")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::MifItems()
    :
    mif_list(this, {"intf"})
{

    yang_name = "mif-items"; yang_parent_name = "mrouter-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::~MifItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mif_list.len(); index++)
    {
        if(mif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::has_operation() const
{
    for (std::size_t index=0; index<mif_list.len(); index++)
    {
        if(mif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MIf-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::MIfList>();
        ent_->parent = this;
        mif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MIf-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::MIfList::MIfList()
    :
    intf{YType::str, "intf"},
    vsi{YType::boolean, "vsi"}
{

    yang_name = "MIf-list"; yang_parent_name = "mif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::MIfList::~MIfList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::MIfList::has_data() const
{
    if (is_presence_container) return true;
    return intf.is_set
	|| vsi.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::MIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(vsi.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::MIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MIf-list";
    ADD_KEY_TOKEN(intf, "intf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::MIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (vsi.is_set || is_set(vsi.yfilter)) leaf_name_data.push_back(vsi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::MIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::MIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::MIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::MIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::MIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf" || name == "vsi")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems::ProxyItems()
    :
    maxresptime{YType::uint16, "maxRespTime"}
{

    yang_name = "proxy-items"; yang_parent_name = "Vlan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems::~ProxyItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems::has_data() const
{
    if (is_presence_container) return true;
    return maxresptime.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxresptime.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxresptime.is_set || is_set(maxresptime.yfilter)) leaf_name_data.push_back(maxresptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxRespTime")
    {
        maxresptime = value;
        maxresptime.value_namespace = name_space;
        maxresptime.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxRespTime")
    {
        maxresptime.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxRespTime")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems::QuerierpItems()
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

    yang_name = "querierp-items"; yang_parent_name = "Vlan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems::~QuerierpItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems::has_data() const
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

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems::has_operation() const
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

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querierp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ver" || name == "addr" || name == "queryIntvl" || name == "rspIntvl" || name == "robustFac" || name == "startQueryIntvl" || name == "startQueryCnt" || name == "lastMbrIntvl" || name == "timeout")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems::QuerierstItems()
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
    timeout{YType::uint16, "timeout"},
    if_{YType::str, "if"},
    flags{YType::str, "flags"}
{

    yang_name = "querierst-items"; yang_parent_name = "Vlan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems::~QuerierstItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems::has_data() const
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
	|| timeout.is_set
	|| if_.is_set
	|| flags.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems::has_operation() const
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
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querierst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems::get_name_leaf_data() const
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
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ver" || name == "addr" || name == "queryIntvl" || name == "rspIntvl" || name == "robustFac" || name == "startQueryIntvl" || name == "startQueryCnt" || name == "lastMbrIntvl" || name == "timeout" || name == "if" || name == "flags")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::ActrlItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    direction{YType::enumeration, "direction"},
    rtmap{YType::str, "rtMap"}
        ,
    if_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems>())
{
    if_items->parent = this;

    yang_name = "actrl-items"; yang_parent_name = "Vlan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::~ActrlItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| direction.is_set
	|| rtmap.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "name" || name == "descr" || name == "direction" || name == "rtMap")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::IfItems()
    :
    tgtif_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "actrl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::~IfItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tgtif_list.len(); index++)
    {
        if(tgtif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<tgtif_list.len(); index++)
    {
        if(tgtif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TgtIf-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList>();
        ent_->parent = this;
        tgtif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::get_children() const
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TgtIf-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList::TgtIfList()
    :
    id{YType::str, "id"},
    vsi{YType::boolean, "vsi"},
    accgrp{YType::boolean, "accGrp"},
    pfxlist{YType::boolean, "pfxList"}
{

    yang_name = "TgtIf-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList::~TgtIfList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vsi.is_set
	|| accgrp.is_set
	|| pfxlist.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vsi.yfilter)
	|| ydk::is_set(accgrp.yfilter)
	|| ydk::is_set(pfxlist.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TgtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vsi.is_set || is_set(vsi.yfilter)) leaf_name_data.push_back(vsi.get_name_leafdata());
    if (accgrp.is_set || is_set(accgrp.yfilter)) leaf_name_data.push_back(accgrp.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vsi" || name == "accGrp" || name == "pfxList")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RpolicyItems()
    :
    rpolicy_list(this, {"rtmap"})
{

    yang_name = "rpolicy-items"; yang_parent_name = "Vlan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::~RpolicyItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpolicy_list.len(); index++)
    {
        if(rpolicy_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::has_operation() const
{
    for (std::size_t index=0; index<rpolicy_list.len(); index++)
    {
        if(rpolicy_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpolicy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RPolicy-list")
    {
        auto ent_ = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList>();
        ent_->parent = this;
        rpolicy_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpolicy_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RPolicy-list")
        return true;
    return false;
}

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


}
}

